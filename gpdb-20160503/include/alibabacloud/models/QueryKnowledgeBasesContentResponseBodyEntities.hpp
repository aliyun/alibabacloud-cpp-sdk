// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYENTITIES_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYENTITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryKnowledgeBasesContentResponseBodyEntitiesEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentResponseBodyEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentResponseBodyEntities& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entities_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentResponseBodyEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entities_);
    };
    QueryKnowledgeBasesContentResponseBodyEntities() = default ;
    QueryKnowledgeBasesContentResponseBodyEntities(const QueryKnowledgeBasesContentResponseBodyEntities &) = default ;
    QueryKnowledgeBasesContentResponseBodyEntities(QueryKnowledgeBasesContentResponseBodyEntities &&) = default ;
    QueryKnowledgeBasesContentResponseBodyEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentResponseBodyEntities() = default ;
    QueryKnowledgeBasesContentResponseBodyEntities& operator=(const QueryKnowledgeBasesContentResponseBodyEntities &) = default ;
    QueryKnowledgeBasesContentResponseBodyEntities& operator=(QueryKnowledgeBasesContentResponseBodyEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entities_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities>) };
    inline vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities> entities() { DARABONBA_PTR_GET(entities_, vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities>) };
    inline QueryKnowledgeBasesContentResponseBodyEntities& setEntities(const vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline QueryKnowledgeBasesContentResponseBodyEntities& setEntities(vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


  protected:
    std::shared_ptr<vector<Models::QueryKnowledgeBasesContentResponseBodyEntitiesEntities>> entities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
