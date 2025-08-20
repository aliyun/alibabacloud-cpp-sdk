// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHARTRELEASERESPONSEBODYCHARTRELEASES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHARTRELEASERESPONSEBODYCHARTRELEASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChartReleaseResponseBodyChartReleases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChartReleaseResponseBodyChartReleases& obj) { 
      DARABONBA_PTR_TO_JSON(Chart, chart_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListChartReleaseResponseBodyChartReleases& obj) { 
      DARABONBA_PTR_FROM_JSON(Chart, chart_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListChartReleaseResponseBodyChartReleases() = default ;
    ListChartReleaseResponseBodyChartReleases(const ListChartReleaseResponseBodyChartReleases &) = default ;
    ListChartReleaseResponseBodyChartReleases(ListChartReleaseResponseBodyChartReleases &&) = default ;
    ListChartReleaseResponseBodyChartReleases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChartReleaseResponseBodyChartReleases() = default ;
    ListChartReleaseResponseBodyChartReleases& operator=(const ListChartReleaseResponseBodyChartReleases &) = default ;
    ListChartReleaseResponseBodyChartReleases& operator=(ListChartReleaseResponseBodyChartReleases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chart_ != nullptr
        && this->instanceId_ != nullptr && this->modifiedTime_ != nullptr && this->release_ != nullptr && this->repoId_ != nullptr && this->size_ != nullptr
        && this->status_ != nullptr; };
    // chart Field Functions 
    bool hasChart() const { return this->chart_ != nullptr;};
    void deleteChart() { this->chart_ = nullptr;};
    inline string chart() const { DARABONBA_PTR_GET_DEFAULT(chart_, "") };
    inline ListChartReleaseResponseBodyChartReleases& setChart(string chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChartReleaseResponseBodyChartReleases& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListChartReleaseResponseBodyChartReleases& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline ListChartReleaseResponseBodyChartReleases& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListChartReleaseResponseBodyChartReleases& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListChartReleaseResponseBodyChartReleases& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListChartReleaseResponseBodyChartReleases& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the chart version.
    std::shared_ptr<string> chart_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the chart was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The version number of the chart.
    std::shared_ptr<string> release_ = nullptr;
    // The ID of the chart repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The size of the chart of the version. Unit: bytes.
    std::shared_ptr<string> size_ = nullptr;
    // The status of the chart.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
