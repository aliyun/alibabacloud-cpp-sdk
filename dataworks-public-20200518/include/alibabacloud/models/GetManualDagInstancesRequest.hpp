// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetManualDagInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManualDagInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetManualDagInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    GetManualDagInstancesRequest() = default ;
    GetManualDagInstancesRequest(const GetManualDagInstancesRequest &) = default ;
    GetManualDagInstancesRequest(GetManualDagInstancesRequest &&) = default ;
    GetManualDagInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManualDagInstancesRequest() = default ;
    GetManualDagInstancesRequest& operator=(const GetManualDagInstancesRequest &) = default ;
    GetManualDagInstancesRequest& operator=(GetManualDagInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->projectEnv_ != nullptr && this->projectName_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline string dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, "") };
    inline GetManualDagInstancesRequest& setDagId(string dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline GetManualDagInstancesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetManualDagInstancesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The ID of the directed acyclic graph (DAG) for the manually triggered workflow. You can call the [CreateManualDag](https://help.aliyun.com/document_detail/189728.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dagId_ = nullptr;
    // The environment of Operation Center. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The name of the workspace to which the manually triggered workflow belongs. You can log on to the DataWorks console and go to the Workspace Settings panel to query the name.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
