// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainStagingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionNames, functionNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionNames, functionNames_);
    };
    DescribeDcdnDomainStagingConfigRequest() = default ;
    DescribeDcdnDomainStagingConfigRequest(const DescribeDcdnDomainStagingConfigRequest &) = default ;
    DescribeDcdnDomainStagingConfigRequest(DescribeDcdnDomainStagingConfigRequest &&) = default ;
    DescribeDcdnDomainStagingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainStagingConfigRequest() = default ;
    DescribeDcdnDomainStagingConfigRequest& operator=(const DescribeDcdnDomainStagingConfigRequest &) = default ;
    DescribeDcdnDomainStagingConfigRequest& operator=(DescribeDcdnDomainStagingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->functionNames_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainStagingConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline string getFunctionNames() const { DARABONBA_PTR_GET_DEFAULT(functionNames_, "") };
    inline DescribeDcdnDomainStagingConfigRequest& setFunctionNames(string functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };


  protected:
    // The accelerated domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The names of the features to query. You can separate multiple features with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> functionNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
