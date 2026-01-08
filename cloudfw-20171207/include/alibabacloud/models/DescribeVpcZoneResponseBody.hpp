// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneList, zoneList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneList, zoneList_);
    };
    DescribeVpcZoneResponseBody() = default ;
    DescribeVpcZoneResponseBody(const DescribeVpcZoneResponseBody &) = default ;
    DescribeVpcZoneResponseBody(DescribeVpcZoneResponseBody &&) = default ;
    DescribeVpcZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcZoneResponseBody() = default ;
    DescribeVpcZoneResponseBody& operator=(const DescribeVpcZoneResponseBody &) = default ;
    DescribeVpcZoneResponseBody& operator=(DescribeVpcZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneList& obj) { 
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneList& obj) { 
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
      };
      ZoneList() = default ;
      ZoneList(const ZoneList &) = default ;
      ZoneList(ZoneList &&) = default ;
      ZoneList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneList() = default ;
      ZoneList& operator=(const ZoneList &) = default ;
      ZoneList& operator=(ZoneList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->localName_ == nullptr
        && this->zoneId_ == nullptr && this->zoneType_ == nullptr; };
      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline ZoneList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // zoneType Field Functions 
      bool hasZoneType() const { return this->zoneType_ != nullptr;};
      void deleteZoneType() { this->zoneType_ = nullptr;};
      inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
      inline ZoneList& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


    protected:
      // The name of the zone.
      shared_ptr<string> localName_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
      // The zone type. Default value: AvailabilityZone. This value indicates Alibaba Cloud zones.
      shared_ptr<string> zoneType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zoneList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneList Field Functions 
    bool hasZoneList() const { return this->zoneList_ != nullptr;};
    void deleteZoneList() { this->zoneList_ = nullptr;};
    inline const vector<DescribeVpcZoneResponseBody::ZoneList> & getZoneList() const { DARABONBA_PTR_GET_CONST(zoneList_, vector<DescribeVpcZoneResponseBody::ZoneList>) };
    inline vector<DescribeVpcZoneResponseBody::ZoneList> getZoneList() { DARABONBA_PTR_GET(zoneList_, vector<DescribeVpcZoneResponseBody::ZoneList>) };
    inline DescribeVpcZoneResponseBody& setZoneList(const vector<DescribeVpcZoneResponseBody::ZoneList> & zoneList) { DARABONBA_PTR_SET_VALUE(zoneList_, zoneList) };
    inline DescribeVpcZoneResponseBody& setZoneList(vector<DescribeVpcZoneResponseBody::ZoneList> && zoneList) { DARABONBA_PTR_SET_RVALUE(zoneList_, zoneList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The zones.
    shared_ptr<vector<DescribeVpcZoneResponseBody::ZoneList>> zoneList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
