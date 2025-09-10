// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYRELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryContentResponseBodyRelationsRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyRelations& obj) { 
      DARABONBA_PTR_TO_JSON(relations, relations_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(relations, relations_);
    };
    QueryContentResponseBodyRelations() = default ;
    QueryContentResponseBodyRelations(const QueryContentResponseBodyRelations &) = default ;
    QueryContentResponseBodyRelations(QueryContentResponseBodyRelations &&) = default ;
    QueryContentResponseBodyRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyRelations() = default ;
    QueryContentResponseBodyRelations& operator=(const QueryContentResponseBodyRelations &) = default ;
    QueryContentResponseBodyRelations& operator=(QueryContentResponseBodyRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relations_ != nullptr; };
    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const vector<Models::QueryContentResponseBodyRelationsRelations> & relations() const { DARABONBA_PTR_GET_CONST(relations_, vector<Models::QueryContentResponseBodyRelationsRelations>) };
    inline vector<Models::QueryContentResponseBodyRelationsRelations> relations() { DARABONBA_PTR_GET(relations_, vector<Models::QueryContentResponseBodyRelationsRelations>) };
    inline QueryContentResponseBodyRelations& setRelations(const vector<Models::QueryContentResponseBodyRelationsRelations> & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline QueryContentResponseBodyRelations& setRelations(vector<Models::QueryContentResponseBodyRelationsRelations> && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


  protected:
    std::shared_ptr<vector<Models::QueryContentResponseBodyRelationsRelations>> relations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
