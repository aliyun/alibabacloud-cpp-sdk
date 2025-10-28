// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYSLBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYSLBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList& obj) { 
      DARABONBA_PTR_TO_JSON(SlbEntity, slbEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList& obj) { 
      DARABONBA_PTR_FROM_JSON(SlbEntity, slbEntity_);
    };
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList(const ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList(ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList &&) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList& operator=(const ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList& operator=(ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slbEntity_ == nullptr; };
    // slbEntity Field Functions 
    bool hasSlbEntity() const { return this->slbEntity_ != nullptr;};
    void deleteSlbEntity() { this->slbEntity_ = nullptr;};
    inline const vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity> & slbEntity() const { DARABONBA_PTR_GET_CONST(slbEntity_, vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity>) };
    inline vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity> slbEntity() { DARABONBA_PTR_GET(slbEntity_, vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity>) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList& setSlbEntity(const vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity> & slbEntity) { DARABONBA_PTR_SET_VALUE(slbEntity_, slbEntity) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList& setSlbEntity(vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity> && slbEntity) { DARABONBA_PTR_SET_RVALUE(slbEntity_, slbEntity) };


  protected:
    std::shared_ptr<vector<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity>> slbEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
