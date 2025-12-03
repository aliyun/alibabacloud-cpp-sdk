// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYCUSTOMDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYCUSTOMDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiGroupResponseBodyCustomDomainsDomainItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupResponseBodyCustomDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupResponseBodyCustomDomains& obj) { 
      DARABONBA_PTR_TO_JSON(DomainItem, domainItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupResponseBodyCustomDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainItem, domainItem_);
    };
    DescribeApiGroupResponseBodyCustomDomains() = default ;
    DescribeApiGroupResponseBodyCustomDomains(const DescribeApiGroupResponseBodyCustomDomains &) = default ;
    DescribeApiGroupResponseBodyCustomDomains(DescribeApiGroupResponseBodyCustomDomains &&) = default ;
    DescribeApiGroupResponseBodyCustomDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupResponseBodyCustomDomains() = default ;
    DescribeApiGroupResponseBodyCustomDomains& operator=(const DescribeApiGroupResponseBodyCustomDomains &) = default ;
    DescribeApiGroupResponseBodyCustomDomains& operator=(DescribeApiGroupResponseBodyCustomDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainItem_ == nullptr; };
    // domainItem Field Functions 
    bool hasDomainItem() const { return this->domainItem_ != nullptr;};
    void deleteDomainItem() { this->domainItem_ = nullptr;};
    inline const vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem> & domainItem() const { DARABONBA_PTR_GET_CONST(domainItem_, vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem>) };
    inline vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem> domainItem() { DARABONBA_PTR_GET(domainItem_, vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem>) };
    inline DescribeApiGroupResponseBodyCustomDomains& setDomainItem(const vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem> & domainItem) { DARABONBA_PTR_SET_VALUE(domainItem_, domainItem) };
    inline DescribeApiGroupResponseBodyCustomDomains& setDomainItem(vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem> && domainItem) { DARABONBA_PTR_SET_RVALUE(domainItem_, domainItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiGroupResponseBodyCustomDomainsDomainItem>> domainItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
