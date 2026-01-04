// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GeographicSubRegions, geographicSubRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GeographicSubRegions, geographicSubRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBusinessRegionsResponseBody() = default ;
    ListBusinessRegionsResponseBody(const ListBusinessRegionsResponseBody &) = default ;
    ListBusinessRegionsResponseBody(ListBusinessRegionsResponseBody &&) = default ;
    ListBusinessRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessRegionsResponseBody() = default ;
    ListBusinessRegionsResponseBody& operator=(const ListBusinessRegionsResponseBody &) = default ;
    ListBusinessRegionsResponseBody& operator=(ListBusinessRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GeographicSubRegions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GeographicSubRegions& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, GeographicSubRegions& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      GeographicSubRegions() = default ;
      GeographicSubRegions(const GeographicSubRegions &) = default ;
      GeographicSubRegions(GeographicSubRegions &&) = default ;
      GeographicSubRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GeographicSubRegions() = default ;
      GeographicSubRegions& operator=(const GeographicSubRegions &) = default ;
      GeographicSubRegions& operator=(GeographicSubRegions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->regionId_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GeographicSubRegions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline GeographicSubRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The name of the region where circuits are available.
      shared_ptr<string> name_ {};
      // The ID of the region where circuits are available.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->geographicSubRegions_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListBusinessRegionsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // geographicSubRegions Field Functions 
    bool hasGeographicSubRegions() const { return this->geographicSubRegions_ != nullptr;};
    void deleteGeographicSubRegions() { this->geographicSubRegions_ = nullptr;};
    inline const vector<ListBusinessRegionsResponseBody::GeographicSubRegions> & getGeographicSubRegions() const { DARABONBA_PTR_GET_CONST(geographicSubRegions_, vector<ListBusinessRegionsResponseBody::GeographicSubRegions>) };
    inline vector<ListBusinessRegionsResponseBody::GeographicSubRegions> getGeographicSubRegions() { DARABONBA_PTR_GET(geographicSubRegions_, vector<ListBusinessRegionsResponseBody::GeographicSubRegions>) };
    inline ListBusinessRegionsResponseBody& setGeographicSubRegions(const vector<ListBusinessRegionsResponseBody::GeographicSubRegions> & geographicSubRegions) { DARABONBA_PTR_SET_VALUE(geographicSubRegions_, geographicSubRegions) };
    inline ListBusinessRegionsResponseBody& setGeographicSubRegions(vector<ListBusinessRegionsResponseBody::GeographicSubRegions> && geographicSubRegions) { DARABONBA_PTR_SET_RVALUE(geographicSubRegions_, geographicSubRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBusinessRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of entries returned.
    shared_ptr<int64_t> count_ {};
    // The list of regions available for Express Connect circuits.
    shared_ptr<vector<ListBusinessRegionsResponseBody::GeographicSubRegions>> geographicSubRegions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
