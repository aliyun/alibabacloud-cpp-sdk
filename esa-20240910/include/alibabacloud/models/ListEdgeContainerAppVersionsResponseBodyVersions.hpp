// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPVERSIONSRESPONSEBODYVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPVERSIONSRESPONSEBODYVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEdgeContainerAppVersionsResponseBodyVersionsContainers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppVersionsResponseBodyVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppVersionsResponseBodyVersions& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastPublishTime, lastPublishTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppVersionsResponseBodyVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastPublishTime, lastPublishTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    ListEdgeContainerAppVersionsResponseBodyVersions() = default ;
    ListEdgeContainerAppVersionsResponseBodyVersions(const ListEdgeContainerAppVersionsResponseBodyVersions &) = default ;
    ListEdgeContainerAppVersionsResponseBodyVersions(ListEdgeContainerAppVersionsResponseBodyVersions &&) = default ;
    ListEdgeContainerAppVersionsResponseBodyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppVersionsResponseBodyVersions() = default ;
    ListEdgeContainerAppVersionsResponseBodyVersions& operator=(const ListEdgeContainerAppVersionsResponseBodyVersions &) = default ;
    ListEdgeContainerAppVersionsResponseBodyVersions& operator=(ListEdgeContainerAppVersionsResponseBodyVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->containers_ == nullptr && return this->createTime_ == nullptr && return this->lastPublishTime_ == nullptr && return this->name_ == nullptr && return this->publishTime_ == nullptr
        && return this->remarks_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->versionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers>) };
    inline vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers> containers() { DARABONBA_PTR_GET(containers_, vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers>) };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setContainers(const vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setContainers(vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastPublishTime Field Functions 
    bool hasLastPublishTime() const { return this->lastPublishTime_ != nullptr;};
    void deleteLastPublishTime() { this->lastPublishTime_ = nullptr;};
    inline string lastPublishTime() const { DARABONBA_PTR_GET_DEFAULT(lastPublishTime_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setLastPublishTime(string lastPublishTime) { DARABONBA_PTR_SET_VALUE(lastPublishTime_, lastPublishTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersions& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The containers in the version.
    std::shared_ptr<vector<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainers>> containers_ = nullptr;
    // The time when the version was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the version was last released. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> lastPublishTime_ = nullptr;
    // The version name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the version was released. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remarks_ = nullptr;
    // The status of the current version. Valid values:
    // 
    // *   **created**
    // *   **failed**
    // *   **creating**
    std::shared_ptr<string> status_ = nullptr;
    // The time when the version was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The version ID.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
