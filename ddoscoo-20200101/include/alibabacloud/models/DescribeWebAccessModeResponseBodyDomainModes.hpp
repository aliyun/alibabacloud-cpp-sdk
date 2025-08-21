// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODERESPONSEBODYDOMAINMODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODERESPONSEBODYDOMAINMODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessModeResponseBodyDomainModes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessModeResponseBodyDomainModes& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessModeResponseBodyDomainModes& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeWebAccessModeResponseBodyDomainModes() = default ;
    DescribeWebAccessModeResponseBodyDomainModes(const DescribeWebAccessModeResponseBodyDomainModes &) = default ;
    DescribeWebAccessModeResponseBodyDomainModes(DescribeWebAccessModeResponseBodyDomainModes &&) = default ;
    DescribeWebAccessModeResponseBodyDomainModes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessModeResponseBodyDomainModes() = default ;
    DescribeWebAccessModeResponseBodyDomainModes& operator=(const DescribeWebAccessModeResponseBodyDomainModes &) = default ;
    DescribeWebAccessModeResponseBodyDomainModes& operator=(DescribeWebAccessModeResponseBodyDomainModes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessMode_ != nullptr
        && this->domain_ != nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline int32_t accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, 0) };
    inline DescribeWebAccessModeResponseBodyDomainModes& setAccessMode(int32_t accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebAccessModeResponseBodyDomainModes& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The mode in which the website service is added. Valid values:
    // 
    // *   **0**: A record
    // *   **1**: anti-DDoS mode
    // *   **2**: origin redundancy mode
    std::shared_ptr<int32_t> accessMode_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
