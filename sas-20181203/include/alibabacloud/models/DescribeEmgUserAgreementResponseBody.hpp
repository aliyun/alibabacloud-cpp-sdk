// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMGUSERAGREEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMGUSERAGREEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEmgUserAgreementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmgUserAgreementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Auth, auth_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmgUserAgreementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth, auth_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEmgUserAgreementResponseBody() = default ;
    DescribeEmgUserAgreementResponseBody(const DescribeEmgUserAgreementResponseBody &) = default ;
    DescribeEmgUserAgreementResponseBody(DescribeEmgUserAgreementResponseBody &&) = default ;
    DescribeEmgUserAgreementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmgUserAgreementResponseBody() = default ;
    DescribeEmgUserAgreementResponseBody& operator=(const DescribeEmgUserAgreementResponseBody &) = default ;
    DescribeEmgUserAgreementResponseBody& operator=(DescribeEmgUserAgreementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auth_ == nullptr
        && return this->requestId_ == nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline bool auth() const { DARABONBA_PTR_GET_DEFAULT(auth_, false) };
    inline DescribeEmgUserAgreementResponseBody& setAuth(bool auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEmgUserAgreementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether Security Center is authorized to scan for urgent vulnerabilities. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> auth_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
