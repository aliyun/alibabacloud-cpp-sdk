// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHARTREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHARTREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteChartRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChartRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChartRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    DeleteChartRepositoryRequest() = default ;
    DeleteChartRepositoryRequest(const DeleteChartRepositoryRequest &) = default ;
    DeleteChartRepositoryRequest(DeleteChartRepositoryRequest &&) = default ;
    DeleteChartRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChartRepositoryRequest() = default ;
    DeleteChartRepositoryRequest& operator=(const DeleteChartRepositoryRequest &) = default ;
    DeleteChartRepositoryRequest& operator=(DeleteChartRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteChartRepositoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DeleteChartRepositoryRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline DeleteChartRepositoryRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoName_ {};
    // The name of the namespace to which the repository belongs.
    // 
    // This parameter is required.
    shared_ptr<string> repoNamespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
