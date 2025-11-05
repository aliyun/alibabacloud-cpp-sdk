// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnDomainStagingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Functions, functions_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
    };
    SetCdnDomainStagingConfigRequest() = default ;
    SetCdnDomainStagingConfigRequest(const SetCdnDomainStagingConfigRequest &) = default ;
    SetCdnDomainStagingConfigRequest(SetCdnDomainStagingConfigRequest &&) = default ;
    SetCdnDomainStagingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainStagingConfigRequest() = default ;
    SetCdnDomainStagingConfigRequest& operator=(const SetCdnDomainStagingConfigRequest &) = default ;
    SetCdnDomainStagingConfigRequest& operator=(SetCdnDomainStagingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->functions_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetCdnDomainStagingConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline string functions() const { DARABONBA_PTR_GET_DEFAULT(functions_, "") };
    inline SetCdnDomainStagingConfigRequest& setFunctions(string functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };


  protected:
    // The accelerated domain name. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The features that you want to configure. Format:
    // 
    // > *   **functionName**: The name of the feature. Separate multiple values with commas (,). For more information, see [A list of features](https://help.aliyun.com/document_detail/388460.html).
    // >*   **argName**: The feature parameters for **functionName**.
    // >*   **argValue**: The parameter values set for **functionName**.
    // 
    //         [
    //          {
    //            "functionArgs": [
    //             {
    //              "argName": "Parameter A", 
    //              "argValue": "Value of Parameter A"
    //             }, 
    //           {
    //             "argName": "Parameter B", 
    //             "argValue": "Value of Parameter B"
    //              }
    //          ], 
    //          "functionName": "Feature name"
    //             }
    //         ]
    // 
    // This parameter is required.
    std::shared_ptr<string> functions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
