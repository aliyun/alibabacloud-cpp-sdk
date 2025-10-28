// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYECSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYECSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList& obj) { 
      DARABONBA_PTR_TO_JSON(EcsEntity, ecsEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsEntity, ecsEntity_);
    };
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList(const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList(ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList &&) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList& operator=(const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList& operator=(ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsEntity_ == nullptr; };
    // ecsEntity Field Functions 
    bool hasEcsEntity() const { return this->ecsEntity_ != nullptr;};
    void deleteEcsEntity() { this->ecsEntity_ = nullptr;};
    inline const vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity> & ecsEntity() const { DARABONBA_PTR_GET_CONST(ecsEntity_, vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity>) };
    inline vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity> ecsEntity() { DARABONBA_PTR_GET(ecsEntity_, vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity>) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList& setEcsEntity(const vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity> & ecsEntity) { DARABONBA_PTR_SET_VALUE(ecsEntity_, ecsEntity) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList& setEcsEntity(vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity> && ecsEntity) { DARABONBA_PTR_SET_RVALUE(ecsEntity_, ecsEntity) };


  protected:
    std::shared_ptr<vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity>> ecsEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
