// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccessKeyInfoInRecycleBinResponseBodyAccessKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyInfoInRecycleBinResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyInfoInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyInfoInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyInfoInRecycleBinResponseBody() = default ;
    GetAccessKeyInfoInRecycleBinResponseBody(const GetAccessKeyInfoInRecycleBinResponseBody &) = default ;
    GetAccessKeyInfoInRecycleBinResponseBody(GetAccessKeyInfoInRecycleBinResponseBody &&) = default ;
    GetAccessKeyInfoInRecycleBinResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyInfoInRecycleBinResponseBody() = default ;
    GetAccessKeyInfoInRecycleBinResponseBody& operator=(const GetAccessKeyInfoInRecycleBinResponseBody &) = default ;
    GetAccessKeyInfoInRecycleBinResponseBody& operator=(GetAccessKeyInfoInRecycleBinResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->requestId_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline const GetAccessKeyInfoInRecycleBinResponseBodyAccessKey & accessKey() const { DARABONBA_PTR_GET_CONST(accessKey_, GetAccessKeyInfoInRecycleBinResponseBodyAccessKey) };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey accessKey() { DARABONBA_PTR_GET(accessKey_, GetAccessKeyInfoInRecycleBinResponseBodyAccessKey) };
    inline GetAccessKeyInfoInRecycleBinResponseBody& setAccessKey(const GetAccessKeyInfoInRecycleBinResponseBodyAccessKey & accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };
    inline GetAccessKeyInfoInRecycleBinResponseBody& setAccessKey(GetAccessKeyInfoInRecycleBinResponseBodyAccessKey && accessKey) { DARABONBA_PTR_SET_RVALUE(accessKey_, accessKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pair.
    std::shared_ptr<GetAccessKeyInfoInRecycleBinResponseBodyAccessKey> accessKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
