// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODYCUSTOMENTITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODYCUSTOMENTITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomEntitiesResponseBodyCustomEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomEntitiesResponseBodyCustomEntities& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEntity, customEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomEntitiesResponseBodyCustomEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEntity, customEntity_);
    };
    ListCustomEntitiesResponseBodyCustomEntities() = default ;
    ListCustomEntitiesResponseBodyCustomEntities(const ListCustomEntitiesResponseBodyCustomEntities &) = default ;
    ListCustomEntitiesResponseBodyCustomEntities(ListCustomEntitiesResponseBodyCustomEntities &&) = default ;
    ListCustomEntitiesResponseBodyCustomEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomEntitiesResponseBodyCustomEntities() = default ;
    ListCustomEntitiesResponseBodyCustomEntities& operator=(const ListCustomEntitiesResponseBodyCustomEntities &) = default ;
    ListCustomEntitiesResponseBodyCustomEntities& operator=(ListCustomEntitiesResponseBodyCustomEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEntity_ == nullptr; };
    // customEntity Field Functions 
    bool hasCustomEntity() const { return this->customEntity_ != nullptr;};
    void deleteCustomEntity() { this->customEntity_ = nullptr;};
    inline const vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity> & customEntity() const { DARABONBA_PTR_GET_CONST(customEntity_, vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity>) };
    inline vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity> customEntity() { DARABONBA_PTR_GET(customEntity_, vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity>) };
    inline ListCustomEntitiesResponseBodyCustomEntities& setCustomEntity(const vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity> & customEntity) { DARABONBA_PTR_SET_VALUE(customEntity_, customEntity) };
    inline ListCustomEntitiesResponseBodyCustomEntities& setCustomEntity(vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity> && customEntity) { DARABONBA_PTR_SET_RVALUE(customEntity_, customEntity) };


  protected:
    std::shared_ptr<vector<Models::ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity>> customEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
