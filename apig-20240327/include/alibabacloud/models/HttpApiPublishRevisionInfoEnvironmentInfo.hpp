// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOENVIRONMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOENVIRONMENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfoEnvironmentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfoEnvironmentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfoEnvironmentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    HttpApiPublishRevisionInfoEnvironmentInfo() = default ;
    HttpApiPublishRevisionInfoEnvironmentInfo(const HttpApiPublishRevisionInfoEnvironmentInfo &) = default ;
    HttpApiPublishRevisionInfoEnvironmentInfo(HttpApiPublishRevisionInfoEnvironmentInfo &&) = default ;
    HttpApiPublishRevisionInfoEnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfoEnvironmentInfo() = default ;
    HttpApiPublishRevisionInfoEnvironmentInfo& operator=(const HttpApiPublishRevisionInfoEnvironmentInfo &) = default ;
    HttpApiPublishRevisionInfoEnvironmentInfo& operator=(HttpApiPublishRevisionInfoEnvironmentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->environmentId_ == nullptr && return this->gatewayInfo_ == nullptr && return this->name_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline HttpApiPublishRevisionInfoEnvironmentInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiPublishRevisionInfoEnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo) };
    inline Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo) };
    inline HttpApiPublishRevisionInfoEnvironmentInfo& setGatewayInfo(const Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline HttpApiPublishRevisionInfoEnvironmentInfo& setGatewayInfo(Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiPublishRevisionInfoEnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<Models::HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo> gatewayInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
