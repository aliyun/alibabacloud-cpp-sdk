// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody(DescribeZonesResponseBody &&) = default ;
    DescribeZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody& operator=(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody& operator=(DescribeZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(ModeCode, modeCode_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(ModeCode, modeCode_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Zones() = default ;
      Zones(const Zones &) = default ;
      Zones(Zones &&) = default ;
      Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Zones() = default ;
      Zones& operator=(const Zones &) = default ;
      Zones& operator=(Zones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modeCode_ == nullptr
        && this->priority_ == nullptr && this->status_ == nullptr && this->zoneId_ == nullptr; };
      // modeCode Field Functions 
      bool hasModeCode() const { return this->modeCode_ != nullptr;};
      void deleteModeCode() { this->modeCode_ = nullptr;};
      inline string getModeCode() const { DARABONBA_PTR_GET_DEFAULT(modeCode_, "") };
      inline Zones& setModeCode(string modeCode) { DARABONBA_PTR_SET_VALUE(modeCode_, modeCode) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Zones& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Zones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> modeCode_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<DescribeZonesResponseBody::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<DescribeZonesResponseBody::Zones>) };
    inline vector<DescribeZonesResponseBody::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<DescribeZonesResponseBody::Zones>) };
    inline DescribeZonesResponseBody& setZones(const vector<DescribeZonesResponseBody::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeZonesResponseBody& setZones(vector<DescribeZonesResponseBody::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeZonesResponseBody::Zones>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
