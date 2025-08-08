// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKINVOCATION_HPP_
#define ALIBABACLOUD_MODELS_TASKINVOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TaskInvocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskInvocation& obj) { 
      DARABONBA_PTR_TO_JSON(instanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(invocationID, invocationID_);
      DARABONBA_PTR_TO_JSON(invocationTarget, invocationTarget_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(requestID, requestID_);
      DARABONBA_PTR_TO_JSON(slsLogStore, slsLogStore_);
      DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, TaskInvocation& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(invocationID, invocationID_);
      DARABONBA_PTR_FROM_JSON(invocationTarget, invocationTarget_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(requestID, requestID_);
      DARABONBA_PTR_FROM_JSON(slsLogStore, slsLogStore_);
      DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    TaskInvocation() = default ;
    TaskInvocation(const TaskInvocation &) = default ;
    TaskInvocation(TaskInvocation &&) = default ;
    TaskInvocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskInvocation() = default ;
    TaskInvocation& operator=(const TaskInvocation &) = default ;
    TaskInvocation& operator=(TaskInvocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceID_ != nullptr
        && this->invocationID_ != nullptr && this->invocationTarget_ != nullptr && this->output_ != nullptr && this->requestID_ != nullptr && this->slsLogStore_ != nullptr
        && this->slsProject_ != nullptr && this->status_ != nullptr; };
    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline TaskInvocation& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // invocationID Field Functions 
    bool hasInvocationID() const { return this->invocationID_ != nullptr;};
    void deleteInvocationID() { this->invocationID_ = nullptr;};
    inline string invocationID() const { DARABONBA_PTR_GET_DEFAULT(invocationID_, "") };
    inline TaskInvocation& setInvocationID(string invocationID) { DARABONBA_PTR_SET_VALUE(invocationID_, invocationID) };


    // invocationTarget Field Functions 
    bool hasInvocationTarget() const { return this->invocationTarget_ != nullptr;};
    void deleteInvocationTarget() { this->invocationTarget_ = nullptr;};
    inline string invocationTarget() const { DARABONBA_PTR_GET_DEFAULT(invocationTarget_, "") };
    inline TaskInvocation& setInvocationTarget(string invocationTarget) { DARABONBA_PTR_SET_VALUE(invocationTarget_, invocationTarget) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline TaskInvocation& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestID Field Functions 
    bool hasRequestID() const { return this->requestID_ != nullptr;};
    void deleteRequestID() { this->requestID_ = nullptr;};
    inline string requestID() const { DARABONBA_PTR_GET_DEFAULT(requestID_, "") };
    inline TaskInvocation& setRequestID(string requestID) { DARABONBA_PTR_SET_VALUE(requestID_, requestID) };


    // slsLogStore Field Functions 
    bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
    void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
    inline string slsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
    inline TaskInvocation& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline TaskInvocation& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TaskInvocation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<string> invocationID_ = nullptr;
    std::shared_ptr<string> invocationTarget_ = nullptr;
    std::shared_ptr<string> output_ = nullptr;
    std::shared_ptr<string> requestID_ = nullptr;
    std::shared_ptr<string> slsLogStore_ = nullptr;
    std::shared_ptr<string> slsProject_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
