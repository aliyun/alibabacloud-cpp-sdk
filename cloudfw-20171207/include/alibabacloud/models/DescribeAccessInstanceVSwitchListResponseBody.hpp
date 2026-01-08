// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVSWITCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVSWITCHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceVSwitchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeAccessInstanceVSwitchListResponseBody() = default ;
    DescribeAccessInstanceVSwitchListResponseBody(const DescribeAccessInstanceVSwitchListResponseBody &) = default ;
    DescribeAccessInstanceVSwitchListResponseBody(DescribeAccessInstanceVSwitchListResponseBody &&) = default ;
    DescribeAccessInstanceVSwitchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceVSwitchListResponseBody() = default ;
    DescribeAccessInstanceVSwitchListResponseBody& operator=(const DescribeAccessInstanceVSwitchListResponseBody &) = default ;
    DescribeAccessInstanceVSwitchListResponseBody& operator=(DescribeAccessInstanceVSwitchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchList, vSwitchList_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchList, vSwitchList_);
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
      class VSwitchList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitchList& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(FirewallVSwitch, firewallVSwitch_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitchList& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(FirewallVSwitch, firewallVSwitch_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        VSwitchList() = default ;
        VSwitchList(const VSwitchList &) = default ;
        VSwitchList(VSwitchList &&) = default ;
        VSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitchList() = default ;
        VSwitchList& operator=(const VSwitchList &) = default ;
        VSwitchList& operator=(VSwitchList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->firewallVSwitch_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr && this->vpcId_ == nullptr; };
        // availableIpAddressCount Field Functions 
        bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
        void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
        inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
        inline VSwitchList& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VSwitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // firewallVSwitch Field Functions 
        bool hasFirewallVSwitch() const { return this->firewallVSwitch_ != nullptr;};
        void deleteFirewallVSwitch() { this->firewallVSwitch_ = nullptr;};
        inline bool getFirewallVSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallVSwitch_, false) };
        inline VSwitchList& setFirewallVSwitch(bool firewallVSwitch) { DARABONBA_PTR_SET_VALUE(firewallVSwitch_, firewallVSwitch) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitchList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline VSwitchList& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VSwitchList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<int64_t> availableIpAddressCount_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<bool> firewallVSwitch_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vSwitchName_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->vSwitchList_ == nullptr
        && this->zoneId_ == nullptr; };
      // vSwitchList Field Functions 
      bool hasVSwitchList() const { return this->vSwitchList_ != nullptr;};
      void deleteVSwitchList() { this->vSwitchList_ = nullptr;};
      inline const vector<Zones::VSwitchList> & getVSwitchList() const { DARABONBA_PTR_GET_CONST(vSwitchList_, vector<Zones::VSwitchList>) };
      inline vector<Zones::VSwitchList> getVSwitchList() { DARABONBA_PTR_GET(vSwitchList_, vector<Zones::VSwitchList>) };
      inline Zones& setVSwitchList(const vector<Zones::VSwitchList> & vSwitchList) { DARABONBA_PTR_SET_VALUE(vSwitchList_, vSwitchList) };
      inline Zones& setVSwitchList(vector<Zones::VSwitchList> && vSwitchList) { DARABONBA_PTR_SET_RVALUE(vSwitchList_, vSwitchList) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<Zones::VSwitchList>> vSwitchList_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->zones_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeAccessInstanceVSwitchListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessInstanceVSwitchListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessInstanceVSwitchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAccessInstanceVSwitchListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<DescribeAccessInstanceVSwitchListResponseBody::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<DescribeAccessInstanceVSwitchListResponseBody::Zones>) };
    inline vector<DescribeAccessInstanceVSwitchListResponseBody::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<DescribeAccessInstanceVSwitchListResponseBody::Zones>) };
    inline DescribeAccessInstanceVSwitchListResponseBody& setZones(const vector<DescribeAccessInstanceVSwitchListResponseBody::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeAccessInstanceVSwitchListResponseBody& setZones(vector<DescribeAccessInstanceVSwitchListResponseBody::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<DescribeAccessInstanceVSwitchListResponseBody::Zones>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
