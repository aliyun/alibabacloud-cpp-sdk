// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEBUSIREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEBUSIREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListAvailableBusiRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableBusiRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableBusiRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAvailableBusiRegionsResponseBody() = default ;
    ListAvailableBusiRegionsResponseBody(const ListAvailableBusiRegionsResponseBody &) = default ;
    ListAvailableBusiRegionsResponseBody(ListAvailableBusiRegionsResponseBody &&) = default ;
    ListAvailableBusiRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableBusiRegionsResponseBody() = default ;
    ListAvailableBusiRegionsResponseBody& operator=(const ListAvailableBusiRegionsResponseBody &) = default ;
    ListAvailableBusiRegionsResponseBody& operator=(ListAvailableBusiRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(ChinaMainland, chinaMainland_);
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(Pop, pop_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(ChinaMainland, chinaMainland_);
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(Pop, pop_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chinaMainland_ == nullptr
        && this->localName_ == nullptr && this->pop_ == nullptr && this->regionId_ == nullptr; };
      // chinaMainland Field Functions 
      bool hasChinaMainland() const { return this->chinaMainland_ != nullptr;};
      void deleteChinaMainland() { this->chinaMainland_ = nullptr;};
      inline bool getChinaMainland() const { DARABONBA_PTR_GET_DEFAULT(chinaMainland_, false) };
      inline Regions& setChinaMainland(bool chinaMainland) { DARABONBA_PTR_SET_VALUE(chinaMainland_, chinaMainland) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Regions& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // pop Field Functions 
      bool hasPop() const { return this->pop_ != nullptr;};
      void deletePop() { this->pop_ = nullptr;};
      inline bool getPop() const { DARABONBA_PTR_GET_DEFAULT(pop_, false) };
      inline Regions& setPop(bool pop) { DARABONBA_PTR_SET_VALUE(pop_, pop) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Regions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // Indicates whether the region is in the Chinese mainland. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> chinaMainland_ {};
      // The name of the region.
      shared_ptr<string> localName_ {};
      // Indicates whether it is a point of presence (PoP) of Alibaba Cloud. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> pop_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListAvailableBusiRegionsResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListAvailableBusiRegionsResponseBody::Regions>) };
    inline vector<ListAvailableBusiRegionsResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<ListAvailableBusiRegionsResponseBody::Regions>) };
    inline ListAvailableBusiRegionsResponseBody& setRegions(const vector<ListAvailableBusiRegionsResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListAvailableBusiRegionsResponseBody& setRegions(vector<ListAvailableBusiRegionsResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableBusiRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the regions.
    shared_ptr<vector<ListAvailableBusiRegionsResponseBody::Regions>> regions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
