// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECUBYREGIONRESPONSEBODYECUENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTECUBYREGIONRESPONSEBODYECUENTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEcuByRegionResponseBodyEcuEntityListEcuEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListEcuByRegionResponseBodyEcuEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcuByRegionResponseBodyEcuEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(EcuEntity, ecuEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcuByRegionResponseBodyEcuEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcuEntity, ecuEntity_);
    };
    ListEcuByRegionResponseBodyEcuEntityList() = default ;
    ListEcuByRegionResponseBodyEcuEntityList(const ListEcuByRegionResponseBodyEcuEntityList &) = default ;
    ListEcuByRegionResponseBodyEcuEntityList(ListEcuByRegionResponseBodyEcuEntityList &&) = default ;
    ListEcuByRegionResponseBodyEcuEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcuByRegionResponseBodyEcuEntityList() = default ;
    ListEcuByRegionResponseBodyEcuEntityList& operator=(const ListEcuByRegionResponseBodyEcuEntityList &) = default ;
    ListEcuByRegionResponseBodyEcuEntityList& operator=(ListEcuByRegionResponseBodyEcuEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecuEntity_ == nullptr; };
    // ecuEntity Field Functions 
    bool hasEcuEntity() const { return this->ecuEntity_ != nullptr;};
    void deleteEcuEntity() { this->ecuEntity_ = nullptr;};
    inline const vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity> & ecuEntity() const { DARABONBA_PTR_GET_CONST(ecuEntity_, vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity>) };
    inline vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity> ecuEntity() { DARABONBA_PTR_GET(ecuEntity_, vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity>) };
    inline ListEcuByRegionResponseBodyEcuEntityList& setEcuEntity(const vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity> & ecuEntity) { DARABONBA_PTR_SET_VALUE(ecuEntity_, ecuEntity) };
    inline ListEcuByRegionResponseBodyEcuEntityList& setEcuEntity(vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity> && ecuEntity) { DARABONBA_PTR_SET_RVALUE(ecuEntity_, ecuEntity) };


  protected:
    std::shared_ptr<vector<Models::ListEcuByRegionResponseBodyEcuEntityListEcuEntity>> ecuEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
