// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETGRAYDOMAINFUNCTIONRESPONSEBODYDOMAINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETGRAYDOMAINFUNCTIONRESPONSEBODYDOMAINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchSetGrayDomainFunctionResponseBodyDomainConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetGrayDomainFunctionResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetGrayDomainFunctionResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    BatchSetGrayDomainFunctionResponseBodyDomainConfigList() = default ;
    BatchSetGrayDomainFunctionResponseBodyDomainConfigList(const BatchSetGrayDomainFunctionResponseBodyDomainConfigList &) = default ;
    BatchSetGrayDomainFunctionResponseBodyDomainConfigList(BatchSetGrayDomainFunctionResponseBodyDomainConfigList &&) = default ;
    BatchSetGrayDomainFunctionResponseBodyDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetGrayDomainFunctionResponseBodyDomainConfigList() = default ;
    BatchSetGrayDomainFunctionResponseBodyDomainConfigList& operator=(const BatchSetGrayDomainFunctionResponseBodyDomainConfigList &) = default ;
    BatchSetGrayDomainFunctionResponseBodyDomainConfigList& operator=(BatchSetGrayDomainFunctionResponseBodyDomainConfigList &&) = default ;
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
    inline BatchSetGrayDomainFunctionResponseBodyDomainConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline BatchSetGrayDomainFunctionResponseBodyDomainConfigList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline BatchSetGrayDomainFunctionResponseBodyDomainConfigList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    std::shared_ptr<int64_t> configId_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
