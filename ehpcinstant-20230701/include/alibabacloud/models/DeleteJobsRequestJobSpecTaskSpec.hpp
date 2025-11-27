// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBSREQUESTJOBSPECTASKSPEC_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBSREQUESTJOBSPECTASKSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobsRequestJobSpecTaskSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobsRequestJobSpecTaskSpec& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobsRequestJobSpecTaskSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DeleteJobsRequestJobSpecTaskSpec() = default ;
    DeleteJobsRequestJobSpecTaskSpec(const DeleteJobsRequestJobSpecTaskSpec &) = default ;
    DeleteJobsRequestJobSpecTaskSpec(DeleteJobsRequestJobSpecTaskSpec &&) = default ;
    DeleteJobsRequestJobSpecTaskSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobsRequestJobSpecTaskSpec() = default ;
    DeleteJobsRequestJobSpecTaskSpec& operator=(const DeleteJobsRequestJobSpecTaskSpec &) = default ;
    DeleteJobsRequestJobSpecTaskSpec& operator=(DeleteJobsRequestJobSpecTaskSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayIndex_ == nullptr
        && return this->taskName_ == nullptr; };
    // arrayIndex Field Functions 
    bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
    void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
    inline const vector<int32_t> & arrayIndex() const { DARABONBA_PTR_GET_CONST(arrayIndex_, vector<int32_t>) };
    inline vector<int32_t> arrayIndex() { DARABONBA_PTR_GET(arrayIndex_, vector<int32_t>) };
    inline DeleteJobsRequestJobSpecTaskSpec& setArrayIndex(const vector<int32_t> & arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };
    inline DeleteJobsRequestJobSpecTaskSpec& setArrayIndex(vector<int32_t> && arrayIndex) { DARABONBA_PTR_SET_RVALUE(arrayIndex_, arrayIndex) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DeleteJobsRequestJobSpecTaskSpec& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The list of array job indexes to be deleted.
    std::shared_ptr<vector<int32_t>> arrayIndex_ = nullptr;
    // The name of the task to be deleted.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
