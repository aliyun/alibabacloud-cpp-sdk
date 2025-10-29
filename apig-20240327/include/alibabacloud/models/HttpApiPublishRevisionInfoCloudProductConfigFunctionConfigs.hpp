// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOCLOUDPRODUCTCONFIGFUNCTIONCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOCLOUDPRODUCTCONFIGFUNCTIONCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs() = default ;
    HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs(const HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs &) = default ;
    HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs(HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs &&) = default ;
    HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs() = default ;
    HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& operator=(const HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs &) = default ;
    HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& operator=(HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && return this->match_ == nullptr && return this->name_ == nullptr && return this->qualifier_ == nullptr && return this->weight_ == nullptr; };
    // gatewayServiceId Field Functions 
    bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
    void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
    inline string gatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpApiBackendMatchConditions & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpApiBackendMatchConditions) };
    inline Models::HttpApiBackendMatchConditions match() { DARABONBA_PTR_GET(match_, Models::HttpApiBackendMatchConditions) };
    inline HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& setMatch(const Models::HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& setMatch(Models::HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> gatewayServiceId_ = nullptr;
    std::shared_ptr<Models::HttpApiBackendMatchConditions> match_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
