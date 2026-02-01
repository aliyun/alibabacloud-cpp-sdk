// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetServiceFuncStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceFuncStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceFuncStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
    };
    GetServiceFuncStatusRequest() = default ;
    GetServiceFuncStatusRequest(const GetServiceFuncStatusRequest &) = default ;
    GetServiceFuncStatusRequest(GetServiceFuncStatusRequest &&) = default ;
    GetServiceFuncStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceFuncStatusRequest() = default ;
    GetServiceFuncStatusRequest& operator=(const GetServiceFuncStatusRequest &) = default ;
    GetServiceFuncStatusRequest& operator=(GetServiceFuncStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(function_name, functionName_);
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(function_name, functionName_);
        DARABONBA_PTR_FROM_JSON(instance, instance_);
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
      virtual bool empty() const override { return this->functionName_ == nullptr
        && this->instance_ == nullptr && this->uid_ == nullptr; };
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


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Params& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // This parameter is required.
      shared_ptr<string> functionName_ {};
      shared_ptr<string> instance_ {};
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->channel_ == nullptr
        && this->params_ == nullptr && this->serviceName_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetServiceFuncStatusRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const GetServiceFuncStatusRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, GetServiceFuncStatusRequest::Params) };
    inline GetServiceFuncStatusRequest::Params getParams() { DARABONBA_PTR_GET(params_, GetServiceFuncStatusRequest::Params) };
    inline GetServiceFuncStatusRequest& setParams(const GetServiceFuncStatusRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetServiceFuncStatusRequest& setParams(GetServiceFuncStatusRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceFuncStatusRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> channel_ {};
    // This parameter is required.
    shared_ptr<GetServiceFuncStatusRequest::Params> params_ {};
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
