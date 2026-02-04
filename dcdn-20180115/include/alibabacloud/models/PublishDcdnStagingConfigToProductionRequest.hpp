// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHDCDNSTAGINGCONFIGTOPRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHDCDNSTAGINGCONFIGTOPRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PublishDcdnStagingConfigToProductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishDcdnStagingConfigToProductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, PublishDcdnStagingConfigToProductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    PublishDcdnStagingConfigToProductionRequest() = default ;
    PublishDcdnStagingConfigToProductionRequest(const PublishDcdnStagingConfigToProductionRequest &) = default ;
    PublishDcdnStagingConfigToProductionRequest(PublishDcdnStagingConfigToProductionRequest &&) = default ;
    PublishDcdnStagingConfigToProductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishDcdnStagingConfigToProductionRequest() = default ;
    PublishDcdnStagingConfigToProductionRequest& operator=(const PublishDcdnStagingConfigToProductionRequest &) = default ;
    PublishDcdnStagingConfigToProductionRequest& operator=(PublishDcdnStagingConfigToProductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->functionName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline PublishDcdnStagingConfigToProductionRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline PublishDcdnStagingConfigToProductionRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The name of the feature.
    // 
    // This parameter is required.
    shared_ptr<string> functionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
