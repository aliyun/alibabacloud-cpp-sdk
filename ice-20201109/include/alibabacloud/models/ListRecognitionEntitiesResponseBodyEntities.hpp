// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONENTITIESRESPONSEBODYENTITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONENTITIESRESPONSEBODYENTITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecognitionEntitiesResponseBodyEntitiesEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionEntitiesResponseBodyEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionEntitiesResponseBodyEntities& obj) { 
      DARABONBA_PTR_TO_JSON(Entity, entity_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionEntitiesResponseBodyEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(Entity, entity_);
    };
    ListRecognitionEntitiesResponseBodyEntities() = default ;
    ListRecognitionEntitiesResponseBodyEntities(const ListRecognitionEntitiesResponseBodyEntities &) = default ;
    ListRecognitionEntitiesResponseBodyEntities(ListRecognitionEntitiesResponseBodyEntities &&) = default ;
    ListRecognitionEntitiesResponseBodyEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionEntitiesResponseBodyEntities() = default ;
    ListRecognitionEntitiesResponseBodyEntities& operator=(const ListRecognitionEntitiesResponseBodyEntities &) = default ;
    ListRecognitionEntitiesResponseBodyEntities& operator=(ListRecognitionEntitiesResponseBodyEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entity_ == nullptr; };
    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline const vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity> & entity() const { DARABONBA_PTR_GET_CONST(entity_, vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity>) };
    inline vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity> entity() { DARABONBA_PTR_GET(entity_, vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity>) };
    inline ListRecognitionEntitiesResponseBodyEntities& setEntity(const vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity> & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
    inline ListRecognitionEntitiesResponseBodyEntities& setEntity(vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity> && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


  protected:
    std::shared_ptr<vector<Models::ListRecognitionEntitiesResponseBodyEntitiesEntity>> entity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
