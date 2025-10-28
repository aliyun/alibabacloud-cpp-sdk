// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(ResGroupEntity, resGroupEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResGroupEntity, resGroupEntity_);
    };
    ListResourceGroupResponseBodyResourceGroupList() = default ;
    ListResourceGroupResponseBodyResourceGroupList(const ListResourceGroupResponseBodyResourceGroupList &) = default ;
    ListResourceGroupResponseBodyResourceGroupList(ListResourceGroupResponseBodyResourceGroupList &&) = default ;
    ListResourceGroupResponseBodyResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupList() = default ;
    ListResourceGroupResponseBodyResourceGroupList& operator=(const ListResourceGroupResponseBodyResourceGroupList &) = default ;
    ListResourceGroupResponseBodyResourceGroupList& operator=(ListResourceGroupResponseBodyResourceGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resGroupEntity_ == nullptr; };
    // resGroupEntity Field Functions 
    bool hasResGroupEntity() const { return this->resGroupEntity_ != nullptr;};
    void deleteResGroupEntity() { this->resGroupEntity_ = nullptr;};
    inline const vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity> & resGroupEntity() const { DARABONBA_PTR_GET_CONST(resGroupEntity_, vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity>) };
    inline vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity> resGroupEntity() { DARABONBA_PTR_GET(resGroupEntity_, vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity>) };
    inline ListResourceGroupResponseBodyResourceGroupList& setResGroupEntity(const vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity> & resGroupEntity) { DARABONBA_PTR_SET_VALUE(resGroupEntity_, resGroupEntity) };
    inline ListResourceGroupResponseBodyResourceGroupList& setResGroupEntity(vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity> && resGroupEntity) { DARABONBA_PTR_SET_RVALUE(resGroupEntity_, resGroupEntity) };


  protected:
    std::shared_ptr<vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntity>> resGroupEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
