// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataStorageResponseBody() = default ;
    GetDataStorageResponseBody(const GetDataStorageResponseBody &) = default ;
    GetDataStorageResponseBody(GetDataStorageResponseBody &&) = default ;
    GetDataStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataStorageResponseBody() = default ;
    GetDataStorageResponseBody& operator=(const GetDataStorageResponseBody &) = default ;
    GetDataStorageResponseBody& operator=(GetDataStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColdStorageUsedCapacity, coldStorageUsedCapacity_);
        DARABONBA_PTR_TO_JSON(DataStorageRegionId, dataStorageRegionId_);
        DARABONBA_PTR_TO_JSON(DataStorageRegionPermission, dataStorageRegionPermission_);
        DARABONBA_PTR_TO_JSON(DataStorageTotalCapacity, dataStorageTotalCapacity_);
        DARABONBA_PTR_TO_JSON(DataStorageUsedCapacity, dataStorageUsedCapacity_);
        DARABONBA_PTR_TO_JSON(DataStorageUsedCapacityDetail, dataStorageUsedCapacityDetail_);
        DARABONBA_PTR_TO_JSON(LogProject, logProject_);
        DARABONBA_PTR_TO_JSON(NormalizationLogStores, normalizationLogStores_);
        DARABONBA_PTR_TO_JSON(NormalizationLogViews, normalizationLogViews_);
        DARABONBA_PTR_TO_JSON(SasLogStores, sasLogStores_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdStorageUsedCapacity, coldStorageUsedCapacity_);
        DARABONBA_PTR_FROM_JSON(DataStorageRegionId, dataStorageRegionId_);
        DARABONBA_PTR_FROM_JSON(DataStorageRegionPermission, dataStorageRegionPermission_);
        DARABONBA_PTR_FROM_JSON(DataStorageTotalCapacity, dataStorageTotalCapacity_);
        DARABONBA_PTR_FROM_JSON(DataStorageUsedCapacity, dataStorageUsedCapacity_);
        DARABONBA_PTR_FROM_JSON(DataStorageUsedCapacityDetail, dataStorageUsedCapacityDetail_);
        DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
        DARABONBA_PTR_FROM_JSON(NormalizationLogStores, normalizationLogStores_);
        DARABONBA_PTR_FROM_JSON(NormalizationLogViews, normalizationLogViews_);
        DARABONBA_PTR_FROM_JSON(SasLogStores, sasLogStores_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SasLogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SasLogStores& obj) { 
          DARABONBA_PTR_TO_JSON(LogCode, logCode_);
          DARABONBA_PTR_TO_JSON(LogDeliveryGroup, logDeliveryGroup_);
          DARABONBA_PTR_TO_JSON(LogDeliveryPermission, logDeliveryPermission_);
          DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
          DARABONBA_PTR_TO_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
          DARABONBA_PTR_TO_JSON(LogName, logName_);
          DARABONBA_PTR_TO_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_TO_JSON(LogStoreExisted, logStoreExisted_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
        };
        friend void from_json(const Darabonba::Json& j, SasLogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryGroup, logDeliveryGroup_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryPermission, logDeliveryPermission_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
          DARABONBA_PTR_FROM_JSON(LogName, logName_);
          DARABONBA_PTR_FROM_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_FROM_JSON(LogStoreExisted, logStoreExisted_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
        };
        SasLogStores() = default ;
        SasLogStores(const SasLogStores &) = default ;
        SasLogStores(SasLogStores &&) = default ;
        SasLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SasLogStores() = default ;
        SasLogStores& operator=(const SasLogStores &) = default ;
        SasLogStores& operator=(SasLogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logCode_ == nullptr
        && this->logDeliveryGroup_ == nullptr && this->logDeliveryPermission_ == nullptr && this->logDeliveryStatus_ == nullptr && this->logDeliveryUpdateTime_ == nullptr && this->logName_ == nullptr
        && this->logSearchConditions_ == nullptr && this->logStoreExisted_ == nullptr && this->logStoreName_ == nullptr && this->logStoreTtl_ == nullptr; };
        // logCode Field Functions 
        bool hasLogCode() const { return this->logCode_ != nullptr;};
        void deleteLogCode() { this->logCode_ = nullptr;};
        inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
        inline SasLogStores& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


        // logDeliveryGroup Field Functions 
        bool hasLogDeliveryGroup() const { return this->logDeliveryGroup_ != nullptr;};
        void deleteLogDeliveryGroup() { this->logDeliveryGroup_ = nullptr;};
        inline string getLogDeliveryGroup() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryGroup_, "") };
        inline SasLogStores& setLogDeliveryGroup(string logDeliveryGroup) { DARABONBA_PTR_SET_VALUE(logDeliveryGroup_, logDeliveryGroup) };


        // logDeliveryPermission Field Functions 
        bool hasLogDeliveryPermission() const { return this->logDeliveryPermission_ != nullptr;};
        void deleteLogDeliveryPermission() { this->logDeliveryPermission_ = nullptr;};
        inline string getLogDeliveryPermission() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryPermission_, "") };
        inline SasLogStores& setLogDeliveryPermission(string logDeliveryPermission) { DARABONBA_PTR_SET_VALUE(logDeliveryPermission_, logDeliveryPermission) };


        // logDeliveryStatus Field Functions 
        bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
        void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
        inline string getLogDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
        inline SasLogStores& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


        // logDeliveryUpdateTime Field Functions 
        bool hasLogDeliveryUpdateTime() const { return this->logDeliveryUpdateTime_ != nullptr;};
        void deleteLogDeliveryUpdateTime() { this->logDeliveryUpdateTime_ = nullptr;};
        inline string getLogDeliveryUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryUpdateTime_, "") };
        inline SasLogStores& setLogDeliveryUpdateTime(string logDeliveryUpdateTime) { DARABONBA_PTR_SET_VALUE(logDeliveryUpdateTime_, logDeliveryUpdateTime) };


        // logName Field Functions 
        bool hasLogName() const { return this->logName_ != nullptr;};
        void deleteLogName() { this->logName_ = nullptr;};
        inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
        inline SasLogStores& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


        // logSearchConditions Field Functions 
        bool hasLogSearchConditions() const { return this->logSearchConditions_ != nullptr;};
        void deleteLogSearchConditions() { this->logSearchConditions_ = nullptr;};
        inline string getLogSearchConditions() const { DARABONBA_PTR_GET_DEFAULT(logSearchConditions_, "") };
        inline SasLogStores& setLogSearchConditions(string logSearchConditions) { DARABONBA_PTR_SET_VALUE(logSearchConditions_, logSearchConditions) };


        // logStoreExisted Field Functions 
        bool hasLogStoreExisted() const { return this->logStoreExisted_ != nullptr;};
        void deleteLogStoreExisted() { this->logStoreExisted_ = nullptr;};
        inline bool getLogStoreExisted() const { DARABONBA_PTR_GET_DEFAULT(logStoreExisted_, false) };
        inline SasLogStores& setLogStoreExisted(bool logStoreExisted) { DARABONBA_PTR_SET_VALUE(logStoreExisted_, logStoreExisted) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline SasLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logStoreTtl Field Functions 
        bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
        void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
        inline int32_t getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
        inline SasLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


      protected:
        shared_ptr<string> logCode_ {};
        shared_ptr<string> logDeliveryGroup_ {};
        shared_ptr<string> logDeliveryPermission_ {};
        shared_ptr<string> logDeliveryStatus_ {};
        shared_ptr<string> logDeliveryUpdateTime_ {};
        shared_ptr<string> logName_ {};
        shared_ptr<string> logSearchConditions_ {};
        shared_ptr<bool> logStoreExisted_ {};
        shared_ptr<string> logStoreName_ {};
        shared_ptr<int32_t> logStoreTtl_ {};
      };

      class NormalizationLogViews : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationLogViews& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(DetectionRuleReferenceCount, detectionRuleReferenceCount_);
          DARABONBA_PTR_TO_JSON(DetectionRuleReferenceProductIds, detectionRuleReferenceProductIds_);
          DARABONBA_PTR_TO_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogViewExisted, logViewExisted_);
          DARABONBA_PTR_TO_JSON(LogViewName, logViewName_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationLogViews& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(DetectionRuleReferenceCount, detectionRuleReferenceCount_);
          DARABONBA_PTR_FROM_JSON(DetectionRuleReferenceProductIds, detectionRuleReferenceProductIds_);
          DARABONBA_PTR_FROM_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogViewExisted, logViewExisted_);
          DARABONBA_PTR_FROM_JSON(LogViewName, logViewName_);
        };
        NormalizationLogViews() = default ;
        NormalizationLogViews(const NormalizationLogViews &) = default ;
        NormalizationLogViews(NormalizationLogViews &&) = default ;
        NormalizationLogViews(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationLogViews() = default ;
        NormalizationLogViews& operator=(const NormalizationLogViews &) = default ;
        NormalizationLogViews& operator=(NormalizationLogViews &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityName_ == nullptr
        && this->categoryName_ == nullptr && this->detectionRuleReferenceCount_ == nullptr && this->detectionRuleReferenceProductIds_ == nullptr && this->logSearchConditions_ == nullptr && this->logStoreName_ == nullptr
        && this->logViewExisted_ == nullptr && this->logViewName_ == nullptr; };
        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline NormalizationLogViews& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline NormalizationLogViews& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // detectionRuleReferenceCount Field Functions 
        bool hasDetectionRuleReferenceCount() const { return this->detectionRuleReferenceCount_ != nullptr;};
        void deleteDetectionRuleReferenceCount() { this->detectionRuleReferenceCount_ = nullptr;};
        inline int32_t getDetectionRuleReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleReferenceCount_, 0) };
        inline NormalizationLogViews& setDetectionRuleReferenceCount(int32_t detectionRuleReferenceCount) { DARABONBA_PTR_SET_VALUE(detectionRuleReferenceCount_, detectionRuleReferenceCount) };


        // detectionRuleReferenceProductIds Field Functions 
        bool hasDetectionRuleReferenceProductIds() const { return this->detectionRuleReferenceProductIds_ != nullptr;};
        void deleteDetectionRuleReferenceProductIds() { this->detectionRuleReferenceProductIds_ = nullptr;};
        inline const vector<string> & getDetectionRuleReferenceProductIds() const { DARABONBA_PTR_GET_CONST(detectionRuleReferenceProductIds_, vector<string>) };
        inline vector<string> getDetectionRuleReferenceProductIds() { DARABONBA_PTR_GET(detectionRuleReferenceProductIds_, vector<string>) };
        inline NormalizationLogViews& setDetectionRuleReferenceProductIds(const vector<string> & detectionRuleReferenceProductIds) { DARABONBA_PTR_SET_VALUE(detectionRuleReferenceProductIds_, detectionRuleReferenceProductIds) };
        inline NormalizationLogViews& setDetectionRuleReferenceProductIds(vector<string> && detectionRuleReferenceProductIds) { DARABONBA_PTR_SET_RVALUE(detectionRuleReferenceProductIds_, detectionRuleReferenceProductIds) };


        // logSearchConditions Field Functions 
        bool hasLogSearchConditions() const { return this->logSearchConditions_ != nullptr;};
        void deleteLogSearchConditions() { this->logSearchConditions_ = nullptr;};
        inline string getLogSearchConditions() const { DARABONBA_PTR_GET_DEFAULT(logSearchConditions_, "") };
        inline NormalizationLogViews& setLogSearchConditions(string logSearchConditions) { DARABONBA_PTR_SET_VALUE(logSearchConditions_, logSearchConditions) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline NormalizationLogViews& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logViewExisted Field Functions 
        bool hasLogViewExisted() const { return this->logViewExisted_ != nullptr;};
        void deleteLogViewExisted() { this->logViewExisted_ = nullptr;};
        inline bool getLogViewExisted() const { DARABONBA_PTR_GET_DEFAULT(logViewExisted_, false) };
        inline NormalizationLogViews& setLogViewExisted(bool logViewExisted) { DARABONBA_PTR_SET_VALUE(logViewExisted_, logViewExisted) };


        // logViewName Field Functions 
        bool hasLogViewName() const { return this->logViewName_ != nullptr;};
        void deleteLogViewName() { this->logViewName_ = nullptr;};
        inline string getLogViewName() const { DARABONBA_PTR_GET_DEFAULT(logViewName_, "") };
        inline NormalizationLogViews& setLogViewName(string logViewName) { DARABONBA_PTR_SET_VALUE(logViewName_, logViewName) };


      protected:
        shared_ptr<string> activityName_ {};
        shared_ptr<string> categoryName_ {};
        shared_ptr<int32_t> detectionRuleReferenceCount_ {};
        shared_ptr<vector<string>> detectionRuleReferenceProductIds_ {};
        shared_ptr<string> logSearchConditions_ {};
        shared_ptr<string> logStoreName_ {};
        shared_ptr<bool> logViewExisted_ {};
        shared_ptr<string> logViewName_ {};
      };

      class NormalizationLogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationLogStores& obj) { 
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationLogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
        };
        NormalizationLogStores() = default ;
        NormalizationLogStores(const NormalizationLogStores &) = default ;
        NormalizationLogStores(NormalizationLogStores &&) = default ;
        NormalizationLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationLogStores() = default ;
        NormalizationLogStores& operator=(const NormalizationLogStores &) = default ;
        NormalizationLogStores& operator=(NormalizationLogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logStoreName_ == nullptr
        && this->logStoreTtl_ == nullptr; };
        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline NormalizationLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logStoreTtl Field Functions 
        bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
        void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
        inline int32_t getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
        inline NormalizationLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


      protected:
        shared_ptr<string> logStoreName_ {};
        shared_ptr<int32_t> logStoreTtl_ {};
      };

      virtual bool empty() const override { return this->coldStorageUsedCapacity_ == nullptr
        && this->dataStorageRegionId_ == nullptr && this->dataStorageRegionPermission_ == nullptr && this->dataStorageTotalCapacity_ == nullptr && this->dataStorageUsedCapacity_ == nullptr && this->dataStorageUsedCapacityDetail_ == nullptr
        && this->logProject_ == nullptr && this->normalizationLogStores_ == nullptr && this->normalizationLogViews_ == nullptr && this->sasLogStores_ == nullptr; };
      // coldStorageUsedCapacity Field Functions 
      bool hasColdStorageUsedCapacity() const { return this->coldStorageUsedCapacity_ != nullptr;};
      void deleteColdStorageUsedCapacity() { this->coldStorageUsedCapacity_ = nullptr;};
      inline double getColdStorageUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(coldStorageUsedCapacity_, 0.0) };
      inline Data& setColdStorageUsedCapacity(double coldStorageUsedCapacity) { DARABONBA_PTR_SET_VALUE(coldStorageUsedCapacity_, coldStorageUsedCapacity) };


      // dataStorageRegionId Field Functions 
      bool hasDataStorageRegionId() const { return this->dataStorageRegionId_ != nullptr;};
      void deleteDataStorageRegionId() { this->dataStorageRegionId_ = nullptr;};
      inline string getDataStorageRegionId() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionId_, "") };
      inline Data& setDataStorageRegionId(string dataStorageRegionId) { DARABONBA_PTR_SET_VALUE(dataStorageRegionId_, dataStorageRegionId) };


      // dataStorageRegionPermission Field Functions 
      bool hasDataStorageRegionPermission() const { return this->dataStorageRegionPermission_ != nullptr;};
      void deleteDataStorageRegionPermission() { this->dataStorageRegionPermission_ = nullptr;};
      inline string getDataStorageRegionPermission() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionPermission_, "") };
      inline Data& setDataStorageRegionPermission(string dataStorageRegionPermission) { DARABONBA_PTR_SET_VALUE(dataStorageRegionPermission_, dataStorageRegionPermission) };


      // dataStorageTotalCapacity Field Functions 
      bool hasDataStorageTotalCapacity() const { return this->dataStorageTotalCapacity_ != nullptr;};
      void deleteDataStorageTotalCapacity() { this->dataStorageTotalCapacity_ = nullptr;};
      inline int64_t getDataStorageTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataStorageTotalCapacity_, 0L) };
      inline Data& setDataStorageTotalCapacity(int64_t dataStorageTotalCapacity) { DARABONBA_PTR_SET_VALUE(dataStorageTotalCapacity_, dataStorageTotalCapacity) };


      // dataStorageUsedCapacity Field Functions 
      bool hasDataStorageUsedCapacity() const { return this->dataStorageUsedCapacity_ != nullptr;};
      void deleteDataStorageUsedCapacity() { this->dataStorageUsedCapacity_ = nullptr;};
      inline double getDataStorageUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataStorageUsedCapacity_, 0.0) };
      inline Data& setDataStorageUsedCapacity(double dataStorageUsedCapacity) { DARABONBA_PTR_SET_VALUE(dataStorageUsedCapacity_, dataStorageUsedCapacity) };


      // dataStorageUsedCapacityDetail Field Functions 
      bool hasDataStorageUsedCapacityDetail() const { return this->dataStorageUsedCapacityDetail_ != nullptr;};
      void deleteDataStorageUsedCapacityDetail() { this->dataStorageUsedCapacityDetail_ = nullptr;};
      inline string getDataStorageUsedCapacityDetail() const { DARABONBA_PTR_GET_DEFAULT(dataStorageUsedCapacityDetail_, "") };
      inline Data& setDataStorageUsedCapacityDetail(string dataStorageUsedCapacityDetail) { DARABONBA_PTR_SET_VALUE(dataStorageUsedCapacityDetail_, dataStorageUsedCapacityDetail) };


      // logProject Field Functions 
      bool hasLogProject() const { return this->logProject_ != nullptr;};
      void deleteLogProject() { this->logProject_ = nullptr;};
      inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
      inline Data& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


      // normalizationLogStores Field Functions 
      bool hasNormalizationLogStores() const { return this->normalizationLogStores_ != nullptr;};
      void deleteNormalizationLogStores() { this->normalizationLogStores_ = nullptr;};
      inline const vector<Data::NormalizationLogStores> & getNormalizationLogStores() const { DARABONBA_PTR_GET_CONST(normalizationLogStores_, vector<Data::NormalizationLogStores>) };
      inline vector<Data::NormalizationLogStores> getNormalizationLogStores() { DARABONBA_PTR_GET(normalizationLogStores_, vector<Data::NormalizationLogStores>) };
      inline Data& setNormalizationLogStores(const vector<Data::NormalizationLogStores> & normalizationLogStores) { DARABONBA_PTR_SET_VALUE(normalizationLogStores_, normalizationLogStores) };
      inline Data& setNormalizationLogStores(vector<Data::NormalizationLogStores> && normalizationLogStores) { DARABONBA_PTR_SET_RVALUE(normalizationLogStores_, normalizationLogStores) };


      // normalizationLogViews Field Functions 
      bool hasNormalizationLogViews() const { return this->normalizationLogViews_ != nullptr;};
      void deleteNormalizationLogViews() { this->normalizationLogViews_ = nullptr;};
      inline const vector<Data::NormalizationLogViews> & getNormalizationLogViews() const { DARABONBA_PTR_GET_CONST(normalizationLogViews_, vector<Data::NormalizationLogViews>) };
      inline vector<Data::NormalizationLogViews> getNormalizationLogViews() { DARABONBA_PTR_GET(normalizationLogViews_, vector<Data::NormalizationLogViews>) };
      inline Data& setNormalizationLogViews(const vector<Data::NormalizationLogViews> & normalizationLogViews) { DARABONBA_PTR_SET_VALUE(normalizationLogViews_, normalizationLogViews) };
      inline Data& setNormalizationLogViews(vector<Data::NormalizationLogViews> && normalizationLogViews) { DARABONBA_PTR_SET_RVALUE(normalizationLogViews_, normalizationLogViews) };


      // sasLogStores Field Functions 
      bool hasSasLogStores() const { return this->sasLogStores_ != nullptr;};
      void deleteSasLogStores() { this->sasLogStores_ = nullptr;};
      inline const vector<Data::SasLogStores> & getSasLogStores() const { DARABONBA_PTR_GET_CONST(sasLogStores_, vector<Data::SasLogStores>) };
      inline vector<Data::SasLogStores> getSasLogStores() { DARABONBA_PTR_GET(sasLogStores_, vector<Data::SasLogStores>) };
      inline Data& setSasLogStores(const vector<Data::SasLogStores> & sasLogStores) { DARABONBA_PTR_SET_VALUE(sasLogStores_, sasLogStores) };
      inline Data& setSasLogStores(vector<Data::SasLogStores> && sasLogStores) { DARABONBA_PTR_SET_RVALUE(sasLogStores_, sasLogStores) };


    protected:
      shared_ptr<double> coldStorageUsedCapacity_ {};
      shared_ptr<string> dataStorageRegionId_ {};
      shared_ptr<string> dataStorageRegionPermission_ {};
      shared_ptr<int64_t> dataStorageTotalCapacity_ {};
      shared_ptr<double> dataStorageUsedCapacity_ {};
      shared_ptr<string> dataStorageUsedCapacityDetail_ {};
      shared_ptr<string> logProject_ {};
      shared_ptr<vector<Data::NormalizationLogStores>> normalizationLogStores_ {};
      shared_ptr<vector<Data::NormalizationLogViews>> normalizationLogViews_ {};
      shared_ptr<vector<Data::SasLogStores>> sasLogStores_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataStorageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataStorageResponseBody::Data) };
    inline GetDataStorageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataStorageResponseBody::Data) };
    inline GetDataStorageResponseBody& setData(const GetDataStorageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataStorageResponseBody& setData(GetDataStorageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDataStorageResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
