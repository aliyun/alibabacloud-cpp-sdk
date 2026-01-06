// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionModelList, regionModelList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionModelList, regionModelList_);
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
    class RegionModelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionModelList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, RegionModelList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      RegionModelList() = default ;
      RegionModelList(const RegionModelList &) = default ;
      RegionModelList(RegionModelList &&) = default ;
      RegionModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionModelList() = default ;
      RegionModelList& operator=(const RegionModelList &) = default ;
      RegionModelList& operator=(RegionModelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zones& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
          DARABONBA_PTR_TO_JSON(VpcEnabled, vpcEnabled_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zones& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
          DARABONBA_PTR_FROM_JSON(VpcEnabled, vpcEnabled_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Zones() = default ;
        Zones(const Zones &) = default ;
        Zones(Zones &&) = default ;
        Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zones() = default ;
        Zones& operator=(const Zones &) = default ;
        Zones& operator=(Zones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->disabled_ == nullptr && this->label_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->subDomain_ == nullptr
        && this->vpcEnabled_ == nullptr && this->zoneId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Zones& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline Zones& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Zones& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Zones& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Zones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // subDomain Field Functions 
        bool hasSubDomain() const { return this->subDomain_ != nullptr;};
        void deleteSubDomain() { this->subDomain_ = nullptr;};
        inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
        inline Zones& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


        // vpcEnabled Field Functions 
        bool hasVpcEnabled() const { return this->vpcEnabled_ != nullptr;};
        void deleteVpcEnabled() { this->vpcEnabled_ = nullptr;};
        inline bool getVpcEnabled() const { DARABONBA_PTR_GET_DEFAULT(vpcEnabled_, false) };
        inline Zones& setVpcEnabled(bool vpcEnabled) { DARABONBA_PTR_SET_VALUE(vpcEnabled_, vpcEnabled) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The zone description.
        shared_ptr<string> description_ {};
        // Indicates whether the VPC is disabled.
        shared_ptr<bool> disabled_ {};
        // The label.
        shared_ptr<string> label_ {};
        // The zone name.
        shared_ptr<string> name_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The subdomain.
        shared_ptr<string> subDomain_ {};
        // Indicates whether the VPC is enabled.
        shared_ptr<bool> vpcEnabled_ {};
        // Indicates whether the virtual private cloud (VPC) is available.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->zones_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionModelList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<RegionModelList::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<RegionModelList::Zones>) };
      inline vector<RegionModelList::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<RegionModelList::Zones>) };
      inline RegionModelList& setZones(const vector<RegionModelList::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline RegionModelList& setZones(vector<RegionModelList::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
      // An array of zones.
      shared_ptr<vector<RegionModelList::Zones>> zones_ {};
    };

    virtual bool empty() const override { return this->regionModelList_ == nullptr
        && this->requestId_ == nullptr; };
    // regionModelList Field Functions 
    bool hasRegionModelList() const { return this->regionModelList_ != nullptr;};
    void deleteRegionModelList() { this->regionModelList_ = nullptr;};
    inline const vector<DescribeRegionsResponseBody::RegionModelList> & getRegionModelList() const { DARABONBA_PTR_GET_CONST(regionModelList_, vector<DescribeRegionsResponseBody::RegionModelList>) };
    inline vector<DescribeRegionsResponseBody::RegionModelList> getRegionModelList() { DARABONBA_PTR_GET(regionModelList_, vector<DescribeRegionsResponseBody::RegionModelList>) };
    inline DescribeRegionsResponseBody& setRegionModelList(const vector<DescribeRegionsResponseBody::RegionModelList> & regionModelList) { DARABONBA_PTR_SET_VALUE(regionModelList_, regionModelList) };
    inline DescribeRegionsResponseBody& setRegionModelList(vector<DescribeRegionsResponseBody::RegionModelList> && regionModelList) { DARABONBA_PTR_SET_RVALUE(regionModelList_, regionModelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of regions.
    shared_ptr<vector<DescribeRegionsResponseBody::RegionModelList>> regionModelList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
