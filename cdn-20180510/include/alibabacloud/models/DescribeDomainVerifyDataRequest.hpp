// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVERIFYDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVERIFYDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainVerifyDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainVerifyDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GlobalResourcePlan, globalResourcePlan_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainVerifyDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GlobalResourcePlan, globalResourcePlan_);
    };
    DescribeDomainVerifyDataRequest() = default ;
    DescribeDomainVerifyDataRequest(const DescribeDomainVerifyDataRequest &) = default ;
    DescribeDomainVerifyDataRequest(DescribeDomainVerifyDataRequest &&) = default ;
    DescribeDomainVerifyDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainVerifyDataRequest() = default ;
    DescribeDomainVerifyDataRequest& operator=(const DescribeDomainVerifyDataRequest &) = default ;
    DescribeDomainVerifyDataRequest& operator=(DescribeDomainVerifyDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->globalResourcePlan_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainVerifyDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // globalResourcePlan Field Functions 
    bool hasGlobalResourcePlan() const { return this->globalResourcePlan_ != nullptr;};
    void deleteGlobalResourcePlan() { this->globalResourcePlan_ = nullptr;};
    inline string globalResourcePlan() const { DARABONBA_PTR_GET_DEFAULT(globalResourcePlan_, "") };
    inline DescribeDomainVerifyDataRequest& setGlobalResourcePlan(string globalResourcePlan) { DARABONBA_PTR_SET_VALUE(globalResourcePlan_, globalResourcePlan) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether to enable the global resource plan.
    // 
    // Valid values:
    // 
    // *   off
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> globalResourcePlan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
