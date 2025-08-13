// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSOCIATEDRESOURCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSOCIATEDRESOURCERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAssociatedResourceRulesRequestCreateRulesList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CreateAssociatedResourceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssociatedResourceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateRulesList, createRulesList_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssociatedResourceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateRulesList, createRulesList_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    CreateAssociatedResourceRulesRequest() = default ;
    CreateAssociatedResourceRulesRequest(const CreateAssociatedResourceRulesRequest &) = default ;
    CreateAssociatedResourceRulesRequest(CreateAssociatedResourceRulesRequest &&) = default ;
    CreateAssociatedResourceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssociatedResourceRulesRequest() = default ;
    CreateAssociatedResourceRulesRequest& operator=(const CreateAssociatedResourceRulesRequest &) = default ;
    CreateAssociatedResourceRulesRequest& operator=(CreateAssociatedResourceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createRulesList_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr; };
    // createRulesList Field Functions 
    bool hasCreateRulesList() const { return this->createRulesList_ != nullptr;};
    void deleteCreateRulesList() { this->createRulesList_ = nullptr;};
    inline const vector<CreateAssociatedResourceRulesRequestCreateRulesList> & createRulesList() const { DARABONBA_PTR_GET_CONST(createRulesList_, vector<CreateAssociatedResourceRulesRequestCreateRulesList>) };
    inline vector<CreateAssociatedResourceRulesRequestCreateRulesList> createRulesList() { DARABONBA_PTR_GET(createRulesList_, vector<CreateAssociatedResourceRulesRequestCreateRulesList>) };
    inline CreateAssociatedResourceRulesRequest& setCreateRulesList(const vector<CreateAssociatedResourceRulesRequestCreateRulesList> & createRulesList) { DARABONBA_PTR_SET_VALUE(createRulesList_, createRulesList) };
    inline CreateAssociatedResourceRulesRequest& setCreateRulesList(vector<CreateAssociatedResourceRulesRequestCreateRulesList> && createRulesList) { DARABONBA_PTR_SET_RVALUE(createRulesList_, createRulesList) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAssociatedResourceRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAssociatedResourceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAssociatedResourceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAssociatedResourceRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The associated resource tagging rules that you want to create.
    std::shared_ptr<vector<CreateAssociatedResourceRulesRequestCreateRulesList>> createRulesList_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
