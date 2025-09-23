// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(ModeCode, modeCode_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(ModeCode, modeCode_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeZonesResponseBodyZones() = default ;
    DescribeZonesResponseBodyZones(const DescribeZonesResponseBodyZones &) = default ;
    DescribeZonesResponseBodyZones(DescribeZonesResponseBodyZones &&) = default ;
    DescribeZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZones() = default ;
    DescribeZonesResponseBodyZones& operator=(const DescribeZonesResponseBodyZones &) = default ;
    DescribeZonesResponseBodyZones& operator=(DescribeZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modeCode_ != nullptr
        && this->priority_ != nullptr && this->status_ != nullptr && this->zoneId_ != nullptr; };
    // modeCode Field Functions 
    bool hasModeCode() const { return this->modeCode_ != nullptr;};
    void deleteModeCode() { this->modeCode_ = nullptr;};
    inline string modeCode() const { DARABONBA_PTR_GET_DEFAULT(modeCode_, "") };
    inline DescribeZonesResponseBodyZones& setModeCode(string modeCode) { DARABONBA_PTR_SET_VALUE(modeCode_, modeCode) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeZonesResponseBodyZones& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeZonesResponseBodyZones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeZonesResponseBodyZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> modeCode_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
