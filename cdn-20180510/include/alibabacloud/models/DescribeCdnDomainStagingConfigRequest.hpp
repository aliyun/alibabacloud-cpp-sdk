// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainStagingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionNames, functionNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionNames, functionNames_);
    };
    DescribeCdnDomainStagingConfigRequest() = default ;
    DescribeCdnDomainStagingConfigRequest(const DescribeCdnDomainStagingConfigRequest &) = default ;
    DescribeCdnDomainStagingConfigRequest(DescribeCdnDomainStagingConfigRequest &&) = default ;
    DescribeCdnDomainStagingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainStagingConfigRequest() = default ;
    DescribeCdnDomainStagingConfigRequest& operator=(const DescribeCdnDomainStagingConfigRequest &) = default ;
    DescribeCdnDomainStagingConfigRequest& operator=(DescribeCdnDomainStagingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->functionNames_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDomainStagingConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline string functionNames() const { DARABONBA_PTR_GET_DEFAULT(functionNames_, "") };
    inline DescribeCdnDomainStagingConfigRequest& setFunctionNames(string functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The list of feature names. Separate multiple values with commas (,). For more information, see [A list of features](https://help.aliyun.com/document_detail/388460.html).
    std::shared_ptr<string> functionNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
