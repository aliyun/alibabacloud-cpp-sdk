// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InvokeDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
    };
    InvokeDiagnosisRequest() = default ;
    InvokeDiagnosisRequest(const InvokeDiagnosisRequest &) = default ;
    InvokeDiagnosisRequest(InvokeDiagnosisRequest &&) = default ;
    InvokeDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeDiagnosisRequest() = default ;
    InvokeDiagnosisRequest& operator=(const InvokeDiagnosisRequest &) = default ;
    InvokeDiagnosisRequest& operator=(InvokeDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && return this->params_ == nullptr && return this->serviceName_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline InvokeDiagnosisRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline InvokeDiagnosisRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline InvokeDiagnosisRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> params_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
