// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVPCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVPCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRdsVpcsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVpcsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVpcsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
    };
    DescribeRdsVpcsResponseBody() = default ;
    DescribeRdsVpcsResponseBody(const DescribeRdsVpcsResponseBody &) = default ;
    DescribeRdsVpcsResponseBody(DescribeRdsVpcsResponseBody &&) = default ;
    DescribeRdsVpcsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVpcsResponseBody() = default ;
    DescribeRdsVpcsResponseBody& operator=(const DescribeRdsVpcsResponseBody &) = default ;
    DescribeRdsVpcsResponseBody& operator=(DescribeRdsVpcsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vpcs& obj) { 
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      };
      friend void from_json(const Darabonba::Json& j, Vpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
      };
      Vpcs() = default ;
      Vpcs(const Vpcs &) = default ;
      Vpcs(Vpcs &&) = default ;
      Vpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vpcs() = default ;
      Vpcs& operator=(const Vpcs &) = default ;
      Vpcs& operator=(Vpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Vpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Bid, bid_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchs, vSwitchs_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Bid, bid_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchs, vSwitchs_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        Vpc() = default ;
        Vpc(const Vpc &) = default ;
        Vpc(Vpc &&) = default ;
        Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vpc() = default ;
        Vpc& operator=(const Vpc &) = default ;
        Vpc& operator=(Vpc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VSwitchs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchs& obj) { 
            DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_TO_JSON(IzNo, izNo_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchs& obj) { 
            DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
          };
          VSwitchs() = default ;
          VSwitchs(const VSwitchs &) = default ;
          VSwitchs(VSwitchs &&) = default ;
          VSwitchs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchs() = default ;
          VSwitchs& operator=(const VSwitchs &) = default ;
          VSwitchs& operator=(VSwitchs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->isDefault_ == nullptr && this->izNo_ == nullptr && this->status_ == nullptr
        && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr; };
          // cidrBlock Field Functions 
          bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
          void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
          inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
          inline VSwitchs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline VSwitchs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline VSwitchs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // isDefault Field Functions 
          bool hasIsDefault() const { return this->isDefault_ != nullptr;};
          void deleteIsDefault() { this->isDefault_ = nullptr;};
          inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
          inline VSwitchs& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


          // izNo Field Functions 
          bool hasIzNo() const { return this->izNo_ != nullptr;};
          void deleteIzNo() { this->izNo_ = nullptr;};
          inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
          inline VSwitchs& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline VSwitchs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VSwitchs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vSwitchName Field Functions 
          bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
          void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
          inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
          inline VSwitchs& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


        protected:
          shared_ptr<string> cidrBlock_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<bool> isDefault_ {};
          shared_ptr<string> izNo_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> vSwitchId_ {};
          shared_ptr<string> vSwitchName_ {};
        };

        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bid_ == nullptr && this->cidrBlock_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->isDefault_ == nullptr
        && this->regionNo_ == nullptr && this->status_ == nullptr && this->vSwitchs_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
        inline Vpc& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // bid Field Functions 
        bool hasBid() const { return this->bid_ != nullptr;};
        void deleteBid() { this->bid_ = nullptr;};
        inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
        inline Vpc& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline Vpc& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Vpc& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Vpc& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Vpc& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline Vpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Vpc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchs Field Functions 
        bool hasVSwitchs() const { return this->vSwitchs_ != nullptr;};
        void deleteVSwitchs() { this->vSwitchs_ = nullptr;};
        inline const vector<Vpc::VSwitchs> & getVSwitchs() const { DARABONBA_PTR_GET_CONST(vSwitchs_, vector<Vpc::VSwitchs>) };
        inline vector<Vpc::VSwitchs> getVSwitchs() { DARABONBA_PTR_GET(vSwitchs_, vector<Vpc::VSwitchs>) };
        inline Vpc& setVSwitchs(const vector<Vpc::VSwitchs> & vSwitchs) { DARABONBA_PTR_SET_VALUE(vSwitchs_, vSwitchs) };
        inline Vpc& setVSwitchs(vector<Vpc::VSwitchs> && vSwitchs) { DARABONBA_PTR_SET_RVALUE(vSwitchs_, vSwitchs) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline Vpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<string> aliUid_ {};
        shared_ptr<string> bid_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> regionNo_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<Vpc::VSwitchs>> vSwitchs_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->vpc_ == nullptr; };
      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline const vector<Vpcs::Vpc> & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<Vpcs::Vpc>) };
      inline vector<Vpcs::Vpc> getVpc() { DARABONBA_PTR_GET(vpc_, vector<Vpcs::Vpc>) };
      inline Vpcs& setVpc(const vector<Vpcs::Vpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
      inline Vpcs& setVpc(vector<Vpcs::Vpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


    protected:
      shared_ptr<vector<Vpcs::Vpc>> vpc_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vpcs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsVpcsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const DescribeRdsVpcsResponseBody::Vpcs & getVpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, DescribeRdsVpcsResponseBody::Vpcs) };
    inline DescribeRdsVpcsResponseBody::Vpcs getVpcs() { DARABONBA_PTR_GET(vpcs_, DescribeRdsVpcsResponseBody::Vpcs) };
    inline DescribeRdsVpcsResponseBody& setVpcs(const DescribeRdsVpcsResponseBody::Vpcs & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline DescribeRdsVpcsResponseBody& setVpcs(DescribeRdsVpcsResponseBody::Vpcs && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRdsVpcsResponseBody::Vpcs> vpcs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
