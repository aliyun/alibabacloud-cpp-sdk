// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACEATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACEATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouterInterfaceAttributeResponseBodyTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfaceAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfaceAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfaceAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeRouterInterfaceAttributeResponseBodyTags() = default ;
    DescribeRouterInterfaceAttributeResponseBodyTags(const DescribeRouterInterfaceAttributeResponseBodyTags &) = default ;
    DescribeRouterInterfaceAttributeResponseBodyTags(DescribeRouterInterfaceAttributeResponseBodyTags &&) = default ;
    DescribeRouterInterfaceAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfaceAttributeResponseBodyTags() = default ;
    DescribeRouterInterfaceAttributeResponseBodyTags& operator=(const DescribeRouterInterfaceAttributeResponseBodyTags &) = default ;
    DescribeRouterInterfaceAttributeResponseBodyTags& operator=(DescribeRouterInterfaceAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags>) };
    inline vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags>) };
    inline DescribeRouterInterfaceAttributeResponseBodyTags& setTags(const vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRouterInterfaceAttributeResponseBodyTags& setTags(vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouterInterfaceAttributeResponseBodyTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
