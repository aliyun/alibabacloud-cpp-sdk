// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class InsertAiOutboundPhoneNumsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertAiOutboundPhoneNumsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_TO_JSON(Details, detailsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertAiOutboundPhoneNumsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_FROM_JSON(Details, detailsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    InsertAiOutboundPhoneNumsShrinkRequest() = default ;
    InsertAiOutboundPhoneNumsShrinkRequest(const InsertAiOutboundPhoneNumsShrinkRequest &) = default ;
    InsertAiOutboundPhoneNumsShrinkRequest(InsertAiOutboundPhoneNumsShrinkRequest &&) = default ;
    InsertAiOutboundPhoneNumsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertAiOutboundPhoneNumsShrinkRequest() = default ;
    InsertAiOutboundPhoneNumsShrinkRequest& operator=(const InsertAiOutboundPhoneNumsShrinkRequest &) = default ;
    InsertAiOutboundPhoneNumsShrinkRequest& operator=(InsertAiOutboundPhoneNumsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchVersion_ == nullptr
        && return this->detailsShrink_ == nullptr && return this->instanceId_ == nullptr && return this->taskId_ == nullptr; };
    // batchVersion Field Functions 
    bool hasBatchVersion() const { return this->batchVersion_ != nullptr;};
    void deleteBatchVersion() { this->batchVersion_ = nullptr;};
    inline int32_t batchVersion() const { DARABONBA_PTR_GET_DEFAULT(batchVersion_, 0) };
    inline InsertAiOutboundPhoneNumsShrinkRequest& setBatchVersion(int32_t batchVersion) { DARABONBA_PTR_SET_VALUE(batchVersion_, batchVersion) };


    // detailsShrink Field Functions 
    bool hasDetailsShrink() const { return this->detailsShrink_ != nullptr;};
    void deleteDetailsShrink() { this->detailsShrink_ = nullptr;};
    inline string detailsShrink() const { DARABONBA_PTR_GET_DEFAULT(detailsShrink_, "") };
    inline InsertAiOutboundPhoneNumsShrinkRequest& setDetailsShrink(string detailsShrink) { DARABONBA_PTR_SET_VALUE(detailsShrink_, detailsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InsertAiOutboundPhoneNumsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline InsertAiOutboundPhoneNumsShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> batchVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> detailsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
