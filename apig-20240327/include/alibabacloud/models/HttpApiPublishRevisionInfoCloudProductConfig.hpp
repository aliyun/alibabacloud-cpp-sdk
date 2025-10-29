// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOCLOUDPRODUCTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOCLOUDPRODUCTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfoCloudProductConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfoCloudProductConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cloudProductType, cloudProductType_);
      DARABONBA_PTR_TO_JSON(containerServiceConfigs, containerServiceConfigs_);
      DARABONBA_PTR_TO_JSON(functionConfigs, functionConfigs_);
      DARABONBA_PTR_TO_JSON(mseNacosConfigs, mseNacosConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfoCloudProductConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cloudProductType, cloudProductType_);
      DARABONBA_PTR_FROM_JSON(containerServiceConfigs, containerServiceConfigs_);
      DARABONBA_PTR_FROM_JSON(functionConfigs, functionConfigs_);
      DARABONBA_PTR_FROM_JSON(mseNacosConfigs, mseNacosConfigs_);
    };
    HttpApiPublishRevisionInfoCloudProductConfig() = default ;
    HttpApiPublishRevisionInfoCloudProductConfig(const HttpApiPublishRevisionInfoCloudProductConfig &) = default ;
    HttpApiPublishRevisionInfoCloudProductConfig(HttpApiPublishRevisionInfoCloudProductConfig &&) = default ;
    HttpApiPublishRevisionInfoCloudProductConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfoCloudProductConfig() = default ;
    HttpApiPublishRevisionInfoCloudProductConfig& operator=(const HttpApiPublishRevisionInfoCloudProductConfig &) = default ;
    HttpApiPublishRevisionInfoCloudProductConfig& operator=(HttpApiPublishRevisionInfoCloudProductConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudProductType_ == nullptr
        && return this->containerServiceConfigs_ == nullptr && return this->functionConfigs_ == nullptr && return this->mseNacosConfigs_ == nullptr; };
    // cloudProductType Field Functions 
    bool hasCloudProductType() const { return this->cloudProductType_ != nullptr;};
    void deleteCloudProductType() { this->cloudProductType_ = nullptr;};
    inline string cloudProductType() const { DARABONBA_PTR_GET_DEFAULT(cloudProductType_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setCloudProductType(string cloudProductType) { DARABONBA_PTR_SET_VALUE(cloudProductType_, cloudProductType) };


    // containerServiceConfigs Field Functions 
    bool hasContainerServiceConfigs() const { return this->containerServiceConfigs_ != nullptr;};
    void deleteContainerServiceConfigs() { this->containerServiceConfigs_ = nullptr;};
    inline const vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs> & containerServiceConfigs() const { DARABONBA_PTR_GET_CONST(containerServiceConfigs_, vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>) };
    inline vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs> containerServiceConfigs() { DARABONBA_PTR_GET(containerServiceConfigs_, vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>) };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setContainerServiceConfigs(const vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs> & containerServiceConfigs) { DARABONBA_PTR_SET_VALUE(containerServiceConfigs_, containerServiceConfigs) };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setContainerServiceConfigs(vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs> && containerServiceConfigs) { DARABONBA_PTR_SET_RVALUE(containerServiceConfigs_, containerServiceConfigs) };


    // functionConfigs Field Functions 
    bool hasFunctionConfigs() const { return this->functionConfigs_ != nullptr;};
    void deleteFunctionConfigs() { this->functionConfigs_ = nullptr;};
    inline const vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs> & functionConfigs() const { DARABONBA_PTR_GET_CONST(functionConfigs_, vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>) };
    inline vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs> functionConfigs() { DARABONBA_PTR_GET(functionConfigs_, vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>) };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setFunctionConfigs(const vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs> & functionConfigs) { DARABONBA_PTR_SET_VALUE(functionConfigs_, functionConfigs) };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setFunctionConfigs(vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs> && functionConfigs) { DARABONBA_PTR_SET_RVALUE(functionConfigs_, functionConfigs) };


    // mseNacosConfigs Field Functions 
    bool hasMseNacosConfigs() const { return this->mseNacosConfigs_ != nullptr;};
    void deleteMseNacosConfigs() { this->mseNacosConfigs_ = nullptr;};
    inline const vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs> & mseNacosConfigs() const { DARABONBA_PTR_GET_CONST(mseNacosConfigs_, vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>) };
    inline vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs> mseNacosConfigs() { DARABONBA_PTR_GET(mseNacosConfigs_, vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>) };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setMseNacosConfigs(const vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs> & mseNacosConfigs) { DARABONBA_PTR_SET_VALUE(mseNacosConfigs_, mseNacosConfigs) };
    inline HttpApiPublishRevisionInfoCloudProductConfig& setMseNacosConfigs(vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs> && mseNacosConfigs) { DARABONBA_PTR_SET_RVALUE(mseNacosConfigs_, mseNacosConfigs) };


  protected:
    std::shared_ptr<string> cloudProductType_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>> containerServiceConfigs_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>> functionConfigs_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>> mseNacosConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
