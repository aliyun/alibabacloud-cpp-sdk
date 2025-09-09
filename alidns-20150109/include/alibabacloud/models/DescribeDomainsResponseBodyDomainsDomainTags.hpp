// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSDOMAINTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSDOMAINTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsDomainTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsDomainTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsDomainTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsDomainTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDomainsResponseBodyDomainsDomainTags() = default ;
    DescribeDomainsResponseBodyDomainsDomainTags(const DescribeDomainsResponseBodyDomainsDomainTags &) = default ;
    DescribeDomainsResponseBodyDomainsDomainTags(DescribeDomainsResponseBodyDomainsDomainTags &&) = default ;
    DescribeDomainsResponseBodyDomainsDomainTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsDomainTags() = default ;
    DescribeDomainsResponseBodyDomainsDomainTags& operator=(const DescribeDomainsResponseBodyDomainsDomainTags &) = default ;
    DescribeDomainsResponseBodyDomainsDomainTags& operator=(DescribeDomainsResponseBodyDomainsDomainTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag>) };
    inline vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag>) };
    inline DescribeDomainsResponseBodyDomainsDomainTags& setTag(const vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDomainsResponseBodyDomainsDomainTags& setTag(vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainsResponseBodyDomainsDomainTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
