// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactBuildTaskLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactBuildTaskLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactBuildTaskLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListArtifactBuildTaskLogRequest() = default ;
    ListArtifactBuildTaskLogRequest(const ListArtifactBuildTaskLogRequest &) = default ;
    ListArtifactBuildTaskLogRequest(ListArtifactBuildTaskLogRequest &&) = default ;
    ListArtifactBuildTaskLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactBuildTaskLogRequest() = default ;
    ListArtifactBuildTaskLogRequest& operator=(const ListArtifactBuildTaskLogRequest &) = default ;
    ListArtifactBuildTaskLogRequest& operator=(ListArtifactBuildTaskLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildTaskId_ == nullptr
        && this->instanceId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr; };
    // buildTaskId Field Functions 
    bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
    void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
    inline string getBuildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
    inline ListArtifactBuildTaskLogRequest& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListArtifactBuildTaskLogRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListArtifactBuildTaskLogRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListArtifactBuildTaskLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the artifact build task.
    // 
    // This parameter is required.
    shared_ptr<string> buildTaskId_ {};
    // The ID of the Container Registry instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page. Maximum value: 100. If you specify a value greater than 100 for this parameter, the system reports a parameter error or uses 100 as the maximum value.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
