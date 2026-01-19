// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody(DescribeRegionsResponseBody &&) = default ;
    DescribeRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody& operator=(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody& operator=(DescribeRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
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
      class Region : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Region& obj) { 
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        Region() = default ;
        Region(const Region &) = default ;
        Region(Region &&) = default ;
        Region(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Region() = default ;
        Region& operator=(const Region &) = default ;
        Region& operator=(Region &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->localName_ == nullptr
        && this->regionEndpoint_ == nullptr && this->regionId_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Region& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // regionEndpoint Field Functions 
        bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
        void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
        inline string getRegionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
        inline Region& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The name of the region.
        shared_ptr<string> localName_ {};
        // The endpoint of the service for the region.
        shared_ptr<string> regionEndpoint_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->region_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline const vector<Regions::Region> & getRegion() const { DARABONBA_PTR_GET_CONST(region_, vector<Regions::Region>) };
      inline vector<Regions::Region> getRegion() { DARABONBA_PTR_GET(region_, vector<Regions::Region>) };
      inline Regions& setRegion(const vector<Regions::Region> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
      inline Regions& setRegion(vector<Regions::Region> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


    protected:
      shared_ptr<vector<Regions::Region>> region_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionsResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionsResponseBody::Regions) };
    inline DescribeRegionsResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeRegionsResponseBody::Regions) };
    inline DescribeRegionsResponseBody& setRegions(const DescribeRegionsResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionsResponseBody& setRegions(DescribeRegionsResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned region information. It is an array that consists of Region data.
    shared_ptr<DescribeRegionsResponseBody::Regions> regions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
