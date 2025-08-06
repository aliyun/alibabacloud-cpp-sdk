// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEREGIONLISTRESPONSEBODYREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEREGIONLISTRESPONSEBODYREGIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStorageRegionListResponseBodyRegionListRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageRegionListResponseBodyRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageRegionListResponseBodyRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageRegionListResponseBodyRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetStorageRegionListResponseBodyRegionList() = default ;
    GetStorageRegionListResponseBodyRegionList(const GetStorageRegionListResponseBodyRegionList &) = default ;
    GetStorageRegionListResponseBodyRegionList(GetStorageRegionListResponseBodyRegionList &&) = default ;
    GetStorageRegionListResponseBodyRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageRegionListResponseBodyRegionList() = default ;
    GetStorageRegionListResponseBodyRegionList& operator=(const GetStorageRegionListResponseBodyRegionList &) = default ;
    GetStorageRegionListResponseBodyRegionList& operator=(GetStorageRegionListResponseBodyRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::GetStorageRegionListResponseBodyRegionListRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::GetStorageRegionListResponseBodyRegionListRegion>) };
    inline vector<Models::GetStorageRegionListResponseBodyRegionListRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::GetStorageRegionListResponseBodyRegionListRegion>) };
    inline GetStorageRegionListResponseBodyRegionList& setRegion(const vector<Models::GetStorageRegionListResponseBodyRegionListRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline GetStorageRegionListResponseBodyRegionList& setRegion(vector<Models::GetStorageRegionListResponseBodyRegionListRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::GetStorageRegionListResponseBodyRegionListRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
