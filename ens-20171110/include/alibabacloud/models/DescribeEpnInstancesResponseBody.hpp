// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstances, EPNInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstances, EPNInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEpnInstancesResponseBody() = default ;
    DescribeEpnInstancesResponseBody(const DescribeEpnInstancesResponseBody &) = default ;
    DescribeEpnInstancesResponseBody(DescribeEpnInstancesResponseBody &&) = default ;
    DescribeEpnInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstancesResponseBody() = default ;
    DescribeEpnInstancesResponseBody& operator=(const DescribeEpnInstancesResponseBody &) = default ;
    DescribeEpnInstancesResponseBody& operator=(DescribeEpnInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EPNInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EPNInstances& obj) { 
        DARABONBA_PTR_TO_JSON(EPNInstance, EPNInstance_);
      };
      friend void from_json(const Darabonba::Json& j, EPNInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(EPNInstance, EPNInstance_);
      };
      EPNInstances() = default ;
      EPNInstances(const EPNInstances &) = default ;
      EPNInstances(EPNInstances &&) = default ;
      EPNInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EPNInstances() = default ;
      EPNInstances& operator=(const EPNInstances &) = default ;
      EPNInstances& operator=(EPNInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EPNInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EPNInstance& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
          DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
          DARABONBA_PTR_TO_JSON(EPNInstanceType, EPNInstanceType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, EPNInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
          DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
          DARABONBA_PTR_FROM_JSON(EPNInstanceType, EPNInstanceType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        EPNInstance() = default ;
        EPNInstance(const EPNInstance &) = default ;
        EPNInstance(EPNInstance &&) = default ;
        EPNInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EPNInstance() = default ;
        EPNInstance& operator=(const EPNInstance &) = default ;
        EPNInstance& operator=(EPNInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->EPNInstanceId_ == nullptr && this->EPNInstanceName_ == nullptr && this->EPNInstanceType_ == nullptr && this->endTime_ == nullptr && this->internetMaxBandwidthOut_ == nullptr
        && this->modifyTime_ == nullptr && this->networkingModel_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline EPNInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // EPNInstanceId Field Functions 
        bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
        void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
        inline string getEPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
        inline EPNInstance& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


        // EPNInstanceName Field Functions 
        bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
        void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
        inline string getEPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
        inline EPNInstance& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


        // EPNInstanceType Field Functions 
        bool hasEPNInstanceType() const { return this->EPNInstanceType_ != nullptr;};
        void deleteEPNInstanceType() { this->EPNInstanceType_ = nullptr;};
        inline string getEPNInstanceType() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceType_, "") };
        inline EPNInstance& setEPNInstanceType(string EPNInstanceType) { DARABONBA_PTR_SET_VALUE(EPNInstanceType_, EPNInstanceType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline EPNInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // internetMaxBandwidthOut Field Functions 
        bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
        void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
        inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
        inline EPNInstance& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline EPNInstance& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // networkingModel Field Functions 
        bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
        void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
        inline string getNetworkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
        inline EPNInstance& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline EPNInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EPNInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the instance was created. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The ID of the EPN instance.
        shared_ptr<string> EPNInstanceId_ {};
        // The name of the EPN instance.
        shared_ptr<string> EPNInstanceName_ {};
        // Set the value to EdgeToEdge.
        shared_ptr<string> EPNInstanceType_ {};
        // The end of the time range during which the data was queried. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // The inbound bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> internetMaxBandwidthOut_ {};
        // The time when the instance was last modified. The time is displayed in UTC.
        shared_ptr<string> modifyTime_ {};
        // The networking mode. Valid values:
        // 
        // *   SpeedUp: intelligent acceleration network (Internet)
        // *   Connection: internal network
        // *   SpeedUpAndConnection: intelligent acceleration network and internal network
        shared_ptr<string> networkingModel_ {};
        // The beginning of the time range during which the data was queried. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The status of the instance. Valid values:
        // 
        // *   Running
        // *   Excuting
        // *   Stopped
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->EPNInstance_ == nullptr; };
      // EPNInstance Field Functions 
      bool hasEPNInstance() const { return this->EPNInstance_ != nullptr;};
      void deleteEPNInstance() { this->EPNInstance_ = nullptr;};
      inline const vector<EPNInstances::EPNInstance> & getEPNInstance() const { DARABONBA_PTR_GET_CONST(EPNInstance_, vector<EPNInstances::EPNInstance>) };
      inline vector<EPNInstances::EPNInstance> getEPNInstance() { DARABONBA_PTR_GET(EPNInstance_, vector<EPNInstances::EPNInstance>) };
      inline EPNInstances& setEPNInstance(const vector<EPNInstances::EPNInstance> & ePNInstance) { DARABONBA_PTR_SET_VALUE(EPNInstance_, ePNInstance) };
      inline EPNInstances& setEPNInstance(vector<EPNInstances::EPNInstance> && ePNInstance) { DARABONBA_PTR_SET_RVALUE(EPNInstance_, ePNInstance) };


    protected:
      shared_ptr<vector<EPNInstances::EPNInstance>> EPNInstance_ {};
    };

    virtual bool empty() const override { return this->EPNInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // EPNInstances Field Functions 
    bool hasEPNInstances() const { return this->EPNInstances_ != nullptr;};
    void deleteEPNInstances() { this->EPNInstances_ = nullptr;};
    inline const DescribeEpnInstancesResponseBody::EPNInstances & getEPNInstances() const { DARABONBA_PTR_GET_CONST(EPNInstances_, DescribeEpnInstancesResponseBody::EPNInstances) };
    inline DescribeEpnInstancesResponseBody::EPNInstances getEPNInstances() { DARABONBA_PTR_GET(EPNInstances_, DescribeEpnInstancesResponseBody::EPNInstances) };
    inline DescribeEpnInstancesResponseBody& setEPNInstances(const DescribeEpnInstancesResponseBody::EPNInstances & ePNInstances) { DARABONBA_PTR_SET_VALUE(EPNInstances_, ePNInstances) };
    inline DescribeEpnInstancesResponseBody& setEPNInstances(DescribeEpnInstancesResponseBody::EPNInstances && ePNInstances) { DARABONBA_PTR_SET_RVALUE(EPNInstances_, ePNInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEpnInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEpnInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEpnInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of EPN instances.
    shared_ptr<DescribeEpnInstancesResponseBody::EPNInstances> EPNInstances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
