// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnDomainStagingConfigResponseBodyDomainConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainStagingConfigResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainStagingConfigResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    SetCdnDomainStagingConfigResponseBodyDomainConfigList() = default ;
    SetCdnDomainStagingConfigResponseBodyDomainConfigList(const SetCdnDomainStagingConfigResponseBodyDomainConfigList &) = default ;
    SetCdnDomainStagingConfigResponseBodyDomainConfigList(SetCdnDomainStagingConfigResponseBodyDomainConfigList &&) = default ;
    SetCdnDomainStagingConfigResponseBodyDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainStagingConfigResponseBodyDomainConfigList() = default ;
    SetCdnDomainStagingConfigResponseBodyDomainConfigList& operator=(const SetCdnDomainStagingConfigResponseBodyDomainConfigList &) = default ;
    SetCdnDomainStagingConfigResponseBodyDomainConfigList& operator=(SetCdnDomainStagingConfigResponseBodyDomainConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->domainName_ == nullptr && return this->functionName_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline SetCdnDomainStagingConfigResponseBodyDomainConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetCdnDomainStagingConfigResponseBodyDomainConfigList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline SetCdnDomainStagingConfigResponseBodyDomainConfigList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The ID of the configuration.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
