// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGLISTDOMAINCONFIGMODEL_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGLISTDOMAINCONFIGMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel() = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel(const BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel &) = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel(BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel &&) = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel() = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& operator=(const BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel &) = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& operator=(BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel &&) = default ;
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
    inline BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


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
} // namespace Dcdn20180115
#endif
