// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYDATATAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYDATATAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesResponseBodyDataTagResourcesTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListTagResourcesResponseBodyDataTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBodyDataTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBodyDataTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    ListTagResourcesResponseBodyDataTagResources() = default ;
    ListTagResourcesResponseBodyDataTagResources(const ListTagResourcesResponseBodyDataTagResources &) = default ;
    ListTagResourcesResponseBodyDataTagResources(ListTagResourcesResponseBodyDataTagResources &&) = default ;
    ListTagResourcesResponseBodyDataTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBodyDataTagResources() = default ;
    ListTagResourcesResponseBodyDataTagResources& operator=(const ListTagResourcesResponseBodyDataTagResources &) = default ;
    ListTagResourcesResponseBodyDataTagResources& operator=(ListTagResourcesResponseBodyDataTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagResources_ == nullptr; };
    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources>) };
    inline vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources>) };
    inline ListTagResourcesResponseBodyDataTagResources& setTagResources(const vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListTagResourcesResponseBodyDataTagResources& setTagResources(vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    std::shared_ptr<vector<Models::ListTagResourcesResponseBodyDataTagResourcesTagResources>> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
