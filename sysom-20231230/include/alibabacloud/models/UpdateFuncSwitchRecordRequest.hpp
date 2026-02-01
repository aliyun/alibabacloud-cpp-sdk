// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCSWITCHRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCSWITCHRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateFuncSwitchRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFuncSwitchRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFuncSwitchRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
    };
    UpdateFuncSwitchRecordRequest() = default ;
    UpdateFuncSwitchRecordRequest(const UpdateFuncSwitchRecordRequest &) = default ;
    UpdateFuncSwitchRecordRequest(UpdateFuncSwitchRecordRequest &&) = default ;
    UpdateFuncSwitchRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFuncSwitchRecordRequest() = default ;
    UpdateFuncSwitchRecordRequest& operator=(const UpdateFuncSwitchRecordRequest &) = default ;
    UpdateFuncSwitchRecordRequest& operator=(UpdateFuncSwitchRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(args, args_);
        DARABONBA_PTR_TO_JSON(function_name, functionName_);
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(op, op_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(args, args_);
        DARABONBA_PTR_FROM_JSON(function_name, functionName_);
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(op, op_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Args : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Args& obj) { 
          DARABONBA_PTR_TO_JSON(add_cmd, addCmd_);
          DARABONBA_PTR_TO_JSON(cpu, cpu_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(java_store_path, javaStorePath_);
          DARABONBA_PTR_TO_JSON(locks, locks_);
          DARABONBA_PTR_TO_JSON(loop, loop_);
          DARABONBA_PTR_TO_JSON(mem, mem_);
          DARABONBA_PTR_TO_JSON(pid, pid_);
          DARABONBA_PTR_TO_JSON(system_profiling, systemProfiling_);
        };
        friend void from_json(const Darabonba::Json& j, Args& obj) { 
          DARABONBA_PTR_FROM_JSON(add_cmd, addCmd_);
          DARABONBA_PTR_FROM_JSON(cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(java_store_path, javaStorePath_);
          DARABONBA_PTR_FROM_JSON(locks, locks_);
          DARABONBA_PTR_FROM_JSON(loop, loop_);
          DARABONBA_PTR_FROM_JSON(mem, mem_);
          DARABONBA_PTR_FROM_JSON(pid, pid_);
          DARABONBA_PTR_FROM_JSON(system_profiling, systemProfiling_);
        };
        Args() = default ;
        Args(const Args &) = default ;
        Args(Args &&) = default ;
        Args(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Args() = default ;
        Args& operator=(const Args &) = default ;
        Args& operator=(Args &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addCmd_ == nullptr
        && this->cpu_ == nullptr && this->duration_ == nullptr && this->javaStorePath_ == nullptr && this->locks_ == nullptr && this->loop_ == nullptr
        && this->mem_ == nullptr && this->pid_ == nullptr && this->systemProfiling_ == nullptr; };
        // addCmd Field Functions 
        bool hasAddCmd() const { return this->addCmd_ != nullptr;};
        void deleteAddCmd() { this->addCmd_ = nullptr;};
        inline string getAddCmd() const { DARABONBA_PTR_GET_DEFAULT(addCmd_, "") };
        inline Args& setAddCmd(string addCmd) { DARABONBA_PTR_SET_VALUE(addCmd_, addCmd) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
        inline Args& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline Args& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // javaStorePath Field Functions 
        bool hasJavaStorePath() const { return this->javaStorePath_ != nullptr;};
        void deleteJavaStorePath() { this->javaStorePath_ = nullptr;};
        inline string getJavaStorePath() const { DARABONBA_PTR_GET_DEFAULT(javaStorePath_, "") };
        inline Args& setJavaStorePath(string javaStorePath) { DARABONBA_PTR_SET_VALUE(javaStorePath_, javaStorePath) };


        // locks Field Functions 
        bool hasLocks() const { return this->locks_ != nullptr;};
        void deleteLocks() { this->locks_ = nullptr;};
        inline string getLocks() const { DARABONBA_PTR_GET_DEFAULT(locks_, "") };
        inline Args& setLocks(string locks) { DARABONBA_PTR_SET_VALUE(locks_, locks) };


        // loop Field Functions 
        bool hasLoop() const { return this->loop_ != nullptr;};
        void deleteLoop() { this->loop_ = nullptr;};
        inline int32_t getLoop() const { DARABONBA_PTR_GET_DEFAULT(loop_, 0) };
        inline Args& setLoop(int32_t loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline string getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, "") };
        inline Args& setMem(string mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


        // pid Field Functions 
        bool hasPid() const { return this->pid_ != nullptr;};
        void deletePid() { this->pid_ = nullptr;};
        inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
        inline Args& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


        // systemProfiling Field Functions 
        bool hasSystemProfiling() const { return this->systemProfiling_ != nullptr;};
        void deleteSystemProfiling() { this->systemProfiling_ = nullptr;};
        inline string getSystemProfiling() const { DARABONBA_PTR_GET_DEFAULT(systemProfiling_, "") };
        inline Args& setSystemProfiling(string systemProfiling) { DARABONBA_PTR_SET_VALUE(systemProfiling_, systemProfiling) };


      protected:
        shared_ptr<string> addCmd_ {};
        shared_ptr<string> cpu_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> javaStorePath_ {};
        shared_ptr<string> locks_ {};
        shared_ptr<int32_t> loop_ {};
        shared_ptr<string> mem_ {};
        shared_ptr<int32_t> pid_ {};
        shared_ptr<string> systemProfiling_ {};
      };

      virtual bool empty() const override { return this->args_ == nullptr
        && this->functionName_ == nullptr && this->instance_ == nullptr && this->op_ == nullptr && this->region_ == nullptr && this->uid_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const Params::Args & getArgs() const { DARABONBA_PTR_GET_CONST(args_, Params::Args) };
      inline Params::Args getArgs() { DARABONBA_PTR_GET(args_, Params::Args) };
      inline Params& setArgs(const Params::Args & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline Params& setArgs(Params::Args && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Params& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Params& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline Params& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Params& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Params& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      shared_ptr<Params::Args> args_ {};
      // This parameter is required.
      shared_ptr<string> functionName_ {};
      shared_ptr<string> instance_ {};
      shared_ptr<string> op_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->channel_ == nullptr
        && this->params_ == nullptr && this->serviceName_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline UpdateFuncSwitchRecordRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const UpdateFuncSwitchRecordRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, UpdateFuncSwitchRecordRequest::Params) };
    inline UpdateFuncSwitchRecordRequest::Params getParams() { DARABONBA_PTR_GET(params_, UpdateFuncSwitchRecordRequest::Params) };
    inline UpdateFuncSwitchRecordRequest& setParams(const UpdateFuncSwitchRecordRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline UpdateFuncSwitchRecordRequest& setParams(UpdateFuncSwitchRecordRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateFuncSwitchRecordRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> channel_ {};
    // This parameter is required.
    shared_ptr<UpdateFuncSwitchRecordRequest::Params> params_ {};
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
