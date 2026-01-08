// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMAUDIENCEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMAUDIENCEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddCustomAudienceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomAudienceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdAccountId, adAccountId_);
      DARABONBA_PTR_TO_JSON(BatchLastFlag, batchLastFlag_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustomAudienceId, customAudienceId_);
      DARABONBA_PTR_TO_JSON(EstimatedNumTotal, estimatedNumTotal_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomAudienceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdAccountId, adAccountId_);
      DARABONBA_PTR_FROM_JSON(BatchLastFlag, batchLastFlag_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustomAudienceId, customAudienceId_);
      DARABONBA_PTR_FROM_JSON(EstimatedNumTotal, estimatedNumTotal_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    AddCustomAudienceUserRequest() = default ;
    AddCustomAudienceUserRequest(const AddCustomAudienceUserRequest &) = default ;
    AddCustomAudienceUserRequest(AddCustomAudienceUserRequest &&) = default ;
    AddCustomAudienceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomAudienceUserRequest() = default ;
    AddCustomAudienceUserRequest& operator=(const AddCustomAudienceUserRequest &) = default ;
    AddCustomAudienceUserRequest& operator=(AddCustomAudienceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->phone_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<string> phone_ {};
    };

    virtual bool empty() const override { return this->adAccountId_ == nullptr
        && this->batchLastFlag_ == nullptr && this->custSpaceId_ == nullptr && this->customAudienceId_ == nullptr && this->estimatedNumTotal_ == nullptr && this->ownerId_ == nullptr
        && this->pageId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->users_ == nullptr; };
    // adAccountId Field Functions 
    bool hasAdAccountId() const { return this->adAccountId_ != nullptr;};
    void deleteAdAccountId() { this->adAccountId_ = nullptr;};
    inline string getAdAccountId() const { DARABONBA_PTR_GET_DEFAULT(adAccountId_, "") };
    inline AddCustomAudienceUserRequest& setAdAccountId(string adAccountId) { DARABONBA_PTR_SET_VALUE(adAccountId_, adAccountId) };


    // batchLastFlag Field Functions 
    bool hasBatchLastFlag() const { return this->batchLastFlag_ != nullptr;};
    void deleteBatchLastFlag() { this->batchLastFlag_ = nullptr;};
    inline bool getBatchLastFlag() const { DARABONBA_PTR_GET_DEFAULT(batchLastFlag_, false) };
    inline AddCustomAudienceUserRequest& setBatchLastFlag(bool batchLastFlag) { DARABONBA_PTR_SET_VALUE(batchLastFlag_, batchLastFlag) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline AddCustomAudienceUserRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // customAudienceId Field Functions 
    bool hasCustomAudienceId() const { return this->customAudienceId_ != nullptr;};
    void deleteCustomAudienceId() { this->customAudienceId_ = nullptr;};
    inline string getCustomAudienceId() const { DARABONBA_PTR_GET_DEFAULT(customAudienceId_, "") };
    inline AddCustomAudienceUserRequest& setCustomAudienceId(string customAudienceId) { DARABONBA_PTR_SET_VALUE(customAudienceId_, customAudienceId) };


    // estimatedNumTotal Field Functions 
    bool hasEstimatedNumTotal() const { return this->estimatedNumTotal_ != nullptr;};
    void deleteEstimatedNumTotal() { this->estimatedNumTotal_ = nullptr;};
    inline int64_t getEstimatedNumTotal() const { DARABONBA_PTR_GET_DEFAULT(estimatedNumTotal_, 0L) };
    inline AddCustomAudienceUserRequest& setEstimatedNumTotal(int64_t estimatedNumTotal) { DARABONBA_PTR_SET_VALUE(estimatedNumTotal_, estimatedNumTotal) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCustomAudienceUserRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline AddCustomAudienceUserRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddCustomAudienceUserRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddCustomAudienceUserRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<AddCustomAudienceUserRequest::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<AddCustomAudienceUserRequest::Users>) };
    inline vector<AddCustomAudienceUserRequest::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<AddCustomAudienceUserRequest::Users>) };
    inline AddCustomAudienceUserRequest& setUsers(const vector<AddCustomAudienceUserRequest::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline AddCustomAudienceUserRequest& setUsers(vector<AddCustomAudienceUserRequest::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // This parameter is required.
    shared_ptr<string> adAccountId_ {};
    shared_ptr<bool> batchLastFlag_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // This parameter is required.
    shared_ptr<string> customAudienceId_ {};
    shared_ptr<int64_t> estimatedNumTotal_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> pageId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<vector<AddCustomAudienceUserRequest::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
