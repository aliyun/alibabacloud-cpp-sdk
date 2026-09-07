// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETBANDWIDTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETBANDWIDTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListNetBandwidthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetBandwidthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(NetBandwidthList, netBandwidthList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetBandwidthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(NetBandwidthList, netBandwidthList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListNetBandwidthResponseBody() = default ;
    ListNetBandwidthResponseBody(const ListNetBandwidthResponseBody &) = default ;
    ListNetBandwidthResponseBody(ListNetBandwidthResponseBody &&) = default ;
    ListNetBandwidthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetBandwidthResponseBody() = default ;
    ListNetBandwidthResponseBody& operator=(const ListNetBandwidthResponseBody &) = default ;
    ListNetBandwidthResponseBody& operator=(ListNetBandwidthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetBandwidthList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetBandwidthList& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, NetBandwidthList& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      NetBandwidthList() = default ;
      NetBandwidthList(const NetBandwidthList &) = default ;
      NetBandwidthList(NetBandwidthList &&) = default ;
      NetBandwidthList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetBandwidthList() = default ;
      NetBandwidthList& operator=(const NetBandwidthList &) = default ;
      NetBandwidthList& operator=(NetBandwidthList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->netType_ == nullptr
        && this->region_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline NetBandwidthList& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline NetBandwidthList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline NetBandwidthList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetBandwidthList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline NetBandwidthList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline NetBandwidthList& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline NetBandwidthList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The bandwidth value, in Mbps.
      shared_ptr<int32_t> bandwidth_ {};
      // The time when the instance was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the instance was last modified.
      shared_ptr<string> gmtModified_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // The network type.
      shared_ptr<string> netType_ {};
      // The region ID.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->netBandwidthList_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListNetBandwidthResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // netBandwidthList Field Functions 
    bool hasNetBandwidthList() const { return this->netBandwidthList_ != nullptr;};
    void deleteNetBandwidthList() { this->netBandwidthList_ = nullptr;};
    inline const vector<ListNetBandwidthResponseBody::NetBandwidthList> & getNetBandwidthList() const { DARABONBA_PTR_GET_CONST(netBandwidthList_, vector<ListNetBandwidthResponseBody::NetBandwidthList>) };
    inline vector<ListNetBandwidthResponseBody::NetBandwidthList> getNetBandwidthList() { DARABONBA_PTR_GET(netBandwidthList_, vector<ListNetBandwidthResponseBody::NetBandwidthList>) };
    inline ListNetBandwidthResponseBody& setNetBandwidthList(const vector<ListNetBandwidthResponseBody::NetBandwidthList> & netBandwidthList) { DARABONBA_PTR_SET_VALUE(netBandwidthList_, netBandwidthList) };
    inline ListNetBandwidthResponseBody& setNetBandwidthList(vector<ListNetBandwidthResponseBody::NetBandwidthList> && netBandwidthList) { DARABONBA_PTR_SET_RVALUE(netBandwidthList_, netBandwidthList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNetBandwidthResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetBandwidthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListNetBandwidthResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The list of bandwidth configurations.
    shared_ptr<vector<ListNetBandwidthResponseBody::NetBandwidthList>> netBandwidthList_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
