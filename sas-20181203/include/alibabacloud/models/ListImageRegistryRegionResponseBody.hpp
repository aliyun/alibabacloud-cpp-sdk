// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImageRegistryRegionResponseBody() = default ;
    ListImageRegistryRegionResponseBody(const ListImageRegistryRegionResponseBody &) = default ;
    ListImageRegistryRegionResponseBody(ListImageRegistryRegionResponseBody &&) = default ;
    ListImageRegistryRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryRegionResponseBody() = default ;
    ListImageRegistryRegionResponseBody& operator=(const ListImageRegistryRegionResponseBody &) = default ;
    ListImageRegistryRegionResponseBody& operator=(ListImageRegistryRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
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
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->regionName_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Regions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline Regions& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    protected:
      // The region ID of the image.
      shared_ptr<string> regionId_ {};
      // The name of the region.
      shared_ptr<string> regionName_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListImageRegistryRegionResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListImageRegistryRegionResponseBody::Regions>) };
    inline vector<ListImageRegistryRegionResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<ListImageRegistryRegionResponseBody::Regions>) };
    inline ListImageRegistryRegionResponseBody& setRegions(const vector<ListImageRegistryRegionResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListImageRegistryRegionResponseBody& setRegions(vector<ListImageRegistryRegionResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageRegistryRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of regions.
    shared_ptr<vector<ListImageRegistryRegionResponseBody::Regions>> regions_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
