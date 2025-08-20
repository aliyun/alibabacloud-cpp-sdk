// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHARTRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHARTRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteChartReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChartReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Chart, chart_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChartReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Chart, chart_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    DeleteChartReleaseRequest() = default ;
    DeleteChartReleaseRequest(const DeleteChartReleaseRequest &) = default ;
    DeleteChartReleaseRequest(DeleteChartReleaseRequest &&) = default ;
    DeleteChartReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChartReleaseRequest() = default ;
    DeleteChartReleaseRequest& operator=(const DeleteChartReleaseRequest &) = default ;
    DeleteChartReleaseRequest& operator=(DeleteChartReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chart_ != nullptr
        && this->instanceId_ != nullptr && this->release_ != nullptr && this->repoName_ != nullptr && this->repoNamespaceName_ != nullptr; };
    // chart Field Functions 
    bool hasChart() const { return this->chart_ != nullptr;};
    void deleteChart() { this->chart_ = nullptr;};
    inline string chart() const { DARABONBA_PTR_GET_DEFAULT(chart_, "") };
    inline DeleteChartReleaseRequest& setChart(string chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteChartReleaseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DeleteChartReleaseRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DeleteChartReleaseRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline DeleteChartReleaseRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


  protected:
    // The name of the chart.
    // 
    // This parameter is required.
    std::shared_ptr<string> chart_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The version of the chart that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> release_ = nullptr;
    // The name of the repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
