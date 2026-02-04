// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGEOGRAPHICREGIONMEMBERSHIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGEOGRAPHICREGIONMEMBERSHIPRESPONSEBODY_HPP_
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
  class DescribeGeographicRegionMembershipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGeographicRegionMembershipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGeographicRegionMembershipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGeographicRegionMembershipResponseBody() = default ;
    DescribeGeographicRegionMembershipResponseBody(const DescribeGeographicRegionMembershipResponseBody &) = default ;
    DescribeGeographicRegionMembershipResponseBody(DescribeGeographicRegionMembershipResponseBody &&) = default ;
    DescribeGeographicRegionMembershipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGeographicRegionMembershipResponseBody() = default ;
    DescribeGeographicRegionMembershipResponseBody& operator=(const DescribeGeographicRegionMembershipResponseBody &) = default ;
    DescribeGeographicRegionMembershipResponseBody& operator=(DescribeGeographicRegionMembershipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionIds& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionIds& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      RegionIds() = default ;
      RegionIds(const RegionIds &) = default ;
      RegionIds(RegionIds &&) = default ;
      RegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionIds() = default ;
      RegionIds& operator=(const RegionIds &) = default ;
      RegionIds& operator=(RegionIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionId : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionId& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, RegionId& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        RegionId() = default ;
        RegionId(const RegionId &) = default ;
        RegionId(RegionId &&) = default ;
        RegionId(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionId() = default ;
        RegionId& operator=(const RegionId &) = default ;
        RegionId& operator=(RegionId &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionId_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RegionId& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The ID of the region.
        // 
        // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->regionId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline const vector<RegionIds::RegionId> & getRegionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<RegionIds::RegionId>) };
      inline vector<RegionIds::RegionId> getRegionId() { DARABONBA_PTR_GET(regionId_, vector<RegionIds::RegionId>) };
      inline RegionIds& setRegionId(const vector<RegionIds::RegionId> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
      inline RegionIds& setRegionId(vector<RegionIds::RegionId> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


    protected:
      shared_ptr<vector<RegionIds::RegionId>> regionId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionIds_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGeographicRegionMembershipResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGeographicRegionMembershipResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const DescribeGeographicRegionMembershipResponseBody::RegionIds & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, DescribeGeographicRegionMembershipResponseBody::RegionIds) };
    inline DescribeGeographicRegionMembershipResponseBody::RegionIds getRegionIds() { DARABONBA_PTR_GET(regionIds_, DescribeGeographicRegionMembershipResponseBody::RegionIds) };
    inline DescribeGeographicRegionMembershipResponseBody& setRegionIds(const DescribeGeographicRegionMembershipResponseBody::RegionIds & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline DescribeGeographicRegionMembershipResponseBody& setRegionIds(DescribeGeographicRegionMembershipResponseBody::RegionIds && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGeographicRegionMembershipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGeographicRegionMembershipResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The list of regions.
    shared_ptr<DescribeGeographicRegionMembershipResponseBody::RegionIds> regionIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
