// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTEENVIRONMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTEENVIRONMENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpRouteEnvironmentInfoGatewayInfo.hpp>
#include <vector>
#include <alibabacloud/models/HttpRouteEnvironmentInfoSubDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRouteEnvironmentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRouteEnvironmentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRouteEnvironmentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
    };
    HttpRouteEnvironmentInfo() = default ;
    HttpRouteEnvironmentInfo(const HttpRouteEnvironmentInfo &) = default ;
    HttpRouteEnvironmentInfo(HttpRouteEnvironmentInfo &&) = default ;
    HttpRouteEnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRouteEnvironmentInfo() = default ;
    HttpRouteEnvironmentInfo& operator=(const HttpRouteEnvironmentInfo &) = default ;
    HttpRouteEnvironmentInfo& operator=(HttpRouteEnvironmentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->environmentId_ == nullptr && return this->gatewayInfo_ == nullptr && return this->name_ == nullptr && return this->subDomains_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline HttpRouteEnvironmentInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpRouteEnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const Models::HttpRouteEnvironmentInfoGatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Models::HttpRouteEnvironmentInfoGatewayInfo) };
    inline Models::HttpRouteEnvironmentInfoGatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Models::HttpRouteEnvironmentInfoGatewayInfo) };
    inline HttpRouteEnvironmentInfo& setGatewayInfo(const Models::HttpRouteEnvironmentInfoGatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline HttpRouteEnvironmentInfo& setGatewayInfo(Models::HttpRouteEnvironmentInfoGatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpRouteEnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subDomains Field Functions 
    bool hasSubDomains() const { return this->subDomains_ != nullptr;};
    void deleteSubDomains() { this->subDomains_ = nullptr;};
    inline const vector<Models::HttpRouteEnvironmentInfoSubDomains> & subDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<Models::HttpRouteEnvironmentInfoSubDomains>) };
    inline vector<Models::HttpRouteEnvironmentInfoSubDomains> subDomains() { DARABONBA_PTR_GET(subDomains_, vector<Models::HttpRouteEnvironmentInfoSubDomains>) };
    inline HttpRouteEnvironmentInfo& setSubDomains(const vector<Models::HttpRouteEnvironmentInfoSubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
    inline HttpRouteEnvironmentInfo& setSubDomains(vector<Models::HttpRouteEnvironmentInfoSubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


  protected:
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<Models::HttpRouteEnvironmentInfoGatewayInfo> gatewayInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::HttpRouteEnvironmentInfoSubDomains>> subDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
