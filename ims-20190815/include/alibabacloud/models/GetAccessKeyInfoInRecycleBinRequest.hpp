// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyInfoInRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyInfoInRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyInfoInRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
    };
    GetAccessKeyInfoInRecycleBinRequest() = default ;
    GetAccessKeyInfoInRecycleBinRequest(const GetAccessKeyInfoInRecycleBinRequest &) = default ;
    GetAccessKeyInfoInRecycleBinRequest(GetAccessKeyInfoInRecycleBinRequest &&) = default ;
    GetAccessKeyInfoInRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyInfoInRecycleBinRequest() = default ;
    GetAccessKeyInfoInRecycleBinRequest& operator=(const GetAccessKeyInfoInRecycleBinRequest &) = default ;
    GetAccessKeyInfoInRecycleBinRequest& operator=(GetAccessKeyInfoInRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userAccessKeyId_ == nullptr; };
    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline GetAccessKeyInfoInRecycleBinRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


  protected:
    // The AccessKey ID of the Resource Access Management (RAM) user.
    // 
    // This parameter is required.
    shared_ptr<string> userAccessKeyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
