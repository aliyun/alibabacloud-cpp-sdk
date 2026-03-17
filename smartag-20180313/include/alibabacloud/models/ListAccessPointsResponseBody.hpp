// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAccessPointsResponseBody() = default ;
    ListAccessPointsResponseBody(const ListAccessPointsResponseBody &) = default ;
    ListAccessPointsResponseBody(ListAccessPointsResponseBody &&) = default ;
    ListAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessPointsResponseBody() = default ;
    ListAccessPointsResponseBody& operator=(const ListAccessPointsResponseBody &) = default ;
    ListAccessPointsResponseBody& operator=(ListAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPoints& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(ActiveSmartAGCount, activeSmartAGCount_);
        DARABONBA_PTR_TO_JSON(InactiveSmartAGCount, inactiveSmartAGCount_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(ActiveSmartAGCount, activeSmartAGCount_);
        DARABONBA_PTR_FROM_JSON(InactiveSmartAGCount, inactiveSmartAGCount_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      };
      AccessPoints() = default ;
      AccessPoints(const AccessPoints &) = default ;
      AccessPoints(AccessPoints &&) = default ;
      AccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPoints() = default ;
      AccessPoints& operator=(const AccessPoints &) = default ;
      AccessPoints& operator=(AccessPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->activeSmartAGCount_ == nullptr && this->inactiveSmartAGCount_ == nullptr && this->latitude_ == nullptr && this->longitude_ == nullptr; };
      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline int32_t getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, 0) };
      inline AccessPoints& setAccessPointId(int32_t accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // activeSmartAGCount Field Functions 
      bool hasActiveSmartAGCount() const { return this->activeSmartAGCount_ != nullptr;};
      void deleteActiveSmartAGCount() { this->activeSmartAGCount_ = nullptr;};
      inline int32_t getActiveSmartAGCount() const { DARABONBA_PTR_GET_DEFAULT(activeSmartAGCount_, 0) };
      inline AccessPoints& setActiveSmartAGCount(int32_t activeSmartAGCount) { DARABONBA_PTR_SET_VALUE(activeSmartAGCount_, activeSmartAGCount) };


      // inactiveSmartAGCount Field Functions 
      bool hasInactiveSmartAGCount() const { return this->inactiveSmartAGCount_ != nullptr;};
      void deleteInactiveSmartAGCount() { this->inactiveSmartAGCount_ = nullptr;};
      inline int32_t getInactiveSmartAGCount() const { DARABONBA_PTR_GET_DEFAULT(inactiveSmartAGCount_, 0) };
      inline AccessPoints& setInactiveSmartAGCount(int32_t inactiveSmartAGCount) { DARABONBA_PTR_SET_VALUE(inactiveSmartAGCount_, inactiveSmartAGCount) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
      inline AccessPoints& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
      inline AccessPoints& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    protected:
      // The ID of the access point.
      shared_ptr<int32_t> accessPointId_ {};
      // The number of available SAG instances in the access point.
      shared_ptr<int32_t> activeSmartAGCount_ {};
      // The number of offline SAG instances in the access point.
      shared_ptr<int32_t> inactiveSmartAGCount_ {};
      // The latitude of the access point.
      shared_ptr<string> latitude_ {};
      // The longitude of the access point.
      shared_ptr<string> longitude_ {};
    };

    virtual bool empty() const override { return this->accessPoints_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessPoints Field Functions 
    bool hasAccessPoints() const { return this->accessPoints_ != nullptr;};
    void deleteAccessPoints() { this->accessPoints_ = nullptr;};
    inline const vector<ListAccessPointsResponseBody::AccessPoints> & getAccessPoints() const { DARABONBA_PTR_GET_CONST(accessPoints_, vector<ListAccessPointsResponseBody::AccessPoints>) };
    inline vector<ListAccessPointsResponseBody::AccessPoints> getAccessPoints() { DARABONBA_PTR_GET(accessPoints_, vector<ListAccessPointsResponseBody::AccessPoints>) };
    inline ListAccessPointsResponseBody& setAccessPoints(const vector<ListAccessPointsResponseBody::AccessPoints> & accessPoints) { DARABONBA_PTR_SET_VALUE(accessPoints_, accessPoints) };
    inline ListAccessPointsResponseBody& setAccessPoints(vector<ListAccessPointsResponseBody::AccessPoints> && accessPoints) { DARABONBA_PTR_SET_RVALUE(accessPoints_, accessPoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the access point.
    shared_ptr<vector<ListAccessPointsResponseBody::AccessPoints>> accessPoints_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of access points.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
