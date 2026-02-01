// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetServiceFuncStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceFuncStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceFuncStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetServiceFuncStatusResponseBody() = default ;
    GetServiceFuncStatusResponseBody(const GetServiceFuncStatusResponseBody &) = default ;
    GetServiceFuncStatusResponseBody(GetServiceFuncStatusResponseBody &&) = default ;
    GetServiceFuncStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceFuncStatusResponseBody() = default ;
    GetServiceFuncStatusResponseBody& operator=(const GetServiceFuncStatusResponseBody &) = default ;
    GetServiceFuncStatusResponseBody& operator=(GetServiceFuncStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(args, args_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(args, args_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Args : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Args& obj) { 
          DARABONBA_PTR_TO_JSON(add_cmd, addCmd_);
          DARABONBA_PTR_TO_JSON(cpu, cpu_);
          DARABONBA_PTR_TO_JSON(java_store_path, javaStorePath_);
          DARABONBA_PTR_TO_JSON(locks, locks_);
          DARABONBA_PTR_TO_JSON(loop, loop_);
          DARABONBA_PTR_TO_JSON(mem, mem_);
          DARABONBA_PTR_TO_JSON(system_profiling, systemProfiling_);
        };
        friend void from_json(const Darabonba::Json& j, Args& obj) { 
          DARABONBA_PTR_FROM_JSON(add_cmd, addCmd_);
          DARABONBA_PTR_FROM_JSON(cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(java_store_path, javaStorePath_);
          DARABONBA_PTR_FROM_JSON(locks, locks_);
          DARABONBA_PTR_FROM_JSON(loop, loop_);
          DARABONBA_PTR_FROM_JSON(mem, mem_);
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
        && this->cpu_ == nullptr && this->javaStorePath_ == nullptr && this->locks_ == nullptr && this->loop_ == nullptr && this->mem_ == nullptr
        && this->systemProfiling_ == nullptr; };
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


        // systemProfiling Field Functions 
        bool hasSystemProfiling() const { return this->systemProfiling_ != nullptr;};
        void deleteSystemProfiling() { this->systemProfiling_ = nullptr;};
        inline string getSystemProfiling() const { DARABONBA_PTR_GET_DEFAULT(systemProfiling_, "") };
        inline Args& setSystemProfiling(string systemProfiling) { DARABONBA_PTR_SET_VALUE(systemProfiling_, systemProfiling) };


      protected:
        shared_ptr<string> addCmd_ {};
        shared_ptr<string> cpu_ {};
        shared_ptr<string> javaStorePath_ {};
        shared_ptr<string> locks_ {};
        shared_ptr<int32_t> loop_ {};
        shared_ptr<string> mem_ {};
        shared_ptr<string> systemProfiling_ {};
      };

      virtual bool empty() const override { return this->args_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const Data::Args & getArgs() const { DARABONBA_PTR_GET_CONST(args_, Data::Args) };
      inline Data::Args getArgs() { DARABONBA_PTR_GET(args_, Data::Args) };
      inline Data& setArgs(const Data::Args & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline Data& setArgs(Data::Args && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    protected:
      shared_ptr<Data::Args> args_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetServiceFuncStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceFuncStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceFuncStatusResponseBody::Data) };
    inline GetServiceFuncStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceFuncStatusResponseBody::Data) };
    inline GetServiceFuncStatusResponseBody& setData(const GetServiceFuncStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceFuncStatusResponseBody& setData(GetServiceFuncStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceFuncStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceFuncStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetServiceFuncStatusResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
