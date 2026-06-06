// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCANCELTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCANCELTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class BatchCancelTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCancelTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(taskIds, taskIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCancelTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(taskIds, taskIdsShrink_);
    };
    BatchCancelTasksShrinkRequest() = default ;
    BatchCancelTasksShrinkRequest(const BatchCancelTasksShrinkRequest &) = default ;
    BatchCancelTasksShrinkRequest(BatchCancelTasksShrinkRequest &&) = default ;
    BatchCancelTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCancelTasksShrinkRequest() = default ;
    BatchCancelTasksShrinkRequest& operator=(const BatchCancelTasksShrinkRequest &) = default ;
    BatchCancelTasksShrinkRequest& operator=(BatchCancelTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskCode_ == nullptr
        && this->taskIdsShrink_ == nullptr; };
    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline BatchCancelTasksShrinkRequest& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string getTaskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline BatchCancelTasksShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskCode_ {};
    shared_ptr<string> taskIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
