// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DescribeRegionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeRegionsOutput() = default ;
    DescribeRegionsOutput(const DescribeRegionsOutput &) = default ;
    DescribeRegionsOutput(DescribeRegionsOutput &&) = default ;
    DescribeRegionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsOutput() = default ;
    DescribeRegionsOutput& operator=(const DescribeRegionsOutput &) = default ;
    DescribeRegionsOutput& operator=(DescribeRegionsOutput &&) = default ;
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
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
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
        && this->regionId_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Region& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        shared_ptr<string> localName_ {};
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

    virtual bool empty() const override { return this->regions_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionsOutput::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionsOutput::Regions) };
    inline DescribeRegionsOutput::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeRegionsOutput::Regions) };
    inline DescribeRegionsOutput& setRegions(const DescribeRegionsOutput::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionsOutput& setRegions(DescribeRegionsOutput::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    shared_ptr<DescribeRegionsOutput::Regions> regions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
