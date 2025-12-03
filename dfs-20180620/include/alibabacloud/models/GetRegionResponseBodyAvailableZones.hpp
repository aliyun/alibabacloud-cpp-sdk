// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODYAVAILABLEZONES_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODYAVAILABLEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionResponseBodyAvailableZonesOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetRegionResponseBodyAvailableZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetRegionResponseBodyAvailableZones() = default ;
    GetRegionResponseBodyAvailableZones(const GetRegionResponseBodyAvailableZones &) = default ;
    GetRegionResponseBodyAvailableZones(GetRegionResponseBodyAvailableZones &&) = default ;
    GetRegionResponseBodyAvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionResponseBodyAvailableZones() = default ;
    GetRegionResponseBodyAvailableZones& operator=(const GetRegionResponseBodyAvailableZones &) = default ;
    GetRegionResponseBodyAvailableZones& operator=(GetRegionResponseBodyAvailableZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->options_ == nullptr
        && return this->zoneId_ == nullptr; };
    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<Models::GetRegionResponseBodyAvailableZonesOptions> & options() const { DARABONBA_PTR_GET_CONST(options_, vector<Models::GetRegionResponseBodyAvailableZonesOptions>) };
    inline vector<Models::GetRegionResponseBodyAvailableZonesOptions> options() { DARABONBA_PTR_GET(options_, vector<Models::GetRegionResponseBodyAvailableZonesOptions>) };
    inline GetRegionResponseBodyAvailableZones& setOptions(const vector<Models::GetRegionResponseBodyAvailableZonesOptions> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline GetRegionResponseBodyAvailableZones& setOptions(vector<Models::GetRegionResponseBodyAvailableZonesOptions> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetRegionResponseBodyAvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<Models::GetRegionResponseBodyAvailableZonesOptions>> options_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
