// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeRdsVSwitchsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVSwitchsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVSwitchsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeRdsVSwitchsResponseBody() = default ;
    DescribeRdsVSwitchsResponseBody(const DescribeRdsVSwitchsResponseBody &) = default ;
    DescribeRdsVSwitchsResponseBody(DescribeRdsVSwitchsResponseBody &&) = default ;
    DescribeRdsVSwitchsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVSwitchsResponseBody() = default ;
    DescribeRdsVSwitchsResponseBody& operator=(const DescribeRdsVSwitchsResponseBody &) = default ;
    DescribeRdsVSwitchsResponseBody& operator=(DescribeRdsVSwitchsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Bid, bid_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(IzNo, izNo_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Bid, bid_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
        };
        VSwitch() = default ;
        VSwitch(const VSwitch &) = default ;
        VSwitch(VSwitch &&) = default ;
        VSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitch() = default ;
        VSwitch& operator=(const VSwitch &) = default ;
        VSwitch& operator=(VSwitch &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bid_ == nullptr && this->cidrBlock_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->isDefault_ == nullptr
        && this->izNo_ == nullptr && this->regionNo_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
        inline VSwitch& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // bid Field Functions 
        bool hasBid() const { return this->bid_ != nullptr;};
        void deleteBid() { this->bid_ = nullptr;};
        inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
        inline VSwitch& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VSwitch& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline VSwitch& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline VSwitch& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline VSwitch& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // izNo Field Functions 
        bool hasIzNo() const { return this->izNo_ != nullptr;};
        void deleteIzNo() { this->izNo_ = nullptr;};
        inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
        inline VSwitch& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline VSwitch& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VSwitch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline VSwitch& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


      protected:
        shared_ptr<string> aliUid_ {};
        shared_ptr<string> bid_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> izNo_ {};
        shared_ptr<string> regionNo_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vSwitchName_ {};
      };

      virtual bool empty() const override { return this->vSwitch_ == nullptr; };
      // vSwitch Field Functions 
      bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
      void deleteVSwitch() { this->vSwitch_ = nullptr;};
      inline const vector<VSwitches::VSwitch> & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<VSwitches::VSwitch>) };
      inline vector<VSwitches::VSwitch> getVSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<VSwitches::VSwitch>) };
      inline VSwitches& setVSwitch(const vector<VSwitches::VSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
      inline VSwitches& setVSwitch(vector<VSwitches::VSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    protected:
      shared_ptr<vector<VSwitches::VSwitch>> vSwitch_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vSwitches_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsVSwitchsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const DescribeRdsVSwitchsResponseBody::VSwitches & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, DescribeRdsVSwitchsResponseBody::VSwitches) };
    inline DescribeRdsVSwitchsResponseBody::VSwitches getVSwitches() { DARABONBA_PTR_GET(vSwitches_, DescribeRdsVSwitchsResponseBody::VSwitches) };
    inline DescribeRdsVSwitchsResponseBody& setVSwitches(const DescribeRdsVSwitchsResponseBody::VSwitches & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeRdsVSwitchsResponseBody& setVSwitches(DescribeRdsVSwitchsResponseBody::VSwitches && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRdsVSwitchsResponseBody::VSwitches> vSwitches_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
