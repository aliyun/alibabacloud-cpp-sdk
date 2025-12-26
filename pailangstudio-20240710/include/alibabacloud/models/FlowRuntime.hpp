// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_TO_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
      DARABONBA_PTR_TO_JSON(SupportSSEStream, supportSSEStream_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_FROM_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
      DARABONBA_PTR_FROM_JSON(SupportSSEStream, supportSSEStream_);
    };
    FlowRuntime() = default ;
    FlowRuntime(const FlowRuntime &) = default ;
    FlowRuntime(FlowRuntime &&) = default ;
    FlowRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRuntime() = default ;
    FlowRuntime& operator=(const FlowRuntime &) = default ;
    FlowRuntime& operator=(FlowRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->runtimeId_ == nullptr
        && return this->runtimeName_ == nullptr && return this->runtimeStatus_ == nullptr && return this->runtimeType_ == nullptr && return this->supportSSEStream_ == nullptr; };
    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string runtimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline FlowRuntime& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // runtimeName Field Functions 
    bool hasRuntimeName() const { return this->runtimeName_ != nullptr;};
    void deleteRuntimeName() { this->runtimeName_ = nullptr;};
    inline string runtimeName() const { DARABONBA_PTR_GET_DEFAULT(runtimeName_, "") };
    inline FlowRuntime& setRuntimeName(string runtimeName) { DARABONBA_PTR_SET_VALUE(runtimeName_, runtimeName) };


    // runtimeStatus Field Functions 
    bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
    void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
    inline string runtimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
    inline FlowRuntime& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string runtimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline FlowRuntime& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


    // supportSSEStream Field Functions 
    bool hasSupportSSEStream() const { return this->supportSSEStream_ != nullptr;};
    void deleteSupportSSEStream() { this->supportSSEStream_ = nullptr;};
    inline bool supportSSEStream() const { DARABONBA_PTR_GET_DEFAULT(supportSSEStream_, false) };
    inline FlowRuntime& setSupportSSEStream(bool supportSSEStream) { DARABONBA_PTR_SET_VALUE(supportSSEStream_, supportSSEStream) };


  protected:
    // 运行时ID
    std::shared_ptr<string> runtimeId_ = nullptr;
    // 运行时名称
    std::shared_ptr<string> runtimeName_ = nullptr;
    // 运行时状态
    std::shared_ptr<string> runtimeStatus_ = nullptr;
    // 运行时类型
    std::shared_ptr<string> runtimeType_ = nullptr;
    // 是否支持SSE
    std::shared_ptr<bool> supportSSEStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
