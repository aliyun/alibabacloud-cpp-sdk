// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERRESPONSEBODYECSENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERRESPONSEBODYECSENTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListEcsNotInClusterResponseBodyEcsEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsNotInClusterResponseBodyEcsEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(EcsEntity, ecsEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsNotInClusterResponseBodyEcsEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsEntity, ecsEntity_);
    };
    ListEcsNotInClusterResponseBodyEcsEntityList() = default ;
    ListEcsNotInClusterResponseBodyEcsEntityList(const ListEcsNotInClusterResponseBodyEcsEntityList &) = default ;
    ListEcsNotInClusterResponseBodyEcsEntityList(ListEcsNotInClusterResponseBodyEcsEntityList &&) = default ;
    ListEcsNotInClusterResponseBodyEcsEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsNotInClusterResponseBodyEcsEntityList() = default ;
    ListEcsNotInClusterResponseBodyEcsEntityList& operator=(const ListEcsNotInClusterResponseBodyEcsEntityList &) = default ;
    ListEcsNotInClusterResponseBodyEcsEntityList& operator=(ListEcsNotInClusterResponseBodyEcsEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsEntity_ == nullptr; };
    // ecsEntity Field Functions 
    bool hasEcsEntity() const { return this->ecsEntity_ != nullptr;};
    void deleteEcsEntity() { this->ecsEntity_ = nullptr;};
    inline const vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity> & ecsEntity() const { DARABONBA_PTR_GET_CONST(ecsEntity_, vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity>) };
    inline vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity> ecsEntity() { DARABONBA_PTR_GET(ecsEntity_, vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity>) };
    inline ListEcsNotInClusterResponseBodyEcsEntityList& setEcsEntity(const vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity> & ecsEntity) { DARABONBA_PTR_SET_VALUE(ecsEntity_, ecsEntity) };
    inline ListEcsNotInClusterResponseBodyEcsEntityList& setEcsEntity(vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity> && ecsEntity) { DARABONBA_PTR_SET_RVALUE(ecsEntity_, ecsEntity) };


  protected:
    std::shared_ptr<vector<Models::ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity>> ecsEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
