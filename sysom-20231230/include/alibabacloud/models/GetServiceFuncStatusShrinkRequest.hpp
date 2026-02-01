// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetServiceFuncStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceFuncStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(params, paramsShrink_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceFuncStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(params, paramsShrink_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
    };
    GetServiceFuncStatusShrinkRequest() = default ;
    GetServiceFuncStatusShrinkRequest(const GetServiceFuncStatusShrinkRequest &) = default ;
    GetServiceFuncStatusShrinkRequest(GetServiceFuncStatusShrinkRequest &&) = default ;
    GetServiceFuncStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceFuncStatusShrinkRequest() = default ;
    GetServiceFuncStatusShrinkRequest& operator=(const GetServiceFuncStatusShrinkRequest &) = default ;
    GetServiceFuncStatusShrinkRequest& operator=(GetServiceFuncStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->paramsShrink_ == nullptr && this->serviceName_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetServiceFuncStatusShrinkRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline GetServiceFuncStatusShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceFuncStatusShrinkRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> channel_ {};
    // This parameter is required.
    shared_ptr<string> paramsShrink_ {};
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
