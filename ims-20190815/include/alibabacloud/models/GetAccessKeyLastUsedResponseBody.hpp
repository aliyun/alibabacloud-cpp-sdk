// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyLastUsedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyLastUsed, accessKeyLastUsed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyLastUsed, accessKeyLastUsed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedResponseBody() = default ;
    GetAccessKeyLastUsedResponseBody(const GetAccessKeyLastUsedResponseBody &) = default ;
    GetAccessKeyLastUsedResponseBody(GetAccessKeyLastUsedResponseBody &&) = default ;
    GetAccessKeyLastUsedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedResponseBody() = default ;
    GetAccessKeyLastUsedResponseBody& operator=(const GetAccessKeyLastUsedResponseBody &) = default ;
    GetAccessKeyLastUsedResponseBody& operator=(GetAccessKeyLastUsedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyLastUsed_ != nullptr
        && this->requestId_ != nullptr; };
    // accessKeyLastUsed Field Functions 
    bool hasAccessKeyLastUsed() const { return this->accessKeyLastUsed_ != nullptr;};
    void deleteAccessKeyLastUsed() { this->accessKeyLastUsed_ = nullptr;};
    inline const GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed & accessKeyLastUsed() const { DARABONBA_PTR_GET_CONST(accessKeyLastUsed_, GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed) };
    inline GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed accessKeyLastUsed() { DARABONBA_PTR_GET(accessKeyLastUsed_, GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed) };
    inline GetAccessKeyLastUsedResponseBody& setAccessKeyLastUsed(const GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed & accessKeyLastUsed) { DARABONBA_PTR_SET_VALUE(accessKeyLastUsed_, accessKeyLastUsed) };
    inline GetAccessKeyLastUsedResponseBody& setAccessKeyLastUsed(GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed && accessKeyLastUsed) { DARABONBA_PTR_SET_RVALUE(accessKeyLastUsed_, accessKeyLastUsed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the time when the AccessKey pair was used for the last time.
    std::shared_ptr<GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed> accessKeyLastUsed_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
