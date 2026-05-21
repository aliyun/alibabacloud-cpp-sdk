// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIPLUGINSTATUS_HPP_
#define ALIBABACLOUD_MODELS_AIPLUGINSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiPluginStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiPluginStatus& obj) { 
      DARABONBA_PTR_TO_JSON(errorLogs, errorLogs_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(serviceHealthy, serviceHealthy_);
    };
    friend void from_json(const Darabonba::Json& j, AiPluginStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(errorLogs, errorLogs_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(serviceHealthy, serviceHealthy_);
    };
    AiPluginStatus() = default ;
    AiPluginStatus(const AiPluginStatus &) = default ;
    AiPluginStatus(AiPluginStatus &&) = default ;
    AiPluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiPluginStatus() = default ;
    AiPluginStatus& operator=(const AiPluginStatus &) = default ;
    AiPluginStatus& operator=(AiPluginStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pluginId_ == nullptr && this->serviceHealthy_ == nullptr; };
    // errorLogs Field Functions 
    bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
    void deleteErrorLogs() { this->errorLogs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, vector<Darabonba::Json>) };
    inline AiPluginStatus& setErrorLogs(const vector<Darabonba::Json> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
    inline AiPluginStatus& setErrorLogs(vector<Darabonba::Json> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline AiPluginStatus& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // serviceHealthy Field Functions 
    bool hasServiceHealthy() const { return this->serviceHealthy_ != nullptr;};
    void deleteServiceHealthy() { this->serviceHealthy_ = nullptr;};
    inline bool getServiceHealthy() const { DARABONBA_PTR_GET_DEFAULT(serviceHealthy_, false) };
    inline AiPluginStatus& setServiceHealthy(bool serviceHealthy) { DARABONBA_PTR_SET_VALUE(serviceHealthy_, serviceHealthy) };


  protected:
    shared_ptr<vector<Darabonba::Json>> errorLogs_ {};
    shared_ptr<string> pluginId_ {};
    shared_ptr<bool> serviceHealthy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
