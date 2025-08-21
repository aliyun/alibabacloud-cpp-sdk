// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCDNDOMAINICPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCDNDOMAINICPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CheckCdnDomainICPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCdnDomainICPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCdnDomainICPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CheckCdnDomainICPResponseBody() = default ;
    CheckCdnDomainICPResponseBody(const CheckCdnDomainICPResponseBody &) = default ;
    CheckCdnDomainICPResponseBody(CheckCdnDomainICPResponseBody &&) = default ;
    CheckCdnDomainICPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCdnDomainICPResponseBody() = default ;
    CheckCdnDomainICPResponseBody& operator=(const CheckCdnDomainICPResponseBody &) = default ;
    CheckCdnDomainICPResponseBody& operator=(CheckCdnDomainICPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->status_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCdnDomainICPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CheckCdnDomainICPResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the resource plan. Valid value:
    // 
    // *   **DomainIsRegistration**: An ICP filing is obtained for the domain name.
    // *   **DomainNotRegistration**: No ICP filing is obtained for the domain name.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
