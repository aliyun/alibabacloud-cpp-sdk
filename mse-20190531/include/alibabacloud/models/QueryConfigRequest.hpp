// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedRunningConf, needRunningConf_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedRunningConf, needRunningConf_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    QueryConfigRequest() = default ;
    QueryConfigRequest(const QueryConfigRequest &) = default ;
    QueryConfigRequest(QueryConfigRequest &&) = default ;
    QueryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConfigRequest() = default ;
    QueryConfigRequest& operator=(const QueryConfigRequest &) = default ;
    QueryConfigRequest& operator=(QueryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterId_ == nullptr && return this->configType_ == nullptr && return this->instanceId_ == nullptr && return this->needRunningConf_ == nullptr && return this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QueryConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QueryConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline QueryConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needRunningConf Field Functions 
    bool hasNeedRunningConf() const { return this->needRunningConf_ != nullptr;};
    void deleteNeedRunningConf() { this->needRunningConf_ = nullptr;};
    inline bool needRunningConf() const { DARABONBA_PTR_GET_DEFAULT(needRunningConf_, false) };
    inline QueryConfigRequest& setNeedRunningConf(bool needRunningConf) { DARABONBA_PTR_SET_VALUE(needRunningConf_, needRunningConf) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline QueryConfigRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> configType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether runtime configurations are required.
    std::shared_ptr<bool> needRunningConf_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
