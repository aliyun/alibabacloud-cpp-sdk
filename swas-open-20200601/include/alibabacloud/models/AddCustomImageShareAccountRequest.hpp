// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMIMAGESHAREACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMIMAGESHAREACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class AddCustomImageShareAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomImageShareAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomImageShareAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddCustomImageShareAccountRequest() = default ;
    AddCustomImageShareAccountRequest(const AddCustomImageShareAccountRequest &) = default ;
    AddCustomImageShareAccountRequest(AddCustomImageShareAccountRequest &&) = default ;
    AddCustomImageShareAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomImageShareAccountRequest() = default ;
    AddCustomImageShareAccountRequest& operator=(const AddCustomImageShareAccountRequest &) = default ;
    AddCustomImageShareAccountRequest& operator=(AddCustomImageShareAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->clientToken_ == nullptr && this->imageId_ == nullptr && this->regionId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<int64_t> & getAccount() const { DARABONBA_PTR_GET_CONST(account_, vector<int64_t>) };
    inline vector<int64_t> getAccount() { DARABONBA_PTR_GET(account_, vector<int64_t>) };
    inline AddCustomImageShareAccountRequest& setAccount(const vector<int64_t> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline AddCustomImageShareAccountRequest& setAccount(vector<int64_t> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddCustomImageShareAccountRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AddCustomImageShareAccountRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCustomImageShareAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The account name.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> account_ {};
    // The client token that is used to ensure the idempotence of the request. You can generate the value on your client, but you must ensure that the value is unique among different requests. The **ClientToken** parameter can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the custom image.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The region ID. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the latest Alibaba Cloud region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
