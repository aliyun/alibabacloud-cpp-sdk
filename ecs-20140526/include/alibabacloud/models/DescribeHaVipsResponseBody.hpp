// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeHaVipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HaVips, haVips_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVips, haVips_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHaVipsResponseBody() = default ;
    DescribeHaVipsResponseBody(const DescribeHaVipsResponseBody &) = default ;
    DescribeHaVipsResponseBody(DescribeHaVipsResponseBody &&) = default ;
    DescribeHaVipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBody() = default ;
    DescribeHaVipsResponseBody& operator=(const DescribeHaVipsResponseBody &) = default ;
    DescribeHaVipsResponseBody& operator=(DescribeHaVipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HaVips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HaVips& obj) { 
        DARABONBA_PTR_TO_JSON(HaVip, haVip_);
      };
      friend void from_json(const Darabonba::Json& j, HaVips& obj) { 
        DARABONBA_PTR_FROM_JSON(HaVip, haVip_);
      };
      HaVips() = default ;
      HaVips(const HaVips &) = default ;
      HaVips(HaVips &&) = default ;
      HaVips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HaVips() = default ;
      HaVips& operator=(const HaVips &) = default ;
      HaVips& operator=(HaVips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HaVip : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HaVip& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedEipAddresses, associatedEipAddresses_);
          DARABONBA_PTR_TO_JSON(AssociatedInstances, associatedInstances_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, HaVip& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedEipAddresses, associatedEipAddresses_);
          DARABONBA_PTR_FROM_JSON(AssociatedInstances, associatedInstances_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        HaVip() = default ;
        HaVip(const HaVip &) = default ;
        HaVip(HaVip &&) = default ;
        HaVip(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HaVip() = default ;
        HaVip& operator=(const HaVip &) = default ;
        HaVip& operator=(HaVip &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AssociatedInstances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedInstances& obj) { 
            DARABONBA_PTR_TO_JSON(associatedInstance, associatedInstance_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedInstances& obj) { 
            DARABONBA_PTR_FROM_JSON(associatedInstance, associatedInstance_);
          };
          AssociatedInstances() = default ;
          AssociatedInstances(const AssociatedInstances &) = default ;
          AssociatedInstances(AssociatedInstances &&) = default ;
          AssociatedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedInstances() = default ;
          AssociatedInstances& operator=(const AssociatedInstances &) = default ;
          AssociatedInstances& operator=(AssociatedInstances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->associatedInstance_ == nullptr; };
          // associatedInstance Field Functions 
          bool hasAssociatedInstance() const { return this->associatedInstance_ != nullptr;};
          void deleteAssociatedInstance() { this->associatedInstance_ = nullptr;};
          inline const vector<string> & getAssociatedInstance() const { DARABONBA_PTR_GET_CONST(associatedInstance_, vector<string>) };
          inline vector<string> getAssociatedInstance() { DARABONBA_PTR_GET(associatedInstance_, vector<string>) };
          inline AssociatedInstances& setAssociatedInstance(const vector<string> & associatedInstance) { DARABONBA_PTR_SET_VALUE(associatedInstance_, associatedInstance) };
          inline AssociatedInstances& setAssociatedInstance(vector<string> && associatedInstance) { DARABONBA_PTR_SET_RVALUE(associatedInstance_, associatedInstance) };


        protected:
          shared_ptr<vector<string>> associatedInstance_ {};
        };

        class AssociatedEipAddresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedEipAddresses& obj) { 
            DARABONBA_PTR_TO_JSON(associatedEipAddresse, associatedEipAddresse_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedEipAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(associatedEipAddresse, associatedEipAddresse_);
          };
          AssociatedEipAddresses() = default ;
          AssociatedEipAddresses(const AssociatedEipAddresses &) = default ;
          AssociatedEipAddresses(AssociatedEipAddresses &&) = default ;
          AssociatedEipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedEipAddresses() = default ;
          AssociatedEipAddresses& operator=(const AssociatedEipAddresses &) = default ;
          AssociatedEipAddresses& operator=(AssociatedEipAddresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->associatedEipAddresse_ == nullptr; };
          // associatedEipAddresse Field Functions 
          bool hasAssociatedEipAddresse() const { return this->associatedEipAddresse_ != nullptr;};
          void deleteAssociatedEipAddresse() { this->associatedEipAddresse_ = nullptr;};
          inline const vector<string> & getAssociatedEipAddresse() const { DARABONBA_PTR_GET_CONST(associatedEipAddresse_, vector<string>) };
          inline vector<string> getAssociatedEipAddresse() { DARABONBA_PTR_GET(associatedEipAddresse_, vector<string>) };
          inline AssociatedEipAddresses& setAssociatedEipAddresse(const vector<string> & associatedEipAddresse) { DARABONBA_PTR_SET_VALUE(associatedEipAddresse_, associatedEipAddresse) };
          inline AssociatedEipAddresses& setAssociatedEipAddresse(vector<string> && associatedEipAddresse) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresse_, associatedEipAddresse) };


        protected:
          shared_ptr<vector<string>> associatedEipAddresse_ {};
        };

        virtual bool empty() const override { return this->associatedEipAddresses_ == nullptr
        && this->associatedInstances_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->haVipId_ == nullptr && this->ipAddress_ == nullptr
        && this->masterInstanceId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // associatedEipAddresses Field Functions 
        bool hasAssociatedEipAddresses() const { return this->associatedEipAddresses_ != nullptr;};
        void deleteAssociatedEipAddresses() { this->associatedEipAddresses_ = nullptr;};
        inline const HaVip::AssociatedEipAddresses & getAssociatedEipAddresses() const { DARABONBA_PTR_GET_CONST(associatedEipAddresses_, HaVip::AssociatedEipAddresses) };
        inline HaVip::AssociatedEipAddresses getAssociatedEipAddresses() { DARABONBA_PTR_GET(associatedEipAddresses_, HaVip::AssociatedEipAddresses) };
        inline HaVip& setAssociatedEipAddresses(const HaVip::AssociatedEipAddresses & associatedEipAddresses) { DARABONBA_PTR_SET_VALUE(associatedEipAddresses_, associatedEipAddresses) };
        inline HaVip& setAssociatedEipAddresses(HaVip::AssociatedEipAddresses && associatedEipAddresses) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresses_, associatedEipAddresses) };


        // associatedInstances Field Functions 
        bool hasAssociatedInstances() const { return this->associatedInstances_ != nullptr;};
        void deleteAssociatedInstances() { this->associatedInstances_ = nullptr;};
        inline const HaVip::AssociatedInstances & getAssociatedInstances() const { DARABONBA_PTR_GET_CONST(associatedInstances_, HaVip::AssociatedInstances) };
        inline HaVip::AssociatedInstances getAssociatedInstances() { DARABONBA_PTR_GET(associatedInstances_, HaVip::AssociatedInstances) };
        inline HaVip& setAssociatedInstances(const HaVip::AssociatedInstances & associatedInstances) { DARABONBA_PTR_SET_VALUE(associatedInstances_, associatedInstances) };
        inline HaVip& setAssociatedInstances(HaVip::AssociatedInstances && associatedInstances) { DARABONBA_PTR_SET_RVALUE(associatedInstances_, associatedInstances) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline HaVip& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HaVip& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // haVipId Field Functions 
        bool hasHaVipId() const { return this->haVipId_ != nullptr;};
        void deleteHaVipId() { this->haVipId_ = nullptr;};
        inline string getHaVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
        inline HaVip& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline HaVip& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // masterInstanceId Field Functions 
        bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
        void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
        inline string getMasterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
        inline HaVip& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline HaVip& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HaVip& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline HaVip& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline HaVip& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<HaVip::AssociatedEipAddresses> associatedEipAddresses_ {};
        shared_ptr<HaVip::AssociatedInstances> associatedInstances_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> haVipId_ {};
        shared_ptr<string> ipAddress_ {};
        shared_ptr<string> masterInstanceId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->haVip_ == nullptr; };
      // haVip Field Functions 
      bool hasHaVip() const { return this->haVip_ != nullptr;};
      void deleteHaVip() { this->haVip_ = nullptr;};
      inline const vector<HaVips::HaVip> & getHaVip() const { DARABONBA_PTR_GET_CONST(haVip_, vector<HaVips::HaVip>) };
      inline vector<HaVips::HaVip> getHaVip() { DARABONBA_PTR_GET(haVip_, vector<HaVips::HaVip>) };
      inline HaVips& setHaVip(const vector<HaVips::HaVip> & haVip) { DARABONBA_PTR_SET_VALUE(haVip_, haVip) };
      inline HaVips& setHaVip(vector<HaVips::HaVip> && haVip) { DARABONBA_PTR_SET_RVALUE(haVip_, haVip) };


    protected:
      shared_ptr<vector<HaVips::HaVip>> haVip_ {};
    };

    virtual bool empty() const override { return this->haVips_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // haVips Field Functions 
    bool hasHaVips() const { return this->haVips_ != nullptr;};
    void deleteHaVips() { this->haVips_ = nullptr;};
    inline const DescribeHaVipsResponseBody::HaVips & getHaVips() const { DARABONBA_PTR_GET_CONST(haVips_, DescribeHaVipsResponseBody::HaVips) };
    inline DescribeHaVipsResponseBody::HaVips getHaVips() { DARABONBA_PTR_GET(haVips_, DescribeHaVipsResponseBody::HaVips) };
    inline DescribeHaVipsResponseBody& setHaVips(const DescribeHaVipsResponseBody::HaVips & haVips) { DARABONBA_PTR_SET_VALUE(haVips_, haVips) };
    inline DescribeHaVipsResponseBody& setHaVips(DescribeHaVipsResponseBody::HaVips && haVips) { DARABONBA_PTR_SET_RVALUE(haVips_, haVips) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHaVipsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHaVipsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHaVipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHaVipsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeHaVipsResponseBody::HaVips> haVips_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
