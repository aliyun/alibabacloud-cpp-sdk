// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipSegmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipSegmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipSegments, eipSegments_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipSegmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipSegments, eipSegments_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEipSegmentResponseBody() = default ;
    DescribeEipSegmentResponseBody(const DescribeEipSegmentResponseBody &) = default ;
    DescribeEipSegmentResponseBody(DescribeEipSegmentResponseBody &&) = default ;
    DescribeEipSegmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipSegmentResponseBody() = default ;
    DescribeEipSegmentResponseBody& operator=(const DescribeEipSegmentResponseBody &) = default ;
    DescribeEipSegmentResponseBody& operator=(DescribeEipSegmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipSegments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipSegments& obj) { 
        DARABONBA_PTR_TO_JSON(EipSegment, eipSegment_);
      };
      friend void from_json(const Darabonba::Json& j, EipSegments& obj) { 
        DARABONBA_PTR_FROM_JSON(EipSegment, eipSegment_);
      };
      EipSegments() = default ;
      EipSegments(const EipSegments &) = default ;
      EipSegments(EipSegments &&) = default ;
      EipSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipSegments() = default ;
      EipSegments& operator=(const EipSegments &) = default ;
      EipSegments& operator=(EipSegments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipSegment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipSegment& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Descritpion, descritpion_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Segment, segment_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Zone, zone_);
        };
        friend void from_json(const Darabonba::Json& j, EipSegment& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Descritpion, descritpion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Segment, segment_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Zone, zone_);
        };
        EipSegment() = default ;
        EipSegment(const EipSegment &) = default ;
        EipSegment(EipSegment &&) = default ;
        EipSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipSegment() = default ;
        EipSegment& operator=(const EipSegment &) = default ;
        EipSegment& operator=(EipSegment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->descritpion_ == nullptr && this->instanceId_ == nullptr && this->ipCount_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->segment_ == nullptr && this->status_ == nullptr && this->zone_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline EipSegment& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // descritpion Field Functions 
        bool hasDescritpion() const { return this->descritpion_ != nullptr;};
        void deleteDescritpion() { this->descritpion_ = nullptr;};
        inline string getDescritpion() const { DARABONBA_PTR_GET_DEFAULT(descritpion_, "") };
        inline EipSegment& setDescritpion(string descritpion) { DARABONBA_PTR_SET_VALUE(descritpion_, descritpion) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EipSegment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ipCount Field Functions 
        bool hasIpCount() const { return this->ipCount_ != nullptr;};
        void deleteIpCount() { this->ipCount_ = nullptr;};
        inline string getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, "") };
        inline EipSegment& setIpCount(string ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EipSegment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EipSegment& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // segment Field Functions 
        bool hasSegment() const { return this->segment_ != nullptr;};
        void deleteSegment() { this->segment_ = nullptr;};
        inline string getSegment() const { DARABONBA_PTR_GET_DEFAULT(segment_, "") };
        inline EipSegment& setSegment(string segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EipSegment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // zone Field Functions 
        bool hasZone() const { return this->zone_ != nullptr;};
        void deleteZone() { this->zone_ = nullptr;};
        inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
        inline EipSegment& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


      protected:
        // The time when the contiguous EIP group was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the contiguous EIP group.
        shared_ptr<string> descritpion_ {};
        // The ID of the contiguous EIP group.
        shared_ptr<string> instanceId_ {};
        // The number of EIPs in the contiguous EIP group.
        shared_ptr<string> ipCount_ {};
        // The name of the contiguous EIP group.
        shared_ptr<string> name_ {};
        // The ID of the region to which the contiguous EIP group belongs.
        shared_ptr<string> regionId_ {};
        // The CIDR block and mask of the contiguous EIP group.
        shared_ptr<string> segment_ {};
        // The status of the contiguous EIP group. Valid values:
        // 
        // *   **Allocating**
        // *   **Allocated**
        // *   **Releasing**
        shared_ptr<string> status_ {};
        // The zone of the contiguous EIP group.
        shared_ptr<string> zone_ {};
      };

      virtual bool empty() const override { return this->eipSegment_ == nullptr; };
      // eipSegment Field Functions 
      bool hasEipSegment() const { return this->eipSegment_ != nullptr;};
      void deleteEipSegment() { this->eipSegment_ = nullptr;};
      inline const vector<EipSegments::EipSegment> & getEipSegment() const { DARABONBA_PTR_GET_CONST(eipSegment_, vector<EipSegments::EipSegment>) };
      inline vector<EipSegments::EipSegment> getEipSegment() { DARABONBA_PTR_GET(eipSegment_, vector<EipSegments::EipSegment>) };
      inline EipSegments& setEipSegment(const vector<EipSegments::EipSegment> & eipSegment) { DARABONBA_PTR_SET_VALUE(eipSegment_, eipSegment) };
      inline EipSegments& setEipSegment(vector<EipSegments::EipSegment> && eipSegment) { DARABONBA_PTR_SET_RVALUE(eipSegment_, eipSegment) };


    protected:
      shared_ptr<vector<EipSegments::EipSegment>> eipSegment_ {};
    };

    virtual bool empty() const override { return this->eipSegments_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eipSegments Field Functions 
    bool hasEipSegments() const { return this->eipSegments_ != nullptr;};
    void deleteEipSegments() { this->eipSegments_ = nullptr;};
    inline const DescribeEipSegmentResponseBody::EipSegments & getEipSegments() const { DARABONBA_PTR_GET_CONST(eipSegments_, DescribeEipSegmentResponseBody::EipSegments) };
    inline DescribeEipSegmentResponseBody::EipSegments getEipSegments() { DARABONBA_PTR_GET(eipSegments_, DescribeEipSegmentResponseBody::EipSegments) };
    inline DescribeEipSegmentResponseBody& setEipSegments(const DescribeEipSegmentResponseBody::EipSegments & eipSegments) { DARABONBA_PTR_SET_VALUE(eipSegments_, eipSegments) };
    inline DescribeEipSegmentResponseBody& setEipSegments(DescribeEipSegmentResponseBody::EipSegments && eipSegments) { DARABONBA_PTR_SET_RVALUE(eipSegments_, eipSegments) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEipSegmentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEipSegmentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipSegmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEipSegmentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the contiguous EIP group.
    shared_ptr<DescribeEipSegmentResponseBody::EipSegments> eipSegments_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
