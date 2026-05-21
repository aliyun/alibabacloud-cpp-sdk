// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListMigrationZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(zoneList, zoneList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(zoneList, zoneList_);
    };
    ListMigrationZonesResponseBody() = default ;
    ListMigrationZonesResponseBody(const ListMigrationZonesResponseBody &) = default ;
    ListMigrationZonesResponseBody(ListMigrationZonesResponseBody &&) = default ;
    ListMigrationZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationZonesResponseBody() = default ;
    ListMigrationZonesResponseBody& operator=(const ListMigrationZonesResponseBody &) = default ;
    ListMigrationZonesResponseBody& operator=(ListMigrationZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneList& obj) { 
        DARABONBA_PTR_TO_JSON(available, available_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneList& obj) { 
        DARABONBA_PTR_FROM_JSON(available, available_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
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
      virtual bool empty() const override { return this->available_ == nullptr
        && this->zoneId_ == nullptr; };
      // available Field Functions 
      bool hasAvailable() const { return this->available_ != nullptr;};
      void deleteAvailable() { this->available_ = nullptr;};
      inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
      inline ZoneList& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<bool> available_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->zoneList_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMigrationZonesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMigrationZonesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMigrationZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneList Field Functions 
    bool hasZoneList() const { return this->zoneList_ != nullptr;};
    void deleteZoneList() { this->zoneList_ = nullptr;};
    inline const vector<ListMigrationZonesResponseBody::ZoneList> & getZoneList() const { DARABONBA_PTR_GET_CONST(zoneList_, vector<ListMigrationZonesResponseBody::ZoneList>) };
    inline vector<ListMigrationZonesResponseBody::ZoneList> getZoneList() { DARABONBA_PTR_GET(zoneList_, vector<ListMigrationZonesResponseBody::ZoneList>) };
    inline ListMigrationZonesResponseBody& setZoneList(const vector<ListMigrationZonesResponseBody::ZoneList> & zoneList) { DARABONBA_PTR_SET_VALUE(zoneList_, zoneList) };
    inline ListMigrationZonesResponseBody& setZoneList(vector<ListMigrationZonesResponseBody::ZoneList> && zoneList) { DARABONBA_PTR_SET_RVALUE(zoneList_, zoneList) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListMigrationZonesResponseBody::ZoneList>> zoneList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
