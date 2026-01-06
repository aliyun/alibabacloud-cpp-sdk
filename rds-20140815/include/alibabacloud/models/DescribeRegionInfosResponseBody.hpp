// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRegionInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionInfosResponseBody() = default ;
    DescribeRegionInfosResponseBody(const DescribeRegionInfosResponseBody &) = default ;
    DescribeRegionInfosResponseBody(DescribeRegionInfosResponseBody &&) = default ;
    DescribeRegionInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionInfosResponseBody() = default ;
    DescribeRegionInfosResponseBody& operator=(const DescribeRegionInfosResponseBody &) = default ;
    DescribeRegionInfosResponseBody& operator=(DescribeRegionInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(RDSRegion, RDSRegion_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(RDSRegion, RDSRegion_);
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
      class RDSRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RDSRegion& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, RDSRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        RDSRegion() = default ;
        RDSRegion(const RDSRegion &) = default ;
        RDSRegion(RDSRegion &&) = default ;
        RDSRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RDSRegion() = default ;
        RDSRegion& operator=(const RDSRegion &) = default ;
        RDSRegion& operator=(RDSRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionId_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RDSRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The region ID.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->RDSRegion_ == nullptr; };
      // RDSRegion Field Functions 
      bool hasRDSRegion() const { return this->RDSRegion_ != nullptr;};
      void deleteRDSRegion() { this->RDSRegion_ = nullptr;};
      inline const vector<Regions::RDSRegion> & getRDSRegion() const { DARABONBA_PTR_GET_CONST(RDSRegion_, vector<Regions::RDSRegion>) };
      inline vector<Regions::RDSRegion> getRDSRegion() { DARABONBA_PTR_GET(RDSRegion_, vector<Regions::RDSRegion>) };
      inline Regions& setRDSRegion(const vector<Regions::RDSRegion> & rDSRegion) { DARABONBA_PTR_SET_VALUE(RDSRegion_, rDSRegion) };
      inline Regions& setRDSRegion(vector<Regions::RDSRegion> && rDSRegion) { DARABONBA_PTR_SET_RVALUE(RDSRegion_, rDSRegion) };


    protected:
      shared_ptr<vector<Regions::RDSRegion>> RDSRegion_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionInfosResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionInfosResponseBody::Regions) };
    inline DescribeRegionInfosResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeRegionInfosResponseBody::Regions) };
    inline DescribeRegionInfosResponseBody& setRegions(const DescribeRegionInfosResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionInfosResponseBody& setRegions(DescribeRegionInfosResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of regions.
    shared_ptr<DescribeRegionInfosResponseBody::Regions> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
