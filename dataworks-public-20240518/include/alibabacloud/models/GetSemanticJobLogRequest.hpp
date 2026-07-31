// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEMANTICJOBLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSEMANTICJOBLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSemanticJobLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSemanticJobLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorJobId, executorJobId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSemanticJobLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorJobId, executorJobId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetSemanticJobLogRequest() = default ;
    GetSemanticJobLogRequest(const GetSemanticJobLogRequest &) = default ;
    GetSemanticJobLogRequest(GetSemanticJobLogRequest &&) = default ;
    GetSemanticJobLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSemanticJobLogRequest() = default ;
    GetSemanticJobLogRequest& operator=(const GetSemanticJobLogRequest &) = default ;
    GetSemanticJobLogRequest& operator=(GetSemanticJobLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executorJobId_ == nullptr
        && this->projectId_ == nullptr; };
    // executorJobId Field Functions 
    bool hasExecutorJobId() const { return this->executorJobId_ != nullptr;};
    void deleteExecutorJobId() { this->executorJobId_ = nullptr;};
    inline string getExecutorJobId() const { DARABONBA_PTR_GET_DEFAULT(executorJobId_, "") };
    inline GetSemanticJobLogRequest& setExecutorJobId(string executorJobId) { DARABONBA_PTR_SET_VALUE(executorJobId_, executorJobId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetSemanticJobLogRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The executor job ID. Use the Data.ExecutorJobId from the RunSemanticJob response or the ExecutorJobId from a ListSemanticJobRuns record.
    // 
    // This parameter is required.
    shared_ptr<string> executorJobId_ {};
    // The ID of the DataWorks workspace to which the job belongs. Use the ProjectId from the CreateSemanticJob response or a ListSemanticJobs list item.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
