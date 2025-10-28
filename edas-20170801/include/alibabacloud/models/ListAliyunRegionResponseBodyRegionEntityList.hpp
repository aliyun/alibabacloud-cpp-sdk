// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNREGIONRESPONSEBODYREGIONENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNREGIONRESPONSEBODYREGIONENTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAliyunRegionResponseBodyRegionEntityListRegionEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAliyunRegionResponseBodyRegionEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunRegionResponseBodyRegionEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionEntity, regionEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunRegionResponseBodyRegionEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionEntity, regionEntity_);
    };
    ListAliyunRegionResponseBodyRegionEntityList() = default ;
    ListAliyunRegionResponseBodyRegionEntityList(const ListAliyunRegionResponseBodyRegionEntityList &) = default ;
    ListAliyunRegionResponseBodyRegionEntityList(ListAliyunRegionResponseBodyRegionEntityList &&) = default ;
    ListAliyunRegionResponseBodyRegionEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunRegionResponseBodyRegionEntityList() = default ;
    ListAliyunRegionResponseBodyRegionEntityList& operator=(const ListAliyunRegionResponseBodyRegionEntityList &) = default ;
    ListAliyunRegionResponseBodyRegionEntityList& operator=(ListAliyunRegionResponseBodyRegionEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionEntity_ == nullptr; };
    // regionEntity Field Functions 
    bool hasRegionEntity() const { return this->regionEntity_ != nullptr;};
    void deleteRegionEntity() { this->regionEntity_ = nullptr;};
    inline const vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity> & regionEntity() const { DARABONBA_PTR_GET_CONST(regionEntity_, vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity>) };
    inline vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity> regionEntity() { DARABONBA_PTR_GET(regionEntity_, vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity>) };
    inline ListAliyunRegionResponseBodyRegionEntityList& setRegionEntity(const vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity> & regionEntity) { DARABONBA_PTR_SET_VALUE(regionEntity_, regionEntity) };
    inline ListAliyunRegionResponseBodyRegionEntityList& setRegionEntity(vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity> && regionEntity) { DARABONBA_PTR_SET_RVALUE(regionEntity_, regionEntity) };


  protected:
    std::shared_ptr<vector<Models::ListAliyunRegionResponseBodyRegionEntityListRegionEntity>> regionEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
