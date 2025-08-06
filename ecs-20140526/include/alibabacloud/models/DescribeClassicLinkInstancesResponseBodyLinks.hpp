// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODYLINKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODYLINKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClassicLinkInstancesResponseBodyLinksLink.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClassicLinkInstancesResponseBodyLinks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassicLinkInstancesResponseBodyLinks& obj) { 
      DARABONBA_PTR_TO_JSON(Link, link_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassicLinkInstancesResponseBodyLinks& obj) { 
      DARABONBA_PTR_FROM_JSON(Link, link_);
    };
    DescribeClassicLinkInstancesResponseBodyLinks() = default ;
    DescribeClassicLinkInstancesResponseBodyLinks(const DescribeClassicLinkInstancesResponseBodyLinks &) = default ;
    DescribeClassicLinkInstancesResponseBodyLinks(DescribeClassicLinkInstancesResponseBodyLinks &&) = default ;
    DescribeClassicLinkInstancesResponseBodyLinks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassicLinkInstancesResponseBodyLinks() = default ;
    DescribeClassicLinkInstancesResponseBodyLinks& operator=(const DescribeClassicLinkInstancesResponseBodyLinks &) = default ;
    DescribeClassicLinkInstancesResponseBodyLinks& operator=(DescribeClassicLinkInstancesResponseBodyLinks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->link_ != nullptr; };
    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline const vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink> & link() const { DARABONBA_PTR_GET_CONST(link_, vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink>) };
    inline vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink> link() { DARABONBA_PTR_GET(link_, vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink>) };
    inline DescribeClassicLinkInstancesResponseBodyLinks& setLink(const vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink> & link) { DARABONBA_PTR_SET_VALUE(link_, link) };
    inline DescribeClassicLinkInstancesResponseBodyLinks& setLink(vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink> && link) { DARABONBA_PTR_SET_RVALUE(link_, link) };


  protected:
    std::shared_ptr<vector<Models::DescribeClassicLinkInstancesResponseBodyLinksLink>> link_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
