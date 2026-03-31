// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATCHBASELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPATCHBASELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListPatchBaselinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatchBaselinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatchBaselinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListPatchBaselinesRequest() = default ;
    ListPatchBaselinesRequest(const ListPatchBaselinesRequest &) = default ;
    ListPatchBaselinesRequest(ListPatchBaselinesRequest &&) = default ;
    ListPatchBaselinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatchBaselinesRequest() = default ;
    ListPatchBaselinesRequest& operator=(const ListPatchBaselinesRequest &) = default ;
    ListPatchBaselinesRequest& operator=(ListPatchBaselinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->approvedPatches_ == nullptr
        && this->approvedPatchesEnableNonSecurity_ == nullptr && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->operationSystem_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->sources_ == nullptr && this->tags_ == nullptr; };
    // approvedPatches Field Functions 
    bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
    void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
    inline const vector<string> & getApprovedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
    inline vector<string> getApprovedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
    inline ListPatchBaselinesRequest& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
    inline ListPatchBaselinesRequest& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool getApprovedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline ListPatchBaselinesRequest& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPatchBaselinesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPatchBaselinesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPatchBaselinesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string getOperationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline ListPatchBaselinesRequest& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPatchBaselinesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPatchBaselinesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListPatchBaselinesRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<string> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
    inline vector<string> getSources() { DARABONBA_PTR_GET(sources_, vector<string>) };
    inline ListPatchBaselinesRequest& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline ListPatchBaselinesRequest& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPatchBaselinesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPatchBaselinesRequest::Tags>) };
    inline vector<ListPatchBaselinesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListPatchBaselinesRequest::Tags>) };
    inline ListPatchBaselinesRequest& setTags(const vector<ListPatchBaselinesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPatchBaselinesRequest& setTags(vector<ListPatchBaselinesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The approved patches.
    shared_ptr<vector<string>> approvedPatches_ {};
    // Specifies whether the approved patch involves updates other than security-related updates.
    shared_ptr<bool> approvedPatchesEnableNonSecurity_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the patch baseline.
    shared_ptr<string> name_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The type of the operating system. Valid values:
    // 
    // *   Windows
    // *   Ubuntu
    // *   CentOS
    // *   Debian
    // *   AliyunLinux
    // *   RedhatEnterpriseLinux
    // *   Anolis
    // *   AlmaLinux
    shared_ptr<string> operationSystem_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The share type of the template. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    shared_ptr<string> shareType_ {};
    // The patch source configurations.
    shared_ptr<vector<string>> sources_ {};
    // The tags.
    shared_ptr<vector<ListPatchBaselinesRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
