// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
      DARABONBA_PTR_TO_JSON(ChildInstanceAttributes, childInstanceAttributes_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceName, childInstanceName_);
      DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceAttributes, childInstanceAttributes_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceName, childInstanceName_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenAttachedChildInstanceAttributeResponseBody() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody(const DescribeCenAttachedChildInstanceAttributeResponseBody &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody(DescribeCenAttachedChildInstanceAttributeResponseBody &&) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstanceAttributeResponseBody() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody& operator=(const DescribeCenAttachedChildInstanceAttributeResponseBody &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBody& operator=(DescribeCenAttachedChildInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChildInstanceAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChildInstanceAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
        DARABONBA_PTR_TO_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
        DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      };
      friend void from_json(const Darabonba::Json& j, ChildInstanceAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
        DARABONBA_PTR_FROM_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
        DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      };
      ChildInstanceAttributes() = default ;
      ChildInstanceAttributes(const ChildInstanceAttributes &) = default ;
      ChildInstanceAttributes(ChildInstanceAttributes &&) = default ;
      ChildInstanceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChildInstanceAttributes() = default ;
      ChildInstanceAttributes& operator=(const ChildInstanceAttributes &) = default ;
      ChildInstanceAttributes& operator=(ChildInstanceAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecondaryCidrBlocks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecondaryCidrBlocks& obj) { 
          DARABONBA_PTR_TO_JSON(secondaryCidrBlock, secondaryCidrBlock_);
        };
        friend void from_json(const Darabonba::Json& j, SecondaryCidrBlocks& obj) { 
          DARABONBA_PTR_FROM_JSON(secondaryCidrBlock, secondaryCidrBlock_);
        };
        SecondaryCidrBlocks() = default ;
        SecondaryCidrBlocks(const SecondaryCidrBlocks &) = default ;
        SecondaryCidrBlocks(SecondaryCidrBlocks &&) = default ;
        SecondaryCidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecondaryCidrBlocks() = default ;
        SecondaryCidrBlocks& operator=(const SecondaryCidrBlocks &) = default ;
        SecondaryCidrBlocks& operator=(SecondaryCidrBlocks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->secondaryCidrBlock_ == nullptr; };
        // secondaryCidrBlock Field Functions 
        bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
        void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
        inline const vector<string> & getSecondaryCidrBlock() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlock_, vector<string>) };
        inline vector<string> getSecondaryCidrBlock() { DARABONBA_PTR_GET(secondaryCidrBlock_, vector<string>) };
        inline SecondaryCidrBlocks& setSecondaryCidrBlock(const vector<string> & secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };
        inline SecondaryCidrBlocks& setSecondaryCidrBlock(vector<string> && secondaryCidrBlock) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlock_, secondaryCidrBlock) };


      protected:
        shared_ptr<vector<string>> secondaryCidrBlock_ {};
      };

      class Ipv6CidrBlocks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6CidrBlocks& obj) { 
          DARABONBA_PTR_TO_JSON(ipv6CidrBlock, ipv6CidrBlock_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6CidrBlocks& obj) { 
          DARABONBA_PTR_FROM_JSON(ipv6CidrBlock, ipv6CidrBlock_);
        };
        Ipv6CidrBlocks() = default ;
        Ipv6CidrBlocks(const Ipv6CidrBlocks &) = default ;
        Ipv6CidrBlocks(Ipv6CidrBlocks &&) = default ;
        Ipv6CidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6CidrBlocks() = default ;
        Ipv6CidrBlocks& operator=(const Ipv6CidrBlocks &) = default ;
        Ipv6CidrBlocks& operator=(Ipv6CidrBlocks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ipv6CidrBlock : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6CidrBlock& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
            DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6CidrBlock& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
            DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
          };
          Ipv6CidrBlock() = default ;
          Ipv6CidrBlock(const Ipv6CidrBlock &) = default ;
          Ipv6CidrBlock(Ipv6CidrBlock &&) = default ;
          Ipv6CidrBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6CidrBlock() = default ;
          Ipv6CidrBlock& operator=(const Ipv6CidrBlock &) = default ;
          Ipv6CidrBlock& operator=(Ipv6CidrBlock &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipv6CidrBlock_ == nullptr
        && this->ipv6Isp_ == nullptr; };
          // ipv6CidrBlock Field Functions 
          bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
          void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
          inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
          inline Ipv6CidrBlock& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


          // ipv6Isp Field Functions 
          bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
          void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
          inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
          inline Ipv6CidrBlock& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


        protected:
          // The IPv6 CIDR block of the VPC.
          shared_ptr<string> ipv6CidrBlock_ {};
          // The type of the IPv6 CIDR block of the VPC. Valid values:
          // 
          // *   BGP (default): Alibaba Cloud Border Gateway Protocol (BGP) IPv6
          // *   ChinaMobile: China Mobile (single line)
          // *   ChinaUnicom: China Unicom (single line)
          // *   ChinaTelecom: China Telecom (single line)
          // 
          // >  If you are on the whitelist of single-line bandwidth, you can set this parameter to ChinaTelecom, ChinaUnicom, or ChinaMobile.
          shared_ptr<string> ipv6Isp_ {};
        };

        virtual bool empty() const override { return this->ipv6CidrBlock_ == nullptr; };
        // ipv6CidrBlock Field Functions 
        bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
        void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
        inline const vector<Ipv6CidrBlocks::Ipv6CidrBlock> & getIpv6CidrBlock() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlock_, vector<Ipv6CidrBlocks::Ipv6CidrBlock>) };
        inline vector<Ipv6CidrBlocks::Ipv6CidrBlock> getIpv6CidrBlock() { DARABONBA_PTR_GET(ipv6CidrBlock_, vector<Ipv6CidrBlocks::Ipv6CidrBlock>) };
        inline Ipv6CidrBlocks& setIpv6CidrBlock(const vector<Ipv6CidrBlocks::Ipv6CidrBlock> & ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };
        inline Ipv6CidrBlocks& setIpv6CidrBlock(vector<Ipv6CidrBlocks::Ipv6CidrBlock> && ipv6CidrBlock) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlock_, ipv6CidrBlock) };


      protected:
        shared_ptr<vector<Ipv6CidrBlocks::Ipv6CidrBlock>> ipv6CidrBlock_ {};
      };

      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->ipv6CidrBlock_ == nullptr && this->ipv6CidrBlocks_ == nullptr && this->secondaryCidrBlocks_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline ChildInstanceAttributes& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // ipv6CidrBlock Field Functions 
      bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
      void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
      inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
      inline ChildInstanceAttributes& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


      // ipv6CidrBlocks Field Functions 
      bool hasIpv6CidrBlocks() const { return this->ipv6CidrBlocks_ != nullptr;};
      void deleteIpv6CidrBlocks() { this->ipv6CidrBlocks_ = nullptr;};
      inline const ChildInstanceAttributes::Ipv6CidrBlocks & getIpv6CidrBlocks() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlocks_, ChildInstanceAttributes::Ipv6CidrBlocks) };
      inline ChildInstanceAttributes::Ipv6CidrBlocks getIpv6CidrBlocks() { DARABONBA_PTR_GET(ipv6CidrBlocks_, ChildInstanceAttributes::Ipv6CidrBlocks) };
      inline ChildInstanceAttributes& setIpv6CidrBlocks(const ChildInstanceAttributes::Ipv6CidrBlocks & ipv6CidrBlocks) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };
      inline ChildInstanceAttributes& setIpv6CidrBlocks(ChildInstanceAttributes::Ipv6CidrBlocks && ipv6CidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };


      // secondaryCidrBlocks Field Functions 
      bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
      void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
      inline const ChildInstanceAttributes::SecondaryCidrBlocks & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, ChildInstanceAttributes::SecondaryCidrBlocks) };
      inline ChildInstanceAttributes::SecondaryCidrBlocks getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, ChildInstanceAttributes::SecondaryCidrBlocks) };
      inline ChildInstanceAttributes& setSecondaryCidrBlocks(const ChildInstanceAttributes::SecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
      inline ChildInstanceAttributes& setSecondaryCidrBlocks(ChildInstanceAttributes::SecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    protected:
      // The IPv4 CIDR block of the VPC.
      shared_ptr<string> cidrBlock_ {};
      // The IPv6 CIDR block of the VPC.
      shared_ptr<string> ipv6CidrBlock_ {};
      // The IPv6 CIDR blocks of the VPC.
      shared_ptr<ChildInstanceAttributes::Ipv6CidrBlocks> ipv6CidrBlocks_ {};
      // The information about the VPC secondary CIDR block.
      shared_ptr<ChildInstanceAttributes::SecondaryCidrBlocks> secondaryCidrBlocks_ {};
    };

    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->childInstanceAttachTime_ == nullptr && this->childInstanceAttributes_ == nullptr && this->childInstanceId_ == nullptr && this->childInstanceName_ == nullptr && this->childInstanceOwnerId_ == nullptr
        && this->childInstanceRegionId_ == nullptr && this->childInstanceType_ == nullptr && this->managedService_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceAttachTime Field Functions 
    bool hasChildInstanceAttachTime() const { return this->childInstanceAttachTime_ != nullptr;};
    void deleteChildInstanceAttachTime() { this->childInstanceAttachTime_ = nullptr;};
    inline string getChildInstanceAttachTime() const { DARABONBA_PTR_GET_DEFAULT(childInstanceAttachTime_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceAttachTime(string childInstanceAttachTime) { DARABONBA_PTR_SET_VALUE(childInstanceAttachTime_, childInstanceAttachTime) };


    // childInstanceAttributes Field Functions 
    bool hasChildInstanceAttributes() const { return this->childInstanceAttributes_ != nullptr;};
    void deleteChildInstanceAttributes() { this->childInstanceAttributes_ = nullptr;};
    inline const DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes & getChildInstanceAttributes() const { DARABONBA_PTR_GET_CONST(childInstanceAttributes_, DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes getChildInstanceAttributes() { DARABONBA_PTR_GET(childInstanceAttributes_, DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceAttributes(const DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes & childInstanceAttributes) { DARABONBA_PTR_SET_VALUE(childInstanceAttributes_, childInstanceAttributes) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceAttributes(DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes && childInstanceAttributes) { DARABONBA_PTR_SET_RVALUE(childInstanceAttributes_, childInstanceAttributes) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceName Field Functions 
    bool hasChildInstanceName() const { return this->childInstanceName_ != nullptr;};
    void deleteChildInstanceName() { this->childInstanceName_ = nullptr;};
    inline string getChildInstanceName() const { DARABONBA_PTR_GET_DEFAULT(childInstanceName_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceName(string childInstanceName) { DARABONBA_PTR_SET_VALUE(childInstanceName_, childInstanceName) };


    // childInstanceOwnerId Field Functions 
    bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
    void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
    inline int64_t getChildInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string getChildInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // managedService Field Functions 
    bool hasManagedService() const { return this->managedService_ != nullptr;};
    void deleteManagedService() { this->managedService_ = nullptr;};
    inline string getManagedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the CEN instance.
    shared_ptr<string> cenId_ {};
    // The time when the network instance was attached to the CEN instance.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
    shared_ptr<string> childInstanceAttachTime_ {};
    // The details about the network instance.
    shared_ptr<DescribeCenAttachedChildInstanceAttributeResponseBody::ChildInstanceAttributes> childInstanceAttributes_ {};
    // The ID of the network instance.
    shared_ptr<string> childInstanceId_ {};
    // The name of the network instance.
    shared_ptr<string> childInstanceName_ {};
    // The ID of the Alibaba Cloud account to which the network instance belongs.
    shared_ptr<int64_t> childInstanceOwnerId_ {};
    // The region ID of the network instance.
    shared_ptr<string> childInstanceRegionId_ {};
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **CCN**: CCN instance
    shared_ptr<string> childInstanceType_ {};
    shared_ptr<string> managedService_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the network instance is attached to the CEN instance.
    // 
    // *   **Attaching**: The network instance is being attached to the CEN instance.
    // *   **Attached**: The network instance is attached to the CEN instance.
    // *   **Detaching**: The network instance is being detached from the CEN instance.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
