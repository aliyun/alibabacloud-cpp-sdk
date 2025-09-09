// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetNetworkAvailableZonesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkAvailableZonesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneIdList, zoneIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkAvailableZonesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneIdList, zoneIdList_);
    };
    GetNetworkAvailableZonesResponseBodyData() = default ;
    GetNetworkAvailableZonesResponseBodyData(const GetNetworkAvailableZonesResponseBodyData &) = default ;
    GetNetworkAvailableZonesResponseBodyData(GetNetworkAvailableZonesResponseBodyData &&) = default ;
    GetNetworkAvailableZonesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkAvailableZonesResponseBodyData() = default ;
    GetNetworkAvailableZonesResponseBodyData& operator=(const GetNetworkAvailableZonesResponseBodyData &) = default ;
    GetNetworkAvailableZonesResponseBodyData& operator=(GetNetworkAvailableZonesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->zoneIdList_ != nullptr; };
    // zoneIdList Field Functions 
    bool hasZoneIdList() const { return this->zoneIdList_ != nullptr;};
    void deleteZoneIdList() { this->zoneIdList_ = nullptr;};
    inline const vector<string> & zoneIdList() const { DARABONBA_PTR_GET_CONST(zoneIdList_, vector<string>) };
    inline vector<string> zoneIdList() { DARABONBA_PTR_GET(zoneIdList_, vector<string>) };
    inline GetNetworkAvailableZonesResponseBodyData& setZoneIdList(const vector<string> & zoneIdList) { DARABONBA_PTR_SET_VALUE(zoneIdList_, zoneIdList) };
    inline GetNetworkAvailableZonesResponseBodyData& setZoneIdList(vector<string> && zoneIdList) { DARABONBA_PTR_SET_RVALUE(zoneIdList_, zoneIdList) };


  protected:
    std::shared_ptr<vector<string>> zoneIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
