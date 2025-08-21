// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSAUTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSAUTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSlsAuthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsAuthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsAuthStatus, slsAuthStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsAuthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsAuthStatus, slsAuthStatus_);
    };
    DescribeSlsAuthStatusResponseBody() = default ;
    DescribeSlsAuthStatusResponseBody(const DescribeSlsAuthStatusResponseBody &) = default ;
    DescribeSlsAuthStatusResponseBody(DescribeSlsAuthStatusResponseBody &&) = default ;
    DescribeSlsAuthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsAuthStatusResponseBody() = default ;
    DescribeSlsAuthStatusResponseBody& operator=(const DescribeSlsAuthStatusResponseBody &) = default ;
    DescribeSlsAuthStatusResponseBody& operator=(DescribeSlsAuthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->slsAuthStatus_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsAuthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsAuthStatus Field Functions 
    bool hasSlsAuthStatus() const { return this->slsAuthStatus_ != nullptr;};
    void deleteSlsAuthStatus() { this->slsAuthStatus_ = nullptr;};
    inline bool slsAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(slsAuthStatus_, false) };
    inline DescribeSlsAuthStatusResponseBody& setSlsAuthStatus(bool slsAuthStatus) { DARABONBA_PTR_SET_VALUE(slsAuthStatus_, slsAuthStatus) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether Anti-DDoS Pro or Anti-DDoS Premium is authorized to access Log Service. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> slsAuthStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
