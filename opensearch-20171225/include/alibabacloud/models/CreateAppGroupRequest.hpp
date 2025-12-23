// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppGroupRequestQuota.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppGroupRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateAppGroupRequest() = default ;
    CreateAppGroupRequest(const CreateAppGroupRequest &) = default ;
    CreateAppGroupRequest(CreateAppGroupRequest &&) = default ;
    CreateAppGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupRequest() = default ;
    CreateAppGroupRequest& operator=(const CreateAppGroupRequest &) = default ;
    CreateAppGroupRequest& operator=(CreateAppGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->name_ == nullptr && return this->quota_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->type_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateAppGroupRequestQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, CreateAppGroupRequestQuota) };
    inline CreateAppGroupRequestQuota quota() { DARABONBA_PTR_GET(quota_, CreateAppGroupRequestQuota) };
    inline CreateAppGroupRequest& setQuota(const CreateAppGroupRequestQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateAppGroupRequest& setQuota(CreateAppGroupRequestQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAppGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAppGroupRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAppGroupRequestTags>) };
    inline vector<CreateAppGroupRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateAppGroupRequestTags>) };
    inline CreateAppGroupRequest& setTags(const vector<CreateAppGroupRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAppGroupRequest& setTags(vector<CreateAppGroupRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billing method. Valid values:
    // 
    // *   POSTPAY: pay-as-you-go
    // *   PREPAY: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> name_ = nullptr;
    // The quota.
    std::shared_ptr<CreateAppGroupRequestQuota> quota_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateAppGroupRequestTags>> tags_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   standard
    // *   enhanced
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
