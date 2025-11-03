// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSRESPONSEBODYDATAARGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSRESPONSEBODYDATAARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetServiceFuncStatusResponseBodyDataArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceFuncStatusResponseBodyDataArgs& obj) { 
      DARABONBA_PTR_TO_JSON(add_cmd, addCmd_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(java_store_path, javaStorePath_);
      DARABONBA_PTR_TO_JSON(locks, locks_);
      DARABONBA_PTR_TO_JSON(loop, loop_);
      DARABONBA_PTR_TO_JSON(mem, mem_);
      DARABONBA_PTR_TO_JSON(system_profiling, systemProfiling_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceFuncStatusResponseBodyDataArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(add_cmd, addCmd_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(java_store_path, javaStorePath_);
      DARABONBA_PTR_FROM_JSON(locks, locks_);
      DARABONBA_PTR_FROM_JSON(loop, loop_);
      DARABONBA_PTR_FROM_JSON(mem, mem_);
      DARABONBA_PTR_FROM_JSON(system_profiling, systemProfiling_);
    };
    GetServiceFuncStatusResponseBodyDataArgs() = default ;
    GetServiceFuncStatusResponseBodyDataArgs(const GetServiceFuncStatusResponseBodyDataArgs &) = default ;
    GetServiceFuncStatusResponseBodyDataArgs(GetServiceFuncStatusResponseBodyDataArgs &&) = default ;
    GetServiceFuncStatusResponseBodyDataArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceFuncStatusResponseBodyDataArgs() = default ;
    GetServiceFuncStatusResponseBodyDataArgs& operator=(const GetServiceFuncStatusResponseBodyDataArgs &) = default ;
    GetServiceFuncStatusResponseBodyDataArgs& operator=(GetServiceFuncStatusResponseBodyDataArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCmd_ == nullptr
        && return this->cpu_ == nullptr && return this->javaStorePath_ == nullptr && return this->locks_ == nullptr && return this->loop_ == nullptr && return this->mem_ == nullptr
        && return this->systemProfiling_ == nullptr; };
    // addCmd Field Functions 
    bool hasAddCmd() const { return this->addCmd_ != nullptr;};
    void deleteAddCmd() { this->addCmd_ = nullptr;};
    inline string addCmd() const { DARABONBA_PTR_GET_DEFAULT(addCmd_, "") };
    inline GetServiceFuncStatusResponseBodyDataArgs& setAddCmd(string addCmd) { DARABONBA_PTR_SET_VALUE(addCmd_, addCmd) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline GetServiceFuncStatusResponseBodyDataArgs& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // javaStorePath Field Functions 
    bool hasJavaStorePath() const { return this->javaStorePath_ != nullptr;};
    void deleteJavaStorePath() { this->javaStorePath_ = nullptr;};
    inline string javaStorePath() const { DARABONBA_PTR_GET_DEFAULT(javaStorePath_, "") };
    inline GetServiceFuncStatusResponseBodyDataArgs& setJavaStorePath(string javaStorePath) { DARABONBA_PTR_SET_VALUE(javaStorePath_, javaStorePath) };


    // locks Field Functions 
    bool hasLocks() const { return this->locks_ != nullptr;};
    void deleteLocks() { this->locks_ = nullptr;};
    inline string locks() const { DARABONBA_PTR_GET_DEFAULT(locks_, "") };
    inline GetServiceFuncStatusResponseBodyDataArgs& setLocks(string locks) { DARABONBA_PTR_SET_VALUE(locks_, locks) };


    // loop Field Functions 
    bool hasLoop() const { return this->loop_ != nullptr;};
    void deleteLoop() { this->loop_ = nullptr;};
    inline int32_t loop() const { DARABONBA_PTR_GET_DEFAULT(loop_, 0) };
    inline GetServiceFuncStatusResponseBodyDataArgs& setLoop(int32_t loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline string mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, "") };
    inline GetServiceFuncStatusResponseBodyDataArgs& setMem(string mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // systemProfiling Field Functions 
    bool hasSystemProfiling() const { return this->systemProfiling_ != nullptr;};
    void deleteSystemProfiling() { this->systemProfiling_ = nullptr;};
    inline string systemProfiling() const { DARABONBA_PTR_GET_DEFAULT(systemProfiling_, "") };
    inline GetServiceFuncStatusResponseBodyDataArgs& setSystemProfiling(string systemProfiling) { DARABONBA_PTR_SET_VALUE(systemProfiling_, systemProfiling) };


  protected:
    std::shared_ptr<string> addCmd_ = nullptr;
    std::shared_ptr<string> cpu_ = nullptr;
    std::shared_ptr<string> javaStorePath_ = nullptr;
    std::shared_ptr<string> locks_ = nullptr;
    std::shared_ptr<int32_t> loop_ = nullptr;
    std::shared_ptr<string> mem_ = nullptr;
    std::shared_ptr<string> systemProfiling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
