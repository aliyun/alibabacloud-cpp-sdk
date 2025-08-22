// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDCDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDCDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetDcdnDomainStagingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDcdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Functions, functions_);
    };
    friend void from_json(const Darabonba::Json& j, SetDcdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
    };
    SetDcdnDomainStagingConfigRequest() = default ;
    SetDcdnDomainStagingConfigRequest(const SetDcdnDomainStagingConfigRequest &) = default ;
    SetDcdnDomainStagingConfigRequest(SetDcdnDomainStagingConfigRequest &&) = default ;
    SetDcdnDomainStagingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDcdnDomainStagingConfigRequest() = default ;
    SetDcdnDomainStagingConfigRequest& operator=(const SetDcdnDomainStagingConfigRequest &) = default ;
    SetDcdnDomainStagingConfigRequest& operator=(SetDcdnDomainStagingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->functions_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDcdnDomainStagingConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline string functions() const { DARABONBA_PTR_GET_DEFAULT(functions_, "") };
    inline SetDcdnDomainStagingConfigRequest& setFunctions(string functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };


  protected:
    // The accelerated domain name. Separate multiple accelerated domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The list of features. Format: `[{"functionArgs":[{"argName":"parameter key","argValue":"parameter value"},{"argName":"xx","argValue":"xx"}],"functionName": feature name"}]`
    // 
    // > Separate multiple parameters with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> functions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
