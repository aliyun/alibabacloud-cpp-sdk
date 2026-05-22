// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDOSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDDOSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListDDoSInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDoSInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDoSInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListDDoSInstancesResponseBody() = default ;
    ListDDoSInstancesResponseBody(const ListDDoSInstancesResponseBody &) = default ;
    ListDDoSInstancesResponseBody(ListDDoSInstancesResponseBody &&) = default ;
    ListDDoSInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDoSInstancesResponseBody() = default ;
    ListDDoSInstancesResponseBody& operator=(const ListDDoSInstancesResponseBody &) = default ;
    ListDDoSInstancesResponseBody& operator=(ListDDoSInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DDoSBurstableDomesticProtection, DDoSBurstableDomesticProtection_);
        DARABONBA_PTR_TO_JSON(DDoSBurstableOverseasProtection, DDoSBurstableOverseasProtection_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ReserveReleaseTime, reserveReleaseTime_);
        DARABONBA_PTR_TO_JSON(SiteInstanceId, siteInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DDoSBurstableDomesticProtection, DDoSBurstableDomesticProtection_);
        DARABONBA_PTR_FROM_JSON(DDoSBurstableOverseasProtection, DDoSBurstableOverseasProtection_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ReserveReleaseTime, reserveReleaseTime_);
        DARABONBA_PTR_FROM_JSON(SiteInstanceId, siteInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstanceInfo() = default ;
      InstanceInfo(const InstanceInfo &) = default ;
      InstanceInfo(InstanceInfo &&) = default ;
      InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceInfo() = default ;
      InstanceInfo& operator=(const InstanceInfo &) = default ;
      InstanceInfo& operator=(InstanceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DDoSBurstableDomesticProtection_ == nullptr && this->DDoSBurstableOverseasProtection_ == nullptr && this->instanceId_ == nullptr && this->reserveReleaseTime_ == nullptr && this->siteInstanceId_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DDoSBurstableDomesticProtection Field Functions 
      bool hasDDoSBurstableDomesticProtection() const { return this->DDoSBurstableDomesticProtection_ != nullptr;};
      void deleteDDoSBurstableDomesticProtection() { this->DDoSBurstableDomesticProtection_ = nullptr;};
      inline string getDDoSBurstableDomesticProtection() const { DARABONBA_PTR_GET_DEFAULT(DDoSBurstableDomesticProtection_, "") };
      inline InstanceInfo& setDDoSBurstableDomesticProtection(string DDoSBurstableDomesticProtection) { DARABONBA_PTR_SET_VALUE(DDoSBurstableDomesticProtection_, DDoSBurstableDomesticProtection) };


      // DDoSBurstableOverseasProtection Field Functions 
      bool hasDDoSBurstableOverseasProtection() const { return this->DDoSBurstableOverseasProtection_ != nullptr;};
      void deleteDDoSBurstableOverseasProtection() { this->DDoSBurstableOverseasProtection_ = nullptr;};
      inline string getDDoSBurstableOverseasProtection() const { DARABONBA_PTR_GET_DEFAULT(DDoSBurstableOverseasProtection_, "") };
      inline InstanceInfo& setDDoSBurstableOverseasProtection(string DDoSBurstableOverseasProtection) { DARABONBA_PTR_SET_VALUE(DDoSBurstableOverseasProtection_, DDoSBurstableOverseasProtection) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // reserveReleaseTime Field Functions 
      bool hasReserveReleaseTime() const { return this->reserveReleaseTime_ != nullptr;};
      void deleteReserveReleaseTime() { this->reserveReleaseTime_ = nullptr;};
      inline string getReserveReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(reserveReleaseTime_, "") };
      inline InstanceInfo& setReserveReleaseTime(string reserveReleaseTime) { DARABONBA_PTR_SET_VALUE(reserveReleaseTime_, reserveReleaseTime) };


      // siteInstanceId Field Functions 
      bool hasSiteInstanceId() const { return this->siteInstanceId_ != nullptr;};
      void deleteSiteInstanceId() { this->siteInstanceId_ = nullptr;};
      inline string getSiteInstanceId() const { DARABONBA_PTR_GET_DEFAULT(siteInstanceId_, "") };
      inline InstanceInfo& setSiteInstanceId(string siteInstanceId) { DARABONBA_PTR_SET_VALUE(siteInstanceId_, siteInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> DDoSBurstableDomesticProtection_ {};
      shared_ptr<string> DDoSBurstableOverseasProtection_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> reserveReleaseTime_ {};
      shared_ptr<string> siteInstanceId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceInfo_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const vector<ListDDoSInstancesResponseBody::InstanceInfo> & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, vector<ListDDoSInstancesResponseBody::InstanceInfo>) };
    inline vector<ListDDoSInstancesResponseBody::InstanceInfo> getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, vector<ListDDoSInstancesResponseBody::InstanceInfo>) };
    inline ListDDoSInstancesResponseBody& setInstanceInfo(const vector<ListDDoSInstancesResponseBody::InstanceInfo> & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListDDoSInstancesResponseBody& setInstanceInfo(vector<ListDDoSInstancesResponseBody::InstanceInfo> && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDDoSInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDDoSInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDDoSInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDDoSInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListDDoSInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<ListDDoSInstancesResponseBody::InstanceInfo>> instanceInfo_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
