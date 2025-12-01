// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckInstanceResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckInstanceResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(TaskSource, taskSource_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckInstanceResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(TaskSource, taskSource_);
    };
    VerifyCheckInstanceResultRequest() = default ;
    VerifyCheckInstanceResultRequest(const VerifyCheckInstanceResultRequest &) = default ;
    VerifyCheckInstanceResultRequest(VerifyCheckInstanceResultRequest &&) = default ;
    VerifyCheckInstanceResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckInstanceResultRequest() = default ;
    VerifyCheckInstanceResultRequest& operator=(const VerifyCheckInstanceResultRequest &) = default ;
    VerifyCheckInstanceResultRequest& operator=(VerifyCheckInstanceResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkIds_ == nullptr && return this->instanceIds_ == nullptr && return this->taskSource_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline VerifyCheckInstanceResultRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & checkIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> checkIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline VerifyCheckInstanceResultRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline VerifyCheckInstanceResultRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline VerifyCheckInstanceResultRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline VerifyCheckInstanceResultRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // taskSource Field Functions 
    bool hasTaskSource() const { return this->taskSource_ != nullptr;};
    void deleteTaskSource() { this->taskSource_ = nullptr;};
    inline string taskSource() const { DARABONBA_PTR_GET_DEFAULT(taskSource_, "") };
    inline VerifyCheckInstanceResultRequest& setTaskSource(string taskSource) { DARABONBA_PTR_SET_VALUE(taskSource_, taskSource) };


  protected:
    // The ID of the check item.
    // 
    // > You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of check items.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    std::shared_ptr<vector<int64_t>> checkIds_ = nullptr;
    // The instance IDs of the assets on which risks are detected based on the check item.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The source of task.
    std::shared_ptr<string> taskSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
