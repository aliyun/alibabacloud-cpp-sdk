// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetNetworkAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkAvailableZonesResponseBody() = default ;
    GetNetworkAvailableZonesResponseBody(const GetNetworkAvailableZonesResponseBody &) = default ;
    GetNetworkAvailableZonesResponseBody(GetNetworkAvailableZonesResponseBody &&) = default ;
    GetNetworkAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkAvailableZonesResponseBody() = default ;
    GetNetworkAvailableZonesResponseBody& operator=(const GetNetworkAvailableZonesResponseBody &) = default ;
    GetNetworkAvailableZonesResponseBody& operator=(GetNetworkAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RegionIdList, regionIdList_);
        DARABONBA_PTR_TO_JSON(ZoneIdList, zoneIdList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionIdList, regionIdList_);
        DARABONBA_PTR_FROM_JSON(ZoneIdList, zoneIdList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionIdList_ == nullptr
        && this->zoneIdList_ == nullptr; };
      // regionIdList Field Functions 
      bool hasRegionIdList() const { return this->regionIdList_ != nullptr;};
      void deleteRegionIdList() { this->regionIdList_ = nullptr;};
      inline const vector<string> & getRegionIdList() const { DARABONBA_PTR_GET_CONST(regionIdList_, vector<string>) };
      inline vector<string> getRegionIdList() { DARABONBA_PTR_GET(regionIdList_, vector<string>) };
      inline Data& setRegionIdList(const vector<string> & regionIdList) { DARABONBA_PTR_SET_VALUE(regionIdList_, regionIdList) };
      inline Data& setRegionIdList(vector<string> && regionIdList) { DARABONBA_PTR_SET_RVALUE(regionIdList_, regionIdList) };


      // zoneIdList Field Functions 
      bool hasZoneIdList() const { return this->zoneIdList_ != nullptr;};
      void deleteZoneIdList() { this->zoneIdList_ = nullptr;};
      inline const vector<string> & getZoneIdList() const { DARABONBA_PTR_GET_CONST(zoneIdList_, vector<string>) };
      inline vector<string> getZoneIdList() { DARABONBA_PTR_GET(zoneIdList_, vector<string>) };
      inline Data& setZoneIdList(const vector<string> & zoneIdList) { DARABONBA_PTR_SET_VALUE(zoneIdList_, zoneIdList) };
      inline Data& setZoneIdList(vector<string> && zoneIdList) { DARABONBA_PTR_SET_RVALUE(zoneIdList_, zoneIdList) };


    protected:
      shared_ptr<vector<string>> regionIdList_ {};
      shared_ptr<vector<string>> zoneIdList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNetworkAvailableZonesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNetworkAvailableZonesResponseBody::Data) };
    inline GetNetworkAvailableZonesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNetworkAvailableZonesResponseBody::Data) };
    inline GetNetworkAvailableZonesResponseBody& setData(const GetNetworkAvailableZonesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNetworkAvailableZonesResponseBody& setData(GetNetworkAvailableZonesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNetworkAvailableZonesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
