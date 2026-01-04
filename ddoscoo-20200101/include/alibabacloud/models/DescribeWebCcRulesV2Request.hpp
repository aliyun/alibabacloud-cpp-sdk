// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeWebCCRulesV2Request() = default ;
    DescribeWebCCRulesV2Request(const DescribeWebCCRulesV2Request &) = default ;
    DescribeWebCCRulesV2Request(DescribeWebCCRulesV2Request &&) = default ;
    DescribeWebCCRulesV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2Request() = default ;
    DescribeWebCCRulesV2Request& operator=(const DescribeWebCCRulesV2Request &) = default ;
    DescribeWebCCRulesV2Request& operator=(DescribeWebCCRulesV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->offset_ == nullptr && this->owner_ == nullptr && this->pageSize_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebCCRulesV2Request& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline DescribeWebCCRulesV2Request& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeWebCCRulesV2Request& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeWebCCRulesV2Request& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The domain name of the website that you want to add to the Anti-DDoS Proxy instance for protection.
    shared_ptr<string> domain_ {};
    // The number of entries that you want the system to skip before the system returns entries. Default value: **0**.
    shared_ptr<string> offset_ {};
    // The method used to create the rule. Valid values:
    // 
    // *   **manual** (default): manually created.
    // *   **clover**: automatically created.
    shared_ptr<string> owner_ {};
    // The number of entries per page. Maximum value: **20**. Default value: **20**.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
