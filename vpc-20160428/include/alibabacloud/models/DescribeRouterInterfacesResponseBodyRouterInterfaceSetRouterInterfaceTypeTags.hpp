// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESETROUTERINTERFACETYPETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESETROUTERINTERFACETYPETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags() = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags(const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags &) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags(DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags &&) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags() = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags& operator=(const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags &) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags& operator=(DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags>) };
    inline vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags>) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags& setTags(const vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags& setTags(vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
