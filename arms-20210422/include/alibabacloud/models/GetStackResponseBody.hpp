// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInfo, stackInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInfo, stackInfo_);
    };
    GetStackResponseBody() = default ;
    GetStackResponseBody(const GetStackResponseBody &) = default ;
    GetStackResponseBody(GetStackResponseBody &&) = default ;
    GetStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBody() = default ;
    GetStackResponseBody& operator=(const GetStackResponseBody &) = default ;
    GetStackResponseBody& operator=(GetStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Api, api_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Exception, exception_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(Line, line_);
        DARABONBA_PTR_TO_JSON(RpcId, rpcId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, StackInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Api, api_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Exception, exception_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(Line, line_);
        DARABONBA_PTR_FROM_JSON(RpcId, rpcId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      StackInfo() = default ;
      StackInfo(const StackInfo &) = default ;
      StackInfo(StackInfo &&) = default ;
      StackInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackInfo() = default ;
      StackInfo& operator=(const StackInfo &) = default ;
      StackInfo& operator=(StackInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExtInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Info, info_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ExtInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Info, info_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ExtInfo() = default ;
        ExtInfo(const ExtInfo &) = default ;
        ExtInfo(ExtInfo &&) = default ;
        ExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtInfo() = default ;
        ExtInfo& operator=(const ExtInfo &) = default ;
        ExtInfo& operator=(ExtInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->info_ == nullptr
        && this->type_ == nullptr; };
        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
        inline ExtInfo& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ExtInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> info_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->api_ == nullptr
        && this->duration_ == nullptr && this->exception_ == nullptr && this->extInfo_ == nullptr && this->line_ == nullptr && this->rpcId_ == nullptr
        && this->serviceName_ == nullptr && this->startTime_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
      inline StackInfo& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline StackInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // exception Field Functions 
      bool hasException() const { return this->exception_ != nullptr;};
      void deleteException() { this->exception_ = nullptr;};
      inline string getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
      inline StackInfo& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline const StackInfo::ExtInfo & getExtInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, StackInfo::ExtInfo) };
      inline StackInfo::ExtInfo getExtInfo() { DARABONBA_PTR_GET(extInfo_, StackInfo::ExtInfo) };
      inline StackInfo& setExtInfo(const StackInfo::ExtInfo & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
      inline StackInfo& setExtInfo(StackInfo::ExtInfo && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
      inline StackInfo& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


      // rpcId Field Functions 
      bool hasRpcId() const { return this->rpcId_ != nullptr;};
      void deleteRpcId() { this->rpcId_ = nullptr;};
      inline string getRpcId() const { DARABONBA_PTR_GET_DEFAULT(rpcId_, "") };
      inline StackInfo& setRpcId(string rpcId) { DARABONBA_PTR_SET_VALUE(rpcId_, rpcId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline StackInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline StackInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> api_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> exception_ {};
      shared_ptr<StackInfo::ExtInfo> extInfo_ {};
      shared_ptr<string> line_ {};
      shared_ptr<string> rpcId_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stackInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInfo Field Functions 
    bool hasStackInfo() const { return this->stackInfo_ != nullptr;};
    void deleteStackInfo() { this->stackInfo_ = nullptr;};
    inline const vector<GetStackResponseBody::StackInfo> & getStackInfo() const { DARABONBA_PTR_GET_CONST(stackInfo_, vector<GetStackResponseBody::StackInfo>) };
    inline vector<GetStackResponseBody::StackInfo> getStackInfo() { DARABONBA_PTR_GET(stackInfo_, vector<GetStackResponseBody::StackInfo>) };
    inline GetStackResponseBody& setStackInfo(const vector<GetStackResponseBody::StackInfo> & stackInfo) { DARABONBA_PTR_SET_VALUE(stackInfo_, stackInfo) };
    inline GetStackResponseBody& setStackInfo(vector<GetStackResponseBody::StackInfo> && stackInfo) { DARABONBA_PTR_SET_RVALUE(stackInfo_, stackInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetStackResponseBody::StackInfo>> stackInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
