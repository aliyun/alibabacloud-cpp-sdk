// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVODDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_SETVODDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetVodDomainStagingConfigResponseBodyDomainConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVodDomainStagingConfigResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, SetVodDomainStagingConfigResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    SetVodDomainStagingConfigResponseBodyDomainConfigList() = default ;
    SetVodDomainStagingConfigResponseBodyDomainConfigList(const SetVodDomainStagingConfigResponseBodyDomainConfigList &) = default ;
    SetVodDomainStagingConfigResponseBodyDomainConfigList(SetVodDomainStagingConfigResponseBodyDomainConfigList &&) = default ;
    SetVodDomainStagingConfigResponseBodyDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVodDomainStagingConfigResponseBodyDomainConfigList() = default ;
    SetVodDomainStagingConfigResponseBodyDomainConfigList& operator=(const SetVodDomainStagingConfigResponseBodyDomainConfigList &) = default ;
    SetVodDomainStagingConfigResponseBodyDomainConfigList& operator=(SetVodDomainStagingConfigResponseBodyDomainConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->domainName_ != nullptr && this->functionName_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline SetVodDomainStagingConfigResponseBodyDomainConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetVodDomainStagingConfigResponseBodyDomainConfigList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline SetVodDomainStagingConfigResponseBodyDomainConfigList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    std::shared_ptr<int64_t> configId_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
