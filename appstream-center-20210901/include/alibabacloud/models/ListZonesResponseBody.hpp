// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListZonesModel, listZonesModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListZonesModel, listZonesModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListZonesResponseBody() = default ;
    ListZonesResponseBody(const ListZonesResponseBody &) = default ;
    ListZonesResponseBody(ListZonesResponseBody &&) = default ;
    ListZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZonesResponseBody() = default ;
    ListZonesResponseBody& operator=(const ListZonesResponseBody &) = default ;
    ListZonesResponseBody& operator=(ListZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListZonesModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListZonesModel& obj) { 
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, ListZonesModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      ListZonesModel() = default ;
      ListZonesModel(const ListZonesModel &) = default ;
      ListZonesModel(ListZonesModel &&) = default ;
      ListZonesModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListZonesModel() = default ;
      ListZonesModel& operator=(const ListZonesModel &) = default ;
      ListZonesModel& operator=(ListZonesModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->zones_ == nullptr; };
      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<string> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
      inline vector<string> getZones() { DARABONBA_PTR_GET(zones_, vector<string>) };
      inline ListZonesModel& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline ListZonesModel& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The list of available zone IDs for the specified product type and operating system type in the current region. When creating a resource that requires a vSwitch, select a vSwitch in one of these zones.
      shared_ptr<vector<string>> zones_ {};
    };

    virtual bool empty() const override { return this->listZonesModel_ == nullptr
        && this->requestId_ == nullptr; };
    // listZonesModel Field Functions 
    bool hasListZonesModel() const { return this->listZonesModel_ != nullptr;};
    void deleteListZonesModel() { this->listZonesModel_ = nullptr;};
    inline const ListZonesResponseBody::ListZonesModel & getListZonesModel() const { DARABONBA_PTR_GET_CONST(listZonesModel_, ListZonesResponseBody::ListZonesModel) };
    inline ListZonesResponseBody::ListZonesModel getListZonesModel() { DARABONBA_PTR_GET(listZonesModel_, ListZonesResponseBody::ListZonesModel) };
    inline ListZonesResponseBody& setListZonesModel(const ListZonesResponseBody::ListZonesModel & listZonesModel) { DARABONBA_PTR_SET_VALUE(listZonesModel_, listZonesModel) };
    inline ListZonesResponseBody& setListZonesModel(ListZonesResponseBody::ListZonesModel && listZonesModel) { DARABONBA_PTR_SET_RVALUE(listZonesModel_, listZonesModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The zone query result.
    shared_ptr<ListZonesResponseBody::ListZonesModel> listZonesModel_ {};
    // The request ID. You can use this ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
