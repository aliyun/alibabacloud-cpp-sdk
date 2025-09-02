// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Entity.hpp>
#include <vector>
#include <alibabacloud/models/ListLineageResponseBodyDataDataEntityListRelationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListLineageResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Entity, entity_);
      DARABONBA_PTR_TO_JSON(RelationList, relationList_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Entity, entity_);
      DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
    };
    ListLineageResponseBodyDataDataEntityList() = default ;
    ListLineageResponseBodyDataDataEntityList(const ListLineageResponseBodyDataDataEntityList &) = default ;
    ListLineageResponseBodyDataDataEntityList(ListLineageResponseBodyDataDataEntityList &&) = default ;
    ListLineageResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageResponseBodyDataDataEntityList() = default ;
    ListLineageResponseBodyDataDataEntityList& operator=(const ListLineageResponseBodyDataDataEntityList &) = default ;
    ListLineageResponseBodyDataDataEntityList& operator=(ListLineageResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->entity_ != nullptr && this->relationList_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListLineageResponseBodyDataDataEntityList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline const Models::Entity & entity() const { DARABONBA_PTR_GET_CONST(entity_, Models::Entity) };
    inline Models::Entity entity() { DARABONBA_PTR_GET(entity_, Models::Entity) };
    inline ListLineageResponseBodyDataDataEntityList& setEntity(const Models::Entity & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
    inline ListLineageResponseBodyDataDataEntityList& setEntity(Models::Entity && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


    // relationList Field Functions 
    bool hasRelationList() const { return this->relationList_ != nullptr;};
    void deleteRelationList() { this->relationList_ = nullptr;};
    inline const vector<Models::ListLineageResponseBodyDataDataEntityListRelationList> & relationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<Models::ListLineageResponseBodyDataDataEntityListRelationList>) };
    inline vector<Models::ListLineageResponseBodyDataDataEntityListRelationList> relationList() { DARABONBA_PTR_GET(relationList_, vector<Models::ListLineageResponseBodyDataDataEntityListRelationList>) };
    inline ListLineageResponseBodyDataDataEntityList& setRelationList(const vector<Models::ListLineageResponseBodyDataDataEntityListRelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
    inline ListLineageResponseBodyDataDataEntityList& setRelationList(vector<Models::ListLineageResponseBodyDataDataEntityListRelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


  protected:
    // The time when the lineage was generated.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The information about the entity.
    std::shared_ptr<Models::Entity> entity_ = nullptr;
    // The array of the relationship structure.
    std::shared_ptr<vector<Models::ListLineageResponseBodyDataDataEntityListRelationList>> relationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
