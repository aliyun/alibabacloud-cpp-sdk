// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEAPDEVICERESOURCEALLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEAPDEVICERESOURCEALLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class DescribeEapDeviceResourceAllocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEapDeviceResourceAllocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEapDeviceResourceAllocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEapDeviceResourceAllocationResponseBody() = default ;
    DescribeEapDeviceResourceAllocationResponseBody(const DescribeEapDeviceResourceAllocationResponseBody &) = default ;
    DescribeEapDeviceResourceAllocationResponseBody(DescribeEapDeviceResourceAllocationResponseBody &&) = default ;
    DescribeEapDeviceResourceAllocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEapDeviceResourceAllocationResponseBody() = default ;
    DescribeEapDeviceResourceAllocationResponseBody& operator=(const DescribeEapDeviceResourceAllocationResponseBody &) = default ;
    DescribeEapDeviceResourceAllocationResponseBody& operator=(DescribeEapDeviceResourceAllocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
        DARABONBA_PTR_TO_JSON(HeadAcu, headAcu_);
        DARABONBA_PTR_TO_JSON(HeadCpu, headCpu_);
        DARABONBA_PTR_TO_JSON(HeadSpecName, headSpecName_);
        DARABONBA_PTR_TO_JSON(TotalAcu, totalAcu_);
        DARABONBA_PTR_TO_JSON(TotalDeployedCpu, totalDeployedCpu_);
        DARABONBA_PTR_TO_JSON(TotalTargetCpu, totalTargetCpu_);
        DARABONBA_PTR_TO_JSON(WebserverAcu, webserverAcu_);
        DARABONBA_PTR_TO_JSON(WebserverCpu, webserverCpu_);
        DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
        DARABONBA_PTR_TO_JSON(WorkerAcu, workerAcu_);
        DARABONBA_PTR_TO_JSON(WorkerCount, workerCount_);
        DARABONBA_PTR_TO_JSON(WorkerCpu, workerCpu_);
        DARABONBA_PTR_TO_JSON(WorkerSpecName, workerSpecName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
        DARABONBA_PTR_FROM_JSON(HeadAcu, headAcu_);
        DARABONBA_PTR_FROM_JSON(HeadCpu, headCpu_);
        DARABONBA_PTR_FROM_JSON(HeadSpecName, headSpecName_);
        DARABONBA_PTR_FROM_JSON(TotalAcu, totalAcu_);
        DARABONBA_PTR_FROM_JSON(TotalDeployedCpu, totalDeployedCpu_);
        DARABONBA_PTR_FROM_JSON(TotalTargetCpu, totalTargetCpu_);
        DARABONBA_PTR_FROM_JSON(WebserverAcu, webserverAcu_);
        DARABONBA_PTR_FROM_JSON(WebserverCpu, webserverCpu_);
        DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
        DARABONBA_PTR_FROM_JSON(WorkerAcu, workerAcu_);
        DARABONBA_PTR_FROM_JSON(WorkerCount, workerCount_);
        DARABONBA_PTR_FROM_JSON(WorkerCpu, workerCpu_);
        DARABONBA_PTR_FROM_JSON(WorkerSpecName, workerSpecName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceCount_ == nullptr
        && this->headAcu_ == nullptr && this->headCpu_ == nullptr && this->headSpecName_ == nullptr && this->totalAcu_ == nullptr && this->totalDeployedCpu_ == nullptr
        && this->totalTargetCpu_ == nullptr && this->webserverAcu_ == nullptr && this->webserverCpu_ == nullptr && this->webserverSpecName_ == nullptr && this->workerAcu_ == nullptr
        && this->workerCount_ == nullptr && this->workerCpu_ == nullptr && this->workerSpecName_ == nullptr; };
      // deviceCount Field Functions 
      bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
      void deleteDeviceCount() { this->deviceCount_ = nullptr;};
      inline int32_t getDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0) };
      inline Items& setDeviceCount(int32_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


      // headAcu Field Functions 
      bool hasHeadAcu() const { return this->headAcu_ != nullptr;};
      void deleteHeadAcu() { this->headAcu_ = nullptr;};
      inline double getHeadAcu() const { DARABONBA_PTR_GET_DEFAULT(headAcu_, 0.0) };
      inline Items& setHeadAcu(double headAcu) { DARABONBA_PTR_SET_VALUE(headAcu_, headAcu) };


      // headCpu Field Functions 
      bool hasHeadCpu() const { return this->headCpu_ != nullptr;};
      void deleteHeadCpu() { this->headCpu_ = nullptr;};
      inline int32_t getHeadCpu() const { DARABONBA_PTR_GET_DEFAULT(headCpu_, 0) };
      inline Items& setHeadCpu(int32_t headCpu) { DARABONBA_PTR_SET_VALUE(headCpu_, headCpu) };


      // headSpecName Field Functions 
      bool hasHeadSpecName() const { return this->headSpecName_ != nullptr;};
      void deleteHeadSpecName() { this->headSpecName_ = nullptr;};
      inline string getHeadSpecName() const { DARABONBA_PTR_GET_DEFAULT(headSpecName_, "") };
      inline Items& setHeadSpecName(string headSpecName) { DARABONBA_PTR_SET_VALUE(headSpecName_, headSpecName) };


      // totalAcu Field Functions 
      bool hasTotalAcu() const { return this->totalAcu_ != nullptr;};
      void deleteTotalAcu() { this->totalAcu_ = nullptr;};
      inline double getTotalAcu() const { DARABONBA_PTR_GET_DEFAULT(totalAcu_, 0.0) };
      inline Items& setTotalAcu(double totalAcu) { DARABONBA_PTR_SET_VALUE(totalAcu_, totalAcu) };


      // totalDeployedCpu Field Functions 
      bool hasTotalDeployedCpu() const { return this->totalDeployedCpu_ != nullptr;};
      void deleteTotalDeployedCpu() { this->totalDeployedCpu_ = nullptr;};
      inline int32_t getTotalDeployedCpu() const { DARABONBA_PTR_GET_DEFAULT(totalDeployedCpu_, 0) };
      inline Items& setTotalDeployedCpu(int32_t totalDeployedCpu) { DARABONBA_PTR_SET_VALUE(totalDeployedCpu_, totalDeployedCpu) };


      // totalTargetCpu Field Functions 
      bool hasTotalTargetCpu() const { return this->totalTargetCpu_ != nullptr;};
      void deleteTotalTargetCpu() { this->totalTargetCpu_ = nullptr;};
      inline int32_t getTotalTargetCpu() const { DARABONBA_PTR_GET_DEFAULT(totalTargetCpu_, 0) };
      inline Items& setTotalTargetCpu(int32_t totalTargetCpu) { DARABONBA_PTR_SET_VALUE(totalTargetCpu_, totalTargetCpu) };


      // webserverAcu Field Functions 
      bool hasWebserverAcu() const { return this->webserverAcu_ != nullptr;};
      void deleteWebserverAcu() { this->webserverAcu_ = nullptr;};
      inline double getWebserverAcu() const { DARABONBA_PTR_GET_DEFAULT(webserverAcu_, 0.0) };
      inline Items& setWebserverAcu(double webserverAcu) { DARABONBA_PTR_SET_VALUE(webserverAcu_, webserverAcu) };


      // webserverCpu Field Functions 
      bool hasWebserverCpu() const { return this->webserverCpu_ != nullptr;};
      void deleteWebserverCpu() { this->webserverCpu_ = nullptr;};
      inline int32_t getWebserverCpu() const { DARABONBA_PTR_GET_DEFAULT(webserverCpu_, 0) };
      inline Items& setWebserverCpu(int32_t webserverCpu) { DARABONBA_PTR_SET_VALUE(webserverCpu_, webserverCpu) };


      // webserverSpecName Field Functions 
      bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
      void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
      inline string getWebserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
      inline Items& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


      // workerAcu Field Functions 
      bool hasWorkerAcu() const { return this->workerAcu_ != nullptr;};
      void deleteWorkerAcu() { this->workerAcu_ = nullptr;};
      inline double getWorkerAcu() const { DARABONBA_PTR_GET_DEFAULT(workerAcu_, 0.0) };
      inline Items& setWorkerAcu(double workerAcu) { DARABONBA_PTR_SET_VALUE(workerAcu_, workerAcu) };


      // workerCount Field Functions 
      bool hasWorkerCount() const { return this->workerCount_ != nullptr;};
      void deleteWorkerCount() { this->workerCount_ = nullptr;};
      inline int32_t getWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(workerCount_, 0) };
      inline Items& setWorkerCount(int32_t workerCount) { DARABONBA_PTR_SET_VALUE(workerCount_, workerCount) };


      // workerCpu Field Functions 
      bool hasWorkerCpu() const { return this->workerCpu_ != nullptr;};
      void deleteWorkerCpu() { this->workerCpu_ = nullptr;};
      inline int32_t getWorkerCpu() const { DARABONBA_PTR_GET_DEFAULT(workerCpu_, 0) };
      inline Items& setWorkerCpu(int32_t workerCpu) { DARABONBA_PTR_SET_VALUE(workerCpu_, workerCpu) };


      // workerSpecName Field Functions 
      bool hasWorkerSpecName() const { return this->workerSpecName_ != nullptr;};
      void deleteWorkerSpecName() { this->workerSpecName_ = nullptr;};
      inline string getWorkerSpecName() const { DARABONBA_PTR_GET_DEFAULT(workerSpecName_, "") };
      inline Items& setWorkerSpecName(string workerSpecName) { DARABONBA_PTR_SET_VALUE(workerSpecName_, workerSpecName) };


    protected:
      shared_ptr<int32_t> deviceCount_ {};
      shared_ptr<double> headAcu_ {};
      shared_ptr<int32_t> headCpu_ {};
      shared_ptr<string> headSpecName_ {};
      shared_ptr<double> totalAcu_ {};
      shared_ptr<int32_t> totalDeployedCpu_ {};
      shared_ptr<int32_t> totalTargetCpu_ {};
      shared_ptr<double> webserverAcu_ {};
      shared_ptr<int32_t> webserverCpu_ {};
      shared_ptr<string> webserverSpecName_ {};
      shared_ptr<double> workerAcu_ {};
      shared_ptr<int32_t> workerCount_ {};
      shared_ptr<int32_t> workerCpu_ {};
      shared_ptr<string> workerSpecName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeEapDeviceResourceAllocationResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeEapDeviceResourceAllocationResponseBody::Items>) };
    inline vector<DescribeEapDeviceResourceAllocationResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeEapDeviceResourceAllocationResponseBody::Items>) };
    inline DescribeEapDeviceResourceAllocationResponseBody& setItems(const vector<DescribeEapDeviceResourceAllocationResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeEapDeviceResourceAllocationResponseBody& setItems(vector<DescribeEapDeviceResourceAllocationResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEapDeviceResourceAllocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeEapDeviceResourceAllocationResponseBody::Items>> items_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
