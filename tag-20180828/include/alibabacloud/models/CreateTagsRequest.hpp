// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTagsRequestTagKeyValueParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CreateTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TagKeyValueParamList, tagKeyValueParamList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TagKeyValueParamList, tagKeyValueParamList_);
    };
    CreateTagsRequest() = default ;
    CreateTagsRequest(const CreateTagsRequest &) = default ;
    CreateTagsRequest(CreateTagsRequest &&) = default ;
    CreateTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTagsRequest() = default ;
    CreateTagsRequest& operator=(const CreateTagsRequest &) = default ;
    CreateTagsRequest& operator=(CreateTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->tagKeyValueParamList_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTagsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTagsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTagsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTagsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tagKeyValueParamList Field Functions 
    bool hasTagKeyValueParamList() const { return this->tagKeyValueParamList_ != nullptr;};
    void deleteTagKeyValueParamList() { this->tagKeyValueParamList_ = nullptr;};
    inline const vector<CreateTagsRequestTagKeyValueParamList> & tagKeyValueParamList() const { DARABONBA_PTR_GET_CONST(tagKeyValueParamList_, vector<CreateTagsRequestTagKeyValueParamList>) };
    inline vector<CreateTagsRequestTagKeyValueParamList> tagKeyValueParamList() { DARABONBA_PTR_GET(tagKeyValueParamList_, vector<CreateTagsRequestTagKeyValueParamList>) };
    inline CreateTagsRequest& setTagKeyValueParamList(const vector<CreateTagsRequestTagKeyValueParamList> & tagKeyValueParamList) { DARABONBA_PTR_SET_VALUE(tagKeyValueParamList_, tagKeyValueParamList) };
    inline CreateTagsRequest& setTagKeyValueParamList(vector<CreateTagsRequestTagKeyValueParamList> && tagKeyValueParamList) { DARABONBA_PTR_SET_RVALUE(tagKeyValueParamList_, tagKeyValueParamList) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // > Only `cn-hangzhou` is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The information about the tags.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateTagsRequestTagKeyValueParamList>> tagKeyValueParamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
