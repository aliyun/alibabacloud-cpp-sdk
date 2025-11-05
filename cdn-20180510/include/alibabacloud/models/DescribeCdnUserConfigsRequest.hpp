// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    DescribeCdnUserConfigsRequest() = default ;
    DescribeCdnUserConfigsRequest(const DescribeCdnUserConfigsRequest &) = default ;
    DescribeCdnUserConfigsRequest(DescribeCdnUserConfigsRequest &&) = default ;
    DescribeCdnUserConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserConfigsRequest() = default ;
    DescribeCdnUserConfigsRequest& operator=(const DescribeCdnUserConfigsRequest &) = default ;
    DescribeCdnUserConfigsRequest& operator=(DescribeCdnUserConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeCdnUserConfigsRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The configuration that you want to query. Valid values:
    // 
    // *   **domain_business_control**: user configurations
    // *   **waf**: Web Application Firewall (WAF) configurations
    // 
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
