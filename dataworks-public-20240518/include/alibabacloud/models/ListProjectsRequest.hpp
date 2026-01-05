// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_TO_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_TO_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_FROM_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_FROM_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListProjectsRequest() = default ;
    ListProjectsRequest(const ListProjectsRequest &) = default ;
    ListProjectsRequest(ListProjectsRequest &&) = default ;
    ListProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsRequest() = default ;
    ListProjectsRequest& operator=(const ListProjectsRequest &) = default ;
    ListProjectsRequest& operator=(ListProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AliyunResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AliyunResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AliyunResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AliyunResourceTags() = default ;
      AliyunResourceTags(const AliyunResourceTags &) = default ;
      AliyunResourceTags(AliyunResourceTags &&) = default ;
      AliyunResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AliyunResourceTags() = default ;
      AliyunResourceTags& operator=(const AliyunResourceTags &) = default ;
      AliyunResourceTags& operator=(AliyunResourceTags &&) = default ;
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
      inline AliyunResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AliyunResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->aliyunResourceTags_ == nullptr && this->devEnvironmentEnabled_ == nullptr && this->devRoleDisabled_ == nullptr && this->ids_ == nullptr && this->names_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paiTaskEnabled_ == nullptr && this->status_ == nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline ListProjectsRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTags Field Functions 
    bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
    void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
    inline const vector<ListProjectsRequest::AliyunResourceTags> & getAliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<ListProjectsRequest::AliyunResourceTags>) };
    inline vector<ListProjectsRequest::AliyunResourceTags> getAliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<ListProjectsRequest::AliyunResourceTags>) };
    inline ListProjectsRequest& setAliyunResourceTags(const vector<ListProjectsRequest::AliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
    inline ListProjectsRequest& setAliyunResourceTags(vector<ListProjectsRequest::AliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


    // devEnvironmentEnabled Field Functions 
    bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
    void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
    inline bool getDevEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
    inline ListProjectsRequest& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


    // devRoleDisabled Field Functions 
    bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
    void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
    inline bool getDevRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
    inline ListProjectsRequest& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline ListProjectsRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListProjectsRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline const vector<string> & getNames() const { DARABONBA_PTR_GET_CONST(names_, vector<string>) };
    inline vector<string> getNames() { DARABONBA_PTR_GET(names_, vector<string>) };
    inline ListProjectsRequest& setNames(const vector<string> & names) { DARABONBA_PTR_SET_VALUE(names_, names) };
    inline ListProjectsRequest& setNames(vector<string> && names) { DARABONBA_PTR_SET_RVALUE(names_, names) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paiTaskEnabled Field Functions 
    bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
    void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
    inline bool getPaiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
    inline ListProjectsRequest& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProjectsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud resource group to which the workspaces belong. You can log on to the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups) and go to the Resource Group page to query the ID.
    // 
    // This parameter is used to query the information about workspaces that belong to a specific resource group.
    shared_ptr<string> aliyunResourceGroupId_ {};
    // The tags.
    shared_ptr<vector<ListProjectsRequest::AliyunResourceTags>> aliyunResourceTags_ {};
    // Specifies whether the development environment is enabled. Valid values:
    // 
    // *   true: The development environment is enabled. In this case, the development environment is isolated from the production environment in a workspace.
    // *   false: The development environment is disabled. In this case, only the production environment is used in a workspace.
    shared_ptr<bool> devEnvironmentEnabled_ {};
    // Specifies whether the Develop role is disabled. Valid values:
    // 
    // *   false (default)
    // *   true
    shared_ptr<bool> devRoleDisabled_ {};
    // The IDs of the DataWorks workspaces.
    shared_ptr<vector<int64_t>> ids_ {};
    // The names of the DataWorks workspaces.
    shared_ptr<vector<string>> names_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether scheduling of Platform for AI (PAI) tasks is enabled. Valid values:
    // 
    // *   true: Scheduling of PAI tasks is enabled. In this case, you can create a PAI node in a DataWorks workspace and configure scheduling properties for the node to implement periodic scheduling of PAI tasks.
    // *   false: Scheduling of PAI tasks is disabled.
    shared_ptr<bool> paiTaskEnabled_ {};
    // The status of the workspaces. Valid values:
    // 
    // *   Available
    // *   Initializing
    // *   InitFailed
    // *   Forbidden
    // *   Deleting
    // *   DeleteFailed
    // *   Frozen
    // *   Updating
    // *   UpdateFailed
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
