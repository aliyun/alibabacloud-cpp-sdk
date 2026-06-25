// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFAULTINJECTIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFAULTINJECTIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceInstanceFaultInjectionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceFaultInjectionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaultInfoList, faultInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceFaultInjectionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultInfoList, faultInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListServiceInstanceFaultInjectionInfoResponseBody() = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody(const ListServiceInstanceFaultInjectionInfoResponseBody &) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody(ListServiceInstanceFaultInjectionInfoResponseBody &&) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceFaultInjectionInfoResponseBody() = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody& operator=(const ListServiceInstanceFaultInjectionInfoResponseBody &) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody& operator=(ListServiceInstanceFaultInjectionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FaultInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FaultInfoList& obj) { 
        DARABONBA_ANY_TO_JSON(FaultArgs, faultArgs_);
        DARABONBA_PTR_TO_JSON(FaultStatus, faultStatus_);
        DARABONBA_PTR_TO_JSON(FaultType, faultType_);
      };
      friend void from_json(const Darabonba::Json& j, FaultInfoList& obj) { 
        DARABONBA_ANY_FROM_JSON(FaultArgs, faultArgs_);
        DARABONBA_PTR_FROM_JSON(FaultStatus, faultStatus_);
        DARABONBA_PTR_FROM_JSON(FaultType, faultType_);
      };
      FaultInfoList() = default ;
      FaultInfoList(const FaultInfoList &) = default ;
      FaultInfoList(FaultInfoList &&) = default ;
      FaultInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FaultInfoList() = default ;
      FaultInfoList& operator=(const FaultInfoList &) = default ;
      FaultInfoList& operator=(FaultInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FaultStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FaultStatus& obj) { 
          DARABONBA_PTR_TO_JSON(FaultStatus, faultStatus_);
          DARABONBA_PTR_TO_JSON(FaultStatusMessage, faultStatusMessage_);
        };
        friend void from_json(const Darabonba::Json& j, FaultStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(FaultStatus, faultStatus_);
          DARABONBA_PTR_FROM_JSON(FaultStatusMessage, faultStatusMessage_);
        };
        FaultStatus() = default ;
        FaultStatus(const FaultStatus &) = default ;
        FaultStatus(FaultStatus &&) = default ;
        FaultStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FaultStatus() = default ;
        FaultStatus& operator=(const FaultStatus &) = default ;
        FaultStatus& operator=(FaultStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->faultStatus_ == nullptr
        && this->faultStatusMessage_ == nullptr; };
        // faultStatus Field Functions 
        bool hasFaultStatus() const { return this->faultStatus_ != nullptr;};
        void deleteFaultStatus() { this->faultStatus_ = nullptr;};
        inline string getFaultStatus() const { DARABONBA_PTR_GET_DEFAULT(faultStatus_, "") };
        inline FaultStatus& setFaultStatus(string faultStatus) { DARABONBA_PTR_SET_VALUE(faultStatus_, faultStatus) };


        // faultStatusMessage Field Functions 
        bool hasFaultStatusMessage() const { return this->faultStatusMessage_ != nullptr;};
        void deleteFaultStatusMessage() { this->faultStatusMessage_ = nullptr;};
        inline string getFaultStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(faultStatusMessage_, "") };
        inline FaultStatus& setFaultStatusMessage(string faultStatusMessage) { DARABONBA_PTR_SET_VALUE(faultStatusMessage_, faultStatusMessage) };


      protected:
        // The status of the fault. Valid values:
        // 
        // 1. FaultNotInjected: The task was created, but the fault was not successfully injected.
        // 
        // 2. FaultInjectedSuccess: The fault was successfully injected.
        // 
        // 3. FaultInjectedFailure: The fault injection failed. The failure may be caused by parameter errors or system issues.
        shared_ptr<string> faultStatus_ {};
        // The description of the fault injection.
        shared_ptr<string> faultStatusMessage_ {};
      };

      virtual bool empty() const override { return this->faultArgs_ == nullptr
        && this->faultStatus_ == nullptr && this->faultType_ == nullptr; };
      // faultArgs Field Functions 
      bool hasFaultArgs() const { return this->faultArgs_ != nullptr;};
      void deleteFaultArgs() { this->faultArgs_ = nullptr;};
      inline       const Darabonba::Json & getFaultArgs() const { DARABONBA_GET(faultArgs_) };
      Darabonba::Json & getFaultArgs() { DARABONBA_GET(faultArgs_) };
      inline FaultInfoList& setFaultArgs(const Darabonba::Json & faultArgs) { DARABONBA_SET_VALUE(faultArgs_, faultArgs) };
      inline FaultInfoList& setFaultArgs(Darabonba::Json && faultArgs) { DARABONBA_SET_RVALUE(faultArgs_, faultArgs) };


      // faultStatus Field Functions 
      bool hasFaultStatus() const { return this->faultStatus_ != nullptr;};
      void deleteFaultStatus() { this->faultStatus_ = nullptr;};
      inline const FaultInfoList::FaultStatus & getFaultStatus() const { DARABONBA_PTR_GET_CONST(faultStatus_, FaultInfoList::FaultStatus) };
      inline FaultInfoList::FaultStatus getFaultStatus() { DARABONBA_PTR_GET(faultStatus_, FaultInfoList::FaultStatus) };
      inline FaultInfoList& setFaultStatus(const FaultInfoList::FaultStatus & faultStatus) { DARABONBA_PTR_SET_VALUE(faultStatus_, faultStatus) };
      inline FaultInfoList& setFaultStatus(FaultInfoList::FaultStatus && faultStatus) { DARABONBA_PTR_SET_RVALUE(faultStatus_, faultStatus) };


      // faultType Field Functions 
      bool hasFaultType() const { return this->faultType_ != nullptr;};
      void deleteFaultType() { this->faultType_ = nullptr;};
      inline string getFaultType() const { DARABONBA_PTR_GET_DEFAULT(faultType_, "") };
      inline FaultInfoList& setFaultType(string faultType) { DARABONBA_PTR_SET_VALUE(faultType_, faultType) };


    protected:
      // The parameters for each fault type.
      // 
      // 1. CpuFullloadTask (CPU full load fault)
      //    `{ "FaultType": "CpuFullloadTask", "FaultArgs": { "FaultAction": "fullload", "CpuPercent": 50 } }`
      // 
      // 2. MemLoadTask (Memory load fault)
      //    `{ "FaultType": "MemLoadTask", "FaultArgs": { "FaultAction": "load", "MemPercent": 80 } }`
      // 
      // 3. NetworkTask (Network fault)
      //    3.a. NetworkDelayAction (Network delay)
      //    `{ "FaultType": "NetworkTask", "FaultArgs": { "FaultAction": "delay", "Time": 3000, "Offset": 100 } }`
      //    3.b. NetworkCorruptAction (Network packet corruption)
      //    `{ "FaultType": "NetworkTask", "FaultArgs": { "FaultAction": "corrupt", "Percent": 50 } }`
      //    3.c. NetworkLossAction (Network packet loss)
      //    `{ "FaultType": "NetworkTask", "FaultArgs": { "FaultAction": "loss", "Percent": 30 } }`
      // 
      // 4. DiskBurnTask (Disk read/write fault)
      //    `{ "FaultType": "DiskBurnTask", "FaultArgs": { "FaultAction": "burn", "Read": true, "Write": true, "Size": 100 } }`
      // 
      // 5. DiskFillTask (Disk fill fault)
      //    `{ "FaultType": "DiskFillTask", "FaultArgs": { "FaultAction": "fill", "Percent": 80 } }`
      Darabonba::Json faultArgs_ {};
      // The fault status.
      shared_ptr<FaultInfoList::FaultStatus> faultStatus_ {};
      // The fault type. Valid values:CpuFullloadTask: a CPU full load fault.MemLoadTask: a memory load fault.NetworkTask: a network fault.DiskBurnTask: a disk read/write fault.DiskFillTask: a disk fill fault.
      shared_ptr<string> faultType_ {};
    };

    virtual bool empty() const override { return this->faultInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // faultInfoList Field Functions 
    bool hasFaultInfoList() const { return this->faultInfoList_ != nullptr;};
    void deleteFaultInfoList() { this->faultInfoList_ = nullptr;};
    inline const vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList> & getFaultInfoList() const { DARABONBA_PTR_GET_CONST(faultInfoList_, vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList>) };
    inline vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList> getFaultInfoList() { DARABONBA_PTR_GET(faultInfoList_, vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList>) };
    inline ListServiceInstanceFaultInjectionInfoResponseBody& setFaultInfoList(const vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList> & faultInfoList) { DARABONBA_PTR_SET_VALUE(faultInfoList_, faultInfoList) };
    inline ListServiceInstanceFaultInjectionInfoResponseBody& setFaultInfoList(vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList> && faultInfoList) { DARABONBA_PTR_SET_RVALUE(faultInfoList_, faultInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceFaultInjectionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of injected faults.
    shared_ptr<vector<ListServiceInstanceFaultInjectionInfoResponseBody::FaultInfoList>> faultInfoList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
