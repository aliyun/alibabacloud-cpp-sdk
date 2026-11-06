// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAKEBASEMOUNTPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELAKEBASEMOUNTPARAMETERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateLakebaseMountParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLakebaseMountParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLakebaseMountParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateLakebaseMountParameterGroupResponseBody() = default ;
    CreateLakebaseMountParameterGroupResponseBody(const CreateLakebaseMountParameterGroupResponseBody &) = default ;
    CreateLakebaseMountParameterGroupResponseBody(CreateLakebaseMountParameterGroupResponseBody &&) = default ;
    CreateLakebaseMountParameterGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLakebaseMountParameterGroupResponseBody() = default ;
    CreateLakebaseMountParameterGroupResponseBody& operator=(const CreateLakebaseMountParameterGroupResponseBody &) = default ;
    CreateLakebaseMountParameterGroupResponseBody& operator=(CreateLakebaseMountParameterGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterGroupId_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline CreateLakebaseMountParameterGroupResponseBody& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLakebaseMountParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateLakebaseMountParameterGroupResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the created parameter template.
    shared_ptr<string> parameterGroupId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The asynchronous task ID.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
