// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRICEV1REQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRICEV1REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class QueryPriceV1Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPriceV1Request& obj) { 
      DARABONBA_PTR_TO_JSON(AgentNodeGroup, agentNodeGroup_);
      DARABONBA_PTR_TO_JSON(BackendNodeGroups, backendNodeGroups_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FrontendNodeGroups, frontendNodeGroups_);
      DARABONBA_PTR_TO_JSON(ObserverNodeGroups, observerNodeGroups_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPriceV1Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentNodeGroup, agentNodeGroup_);
      DARABONBA_PTR_FROM_JSON(BackendNodeGroups, backendNodeGroups_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FrontendNodeGroups, frontendNodeGroups_);
      DARABONBA_PTR_FROM_JSON(ObserverNodeGroups, observerNodeGroups_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
    };
    QueryPriceV1Request() = default ;
    QueryPriceV1Request(const QueryPriceV1Request &) = default ;
    QueryPriceV1Request(QueryPriceV1Request &&) = default ;
    QueryPriceV1Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPriceV1Request() = default ;
    QueryPriceV1Request& operator=(const QueryPriceV1Request &) = default ;
    QueryPriceV1Request& operator=(QueryPriceV1Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ObserverNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ObserverNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(specType, specType_);
        DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
      };
      friend void from_json(const Darabonba::Json& j, ObserverNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(specType, specType_);
        DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
      };
      ObserverNodeGroups() = default ;
      ObserverNodeGroups(const ObserverNodeGroups &) = default ;
      ObserverNodeGroups(ObserverNodeGroups &&) = default ;
      ObserverNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ObserverNodeGroups() = default ;
      ObserverNodeGroups& operator=(const ObserverNodeGroups &) = default ;
      ObserverNodeGroups& operator=(ObserverNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
      inline ObserverNodeGroups& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline ObserverNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline ObserverNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline ObserverNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline ObserverNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline ObserverNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline ObserverNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    protected:
      shared_ptr<string> cu_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
    };

    class FrontendNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrontendNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(specType, specType_);
        DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
      };
      friend void from_json(const Darabonba::Json& j, FrontendNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(specType, specType_);
        DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
      };
      FrontendNodeGroups() = default ;
      FrontendNodeGroups(const FrontendNodeGroups &) = default ;
      FrontendNodeGroups(FrontendNodeGroups &&) = default ;
      FrontendNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrontendNodeGroups() = default ;
      FrontendNodeGroups& operator=(const FrontendNodeGroups &) = default ;
      FrontendNodeGroups& operator=(FrontendNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
      inline FrontendNodeGroups& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline FrontendNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline FrontendNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline FrontendNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline FrontendNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline FrontendNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline FrontendNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    protected:
      shared_ptr<string> cu_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
    };

    class BackendNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(specType, specType_);
        DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
      };
      friend void from_json(const Darabonba::Json& j, BackendNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(specType, specType_);
        DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
      };
      BackendNodeGroups() = default ;
      BackendNodeGroups(const BackendNodeGroups &) = default ;
      BackendNodeGroups(BackendNodeGroups &&) = default ;
      BackendNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendNodeGroups() = default ;
      BackendNodeGroups& operator=(const BackendNodeGroups &) = default ;
      BackendNodeGroups& operator=(BackendNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
      inline BackendNodeGroups& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline BackendNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline BackendNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline BackendNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline BackendNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline BackendNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline BackendNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    protected:
      shared_ptr<string> cu_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
    };

    class AgentNodeGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentNodeGroup& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
      };
      friend void from_json(const Darabonba::Json& j, AgentNodeGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
      };
      AgentNodeGroup() = default ;
      AgentNodeGroup(const AgentNodeGroup &) = default ;
      AgentNodeGroup(AgentNodeGroup &&) = default ;
      AgentNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentNodeGroup() = default ;
      AgentNodeGroup& operator=(const AgentNodeGroup &) = default ;
      AgentNodeGroup& operator=(AgentNodeGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline AgentNodeGroup& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    protected:
      shared_ptr<int32_t> cu_ {};
    };

    virtual bool empty() const override { return this->agentNodeGroup_ == nullptr
        && this->backendNodeGroups_ == nullptr && this->duration_ == nullptr && this->frontendNodeGroups_ == nullptr && this->observerNodeGroups_ == nullptr && this->packageType_ == nullptr
        && this->payType_ == nullptr && this->pricingCycle_ == nullptr && this->promotionOptionNo_ == nullptr && this->regionId_ == nullptr && this->runMode_ == nullptr; };
    // agentNodeGroup Field Functions 
    bool hasAgentNodeGroup() const { return this->agentNodeGroup_ != nullptr;};
    void deleteAgentNodeGroup() { this->agentNodeGroup_ = nullptr;};
    inline const QueryPriceV1Request::AgentNodeGroup & getAgentNodeGroup() const { DARABONBA_PTR_GET_CONST(agentNodeGroup_, QueryPriceV1Request::AgentNodeGroup) };
    inline QueryPriceV1Request::AgentNodeGroup getAgentNodeGroup() { DARABONBA_PTR_GET(agentNodeGroup_, QueryPriceV1Request::AgentNodeGroup) };
    inline QueryPriceV1Request& setAgentNodeGroup(const QueryPriceV1Request::AgentNodeGroup & agentNodeGroup) { DARABONBA_PTR_SET_VALUE(agentNodeGroup_, agentNodeGroup) };
    inline QueryPriceV1Request& setAgentNodeGroup(QueryPriceV1Request::AgentNodeGroup && agentNodeGroup) { DARABONBA_PTR_SET_RVALUE(agentNodeGroup_, agentNodeGroup) };


    // backendNodeGroups Field Functions 
    bool hasBackendNodeGroups() const { return this->backendNodeGroups_ != nullptr;};
    void deleteBackendNodeGroups() { this->backendNodeGroups_ = nullptr;};
    inline const vector<QueryPriceV1Request::BackendNodeGroups> & getBackendNodeGroups() const { DARABONBA_PTR_GET_CONST(backendNodeGroups_, vector<QueryPriceV1Request::BackendNodeGroups>) };
    inline vector<QueryPriceV1Request::BackendNodeGroups> getBackendNodeGroups() { DARABONBA_PTR_GET(backendNodeGroups_, vector<QueryPriceV1Request::BackendNodeGroups>) };
    inline QueryPriceV1Request& setBackendNodeGroups(const vector<QueryPriceV1Request::BackendNodeGroups> & backendNodeGroups) { DARABONBA_PTR_SET_VALUE(backendNodeGroups_, backendNodeGroups) };
    inline QueryPriceV1Request& setBackendNodeGroups(vector<QueryPriceV1Request::BackendNodeGroups> && backendNodeGroups) { DARABONBA_PTR_SET_RVALUE(backendNodeGroups_, backendNodeGroups) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryPriceV1Request& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // frontendNodeGroups Field Functions 
    bool hasFrontendNodeGroups() const { return this->frontendNodeGroups_ != nullptr;};
    void deleteFrontendNodeGroups() { this->frontendNodeGroups_ = nullptr;};
    inline const vector<QueryPriceV1Request::FrontendNodeGroups> & getFrontendNodeGroups() const { DARABONBA_PTR_GET_CONST(frontendNodeGroups_, vector<QueryPriceV1Request::FrontendNodeGroups>) };
    inline vector<QueryPriceV1Request::FrontendNodeGroups> getFrontendNodeGroups() { DARABONBA_PTR_GET(frontendNodeGroups_, vector<QueryPriceV1Request::FrontendNodeGroups>) };
    inline QueryPriceV1Request& setFrontendNodeGroups(const vector<QueryPriceV1Request::FrontendNodeGroups> & frontendNodeGroups) { DARABONBA_PTR_SET_VALUE(frontendNodeGroups_, frontendNodeGroups) };
    inline QueryPriceV1Request& setFrontendNodeGroups(vector<QueryPriceV1Request::FrontendNodeGroups> && frontendNodeGroups) { DARABONBA_PTR_SET_RVALUE(frontendNodeGroups_, frontendNodeGroups) };


    // observerNodeGroups Field Functions 
    bool hasObserverNodeGroups() const { return this->observerNodeGroups_ != nullptr;};
    void deleteObserverNodeGroups() { this->observerNodeGroups_ = nullptr;};
    inline const vector<QueryPriceV1Request::ObserverNodeGroups> & getObserverNodeGroups() const { DARABONBA_PTR_GET_CONST(observerNodeGroups_, vector<QueryPriceV1Request::ObserverNodeGroups>) };
    inline vector<QueryPriceV1Request::ObserverNodeGroups> getObserverNodeGroups() { DARABONBA_PTR_GET(observerNodeGroups_, vector<QueryPriceV1Request::ObserverNodeGroups>) };
    inline QueryPriceV1Request& setObserverNodeGroups(const vector<QueryPriceV1Request::ObserverNodeGroups> & observerNodeGroups) { DARABONBA_PTR_SET_VALUE(observerNodeGroups_, observerNodeGroups) };
    inline QueryPriceV1Request& setObserverNodeGroups(vector<QueryPriceV1Request::ObserverNodeGroups> && observerNodeGroups) { DARABONBA_PTR_SET_RVALUE(observerNodeGroups_, observerNodeGroups) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline QueryPriceV1Request& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline QueryPriceV1Request& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline QueryPriceV1Request& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline QueryPriceV1Request& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryPriceV1Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline QueryPriceV1Request& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


  protected:
    shared_ptr<QueryPriceV1Request::AgentNodeGroup> agentNodeGroup_ {};
    shared_ptr<vector<QueryPriceV1Request::BackendNodeGroups>> backendNodeGroups_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<vector<QueryPriceV1Request::FrontendNodeGroups>> frontendNodeGroups_ {};
    shared_ptr<vector<QueryPriceV1Request::ObserverNodeGroups>> observerNodeGroups_ {};
    shared_ptr<string> packageType_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> pricingCycle_ {};
    shared_ptr<string> promotionOptionNo_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> runMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
