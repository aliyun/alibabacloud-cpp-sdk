// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoSyncRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetRegionId, targetRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoSyncRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetRegionId, targetRegionId_);
    };
    ListRepoSyncRuleRequest() = default ;
    ListRepoSyncRuleRequest(const ListRepoSyncRuleRequest &) = default ;
    ListRepoSyncRuleRequest(ListRepoSyncRuleRequest &&) = default ;
    ListRepoSyncRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncRuleRequest() = default ;
    ListRepoSyncRuleRequest& operator=(const ListRepoSyncRuleRequest &) = default ;
    ListRepoSyncRuleRequest& operator=(ListRepoSyncRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->namespaceName_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->repoName_ == nullptr && this->targetInstanceId_ == nullptr
        && this->targetRegionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepoSyncRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListRepoSyncRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoSyncRuleRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoSyncRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListRepoSyncRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline ListRepoSyncRuleRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetRegionId Field Functions 
    bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
    void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
    inline string getTargetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
    inline ListRepoSyncRuleRequest& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the namespace.
    shared_ptr<string> namespaceName_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the image repository.
    shared_ptr<string> repoName_ {};
    // The ID of the destination instance.
    shared_ptr<string> targetInstanceId_ {};
    // The region ID of the destination instance.
    shared_ptr<string> targetRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
