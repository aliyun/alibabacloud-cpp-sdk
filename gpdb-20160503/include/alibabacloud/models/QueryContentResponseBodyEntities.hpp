// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYENTITIES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYENTITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryContentResponseBodyEntitiesEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyEntities& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entities_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entities_);
    };
    QueryContentResponseBodyEntities() = default ;
    QueryContentResponseBodyEntities(const QueryContentResponseBodyEntities &) = default ;
    QueryContentResponseBodyEntities(QueryContentResponseBodyEntities &&) = default ;
    QueryContentResponseBodyEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyEntities() = default ;
    QueryContentResponseBodyEntities& operator=(const QueryContentResponseBodyEntities &) = default ;
    QueryContentResponseBodyEntities& operator=(QueryContentResponseBodyEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entities_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<Models::QueryContentResponseBodyEntitiesEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Models::QueryContentResponseBodyEntitiesEntities>) };
    inline vector<Models::QueryContentResponseBodyEntitiesEntities> entities() { DARABONBA_PTR_GET(entities_, vector<Models::QueryContentResponseBodyEntitiesEntities>) };
    inline QueryContentResponseBodyEntities& setEntities(const vector<Models::QueryContentResponseBodyEntitiesEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline QueryContentResponseBodyEntities& setEntities(vector<Models::QueryContentResponseBodyEntitiesEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


  protected:
    std::shared_ptr<vector<Models::QueryContentResponseBodyEntitiesEntities>> entities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
