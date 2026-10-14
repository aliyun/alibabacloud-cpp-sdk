// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIFGANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIFGANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAifgAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAifgAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, StartAifgAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    StartAifgAnalysisRequest() = default ;
    StartAifgAnalysisRequest(const StartAifgAnalysisRequest &) = default ;
    StartAifgAnalysisRequest(StartAifgAnalysisRequest &&) = default ;
    StartAifgAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAifgAnalysisRequest() = default ;
    StartAifgAnalysisRequest& operator=(const StartAifgAnalysisRequest &) = default ;
    StartAifgAnalysisRequest& operator=(StartAifgAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->params_ == nullptr && this->region_ == nullptr && this->serviceName_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline StartAifgAnalysisRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline StartAifgAnalysisRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StartAifgAnalysisRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline StartAifgAnalysisRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The channel type.
    // 
    // This parameter is required.
    shared_ptr<string> channel_ {};
    // The additional information.
    // 
    // This parameter is required.
    shared_ptr<string> params_ {};
    // The region information.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The service name.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
