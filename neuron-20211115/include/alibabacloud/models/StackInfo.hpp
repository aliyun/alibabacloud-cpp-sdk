// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STACKINFO_HPP_
#define ALIBABACLOUD_MODELS_STACKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StackInfoExtInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class StackInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StackInfo& obj) { 
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(exception, exception_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(line, line_);
      DARABONBA_PTR_TO_JSON(rpcId, rpcId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, StackInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(exception, exception_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(line, line_);
      DARABONBA_PTR_FROM_JSON(rpcId, rpcId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
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
    inline const StackInfoExtInfo & getExtInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, StackInfoExtInfo) };
    inline StackInfoExtInfo getExtInfo() { DARABONBA_PTR_GET(extInfo_, StackInfoExtInfo) };
    inline StackInfo& setExtInfo(const StackInfoExtInfo & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline StackInfo& setExtInfo(StackInfoExtInfo && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


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
    shared_ptr<StackInfoExtInfo> extInfo_ {};
    shared_ptr<string> line_ {};
    shared_ptr<string> rpcId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
