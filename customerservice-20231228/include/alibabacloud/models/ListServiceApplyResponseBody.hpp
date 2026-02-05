// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEAPPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CustomerService20231228
{
namespace Models
{
  class ListServiceApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListServiceApplyResponseBody() = default ;
    ListServiceApplyResponseBody(const ListServiceApplyResponseBody &) = default ;
    ListServiceApplyResponseBody(ListServiceApplyResponseBody &&) = default ;
    ListServiceApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceApplyResponseBody() = default ;
    ListServiceApplyResponseBody& operator=(const ListServiceApplyResponseBody &) = default ;
    ListServiceApplyResponseBody& operator=(ListServiceApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(extend, extend_);
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(extend, extend_);
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(applierId, applierId_);
          DARABONBA_PTR_TO_JSON(applyCode, applyCode_);
          DARABONBA_PTR_TO_JSON(applyComponentDetails, applyComponentDetails_);
          DARABONBA_PTR_TO_JSON(applyTime, applyTime_);
          DARABONBA_PTR_TO_JSON(appointments, appointments_);
          DARABONBA_PTR_TO_JSON(buyUrl, buyUrl_);
          DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
          DARABONBA_PTR_TO_JSON(customerName, customerName_);
          DARABONBA_PTR_TO_JSON(cycleService, cycleService_);
          DARABONBA_PTR_TO_JSON(executedCount, executedCount_);
          DARABONBA_PTR_TO_JSON(finishCount, finishCount_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(isOneToOneExpertServiceByTime, isOneToOneExpertServiceByTime_);
          DARABONBA_PTR_TO_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
          DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
          DARABONBA_PTR_TO_JSON(packDetails, packDetails_);
          DARABONBA_PTR_TO_JSON(payOrders, payOrders_);
          DARABONBA_PTR_TO_JSON(payUrl, payUrl_);
          DARABONBA_PTR_TO_JSON(performanceOrders, performanceOrders_);
          DARABONBA_PTR_TO_JSON(performancePacks, performancePacks_);
          DARABONBA_PTR_TO_JSON(reneWalUrl, reneWalUrl_);
          DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
          DARABONBA_PTR_TO_JSON(serviceReports, serviceReports_);
          DARABONBA_PTR_TO_JSON(serviceTimeRange, serviceTimeRange_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(statusStr, statusStr_);
          DARABONBA_PTR_TO_JSON(termOfValidity, termOfValidity_);
          DARABONBA_PTR_TO_JSON(totalPack, totalPack_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(usePack, usePack_);
          DARABONBA_PTR_TO_JSON(userRights, userRights_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(applierId, applierId_);
          DARABONBA_PTR_FROM_JSON(applyCode, applyCode_);
          DARABONBA_PTR_FROM_JSON(applyComponentDetails, applyComponentDetails_);
          DARABONBA_PTR_FROM_JSON(applyTime, applyTime_);
          DARABONBA_PTR_FROM_JSON(appointments, appointments_);
          DARABONBA_PTR_FROM_JSON(buyUrl, buyUrl_);
          DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
          DARABONBA_PTR_FROM_JSON(customerName, customerName_);
          DARABONBA_PTR_FROM_JSON(cycleService, cycleService_);
          DARABONBA_PTR_FROM_JSON(executedCount, executedCount_);
          DARABONBA_PTR_FROM_JSON(finishCount, finishCount_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(isOneToOneExpertServiceByTime, isOneToOneExpertServiceByTime_);
          DARABONBA_PTR_FROM_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
          DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
          DARABONBA_PTR_FROM_JSON(packDetails, packDetails_);
          DARABONBA_PTR_FROM_JSON(payOrders, payOrders_);
          DARABONBA_PTR_FROM_JSON(payUrl, payUrl_);
          DARABONBA_PTR_FROM_JSON(performanceOrders, performanceOrders_);
          DARABONBA_PTR_FROM_JSON(performancePacks, performancePacks_);
          DARABONBA_PTR_FROM_JSON(reneWalUrl, reneWalUrl_);
          DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(serviceReports, serviceReports_);
          DARABONBA_PTR_FROM_JSON(serviceTimeRange, serviceTimeRange_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(statusStr, statusStr_);
          DARABONBA_PTR_FROM_JSON(termOfValidity, termOfValidity_);
          DARABONBA_PTR_FROM_JSON(totalPack, totalPack_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(usePack, usePack_);
          DARABONBA_PTR_FROM_JSON(userRights, userRights_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceReports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceReports& obj) { 
            DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
            DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
            DARABONBA_PTR_TO_JSON(customerId, customerId_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
            DARABONBA_PTR_TO_JSON(fileType, fileType_);
            DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(remarke, remarke_);
            DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceReports& obj) { 
            DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
            DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
            DARABONBA_PTR_FROM_JSON(customerId, customerId_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
            DARABONBA_PTR_FROM_JSON(fileType, fileType_);
            DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(remarke, remarke_);
            DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          ServiceReports() = default ;
          ServiceReports(const ServiceReports &) = default ;
          ServiceReports(ServiceReports &&) = default ;
          ServiceReports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceReports() = default ;
          ServiceReports& operator=(const ServiceReports &) = default ;
          ServiceReports& operator=(ServiceReports &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
          // appointmentId Field Functions 
          bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
          void deleteAppointmentId() { this->appointmentId_ = nullptr;};
          inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
          inline ServiceReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


          // batchGroup Field Functions 
          bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
          void deleteBatchGroup() { this->batchGroup_ = nullptr;};
          inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
          inline ServiceReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


          // customerId Field Functions 
          bool hasCustomerId() const { return this->customerId_ != nullptr;};
          void deleteCustomerId() { this->customerId_ = nullptr;};
          inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
          inline ServiceReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline ServiceReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // fileType Field Functions 
          bool hasFileType() const { return this->fileType_ != nullptr;};
          void deleteFileType() { this->fileType_ = nullptr;};
          inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
          inline ServiceReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline ServiceReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline ServiceReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ServiceReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // remarke Field Functions 
          bool hasRemarke() const { return this->remarke_ != nullptr;};
          void deleteRemarke() { this->remarke_ = nullptr;};
          inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
          inline ServiceReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


          // serviceApplyId Field Functions 
          bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
          void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
          inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
          inline ServiceReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline ServiceReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ServiceReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> appointmentId_ {};
          shared_ptr<string> batchGroup_ {};
          shared_ptr<string> customerId_ {};
          shared_ptr<string> fileName_ {};
          shared_ptr<int32_t> fileType_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> remarke_ {};
          shared_ptr<int64_t> serviceApplyId_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> url_ {};
        };

        class PerformancePacks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PerformancePacks& obj) { 
            DARABONBA_PTR_TO_JSON(applyFileVOList, applyFileVOList_);
            DARABONBA_PTR_TO_JSON(appointmentCode, appointmentCode_);
            DARABONBA_PTR_TO_JSON(appointmentEndTime, appointmentEndTime_);
            DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
            DARABONBA_PTR_TO_JSON(appointmentPassTime, appointmentPassTime_);
            DARABONBA_PTR_TO_JSON(appointmentTime, appointmentTime_);
            DARABONBA_PTR_TO_JSON(commodityDesc, commodityDesc_);
            DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
            DARABONBA_PTR_TO_JSON(cycleService, cycleService_);
            DARABONBA_PTR_TO_JSON(extList, extList_);
            DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
            DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
            DARABONBA_PTR_TO_JSON(ntmCommodityCode, ntmCommodityCode_);
            DARABONBA_ANY_TO_JSON(orderDetail, orderDetail_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
            DARABONBA_PTR_TO_JSON(performanceNodeDTOS, performanceNodeDTOS_);
            DARABONBA_PTR_TO_JSON(purchasePackCode, purchasePackCode_);
            DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
            DARABONBA_PTR_TO_JSON(serviceMonthReports, serviceMonthReports_);
            DARABONBA_PTR_TO_JSON(serviceReports, serviceReports_);
            DARABONBA_PTR_TO_JSON(serviceSchemes, serviceSchemes_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(statusStr, statusStr_);
            DARABONBA_PTR_TO_JSON(supportTime, supportTime_);
            DARABONBA_PTR_TO_JSON(tamEngineers, tamEngineers_);
          };
          friend void from_json(const Darabonba::Json& j, PerformancePacks& obj) { 
            DARABONBA_PTR_FROM_JSON(applyFileVOList, applyFileVOList_);
            DARABONBA_PTR_FROM_JSON(appointmentCode, appointmentCode_);
            DARABONBA_PTR_FROM_JSON(appointmentEndTime, appointmentEndTime_);
            DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
            DARABONBA_PTR_FROM_JSON(appointmentPassTime, appointmentPassTime_);
            DARABONBA_PTR_FROM_JSON(appointmentTime, appointmentTime_);
            DARABONBA_PTR_FROM_JSON(commodityDesc, commodityDesc_);
            DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
            DARABONBA_PTR_FROM_JSON(cycleService, cycleService_);
            DARABONBA_PTR_FROM_JSON(extList, extList_);
            DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
            DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
            DARABONBA_PTR_FROM_JSON(ntmCommodityCode, ntmCommodityCode_);
            DARABONBA_ANY_FROM_JSON(orderDetail, orderDetail_);
            DARABONBA_PTR_FROM_JSON(orderId, orderId_);
            DARABONBA_PTR_FROM_JSON(performanceNodeDTOS, performanceNodeDTOS_);
            DARABONBA_PTR_FROM_JSON(purchasePackCode, purchasePackCode_);
            DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
            DARABONBA_PTR_FROM_JSON(serviceMonthReports, serviceMonthReports_);
            DARABONBA_PTR_FROM_JSON(serviceReports, serviceReports_);
            DARABONBA_PTR_FROM_JSON(serviceSchemes, serviceSchemes_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(statusStr, statusStr_);
            DARABONBA_PTR_FROM_JSON(supportTime, supportTime_);
            DARABONBA_PTR_FROM_JSON(tamEngineers, tamEngineers_);
          };
          PerformancePacks() = default ;
          PerformancePacks(const PerformancePacks &) = default ;
          PerformancePacks(PerformancePacks &&) = default ;
          PerformancePacks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PerformancePacks() = default ;
          PerformancePacks& operator=(const PerformancePacks &) = default ;
          PerformancePacks& operator=(PerformancePacks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TamEngineers : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TamEngineers& obj) { 
              DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(hrStatus, hrStatus_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(lastName, lastName_);
              DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(nickNameEn, nickNameEn_);
              DARABONBA_PTR_TO_JSON(realmId, realmId_);
              DARABONBA_PTR_TO_JSON(workid, workid_);
            };
            friend void from_json(const Darabonba::Json& j, TamEngineers& obj) { 
              DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(hrStatus, hrStatus_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(lastName, lastName_);
              DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(nickNameEn, nickNameEn_);
              DARABONBA_PTR_FROM_JSON(realmId, realmId_);
              DARABONBA_PTR_FROM_JSON(workid, workid_);
            };
            TamEngineers() = default ;
            TamEngineers(const TamEngineers &) = default ;
            TamEngineers(TamEngineers &&) = default ;
            TamEngineers(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TamEngineers() = default ;
            TamEngineers& operator=(const TamEngineers &) = default ;
            TamEngineers& operator=(TamEngineers &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->creatorEmpId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hrStatus_ == nullptr && this->id_ == nullptr && this->lastName_ == nullptr
        && this->modifierEmpId_ == nullptr && this->name_ == nullptr && this->nickNameEn_ == nullptr && this->realmId_ == nullptr && this->workid_ == nullptr; };
            // creatorEmpId Field Functions 
            bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
            void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
            inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
            inline TamEngineers& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline TamEngineers& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline TamEngineers& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // hrStatus Field Functions 
            bool hasHrStatus() const { return this->hrStatus_ != nullptr;};
            void deleteHrStatus() { this->hrStatus_ = nullptr;};
            inline string getHrStatus() const { DARABONBA_PTR_GET_DEFAULT(hrStatus_, "") };
            inline TamEngineers& setHrStatus(string hrStatus) { DARABONBA_PTR_SET_VALUE(hrStatus_, hrStatus) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline TamEngineers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // lastName Field Functions 
            bool hasLastName() const { return this->lastName_ != nullptr;};
            void deleteLastName() { this->lastName_ = nullptr;};
            inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
            inline TamEngineers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


            // modifierEmpId Field Functions 
            bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
            void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
            inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
            inline TamEngineers& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline TamEngineers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // nickNameEn Field Functions 
            bool hasNickNameEn() const { return this->nickNameEn_ != nullptr;};
            void deleteNickNameEn() { this->nickNameEn_ = nullptr;};
            inline string getNickNameEn() const { DARABONBA_PTR_GET_DEFAULT(nickNameEn_, "") };
            inline TamEngineers& setNickNameEn(string nickNameEn) { DARABONBA_PTR_SET_VALUE(nickNameEn_, nickNameEn) };


            // realmId Field Functions 
            bool hasRealmId() const { return this->realmId_ != nullptr;};
            void deleteRealmId() { this->realmId_ = nullptr;};
            inline int64_t getRealmId() const { DARABONBA_PTR_GET_DEFAULT(realmId_, 0L) };
            inline TamEngineers& setRealmId(int64_t realmId) { DARABONBA_PTR_SET_VALUE(realmId_, realmId) };


            // workid Field Functions 
            bool hasWorkid() const { return this->workid_ != nullptr;};
            void deleteWorkid() { this->workid_ = nullptr;};
            inline string getWorkid() const { DARABONBA_PTR_GET_DEFAULT(workid_, "") };
            inline TamEngineers& setWorkid(string workid) { DARABONBA_PTR_SET_VALUE(workid_, workid) };


          protected:
            shared_ptr<string> creatorEmpId_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<string> hrStatus_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> lastName_ {};
            shared_ptr<string> modifierEmpId_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> nickNameEn_ {};
            shared_ptr<int64_t> realmId_ {};
            shared_ptr<string> workid_ {};
          };

          class ServiceSchemes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceSchemes& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceSchemes& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ServiceSchemes() = default ;
            ServiceSchemes(const ServiceSchemes &) = default ;
            ServiceSchemes(ServiceSchemes &&) = default ;
            ServiceSchemes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceSchemes() = default ;
            ServiceSchemes& operator=(const ServiceSchemes &) = default ;
            ServiceSchemes& operator=(ServiceSchemes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ServiceSchemes& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ServiceSchemes& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ServiceSchemes& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ServiceSchemes& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ServiceSchemes& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServiceSchemes& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServiceSchemes& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServiceSchemes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ServiceSchemes& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ServiceSchemes& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ServiceSchemes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ServiceSchemes& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          class ServiceReports : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceReports& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceReports& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ServiceReports() = default ;
            ServiceReports(const ServiceReports &) = default ;
            ServiceReports(ServiceReports &&) = default ;
            ServiceReports(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceReports() = default ;
            ServiceReports& operator=(const ServiceReports &) = default ;
            ServiceReports& operator=(ServiceReports &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ServiceReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ServiceReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ServiceReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ServiceReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ServiceReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServiceReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServiceReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServiceReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ServiceReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ServiceReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ServiceReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ServiceReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          class ServiceMonthReports : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceMonthReports& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceMonthReports& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ServiceMonthReports() = default ;
            ServiceMonthReports(const ServiceMonthReports &) = default ;
            ServiceMonthReports(ServiceMonthReports &&) = default ;
            ServiceMonthReports(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceMonthReports() = default ;
            ServiceMonthReports& operator=(const ServiceMonthReports &) = default ;
            ServiceMonthReports& operator=(ServiceMonthReports &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ServiceMonthReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ServiceMonthReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ServiceMonthReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ServiceMonthReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ServiceMonthReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServiceMonthReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServiceMonthReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServiceMonthReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ServiceMonthReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ServiceMonthReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ServiceMonthReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ServiceMonthReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          class PerformanceNodeDTOS : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PerformanceNodeDTOS& obj) { 
              DARABONBA_PTR_TO_JSON(display, display_);
              DARABONBA_ANY_TO_JSON(extendInfo, extendInfo_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
              DARABONBA_PTR_TO_JSON(status, status_);
            };
            friend void from_json(const Darabonba::Json& j, PerformanceNodeDTOS& obj) { 
              DARABONBA_PTR_FROM_JSON(display, display_);
              DARABONBA_ANY_FROM_JSON(extendInfo, extendInfo_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
              DARABONBA_PTR_FROM_JSON(status, status_);
            };
            PerformanceNodeDTOS() = default ;
            PerformanceNodeDTOS(const PerformanceNodeDTOS &) = default ;
            PerformanceNodeDTOS(PerformanceNodeDTOS &&) = default ;
            PerformanceNodeDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PerformanceNodeDTOS() = default ;
            PerformanceNodeDTOS& operator=(const PerformanceNodeDTOS &) = default ;
            PerformanceNodeDTOS& operator=(PerformanceNodeDTOS &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->display_ == nullptr
        && this->extendInfo_ == nullptr && this->index_ == nullptr && this->nodeName_ == nullptr && this->status_ == nullptr; };
            // display Field Functions 
            bool hasDisplay() const { return this->display_ != nullptr;};
            void deleteDisplay() { this->display_ = nullptr;};
            inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
            inline PerformanceNodeDTOS& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


            // extendInfo Field Functions 
            bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
            void deleteExtendInfo() { this->extendInfo_ = nullptr;};
            inline             const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
            Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
            inline PerformanceNodeDTOS& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
            inline PerformanceNodeDTOS& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline PerformanceNodeDTOS& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // nodeName Field Functions 
            bool hasNodeName() const { return this->nodeName_ != nullptr;};
            void deleteNodeName() { this->nodeName_ = nullptr;};
            inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
            inline PerformanceNodeDTOS& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline PerformanceNodeDTOS& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            shared_ptr<bool> display_ {};
            Darabonba::Json extendInfo_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<string> nodeName_ {};
            shared_ptr<int32_t> status_ {};
          };

          class ExtList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ExtList& obj) { 
              DARABONBA_PTR_TO_JSON(keyCode, keyCode_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_ANY_TO_JSON(value, value_);
              DARABONBA_PTR_TO_JSON(view, view_);
            };
            friend void from_json(const Darabonba::Json& j, ExtList& obj) { 
              DARABONBA_PTR_FROM_JSON(keyCode, keyCode_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_ANY_FROM_JSON(value, value_);
              DARABONBA_PTR_FROM_JSON(view, view_);
            };
            ExtList() = default ;
            ExtList(const ExtList &) = default ;
            ExtList(ExtList &&) = default ;
            ExtList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ExtList() = default ;
            ExtList& operator=(const ExtList &) = default ;
            ExtList& operator=(ExtList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keyCode_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr && this->view_ == nullptr; };
            // keyCode Field Functions 
            bool hasKeyCode() const { return this->keyCode_ != nullptr;};
            void deleteKeyCode() { this->keyCode_ = nullptr;};
            inline string getKeyCode() const { DARABONBA_PTR_GET_DEFAULT(keyCode_, "") };
            inline ExtList& setKeyCode(string keyCode) { DARABONBA_PTR_SET_VALUE(keyCode_, keyCode) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ExtList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline             const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
            Darabonba::Json & getValue() { DARABONBA_GET(value_) };
            inline ExtList& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
            inline ExtList& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


            // view Field Functions 
            bool hasView() const { return this->view_ != nullptr;};
            void deleteView() { this->view_ = nullptr;};
            inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
            inline ExtList& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


          protected:
            shared_ptr<string> keyCode_ {};
            shared_ptr<string> name_ {};
            Darabonba::Json value_ {};
            shared_ptr<string> view_ {};
          };

          class ApplyFileVOList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApplyFileVOList& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ApplyFileVOList& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ApplyFileVOList() = default ;
            ApplyFileVOList(const ApplyFileVOList &) = default ;
            ApplyFileVOList(ApplyFileVOList &&) = default ;
            ApplyFileVOList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApplyFileVOList() = default ;
            ApplyFileVOList& operator=(const ApplyFileVOList &) = default ;
            ApplyFileVOList& operator=(ApplyFileVOList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ApplyFileVOList& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ApplyFileVOList& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ApplyFileVOList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ApplyFileVOList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ApplyFileVOList& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ApplyFileVOList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ApplyFileVOList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ApplyFileVOList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ApplyFileVOList& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ApplyFileVOList& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ApplyFileVOList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ApplyFileVOList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->applyFileVOList_ == nullptr
        && this->appointmentCode_ == nullptr && this->appointmentEndTime_ == nullptr && this->appointmentId_ == nullptr && this->appointmentPassTime_ == nullptr && this->appointmentTime_ == nullptr
        && this->commodityDesc_ == nullptr && this->creatorEmpId_ == nullptr && this->cycleService_ == nullptr && this->extList_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mergeSolutionAndReporterOneStep_ == nullptr && this->modifierEmpId_ == nullptr && this->ntmCommodityCode_ == nullptr
        && this->orderDetail_ == nullptr && this->orderId_ == nullptr && this->performanceNodeDTOS_ == nullptr && this->purchasePackCode_ == nullptr && this->serviceApplyId_ == nullptr
        && this->serviceMonthReports_ == nullptr && this->serviceReports_ == nullptr && this->serviceSchemes_ == nullptr && this->status_ == nullptr && this->statusStr_ == nullptr
        && this->supportTime_ == nullptr && this->tamEngineers_ == nullptr; };
          // applyFileVOList Field Functions 
          bool hasApplyFileVOList() const { return this->applyFileVOList_ != nullptr;};
          void deleteApplyFileVOList() { this->applyFileVOList_ = nullptr;};
          inline const vector<PerformancePacks::ApplyFileVOList> & getApplyFileVOList() const { DARABONBA_PTR_GET_CONST(applyFileVOList_, vector<PerformancePacks::ApplyFileVOList>) };
          inline vector<PerformancePacks::ApplyFileVOList> getApplyFileVOList() { DARABONBA_PTR_GET(applyFileVOList_, vector<PerformancePacks::ApplyFileVOList>) };
          inline PerformancePacks& setApplyFileVOList(const vector<PerformancePacks::ApplyFileVOList> & applyFileVOList) { DARABONBA_PTR_SET_VALUE(applyFileVOList_, applyFileVOList) };
          inline PerformancePacks& setApplyFileVOList(vector<PerformancePacks::ApplyFileVOList> && applyFileVOList) { DARABONBA_PTR_SET_RVALUE(applyFileVOList_, applyFileVOList) };


          // appointmentCode Field Functions 
          bool hasAppointmentCode() const { return this->appointmentCode_ != nullptr;};
          void deleteAppointmentCode() { this->appointmentCode_ = nullptr;};
          inline string getAppointmentCode() const { DARABONBA_PTR_GET_DEFAULT(appointmentCode_, "") };
          inline PerformancePacks& setAppointmentCode(string appointmentCode) { DARABONBA_PTR_SET_VALUE(appointmentCode_, appointmentCode) };


          // appointmentEndTime Field Functions 
          bool hasAppointmentEndTime() const { return this->appointmentEndTime_ != nullptr;};
          void deleteAppointmentEndTime() { this->appointmentEndTime_ = nullptr;};
          inline int64_t getAppointmentEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentEndTime_, 0L) };
          inline PerformancePacks& setAppointmentEndTime(int64_t appointmentEndTime) { DARABONBA_PTR_SET_VALUE(appointmentEndTime_, appointmentEndTime) };


          // appointmentId Field Functions 
          bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
          void deleteAppointmentId() { this->appointmentId_ = nullptr;};
          inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
          inline PerformancePacks& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


          // appointmentPassTime Field Functions 
          bool hasAppointmentPassTime() const { return this->appointmentPassTime_ != nullptr;};
          void deleteAppointmentPassTime() { this->appointmentPassTime_ = nullptr;};
          inline int64_t getAppointmentPassTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentPassTime_, 0L) };
          inline PerformancePacks& setAppointmentPassTime(int64_t appointmentPassTime) { DARABONBA_PTR_SET_VALUE(appointmentPassTime_, appointmentPassTime) };


          // appointmentTime Field Functions 
          bool hasAppointmentTime() const { return this->appointmentTime_ != nullptr;};
          void deleteAppointmentTime() { this->appointmentTime_ = nullptr;};
          inline int64_t getAppointmentTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentTime_, 0L) };
          inline PerformancePacks& setAppointmentTime(int64_t appointmentTime) { DARABONBA_PTR_SET_VALUE(appointmentTime_, appointmentTime) };


          // commodityDesc Field Functions 
          bool hasCommodityDesc() const { return this->commodityDesc_ != nullptr;};
          void deleteCommodityDesc() { this->commodityDesc_ = nullptr;};
          inline string getCommodityDesc() const { DARABONBA_PTR_GET_DEFAULT(commodityDesc_, "") };
          inline PerformancePacks& setCommodityDesc(string commodityDesc) { DARABONBA_PTR_SET_VALUE(commodityDesc_, commodityDesc) };


          // creatorEmpId Field Functions 
          bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
          void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
          inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
          inline PerformancePacks& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


          // cycleService Field Functions 
          bool hasCycleService() const { return this->cycleService_ != nullptr;};
          void deleteCycleService() { this->cycleService_ = nullptr;};
          inline bool getCycleService() const { DARABONBA_PTR_GET_DEFAULT(cycleService_, false) };
          inline PerformancePacks& setCycleService(bool cycleService) { DARABONBA_PTR_SET_VALUE(cycleService_, cycleService) };


          // extList Field Functions 
          bool hasExtList() const { return this->extList_ != nullptr;};
          void deleteExtList() { this->extList_ = nullptr;};
          inline const vector<PerformancePacks::ExtList> & getExtList() const { DARABONBA_PTR_GET_CONST(extList_, vector<PerformancePacks::ExtList>) };
          inline vector<PerformancePacks::ExtList> getExtList() { DARABONBA_PTR_GET(extList_, vector<PerformancePacks::ExtList>) };
          inline PerformancePacks& setExtList(const vector<PerformancePacks::ExtList> & extList) { DARABONBA_PTR_SET_VALUE(extList_, extList) };
          inline PerformancePacks& setExtList(vector<PerformancePacks::ExtList> && extList) { DARABONBA_PTR_SET_RVALUE(extList_, extList) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline PerformancePacks& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline PerformancePacks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline PerformancePacks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // mergeSolutionAndReporterOneStep Field Functions 
          bool hasMergeSolutionAndReporterOneStep() const { return this->mergeSolutionAndReporterOneStep_ != nullptr;};
          void deleteMergeSolutionAndReporterOneStep() { this->mergeSolutionAndReporterOneStep_ = nullptr;};
          inline bool getMergeSolutionAndReporterOneStep() const { DARABONBA_PTR_GET_DEFAULT(mergeSolutionAndReporterOneStep_, false) };
          inline PerformancePacks& setMergeSolutionAndReporterOneStep(bool mergeSolutionAndReporterOneStep) { DARABONBA_PTR_SET_VALUE(mergeSolutionAndReporterOneStep_, mergeSolutionAndReporterOneStep) };


          // modifierEmpId Field Functions 
          bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
          void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
          inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
          inline PerformancePacks& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


          // ntmCommodityCode Field Functions 
          bool hasNtmCommodityCode() const { return this->ntmCommodityCode_ != nullptr;};
          void deleteNtmCommodityCode() { this->ntmCommodityCode_ = nullptr;};
          inline string getNtmCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(ntmCommodityCode_, "") };
          inline PerformancePacks& setNtmCommodityCode(string ntmCommodityCode) { DARABONBA_PTR_SET_VALUE(ntmCommodityCode_, ntmCommodityCode) };


          // orderDetail Field Functions 
          bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
          void deleteOrderDetail() { this->orderDetail_ = nullptr;};
          inline           const Darabonba::Json & getOrderDetail() const { DARABONBA_GET(orderDetail_) };
          Darabonba::Json & getOrderDetail() { DARABONBA_GET(orderDetail_) };
          inline PerformancePacks& setOrderDetail(const Darabonba::Json & orderDetail) { DARABONBA_SET_VALUE(orderDetail_, orderDetail) };
          inline PerformancePacks& setOrderDetail(Darabonba::Json && orderDetail) { DARABONBA_SET_RVALUE(orderDetail_, orderDetail) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
          inline PerformancePacks& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // performanceNodeDTOS Field Functions 
          bool hasPerformanceNodeDTOS() const { return this->performanceNodeDTOS_ != nullptr;};
          void deletePerformanceNodeDTOS() { this->performanceNodeDTOS_ = nullptr;};
          inline const vector<PerformancePacks::PerformanceNodeDTOS> & getPerformanceNodeDTOS() const { DARABONBA_PTR_GET_CONST(performanceNodeDTOS_, vector<PerformancePacks::PerformanceNodeDTOS>) };
          inline vector<PerformancePacks::PerformanceNodeDTOS> getPerformanceNodeDTOS() { DARABONBA_PTR_GET(performanceNodeDTOS_, vector<PerformancePacks::PerformanceNodeDTOS>) };
          inline PerformancePacks& setPerformanceNodeDTOS(const vector<PerformancePacks::PerformanceNodeDTOS> & performanceNodeDTOS) { DARABONBA_PTR_SET_VALUE(performanceNodeDTOS_, performanceNodeDTOS) };
          inline PerformancePacks& setPerformanceNodeDTOS(vector<PerformancePacks::PerformanceNodeDTOS> && performanceNodeDTOS) { DARABONBA_PTR_SET_RVALUE(performanceNodeDTOS_, performanceNodeDTOS) };


          // purchasePackCode Field Functions 
          bool hasPurchasePackCode() const { return this->purchasePackCode_ != nullptr;};
          void deletePurchasePackCode() { this->purchasePackCode_ = nullptr;};
          inline int32_t getPurchasePackCode() const { DARABONBA_PTR_GET_DEFAULT(purchasePackCode_, 0) };
          inline PerformancePacks& setPurchasePackCode(int32_t purchasePackCode) { DARABONBA_PTR_SET_VALUE(purchasePackCode_, purchasePackCode) };


          // serviceApplyId Field Functions 
          bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
          void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
          inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
          inline PerformancePacks& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


          // serviceMonthReports Field Functions 
          bool hasServiceMonthReports() const { return this->serviceMonthReports_ != nullptr;};
          void deleteServiceMonthReports() { this->serviceMonthReports_ = nullptr;};
          inline const vector<PerformancePacks::ServiceMonthReports> & getServiceMonthReports() const { DARABONBA_PTR_GET_CONST(serviceMonthReports_, vector<PerformancePacks::ServiceMonthReports>) };
          inline vector<PerformancePacks::ServiceMonthReports> getServiceMonthReports() { DARABONBA_PTR_GET(serviceMonthReports_, vector<PerformancePacks::ServiceMonthReports>) };
          inline PerformancePacks& setServiceMonthReports(const vector<PerformancePacks::ServiceMonthReports> & serviceMonthReports) { DARABONBA_PTR_SET_VALUE(serviceMonthReports_, serviceMonthReports) };
          inline PerformancePacks& setServiceMonthReports(vector<PerformancePacks::ServiceMonthReports> && serviceMonthReports) { DARABONBA_PTR_SET_RVALUE(serviceMonthReports_, serviceMonthReports) };


          // serviceReports Field Functions 
          bool hasServiceReports() const { return this->serviceReports_ != nullptr;};
          void deleteServiceReports() { this->serviceReports_ = nullptr;};
          inline const vector<PerformancePacks::ServiceReports> & getServiceReports() const { DARABONBA_PTR_GET_CONST(serviceReports_, vector<PerformancePacks::ServiceReports>) };
          inline vector<PerformancePacks::ServiceReports> getServiceReports() { DARABONBA_PTR_GET(serviceReports_, vector<PerformancePacks::ServiceReports>) };
          inline PerformancePacks& setServiceReports(const vector<PerformancePacks::ServiceReports> & serviceReports) { DARABONBA_PTR_SET_VALUE(serviceReports_, serviceReports) };
          inline PerformancePacks& setServiceReports(vector<PerformancePacks::ServiceReports> && serviceReports) { DARABONBA_PTR_SET_RVALUE(serviceReports_, serviceReports) };


          // serviceSchemes Field Functions 
          bool hasServiceSchemes() const { return this->serviceSchemes_ != nullptr;};
          void deleteServiceSchemes() { this->serviceSchemes_ = nullptr;};
          inline const vector<PerformancePacks::ServiceSchemes> & getServiceSchemes() const { DARABONBA_PTR_GET_CONST(serviceSchemes_, vector<PerformancePacks::ServiceSchemes>) };
          inline vector<PerformancePacks::ServiceSchemes> getServiceSchemes() { DARABONBA_PTR_GET(serviceSchemes_, vector<PerformancePacks::ServiceSchemes>) };
          inline PerformancePacks& setServiceSchemes(const vector<PerformancePacks::ServiceSchemes> & serviceSchemes) { DARABONBA_PTR_SET_VALUE(serviceSchemes_, serviceSchemes) };
          inline PerformancePacks& setServiceSchemes(vector<PerformancePacks::ServiceSchemes> && serviceSchemes) { DARABONBA_PTR_SET_RVALUE(serviceSchemes_, serviceSchemes) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline PerformancePacks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusStr Field Functions 
          bool hasStatusStr() const { return this->statusStr_ != nullptr;};
          void deleteStatusStr() { this->statusStr_ = nullptr;};
          inline string getStatusStr() const { DARABONBA_PTR_GET_DEFAULT(statusStr_, "") };
          inline PerformancePacks& setStatusStr(string statusStr) { DARABONBA_PTR_SET_VALUE(statusStr_, statusStr) };


          // supportTime Field Functions 
          bool hasSupportTime() const { return this->supportTime_ != nullptr;};
          void deleteSupportTime() { this->supportTime_ = nullptr;};
          inline const vector<int64_t> & getSupportTime() const { DARABONBA_PTR_GET_CONST(supportTime_, vector<int64_t>) };
          inline vector<int64_t> getSupportTime() { DARABONBA_PTR_GET(supportTime_, vector<int64_t>) };
          inline PerformancePacks& setSupportTime(const vector<int64_t> & supportTime) { DARABONBA_PTR_SET_VALUE(supportTime_, supportTime) };
          inline PerformancePacks& setSupportTime(vector<int64_t> && supportTime) { DARABONBA_PTR_SET_RVALUE(supportTime_, supportTime) };


          // tamEngineers Field Functions 
          bool hasTamEngineers() const { return this->tamEngineers_ != nullptr;};
          void deleteTamEngineers() { this->tamEngineers_ = nullptr;};
          inline const vector<PerformancePacks::TamEngineers> & getTamEngineers() const { DARABONBA_PTR_GET_CONST(tamEngineers_, vector<PerformancePacks::TamEngineers>) };
          inline vector<PerformancePacks::TamEngineers> getTamEngineers() { DARABONBA_PTR_GET(tamEngineers_, vector<PerformancePacks::TamEngineers>) };
          inline PerformancePacks& setTamEngineers(const vector<PerformancePacks::TamEngineers> & tamEngineers) { DARABONBA_PTR_SET_VALUE(tamEngineers_, tamEngineers) };
          inline PerformancePacks& setTamEngineers(vector<PerformancePacks::TamEngineers> && tamEngineers) { DARABONBA_PTR_SET_RVALUE(tamEngineers_, tamEngineers) };


        protected:
          shared_ptr<vector<PerformancePacks::ApplyFileVOList>> applyFileVOList_ {};
          shared_ptr<string> appointmentCode_ {};
          shared_ptr<int64_t> appointmentEndTime_ {};
          shared_ptr<string> appointmentId_ {};
          shared_ptr<int64_t> appointmentPassTime_ {};
          shared_ptr<int64_t> appointmentTime_ {};
          shared_ptr<string> commodityDesc_ {};
          shared_ptr<string> creatorEmpId_ {};
          shared_ptr<bool> cycleService_ {};
          shared_ptr<vector<PerformancePacks::ExtList>> extList_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<bool> mergeSolutionAndReporterOneStep_ {};
          shared_ptr<string> modifierEmpId_ {};
          shared_ptr<string> ntmCommodityCode_ {};
          Darabonba::Json orderDetail_ {};
          shared_ptr<int64_t> orderId_ {};
          shared_ptr<vector<PerformancePacks::PerformanceNodeDTOS>> performanceNodeDTOS_ {};
          shared_ptr<int32_t> purchasePackCode_ {};
          shared_ptr<int64_t> serviceApplyId_ {};
          shared_ptr<vector<PerformancePacks::ServiceMonthReports>> serviceMonthReports_ {};
          shared_ptr<vector<PerformancePacks::ServiceReports>> serviceReports_ {};
          shared_ptr<vector<PerformancePacks::ServiceSchemes>> serviceSchemes_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> statusStr_ {};
          shared_ptr<vector<int64_t>> supportTime_ {};
          shared_ptr<vector<PerformancePacks::TamEngineers>> tamEngineers_ {};
        };

        class PerformanceOrders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PerformanceOrders& obj) { 
            DARABONBA_PTR_TO_JSON(applyFileVOList, applyFileVOList_);
            DARABONBA_PTR_TO_JSON(appointmentCode, appointmentCode_);
            DARABONBA_PTR_TO_JSON(appointmentEndTime, appointmentEndTime_);
            DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
            DARABONBA_PTR_TO_JSON(appointmentPassTime, appointmentPassTime_);
            DARABONBA_PTR_TO_JSON(appointmentTime, appointmentTime_);
            DARABONBA_PTR_TO_JSON(commodityDesc, commodityDesc_);
            DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
            DARABONBA_PTR_TO_JSON(cycleService, cycleService_);
            DARABONBA_PTR_TO_JSON(extList, extList_);
            DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
            DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
            DARABONBA_PTR_TO_JSON(ntmCommodityCode, ntmCommodityCode_);
            DARABONBA_ANY_TO_JSON(orderDetail, orderDetail_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
            DARABONBA_PTR_TO_JSON(packCount, packCount_);
            DARABONBA_PTR_TO_JSON(packDetails, packDetails_);
            DARABONBA_PTR_TO_JSON(performanceNodeDTOS, performanceNodeDTOS_);
            DARABONBA_PTR_TO_JSON(performancePacks, performancePacks_);
            DARABONBA_PTR_TO_JSON(purchasePackCode, purchasePackCode_);
            DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
            DARABONBA_PTR_TO_JSON(serviceMonthReports, serviceMonthReports_);
            DARABONBA_PTR_TO_JSON(serviceReports, serviceReports_);
            DARABONBA_PTR_TO_JSON(serviceSchemes, serviceSchemes_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(statusStr, statusStr_);
            DARABONBA_PTR_TO_JSON(supportTime, supportTime_);
            DARABONBA_PTR_TO_JSON(tamEngineers, tamEngineers_);
          };
          friend void from_json(const Darabonba::Json& j, PerformanceOrders& obj) { 
            DARABONBA_PTR_FROM_JSON(applyFileVOList, applyFileVOList_);
            DARABONBA_PTR_FROM_JSON(appointmentCode, appointmentCode_);
            DARABONBA_PTR_FROM_JSON(appointmentEndTime, appointmentEndTime_);
            DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
            DARABONBA_PTR_FROM_JSON(appointmentPassTime, appointmentPassTime_);
            DARABONBA_PTR_FROM_JSON(appointmentTime, appointmentTime_);
            DARABONBA_PTR_FROM_JSON(commodityDesc, commodityDesc_);
            DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
            DARABONBA_PTR_FROM_JSON(cycleService, cycleService_);
            DARABONBA_PTR_FROM_JSON(extList, extList_);
            DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
            DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
            DARABONBA_PTR_FROM_JSON(ntmCommodityCode, ntmCommodityCode_);
            DARABONBA_ANY_FROM_JSON(orderDetail, orderDetail_);
            DARABONBA_PTR_FROM_JSON(orderId, orderId_);
            DARABONBA_PTR_FROM_JSON(packCount, packCount_);
            DARABONBA_PTR_FROM_JSON(packDetails, packDetails_);
            DARABONBA_PTR_FROM_JSON(performanceNodeDTOS, performanceNodeDTOS_);
            DARABONBA_PTR_FROM_JSON(performancePacks, performancePacks_);
            DARABONBA_PTR_FROM_JSON(purchasePackCode, purchasePackCode_);
            DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
            DARABONBA_PTR_FROM_JSON(serviceMonthReports, serviceMonthReports_);
            DARABONBA_PTR_FROM_JSON(serviceReports, serviceReports_);
            DARABONBA_PTR_FROM_JSON(serviceSchemes, serviceSchemes_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(statusStr, statusStr_);
            DARABONBA_PTR_FROM_JSON(supportTime, supportTime_);
            DARABONBA_PTR_FROM_JSON(tamEngineers, tamEngineers_);
          };
          PerformanceOrders() = default ;
          PerformanceOrders(const PerformanceOrders &) = default ;
          PerformanceOrders(PerformanceOrders &&) = default ;
          PerformanceOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PerformanceOrders() = default ;
          PerformanceOrders& operator=(const PerformanceOrders &) = default ;
          PerformanceOrders& operator=(PerformanceOrders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TamEngineers : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TamEngineers& obj) { 
              DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(hrStatus, hrStatus_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(lastName, lastName_);
              DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(nickNameEn, nickNameEn_);
              DARABONBA_PTR_TO_JSON(realmId, realmId_);
              DARABONBA_PTR_TO_JSON(workid, workid_);
            };
            friend void from_json(const Darabonba::Json& j, TamEngineers& obj) { 
              DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(hrStatus, hrStatus_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(lastName, lastName_);
              DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(nickNameEn, nickNameEn_);
              DARABONBA_PTR_FROM_JSON(realmId, realmId_);
              DARABONBA_PTR_FROM_JSON(workid, workid_);
            };
            TamEngineers() = default ;
            TamEngineers(const TamEngineers &) = default ;
            TamEngineers(TamEngineers &&) = default ;
            TamEngineers(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TamEngineers() = default ;
            TamEngineers& operator=(const TamEngineers &) = default ;
            TamEngineers& operator=(TamEngineers &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->creatorEmpId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hrStatus_ == nullptr && this->id_ == nullptr && this->lastName_ == nullptr
        && this->modifierEmpId_ == nullptr && this->name_ == nullptr && this->nickNameEn_ == nullptr && this->realmId_ == nullptr && this->workid_ == nullptr; };
            // creatorEmpId Field Functions 
            bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
            void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
            inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
            inline TamEngineers& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline TamEngineers& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline TamEngineers& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // hrStatus Field Functions 
            bool hasHrStatus() const { return this->hrStatus_ != nullptr;};
            void deleteHrStatus() { this->hrStatus_ = nullptr;};
            inline string getHrStatus() const { DARABONBA_PTR_GET_DEFAULT(hrStatus_, "") };
            inline TamEngineers& setHrStatus(string hrStatus) { DARABONBA_PTR_SET_VALUE(hrStatus_, hrStatus) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline TamEngineers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // lastName Field Functions 
            bool hasLastName() const { return this->lastName_ != nullptr;};
            void deleteLastName() { this->lastName_ = nullptr;};
            inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
            inline TamEngineers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


            // modifierEmpId Field Functions 
            bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
            void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
            inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
            inline TamEngineers& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline TamEngineers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // nickNameEn Field Functions 
            bool hasNickNameEn() const { return this->nickNameEn_ != nullptr;};
            void deleteNickNameEn() { this->nickNameEn_ = nullptr;};
            inline string getNickNameEn() const { DARABONBA_PTR_GET_DEFAULT(nickNameEn_, "") };
            inline TamEngineers& setNickNameEn(string nickNameEn) { DARABONBA_PTR_SET_VALUE(nickNameEn_, nickNameEn) };


            // realmId Field Functions 
            bool hasRealmId() const { return this->realmId_ != nullptr;};
            void deleteRealmId() { this->realmId_ = nullptr;};
            inline int64_t getRealmId() const { DARABONBA_PTR_GET_DEFAULT(realmId_, 0L) };
            inline TamEngineers& setRealmId(int64_t realmId) { DARABONBA_PTR_SET_VALUE(realmId_, realmId) };


            // workid Field Functions 
            bool hasWorkid() const { return this->workid_ != nullptr;};
            void deleteWorkid() { this->workid_ = nullptr;};
            inline string getWorkid() const { DARABONBA_PTR_GET_DEFAULT(workid_, "") };
            inline TamEngineers& setWorkid(string workid) { DARABONBA_PTR_SET_VALUE(workid_, workid) };


          protected:
            shared_ptr<string> creatorEmpId_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<string> hrStatus_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> lastName_ {};
            shared_ptr<string> modifierEmpId_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> nickNameEn_ {};
            shared_ptr<int64_t> realmId_ {};
            shared_ptr<string> workid_ {};
          };

          class ServiceSchemes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceSchemes& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceSchemes& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ServiceSchemes() = default ;
            ServiceSchemes(const ServiceSchemes &) = default ;
            ServiceSchemes(ServiceSchemes &&) = default ;
            ServiceSchemes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceSchemes() = default ;
            ServiceSchemes& operator=(const ServiceSchemes &) = default ;
            ServiceSchemes& operator=(ServiceSchemes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ServiceSchemes& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ServiceSchemes& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ServiceSchemes& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ServiceSchemes& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ServiceSchemes& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServiceSchemes& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServiceSchemes& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServiceSchemes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ServiceSchemes& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ServiceSchemes& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ServiceSchemes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ServiceSchemes& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          class ServiceReports : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceReports& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceReports& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ServiceReports() = default ;
            ServiceReports(const ServiceReports &) = default ;
            ServiceReports(ServiceReports &&) = default ;
            ServiceReports(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceReports() = default ;
            ServiceReports& operator=(const ServiceReports &) = default ;
            ServiceReports& operator=(ServiceReports &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ServiceReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ServiceReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ServiceReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ServiceReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ServiceReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServiceReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServiceReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServiceReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ServiceReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ServiceReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ServiceReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ServiceReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          class ServiceMonthReports : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceMonthReports& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceMonthReports& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ServiceMonthReports() = default ;
            ServiceMonthReports(const ServiceMonthReports &) = default ;
            ServiceMonthReports(ServiceMonthReports &&) = default ;
            ServiceMonthReports(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceMonthReports() = default ;
            ServiceMonthReports& operator=(const ServiceMonthReports &) = default ;
            ServiceMonthReports& operator=(ServiceMonthReports &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ServiceMonthReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ServiceMonthReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ServiceMonthReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ServiceMonthReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ServiceMonthReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServiceMonthReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServiceMonthReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServiceMonthReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ServiceMonthReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ServiceMonthReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ServiceMonthReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ServiceMonthReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          class PerformancePacks : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PerformancePacks& obj) { 
              DARABONBA_PTR_TO_JSON(applyFileVOList, applyFileVOList_);
              DARABONBA_PTR_TO_JSON(appointmentCode, appointmentCode_);
              DARABONBA_PTR_TO_JSON(appointmentEndTime, appointmentEndTime_);
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(appointmentPassTime, appointmentPassTime_);
              DARABONBA_PTR_TO_JSON(appointmentTime, appointmentTime_);
              DARABONBA_PTR_TO_JSON(commodityDesc, commodityDesc_);
              DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
              DARABONBA_PTR_TO_JSON(cycleService, cycleService_);
              DARABONBA_PTR_TO_JSON(extList, extList_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
              DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
              DARABONBA_PTR_TO_JSON(ntmCommodityCode, ntmCommodityCode_);
              DARABONBA_ANY_TO_JSON(orderDetail, orderDetail_);
              DARABONBA_PTR_TO_JSON(orderId, orderId_);
              DARABONBA_PTR_TO_JSON(performanceNodeDTOS, performanceNodeDTOS_);
              DARABONBA_PTR_TO_JSON(purchasePackCode, purchasePackCode_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(serviceMonthReports, serviceMonthReports_);
              DARABONBA_PTR_TO_JSON(serviceReports, serviceReports_);
              DARABONBA_PTR_TO_JSON(serviceSchemes, serviceSchemes_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(statusStr, statusStr_);
              DARABONBA_PTR_TO_JSON(supportTime, supportTime_);
              DARABONBA_PTR_TO_JSON(tamEngineers, tamEngineers_);
            };
            friend void from_json(const Darabonba::Json& j, PerformancePacks& obj) { 
              DARABONBA_PTR_FROM_JSON(applyFileVOList, applyFileVOList_);
              DARABONBA_PTR_FROM_JSON(appointmentCode, appointmentCode_);
              DARABONBA_PTR_FROM_JSON(appointmentEndTime, appointmentEndTime_);
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(appointmentPassTime, appointmentPassTime_);
              DARABONBA_PTR_FROM_JSON(appointmentTime, appointmentTime_);
              DARABONBA_PTR_FROM_JSON(commodityDesc, commodityDesc_);
              DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
              DARABONBA_PTR_FROM_JSON(cycleService, cycleService_);
              DARABONBA_PTR_FROM_JSON(extList, extList_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(mergeSolutionAndReporterOneStep, mergeSolutionAndReporterOneStep_);
              DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
              DARABONBA_PTR_FROM_JSON(ntmCommodityCode, ntmCommodityCode_);
              DARABONBA_ANY_FROM_JSON(orderDetail, orderDetail_);
              DARABONBA_PTR_FROM_JSON(orderId, orderId_);
              DARABONBA_PTR_FROM_JSON(performanceNodeDTOS, performanceNodeDTOS_);
              DARABONBA_PTR_FROM_JSON(purchasePackCode, purchasePackCode_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(serviceMonthReports, serviceMonthReports_);
              DARABONBA_PTR_FROM_JSON(serviceReports, serviceReports_);
              DARABONBA_PTR_FROM_JSON(serviceSchemes, serviceSchemes_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(statusStr, statusStr_);
              DARABONBA_PTR_FROM_JSON(supportTime, supportTime_);
              DARABONBA_PTR_FROM_JSON(tamEngineers, tamEngineers_);
            };
            PerformancePacks() = default ;
            PerformancePacks(const PerformancePacks &) = default ;
            PerformancePacks(PerformancePacks &&) = default ;
            PerformancePacks(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PerformancePacks() = default ;
            PerformancePacks& operator=(const PerformancePacks &) = default ;
            PerformancePacks& operator=(PerformancePacks &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TamEngineers : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TamEngineers& obj) { 
                DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
                DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_TO_JSON(hrStatus, hrStatus_);
                DARABONBA_PTR_TO_JSON(id, id_);
                DARABONBA_PTR_TO_JSON(lastName, lastName_);
                DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_PTR_TO_JSON(nickNameEn, nickNameEn_);
                DARABONBA_PTR_TO_JSON(realmId, realmId_);
                DARABONBA_PTR_TO_JSON(workid, workid_);
              };
              friend void from_json(const Darabonba::Json& j, TamEngineers& obj) { 
                DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
                DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_FROM_JSON(hrStatus, hrStatus_);
                DARABONBA_PTR_FROM_JSON(id, id_);
                DARABONBA_PTR_FROM_JSON(lastName, lastName_);
                DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_PTR_FROM_JSON(nickNameEn, nickNameEn_);
                DARABONBA_PTR_FROM_JSON(realmId, realmId_);
                DARABONBA_PTR_FROM_JSON(workid, workid_);
              };
              TamEngineers() = default ;
              TamEngineers(const TamEngineers &) = default ;
              TamEngineers(TamEngineers &&) = default ;
              TamEngineers(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TamEngineers() = default ;
              TamEngineers& operator=(const TamEngineers &) = default ;
              TamEngineers& operator=(TamEngineers &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->creatorEmpId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hrStatus_ == nullptr && this->id_ == nullptr && this->lastName_ == nullptr
        && this->modifierEmpId_ == nullptr && this->name_ == nullptr && this->nickNameEn_ == nullptr && this->realmId_ == nullptr && this->workid_ == nullptr; };
              // creatorEmpId Field Functions 
              bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
              void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
              inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
              inline TamEngineers& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


              // gmtCreate Field Functions 
              bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
              void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
              inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
              inline TamEngineers& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


              // gmtModified Field Functions 
              bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
              void deleteGmtModified() { this->gmtModified_ = nullptr;};
              inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
              inline TamEngineers& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


              // hrStatus Field Functions 
              bool hasHrStatus() const { return this->hrStatus_ != nullptr;};
              void deleteHrStatus() { this->hrStatus_ = nullptr;};
              inline string getHrStatus() const { DARABONBA_PTR_GET_DEFAULT(hrStatus_, "") };
              inline TamEngineers& setHrStatus(string hrStatus) { DARABONBA_PTR_SET_VALUE(hrStatus_, hrStatus) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
              inline TamEngineers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // lastName Field Functions 
              bool hasLastName() const { return this->lastName_ != nullptr;};
              void deleteLastName() { this->lastName_ = nullptr;};
              inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
              inline TamEngineers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


              // modifierEmpId Field Functions 
              bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
              void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
              inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
              inline TamEngineers& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline TamEngineers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // nickNameEn Field Functions 
              bool hasNickNameEn() const { return this->nickNameEn_ != nullptr;};
              void deleteNickNameEn() { this->nickNameEn_ = nullptr;};
              inline string getNickNameEn() const { DARABONBA_PTR_GET_DEFAULT(nickNameEn_, "") };
              inline TamEngineers& setNickNameEn(string nickNameEn) { DARABONBA_PTR_SET_VALUE(nickNameEn_, nickNameEn) };


              // realmId Field Functions 
              bool hasRealmId() const { return this->realmId_ != nullptr;};
              void deleteRealmId() { this->realmId_ = nullptr;};
              inline int64_t getRealmId() const { DARABONBA_PTR_GET_DEFAULT(realmId_, 0L) };
              inline TamEngineers& setRealmId(int64_t realmId) { DARABONBA_PTR_SET_VALUE(realmId_, realmId) };


              // workid Field Functions 
              bool hasWorkid() const { return this->workid_ != nullptr;};
              void deleteWorkid() { this->workid_ = nullptr;};
              inline string getWorkid() const { DARABONBA_PTR_GET_DEFAULT(workid_, "") };
              inline TamEngineers& setWorkid(string workid) { DARABONBA_PTR_SET_VALUE(workid_, workid) };


            protected:
              shared_ptr<string> creatorEmpId_ {};
              shared_ptr<string> gmtCreate_ {};
              shared_ptr<string> gmtModified_ {};
              shared_ptr<string> hrStatus_ {};
              shared_ptr<int64_t> id_ {};
              shared_ptr<string> lastName_ {};
              shared_ptr<string> modifierEmpId_ {};
              shared_ptr<string> name_ {};
              shared_ptr<string> nickNameEn_ {};
              shared_ptr<int64_t> realmId_ {};
              shared_ptr<string> workid_ {};
            };

            class ServiceSchemes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ServiceSchemes& obj) { 
                DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_TO_JSON(customerId, customerId_);
                DARABONBA_PTR_TO_JSON(fileName, fileName_);
                DARABONBA_PTR_TO_JSON(fileType, fileType_);
                DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_TO_JSON(id, id_);
                DARABONBA_PTR_TO_JSON(remarke, remarke_);
                DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_TO_JSON(status, status_);
                DARABONBA_PTR_TO_JSON(url, url_);
              };
              friend void from_json(const Darabonba::Json& j, ServiceSchemes& obj) { 
                DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_FROM_JSON(customerId, customerId_);
                DARABONBA_PTR_FROM_JSON(fileName, fileName_);
                DARABONBA_PTR_FROM_JSON(fileType, fileType_);
                DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_FROM_JSON(id, id_);
                DARABONBA_PTR_FROM_JSON(remarke, remarke_);
                DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_FROM_JSON(status, status_);
                DARABONBA_PTR_FROM_JSON(url, url_);
              };
              ServiceSchemes() = default ;
              ServiceSchemes(const ServiceSchemes &) = default ;
              ServiceSchemes(ServiceSchemes &&) = default ;
              ServiceSchemes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ServiceSchemes() = default ;
              ServiceSchemes& operator=(const ServiceSchemes &) = default ;
              ServiceSchemes& operator=(ServiceSchemes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
              // appointmentId Field Functions 
              bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
              void deleteAppointmentId() { this->appointmentId_ = nullptr;};
              inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
              inline ServiceSchemes& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


              // batchGroup Field Functions 
              bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
              void deleteBatchGroup() { this->batchGroup_ = nullptr;};
              inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
              inline ServiceSchemes& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


              // customerId Field Functions 
              bool hasCustomerId() const { return this->customerId_ != nullptr;};
              void deleteCustomerId() { this->customerId_ = nullptr;};
              inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
              inline ServiceSchemes& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


              // fileName Field Functions 
              bool hasFileName() const { return this->fileName_ != nullptr;};
              void deleteFileName() { this->fileName_ = nullptr;};
              inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
              inline ServiceSchemes& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


              // fileType Field Functions 
              bool hasFileType() const { return this->fileType_ != nullptr;};
              void deleteFileType() { this->fileType_ = nullptr;};
              inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
              inline ServiceSchemes& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


              // gmtCreate Field Functions 
              bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
              void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
              inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
              inline ServiceSchemes& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


              // gmtModified Field Functions 
              bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
              void deleteGmtModified() { this->gmtModified_ = nullptr;};
              inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
              inline ServiceSchemes& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
              inline ServiceSchemes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // remarke Field Functions 
              bool hasRemarke() const { return this->remarke_ != nullptr;};
              void deleteRemarke() { this->remarke_ = nullptr;};
              inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
              inline ServiceSchemes& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


              // serviceApplyId Field Functions 
              bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
              void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
              inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
              inline ServiceSchemes& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
              inline ServiceSchemes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
              inline ServiceSchemes& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            protected:
              shared_ptr<string> appointmentId_ {};
              shared_ptr<string> batchGroup_ {};
              shared_ptr<string> customerId_ {};
              shared_ptr<string> fileName_ {};
              shared_ptr<int32_t> fileType_ {};
              shared_ptr<string> gmtCreate_ {};
              shared_ptr<string> gmtModified_ {};
              shared_ptr<int64_t> id_ {};
              shared_ptr<string> remarke_ {};
              shared_ptr<int64_t> serviceApplyId_ {};
              shared_ptr<int32_t> status_ {};
              shared_ptr<string> url_ {};
            };

            class ServiceReports : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ServiceReports& obj) { 
                DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_TO_JSON(customerId, customerId_);
                DARABONBA_PTR_TO_JSON(fileName, fileName_);
                DARABONBA_PTR_TO_JSON(fileType, fileType_);
                DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_TO_JSON(id, id_);
                DARABONBA_PTR_TO_JSON(remarke, remarke_);
                DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_TO_JSON(status, status_);
                DARABONBA_PTR_TO_JSON(url, url_);
              };
              friend void from_json(const Darabonba::Json& j, ServiceReports& obj) { 
                DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_FROM_JSON(customerId, customerId_);
                DARABONBA_PTR_FROM_JSON(fileName, fileName_);
                DARABONBA_PTR_FROM_JSON(fileType, fileType_);
                DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_FROM_JSON(id, id_);
                DARABONBA_PTR_FROM_JSON(remarke, remarke_);
                DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_FROM_JSON(status, status_);
                DARABONBA_PTR_FROM_JSON(url, url_);
              };
              ServiceReports() = default ;
              ServiceReports(const ServiceReports &) = default ;
              ServiceReports(ServiceReports &&) = default ;
              ServiceReports(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ServiceReports() = default ;
              ServiceReports& operator=(const ServiceReports &) = default ;
              ServiceReports& operator=(ServiceReports &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
              // appointmentId Field Functions 
              bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
              void deleteAppointmentId() { this->appointmentId_ = nullptr;};
              inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
              inline ServiceReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


              // batchGroup Field Functions 
              bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
              void deleteBatchGroup() { this->batchGroup_ = nullptr;};
              inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
              inline ServiceReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


              // customerId Field Functions 
              bool hasCustomerId() const { return this->customerId_ != nullptr;};
              void deleteCustomerId() { this->customerId_ = nullptr;};
              inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
              inline ServiceReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


              // fileName Field Functions 
              bool hasFileName() const { return this->fileName_ != nullptr;};
              void deleteFileName() { this->fileName_ = nullptr;};
              inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
              inline ServiceReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


              // fileType Field Functions 
              bool hasFileType() const { return this->fileType_ != nullptr;};
              void deleteFileType() { this->fileType_ = nullptr;};
              inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
              inline ServiceReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


              // gmtCreate Field Functions 
              bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
              void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
              inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
              inline ServiceReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


              // gmtModified Field Functions 
              bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
              void deleteGmtModified() { this->gmtModified_ = nullptr;};
              inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
              inline ServiceReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
              inline ServiceReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // remarke Field Functions 
              bool hasRemarke() const { return this->remarke_ != nullptr;};
              void deleteRemarke() { this->remarke_ = nullptr;};
              inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
              inline ServiceReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


              // serviceApplyId Field Functions 
              bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
              void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
              inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
              inline ServiceReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
              inline ServiceReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
              inline ServiceReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            protected:
              shared_ptr<string> appointmentId_ {};
              shared_ptr<string> batchGroup_ {};
              shared_ptr<string> customerId_ {};
              shared_ptr<string> fileName_ {};
              shared_ptr<int32_t> fileType_ {};
              shared_ptr<string> gmtCreate_ {};
              shared_ptr<string> gmtModified_ {};
              shared_ptr<int64_t> id_ {};
              shared_ptr<string> remarke_ {};
              shared_ptr<int64_t> serviceApplyId_ {};
              shared_ptr<int32_t> status_ {};
              shared_ptr<string> url_ {};
            };

            class ServiceMonthReports : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ServiceMonthReports& obj) { 
                DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_TO_JSON(customerId, customerId_);
                DARABONBA_PTR_TO_JSON(fileName, fileName_);
                DARABONBA_PTR_TO_JSON(fileType, fileType_);
                DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_TO_JSON(id, id_);
                DARABONBA_PTR_TO_JSON(remarke, remarke_);
                DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_TO_JSON(status, status_);
                DARABONBA_PTR_TO_JSON(url, url_);
              };
              friend void from_json(const Darabonba::Json& j, ServiceMonthReports& obj) { 
                DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_FROM_JSON(customerId, customerId_);
                DARABONBA_PTR_FROM_JSON(fileName, fileName_);
                DARABONBA_PTR_FROM_JSON(fileType, fileType_);
                DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_FROM_JSON(id, id_);
                DARABONBA_PTR_FROM_JSON(remarke, remarke_);
                DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_FROM_JSON(status, status_);
                DARABONBA_PTR_FROM_JSON(url, url_);
              };
              ServiceMonthReports() = default ;
              ServiceMonthReports(const ServiceMonthReports &) = default ;
              ServiceMonthReports(ServiceMonthReports &&) = default ;
              ServiceMonthReports(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ServiceMonthReports() = default ;
              ServiceMonthReports& operator=(const ServiceMonthReports &) = default ;
              ServiceMonthReports& operator=(ServiceMonthReports &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
              // appointmentId Field Functions 
              bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
              void deleteAppointmentId() { this->appointmentId_ = nullptr;};
              inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
              inline ServiceMonthReports& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


              // batchGroup Field Functions 
              bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
              void deleteBatchGroup() { this->batchGroup_ = nullptr;};
              inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
              inline ServiceMonthReports& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


              // customerId Field Functions 
              bool hasCustomerId() const { return this->customerId_ != nullptr;};
              void deleteCustomerId() { this->customerId_ = nullptr;};
              inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
              inline ServiceMonthReports& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


              // fileName Field Functions 
              bool hasFileName() const { return this->fileName_ != nullptr;};
              void deleteFileName() { this->fileName_ = nullptr;};
              inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
              inline ServiceMonthReports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


              // fileType Field Functions 
              bool hasFileType() const { return this->fileType_ != nullptr;};
              void deleteFileType() { this->fileType_ = nullptr;};
              inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
              inline ServiceMonthReports& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


              // gmtCreate Field Functions 
              bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
              void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
              inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
              inline ServiceMonthReports& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


              // gmtModified Field Functions 
              bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
              void deleteGmtModified() { this->gmtModified_ = nullptr;};
              inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
              inline ServiceMonthReports& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
              inline ServiceMonthReports& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // remarke Field Functions 
              bool hasRemarke() const { return this->remarke_ != nullptr;};
              void deleteRemarke() { this->remarke_ = nullptr;};
              inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
              inline ServiceMonthReports& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


              // serviceApplyId Field Functions 
              bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
              void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
              inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
              inline ServiceMonthReports& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
              inline ServiceMonthReports& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
              inline ServiceMonthReports& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            protected:
              shared_ptr<string> appointmentId_ {};
              shared_ptr<string> batchGroup_ {};
              shared_ptr<string> customerId_ {};
              shared_ptr<string> fileName_ {};
              shared_ptr<int32_t> fileType_ {};
              shared_ptr<string> gmtCreate_ {};
              shared_ptr<string> gmtModified_ {};
              shared_ptr<int64_t> id_ {};
              shared_ptr<string> remarke_ {};
              shared_ptr<int64_t> serviceApplyId_ {};
              shared_ptr<int32_t> status_ {};
              shared_ptr<string> url_ {};
            };

            class PerformanceNodeDTOS : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PerformanceNodeDTOS& obj) { 
                DARABONBA_PTR_TO_JSON(display, display_);
                DARABONBA_ANY_TO_JSON(extendInfo, extendInfo_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
                DARABONBA_PTR_TO_JSON(status, status_);
              };
              friend void from_json(const Darabonba::Json& j, PerformanceNodeDTOS& obj) { 
                DARABONBA_PTR_FROM_JSON(display, display_);
                DARABONBA_ANY_FROM_JSON(extendInfo, extendInfo_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
                DARABONBA_PTR_FROM_JSON(status, status_);
              };
              PerformanceNodeDTOS() = default ;
              PerformanceNodeDTOS(const PerformanceNodeDTOS &) = default ;
              PerformanceNodeDTOS(PerformanceNodeDTOS &&) = default ;
              PerformanceNodeDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PerformanceNodeDTOS() = default ;
              PerformanceNodeDTOS& operator=(const PerformanceNodeDTOS &) = default ;
              PerformanceNodeDTOS& operator=(PerformanceNodeDTOS &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->display_ == nullptr
        && this->extendInfo_ == nullptr && this->index_ == nullptr && this->nodeName_ == nullptr && this->status_ == nullptr; };
              // display Field Functions 
              bool hasDisplay() const { return this->display_ != nullptr;};
              void deleteDisplay() { this->display_ = nullptr;};
              inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
              inline PerformanceNodeDTOS& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


              // extendInfo Field Functions 
              bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
              void deleteExtendInfo() { this->extendInfo_ = nullptr;};
              inline               const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
              Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
              inline PerformanceNodeDTOS& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
              inline PerformanceNodeDTOS& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline PerformanceNodeDTOS& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // nodeName Field Functions 
              bool hasNodeName() const { return this->nodeName_ != nullptr;};
              void deleteNodeName() { this->nodeName_ = nullptr;};
              inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
              inline PerformanceNodeDTOS& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
              inline PerformanceNodeDTOS& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            protected:
              shared_ptr<bool> display_ {};
              Darabonba::Json extendInfo_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<string> nodeName_ {};
              shared_ptr<int32_t> status_ {};
            };

            class ExtList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExtList& obj) { 
                DARABONBA_PTR_TO_JSON(keyCode, keyCode_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_ANY_TO_JSON(value, value_);
                DARABONBA_PTR_TO_JSON(view, view_);
              };
              friend void from_json(const Darabonba::Json& j, ExtList& obj) { 
                DARABONBA_PTR_FROM_JSON(keyCode, keyCode_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_ANY_FROM_JSON(value, value_);
                DARABONBA_PTR_FROM_JSON(view, view_);
              };
              ExtList() = default ;
              ExtList(const ExtList &) = default ;
              ExtList(ExtList &&) = default ;
              ExtList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExtList() = default ;
              ExtList& operator=(const ExtList &) = default ;
              ExtList& operator=(ExtList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->keyCode_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr && this->view_ == nullptr; };
              // keyCode Field Functions 
              bool hasKeyCode() const { return this->keyCode_ != nullptr;};
              void deleteKeyCode() { this->keyCode_ = nullptr;};
              inline string getKeyCode() const { DARABONBA_PTR_GET_DEFAULT(keyCode_, "") };
              inline ExtList& setKeyCode(string keyCode) { DARABONBA_PTR_SET_VALUE(keyCode_, keyCode) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline ExtList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline               const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
              Darabonba::Json & getValue() { DARABONBA_GET(value_) };
              inline ExtList& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
              inline ExtList& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


              // view Field Functions 
              bool hasView() const { return this->view_ != nullptr;};
              void deleteView() { this->view_ = nullptr;};
              inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
              inline ExtList& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


            protected:
              shared_ptr<string> keyCode_ {};
              shared_ptr<string> name_ {};
              Darabonba::Json value_ {};
              shared_ptr<string> view_ {};
            };

            class ApplyFileVOList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ApplyFileVOList& obj) { 
                DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_TO_JSON(customerId, customerId_);
                DARABONBA_PTR_TO_JSON(fileName, fileName_);
                DARABONBA_PTR_TO_JSON(fileType, fileType_);
                DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_TO_JSON(id, id_);
                DARABONBA_PTR_TO_JSON(remarke, remarke_);
                DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_TO_JSON(status, status_);
                DARABONBA_PTR_TO_JSON(url, url_);
              };
              friend void from_json(const Darabonba::Json& j, ApplyFileVOList& obj) { 
                DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
                DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
                DARABONBA_PTR_FROM_JSON(customerId, customerId_);
                DARABONBA_PTR_FROM_JSON(fileName, fileName_);
                DARABONBA_PTR_FROM_JSON(fileType, fileType_);
                DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
                DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
                DARABONBA_PTR_FROM_JSON(id, id_);
                DARABONBA_PTR_FROM_JSON(remarke, remarke_);
                DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
                DARABONBA_PTR_FROM_JSON(status, status_);
                DARABONBA_PTR_FROM_JSON(url, url_);
              };
              ApplyFileVOList() = default ;
              ApplyFileVOList(const ApplyFileVOList &) = default ;
              ApplyFileVOList(ApplyFileVOList &&) = default ;
              ApplyFileVOList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ApplyFileVOList() = default ;
              ApplyFileVOList& operator=(const ApplyFileVOList &) = default ;
              ApplyFileVOList& operator=(ApplyFileVOList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
              // appointmentId Field Functions 
              bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
              void deleteAppointmentId() { this->appointmentId_ = nullptr;};
              inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
              inline ApplyFileVOList& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


              // batchGroup Field Functions 
              bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
              void deleteBatchGroup() { this->batchGroup_ = nullptr;};
              inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
              inline ApplyFileVOList& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


              // customerId Field Functions 
              bool hasCustomerId() const { return this->customerId_ != nullptr;};
              void deleteCustomerId() { this->customerId_ = nullptr;};
              inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
              inline ApplyFileVOList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


              // fileName Field Functions 
              bool hasFileName() const { return this->fileName_ != nullptr;};
              void deleteFileName() { this->fileName_ = nullptr;};
              inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
              inline ApplyFileVOList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


              // fileType Field Functions 
              bool hasFileType() const { return this->fileType_ != nullptr;};
              void deleteFileType() { this->fileType_ = nullptr;};
              inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
              inline ApplyFileVOList& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


              // gmtCreate Field Functions 
              bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
              void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
              inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
              inline ApplyFileVOList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


              // gmtModified Field Functions 
              bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
              void deleteGmtModified() { this->gmtModified_ = nullptr;};
              inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
              inline ApplyFileVOList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
              inline ApplyFileVOList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // remarke Field Functions 
              bool hasRemarke() const { return this->remarke_ != nullptr;};
              void deleteRemarke() { this->remarke_ = nullptr;};
              inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
              inline ApplyFileVOList& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


              // serviceApplyId Field Functions 
              bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
              void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
              inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
              inline ApplyFileVOList& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
              inline ApplyFileVOList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
              inline ApplyFileVOList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            protected:
              shared_ptr<string> appointmentId_ {};
              shared_ptr<string> batchGroup_ {};
              shared_ptr<string> customerId_ {};
              shared_ptr<string> fileName_ {};
              shared_ptr<int32_t> fileType_ {};
              shared_ptr<string> gmtCreate_ {};
              shared_ptr<string> gmtModified_ {};
              shared_ptr<int64_t> id_ {};
              shared_ptr<string> remarke_ {};
              shared_ptr<int64_t> serviceApplyId_ {};
              shared_ptr<int32_t> status_ {};
              shared_ptr<string> url_ {};
            };

            virtual bool empty() const override { return this->applyFileVOList_ == nullptr
        && this->appointmentCode_ == nullptr && this->appointmentEndTime_ == nullptr && this->appointmentId_ == nullptr && this->appointmentPassTime_ == nullptr && this->appointmentTime_ == nullptr
        && this->commodityDesc_ == nullptr && this->creatorEmpId_ == nullptr && this->cycleService_ == nullptr && this->extList_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mergeSolutionAndReporterOneStep_ == nullptr && this->modifierEmpId_ == nullptr && this->ntmCommodityCode_ == nullptr
        && this->orderDetail_ == nullptr && this->orderId_ == nullptr && this->performanceNodeDTOS_ == nullptr && this->purchasePackCode_ == nullptr && this->serviceApplyId_ == nullptr
        && this->serviceMonthReports_ == nullptr && this->serviceReports_ == nullptr && this->serviceSchemes_ == nullptr && this->status_ == nullptr && this->statusStr_ == nullptr
        && this->supportTime_ == nullptr && this->tamEngineers_ == nullptr; };
            // applyFileVOList Field Functions 
            bool hasApplyFileVOList() const { return this->applyFileVOList_ != nullptr;};
            void deleteApplyFileVOList() { this->applyFileVOList_ = nullptr;};
            inline const vector<PerformancePacks::ApplyFileVOList> & getApplyFileVOList() const { DARABONBA_PTR_GET_CONST(applyFileVOList_, vector<PerformancePacks::ApplyFileVOList>) };
            inline vector<PerformancePacks::ApplyFileVOList> getApplyFileVOList() { DARABONBA_PTR_GET(applyFileVOList_, vector<PerformancePacks::ApplyFileVOList>) };
            inline PerformancePacks& setApplyFileVOList(const vector<PerformancePacks::ApplyFileVOList> & applyFileVOList) { DARABONBA_PTR_SET_VALUE(applyFileVOList_, applyFileVOList) };
            inline PerformancePacks& setApplyFileVOList(vector<PerformancePacks::ApplyFileVOList> && applyFileVOList) { DARABONBA_PTR_SET_RVALUE(applyFileVOList_, applyFileVOList) };


            // appointmentCode Field Functions 
            bool hasAppointmentCode() const { return this->appointmentCode_ != nullptr;};
            void deleteAppointmentCode() { this->appointmentCode_ = nullptr;};
            inline string getAppointmentCode() const { DARABONBA_PTR_GET_DEFAULT(appointmentCode_, "") };
            inline PerformancePacks& setAppointmentCode(string appointmentCode) { DARABONBA_PTR_SET_VALUE(appointmentCode_, appointmentCode) };


            // appointmentEndTime Field Functions 
            bool hasAppointmentEndTime() const { return this->appointmentEndTime_ != nullptr;};
            void deleteAppointmentEndTime() { this->appointmentEndTime_ = nullptr;};
            inline int64_t getAppointmentEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentEndTime_, 0L) };
            inline PerformancePacks& setAppointmentEndTime(int64_t appointmentEndTime) { DARABONBA_PTR_SET_VALUE(appointmentEndTime_, appointmentEndTime) };


            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline PerformancePacks& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // appointmentPassTime Field Functions 
            bool hasAppointmentPassTime() const { return this->appointmentPassTime_ != nullptr;};
            void deleteAppointmentPassTime() { this->appointmentPassTime_ = nullptr;};
            inline int64_t getAppointmentPassTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentPassTime_, 0L) };
            inline PerformancePacks& setAppointmentPassTime(int64_t appointmentPassTime) { DARABONBA_PTR_SET_VALUE(appointmentPassTime_, appointmentPassTime) };


            // appointmentTime Field Functions 
            bool hasAppointmentTime() const { return this->appointmentTime_ != nullptr;};
            void deleteAppointmentTime() { this->appointmentTime_ = nullptr;};
            inline int64_t getAppointmentTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentTime_, 0L) };
            inline PerformancePacks& setAppointmentTime(int64_t appointmentTime) { DARABONBA_PTR_SET_VALUE(appointmentTime_, appointmentTime) };


            // commodityDesc Field Functions 
            bool hasCommodityDesc() const { return this->commodityDesc_ != nullptr;};
            void deleteCommodityDesc() { this->commodityDesc_ = nullptr;};
            inline string getCommodityDesc() const { DARABONBA_PTR_GET_DEFAULT(commodityDesc_, "") };
            inline PerformancePacks& setCommodityDesc(string commodityDesc) { DARABONBA_PTR_SET_VALUE(commodityDesc_, commodityDesc) };


            // creatorEmpId Field Functions 
            bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
            void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
            inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
            inline PerformancePacks& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


            // cycleService Field Functions 
            bool hasCycleService() const { return this->cycleService_ != nullptr;};
            void deleteCycleService() { this->cycleService_ = nullptr;};
            inline bool getCycleService() const { DARABONBA_PTR_GET_DEFAULT(cycleService_, false) };
            inline PerformancePacks& setCycleService(bool cycleService) { DARABONBA_PTR_SET_VALUE(cycleService_, cycleService) };


            // extList Field Functions 
            bool hasExtList() const { return this->extList_ != nullptr;};
            void deleteExtList() { this->extList_ = nullptr;};
            inline const vector<PerformancePacks::ExtList> & getExtList() const { DARABONBA_PTR_GET_CONST(extList_, vector<PerformancePacks::ExtList>) };
            inline vector<PerformancePacks::ExtList> getExtList() { DARABONBA_PTR_GET(extList_, vector<PerformancePacks::ExtList>) };
            inline PerformancePacks& setExtList(const vector<PerformancePacks::ExtList> & extList) { DARABONBA_PTR_SET_VALUE(extList_, extList) };
            inline PerformancePacks& setExtList(vector<PerformancePacks::ExtList> && extList) { DARABONBA_PTR_SET_RVALUE(extList_, extList) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline PerformancePacks& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline PerformancePacks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline PerformancePacks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // mergeSolutionAndReporterOneStep Field Functions 
            bool hasMergeSolutionAndReporterOneStep() const { return this->mergeSolutionAndReporterOneStep_ != nullptr;};
            void deleteMergeSolutionAndReporterOneStep() { this->mergeSolutionAndReporterOneStep_ = nullptr;};
            inline bool getMergeSolutionAndReporterOneStep() const { DARABONBA_PTR_GET_DEFAULT(mergeSolutionAndReporterOneStep_, false) };
            inline PerformancePacks& setMergeSolutionAndReporterOneStep(bool mergeSolutionAndReporterOneStep) { DARABONBA_PTR_SET_VALUE(mergeSolutionAndReporterOneStep_, mergeSolutionAndReporterOneStep) };


            // modifierEmpId Field Functions 
            bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
            void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
            inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
            inline PerformancePacks& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


            // ntmCommodityCode Field Functions 
            bool hasNtmCommodityCode() const { return this->ntmCommodityCode_ != nullptr;};
            void deleteNtmCommodityCode() { this->ntmCommodityCode_ = nullptr;};
            inline string getNtmCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(ntmCommodityCode_, "") };
            inline PerformancePacks& setNtmCommodityCode(string ntmCommodityCode) { DARABONBA_PTR_SET_VALUE(ntmCommodityCode_, ntmCommodityCode) };


            // orderDetail Field Functions 
            bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
            void deleteOrderDetail() { this->orderDetail_ = nullptr;};
            inline             const Darabonba::Json & getOrderDetail() const { DARABONBA_GET(orderDetail_) };
            Darabonba::Json & getOrderDetail() { DARABONBA_GET(orderDetail_) };
            inline PerformancePacks& setOrderDetail(const Darabonba::Json & orderDetail) { DARABONBA_SET_VALUE(orderDetail_, orderDetail) };
            inline PerformancePacks& setOrderDetail(Darabonba::Json && orderDetail) { DARABONBA_SET_RVALUE(orderDetail_, orderDetail) };


            // orderId Field Functions 
            bool hasOrderId() const { return this->orderId_ != nullptr;};
            void deleteOrderId() { this->orderId_ = nullptr;};
            inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
            inline PerformancePacks& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


            // performanceNodeDTOS Field Functions 
            bool hasPerformanceNodeDTOS() const { return this->performanceNodeDTOS_ != nullptr;};
            void deletePerformanceNodeDTOS() { this->performanceNodeDTOS_ = nullptr;};
            inline const vector<PerformancePacks::PerformanceNodeDTOS> & getPerformanceNodeDTOS() const { DARABONBA_PTR_GET_CONST(performanceNodeDTOS_, vector<PerformancePacks::PerformanceNodeDTOS>) };
            inline vector<PerformancePacks::PerformanceNodeDTOS> getPerformanceNodeDTOS() { DARABONBA_PTR_GET(performanceNodeDTOS_, vector<PerformancePacks::PerformanceNodeDTOS>) };
            inline PerformancePacks& setPerformanceNodeDTOS(const vector<PerformancePacks::PerformanceNodeDTOS> & performanceNodeDTOS) { DARABONBA_PTR_SET_VALUE(performanceNodeDTOS_, performanceNodeDTOS) };
            inline PerformancePacks& setPerformanceNodeDTOS(vector<PerformancePacks::PerformanceNodeDTOS> && performanceNodeDTOS) { DARABONBA_PTR_SET_RVALUE(performanceNodeDTOS_, performanceNodeDTOS) };


            // purchasePackCode Field Functions 
            bool hasPurchasePackCode() const { return this->purchasePackCode_ != nullptr;};
            void deletePurchasePackCode() { this->purchasePackCode_ = nullptr;};
            inline int32_t getPurchasePackCode() const { DARABONBA_PTR_GET_DEFAULT(purchasePackCode_, 0) };
            inline PerformancePacks& setPurchasePackCode(int32_t purchasePackCode) { DARABONBA_PTR_SET_VALUE(purchasePackCode_, purchasePackCode) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline PerformancePacks& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // serviceMonthReports Field Functions 
            bool hasServiceMonthReports() const { return this->serviceMonthReports_ != nullptr;};
            void deleteServiceMonthReports() { this->serviceMonthReports_ = nullptr;};
            inline const vector<PerformancePacks::ServiceMonthReports> & getServiceMonthReports() const { DARABONBA_PTR_GET_CONST(serviceMonthReports_, vector<PerformancePacks::ServiceMonthReports>) };
            inline vector<PerformancePacks::ServiceMonthReports> getServiceMonthReports() { DARABONBA_PTR_GET(serviceMonthReports_, vector<PerformancePacks::ServiceMonthReports>) };
            inline PerformancePacks& setServiceMonthReports(const vector<PerformancePacks::ServiceMonthReports> & serviceMonthReports) { DARABONBA_PTR_SET_VALUE(serviceMonthReports_, serviceMonthReports) };
            inline PerformancePacks& setServiceMonthReports(vector<PerformancePacks::ServiceMonthReports> && serviceMonthReports) { DARABONBA_PTR_SET_RVALUE(serviceMonthReports_, serviceMonthReports) };


            // serviceReports Field Functions 
            bool hasServiceReports() const { return this->serviceReports_ != nullptr;};
            void deleteServiceReports() { this->serviceReports_ = nullptr;};
            inline const vector<PerformancePacks::ServiceReports> & getServiceReports() const { DARABONBA_PTR_GET_CONST(serviceReports_, vector<PerformancePacks::ServiceReports>) };
            inline vector<PerformancePacks::ServiceReports> getServiceReports() { DARABONBA_PTR_GET(serviceReports_, vector<PerformancePacks::ServiceReports>) };
            inline PerformancePacks& setServiceReports(const vector<PerformancePacks::ServiceReports> & serviceReports) { DARABONBA_PTR_SET_VALUE(serviceReports_, serviceReports) };
            inline PerformancePacks& setServiceReports(vector<PerformancePacks::ServiceReports> && serviceReports) { DARABONBA_PTR_SET_RVALUE(serviceReports_, serviceReports) };


            // serviceSchemes Field Functions 
            bool hasServiceSchemes() const { return this->serviceSchemes_ != nullptr;};
            void deleteServiceSchemes() { this->serviceSchemes_ = nullptr;};
            inline const vector<PerformancePacks::ServiceSchemes> & getServiceSchemes() const { DARABONBA_PTR_GET_CONST(serviceSchemes_, vector<PerformancePacks::ServiceSchemes>) };
            inline vector<PerformancePacks::ServiceSchemes> getServiceSchemes() { DARABONBA_PTR_GET(serviceSchemes_, vector<PerformancePacks::ServiceSchemes>) };
            inline PerformancePacks& setServiceSchemes(const vector<PerformancePacks::ServiceSchemes> & serviceSchemes) { DARABONBA_PTR_SET_VALUE(serviceSchemes_, serviceSchemes) };
            inline PerformancePacks& setServiceSchemes(vector<PerformancePacks::ServiceSchemes> && serviceSchemes) { DARABONBA_PTR_SET_RVALUE(serviceSchemes_, serviceSchemes) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline PerformancePacks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // statusStr Field Functions 
            bool hasStatusStr() const { return this->statusStr_ != nullptr;};
            void deleteStatusStr() { this->statusStr_ = nullptr;};
            inline string getStatusStr() const { DARABONBA_PTR_GET_DEFAULT(statusStr_, "") };
            inline PerformancePacks& setStatusStr(string statusStr) { DARABONBA_PTR_SET_VALUE(statusStr_, statusStr) };


            // supportTime Field Functions 
            bool hasSupportTime() const { return this->supportTime_ != nullptr;};
            void deleteSupportTime() { this->supportTime_ = nullptr;};
            inline const vector<int64_t> & getSupportTime() const { DARABONBA_PTR_GET_CONST(supportTime_, vector<int64_t>) };
            inline vector<int64_t> getSupportTime() { DARABONBA_PTR_GET(supportTime_, vector<int64_t>) };
            inline PerformancePacks& setSupportTime(const vector<int64_t> & supportTime) { DARABONBA_PTR_SET_VALUE(supportTime_, supportTime) };
            inline PerformancePacks& setSupportTime(vector<int64_t> && supportTime) { DARABONBA_PTR_SET_RVALUE(supportTime_, supportTime) };


            // tamEngineers Field Functions 
            bool hasTamEngineers() const { return this->tamEngineers_ != nullptr;};
            void deleteTamEngineers() { this->tamEngineers_ = nullptr;};
            inline const vector<PerformancePacks::TamEngineers> & getTamEngineers() const { DARABONBA_PTR_GET_CONST(tamEngineers_, vector<PerformancePacks::TamEngineers>) };
            inline vector<PerformancePacks::TamEngineers> getTamEngineers() { DARABONBA_PTR_GET(tamEngineers_, vector<PerformancePacks::TamEngineers>) };
            inline PerformancePacks& setTamEngineers(const vector<PerformancePacks::TamEngineers> & tamEngineers) { DARABONBA_PTR_SET_VALUE(tamEngineers_, tamEngineers) };
            inline PerformancePacks& setTamEngineers(vector<PerformancePacks::TamEngineers> && tamEngineers) { DARABONBA_PTR_SET_RVALUE(tamEngineers_, tamEngineers) };


          protected:
            shared_ptr<vector<PerformancePacks::ApplyFileVOList>> applyFileVOList_ {};
            shared_ptr<string> appointmentCode_ {};
            shared_ptr<int64_t> appointmentEndTime_ {};
            shared_ptr<string> appointmentId_ {};
            shared_ptr<int64_t> appointmentPassTime_ {};
            shared_ptr<int64_t> appointmentTime_ {};
            shared_ptr<string> commodityDesc_ {};
            shared_ptr<string> creatorEmpId_ {};
            shared_ptr<bool> cycleService_ {};
            shared_ptr<vector<PerformancePacks::ExtList>> extList_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<bool> mergeSolutionAndReporterOneStep_ {};
            shared_ptr<string> modifierEmpId_ {};
            shared_ptr<string> ntmCommodityCode_ {};
            Darabonba::Json orderDetail_ {};
            shared_ptr<int64_t> orderId_ {};
            shared_ptr<vector<PerformancePacks::PerformanceNodeDTOS>> performanceNodeDTOS_ {};
            shared_ptr<int32_t> purchasePackCode_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<vector<PerformancePacks::ServiceMonthReports>> serviceMonthReports_ {};
            shared_ptr<vector<PerformancePacks::ServiceReports>> serviceReports_ {};
            shared_ptr<vector<PerformancePacks::ServiceSchemes>> serviceSchemes_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> statusStr_ {};
            shared_ptr<vector<int64_t>> supportTime_ {};
            shared_ptr<vector<PerformancePacks::TamEngineers>> tamEngineers_ {};
          };

          class PerformanceNodeDTOS : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PerformanceNodeDTOS& obj) { 
              DARABONBA_PTR_TO_JSON(display, display_);
              DARABONBA_ANY_TO_JSON(extendInfo, extendInfo_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
              DARABONBA_PTR_TO_JSON(status, status_);
            };
            friend void from_json(const Darabonba::Json& j, PerformanceNodeDTOS& obj) { 
              DARABONBA_PTR_FROM_JSON(display, display_);
              DARABONBA_ANY_FROM_JSON(extendInfo, extendInfo_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
              DARABONBA_PTR_FROM_JSON(status, status_);
            };
            PerformanceNodeDTOS() = default ;
            PerformanceNodeDTOS(const PerformanceNodeDTOS &) = default ;
            PerformanceNodeDTOS(PerformanceNodeDTOS &&) = default ;
            PerformanceNodeDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PerformanceNodeDTOS() = default ;
            PerformanceNodeDTOS& operator=(const PerformanceNodeDTOS &) = default ;
            PerformanceNodeDTOS& operator=(PerformanceNodeDTOS &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->display_ == nullptr
        && this->extendInfo_ == nullptr && this->index_ == nullptr && this->nodeName_ == nullptr && this->status_ == nullptr; };
            // display Field Functions 
            bool hasDisplay() const { return this->display_ != nullptr;};
            void deleteDisplay() { this->display_ = nullptr;};
            inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
            inline PerformanceNodeDTOS& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


            // extendInfo Field Functions 
            bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
            void deleteExtendInfo() { this->extendInfo_ = nullptr;};
            inline             const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
            Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
            inline PerformanceNodeDTOS& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
            inline PerformanceNodeDTOS& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline PerformanceNodeDTOS& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // nodeName Field Functions 
            bool hasNodeName() const { return this->nodeName_ != nullptr;};
            void deleteNodeName() { this->nodeName_ = nullptr;};
            inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
            inline PerformanceNodeDTOS& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline PerformanceNodeDTOS& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            shared_ptr<bool> display_ {};
            Darabonba::Json extendInfo_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<string> nodeName_ {};
            shared_ptr<int32_t> status_ {};
          };

          class ExtList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ExtList& obj) { 
              DARABONBA_PTR_TO_JSON(keyCode, keyCode_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_ANY_TO_JSON(value, value_);
              DARABONBA_PTR_TO_JSON(view, view_);
            };
            friend void from_json(const Darabonba::Json& j, ExtList& obj) { 
              DARABONBA_PTR_FROM_JSON(keyCode, keyCode_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_ANY_FROM_JSON(value, value_);
              DARABONBA_PTR_FROM_JSON(view, view_);
            };
            ExtList() = default ;
            ExtList(const ExtList &) = default ;
            ExtList(ExtList &&) = default ;
            ExtList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ExtList() = default ;
            ExtList& operator=(const ExtList &) = default ;
            ExtList& operator=(ExtList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keyCode_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr && this->view_ == nullptr; };
            // keyCode Field Functions 
            bool hasKeyCode() const { return this->keyCode_ != nullptr;};
            void deleteKeyCode() { this->keyCode_ = nullptr;};
            inline string getKeyCode() const { DARABONBA_PTR_GET_DEFAULT(keyCode_, "") };
            inline ExtList& setKeyCode(string keyCode) { DARABONBA_PTR_SET_VALUE(keyCode_, keyCode) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ExtList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline             const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
            Darabonba::Json & getValue() { DARABONBA_GET(value_) };
            inline ExtList& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
            inline ExtList& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


            // view Field Functions 
            bool hasView() const { return this->view_ != nullptr;};
            void deleteView() { this->view_ = nullptr;};
            inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
            inline ExtList& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


          protected:
            shared_ptr<string> keyCode_ {};
            shared_ptr<string> name_ {};
            Darabonba::Json value_ {};
            shared_ptr<string> view_ {};
          };

          class ApplyFileVOList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApplyFileVOList& obj) { 
              DARABONBA_PTR_TO_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_TO_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_TO_JSON(customerId, customerId_);
              DARABONBA_PTR_TO_JSON(fileName, fileName_);
              DARABONBA_PTR_TO_JSON(fileType, fileType_);
              DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(remarke, remarke_);
              DARABONBA_PTR_TO_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ApplyFileVOList& obj) { 
              DARABONBA_PTR_FROM_JSON(appointmentId, appointmentId_);
              DARABONBA_PTR_FROM_JSON(batchGroup, batchGroup_);
              DARABONBA_PTR_FROM_JSON(customerId, customerId_);
              DARABONBA_PTR_FROM_JSON(fileName, fileName_);
              DARABONBA_PTR_FROM_JSON(fileType, fileType_);
              DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(remarke, remarke_);
              DARABONBA_PTR_FROM_JSON(serviceApplyId, serviceApplyId_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ApplyFileVOList() = default ;
            ApplyFileVOList(const ApplyFileVOList &) = default ;
            ApplyFileVOList(ApplyFileVOList &&) = default ;
            ApplyFileVOList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApplyFileVOList() = default ;
            ApplyFileVOList& operator=(const ApplyFileVOList &) = default ;
            ApplyFileVOList& operator=(ApplyFileVOList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appointmentId_ == nullptr
        && this->batchGroup_ == nullptr && this->customerId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remarke_ == nullptr && this->serviceApplyId_ == nullptr && this->status_ == nullptr
        && this->url_ == nullptr; };
            // appointmentId Field Functions 
            bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
            void deleteAppointmentId() { this->appointmentId_ = nullptr;};
            inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
            inline ApplyFileVOList& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


            // batchGroup Field Functions 
            bool hasBatchGroup() const { return this->batchGroup_ != nullptr;};
            void deleteBatchGroup() { this->batchGroup_ = nullptr;};
            inline string getBatchGroup() const { DARABONBA_PTR_GET_DEFAULT(batchGroup_, "") };
            inline ApplyFileVOList& setBatchGroup(string batchGroup) { DARABONBA_PTR_SET_VALUE(batchGroup_, batchGroup) };


            // customerId Field Functions 
            bool hasCustomerId() const { return this->customerId_ != nullptr;};
            void deleteCustomerId() { this->customerId_ = nullptr;};
            inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
            inline ApplyFileVOList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline ApplyFileVOList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
            inline ApplyFileVOList& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ApplyFileVOList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ApplyFileVOList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ApplyFileVOList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // remarke Field Functions 
            bool hasRemarke() const { return this->remarke_ != nullptr;};
            void deleteRemarke() { this->remarke_ = nullptr;};
            inline string getRemarke() const { DARABONBA_PTR_GET_DEFAULT(remarke_, "") };
            inline ApplyFileVOList& setRemarke(string remarke) { DARABONBA_PTR_SET_VALUE(remarke_, remarke) };


            // serviceApplyId Field Functions 
            bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
            void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
            inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
            inline ApplyFileVOList& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline ApplyFileVOList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ApplyFileVOList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> appointmentId_ {};
            shared_ptr<string> batchGroup_ {};
            shared_ptr<string> customerId_ {};
            shared_ptr<string> fileName_ {};
            shared_ptr<int32_t> fileType_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> remarke_ {};
            shared_ptr<int64_t> serviceApplyId_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->applyFileVOList_ == nullptr
        && this->appointmentCode_ == nullptr && this->appointmentEndTime_ == nullptr && this->appointmentId_ == nullptr && this->appointmentPassTime_ == nullptr && this->appointmentTime_ == nullptr
        && this->commodityDesc_ == nullptr && this->creatorEmpId_ == nullptr && this->cycleService_ == nullptr && this->extList_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mergeSolutionAndReporterOneStep_ == nullptr && this->modifierEmpId_ == nullptr && this->ntmCommodityCode_ == nullptr
        && this->orderDetail_ == nullptr && this->orderId_ == nullptr && this->packCount_ == nullptr && this->packDetails_ == nullptr && this->performanceNodeDTOS_ == nullptr
        && this->performancePacks_ == nullptr && this->purchasePackCode_ == nullptr && this->serviceApplyId_ == nullptr && this->serviceMonthReports_ == nullptr && this->serviceReports_ == nullptr
        && this->serviceSchemes_ == nullptr && this->status_ == nullptr && this->statusStr_ == nullptr && this->supportTime_ == nullptr && this->tamEngineers_ == nullptr; };
          // applyFileVOList Field Functions 
          bool hasApplyFileVOList() const { return this->applyFileVOList_ != nullptr;};
          void deleteApplyFileVOList() { this->applyFileVOList_ = nullptr;};
          inline const vector<PerformanceOrders::ApplyFileVOList> & getApplyFileVOList() const { DARABONBA_PTR_GET_CONST(applyFileVOList_, vector<PerformanceOrders::ApplyFileVOList>) };
          inline vector<PerformanceOrders::ApplyFileVOList> getApplyFileVOList() { DARABONBA_PTR_GET(applyFileVOList_, vector<PerformanceOrders::ApplyFileVOList>) };
          inline PerformanceOrders& setApplyFileVOList(const vector<PerformanceOrders::ApplyFileVOList> & applyFileVOList) { DARABONBA_PTR_SET_VALUE(applyFileVOList_, applyFileVOList) };
          inline PerformanceOrders& setApplyFileVOList(vector<PerformanceOrders::ApplyFileVOList> && applyFileVOList) { DARABONBA_PTR_SET_RVALUE(applyFileVOList_, applyFileVOList) };


          // appointmentCode Field Functions 
          bool hasAppointmentCode() const { return this->appointmentCode_ != nullptr;};
          void deleteAppointmentCode() { this->appointmentCode_ = nullptr;};
          inline string getAppointmentCode() const { DARABONBA_PTR_GET_DEFAULT(appointmentCode_, "") };
          inline PerformanceOrders& setAppointmentCode(string appointmentCode) { DARABONBA_PTR_SET_VALUE(appointmentCode_, appointmentCode) };


          // appointmentEndTime Field Functions 
          bool hasAppointmentEndTime() const { return this->appointmentEndTime_ != nullptr;};
          void deleteAppointmentEndTime() { this->appointmentEndTime_ = nullptr;};
          inline int64_t getAppointmentEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentEndTime_, 0L) };
          inline PerformanceOrders& setAppointmentEndTime(int64_t appointmentEndTime) { DARABONBA_PTR_SET_VALUE(appointmentEndTime_, appointmentEndTime) };


          // appointmentId Field Functions 
          bool hasAppointmentId() const { return this->appointmentId_ != nullptr;};
          void deleteAppointmentId() { this->appointmentId_ = nullptr;};
          inline string getAppointmentId() const { DARABONBA_PTR_GET_DEFAULT(appointmentId_, "") };
          inline PerformanceOrders& setAppointmentId(string appointmentId) { DARABONBA_PTR_SET_VALUE(appointmentId_, appointmentId) };


          // appointmentPassTime Field Functions 
          bool hasAppointmentPassTime() const { return this->appointmentPassTime_ != nullptr;};
          void deleteAppointmentPassTime() { this->appointmentPassTime_ = nullptr;};
          inline int64_t getAppointmentPassTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentPassTime_, 0L) };
          inline PerformanceOrders& setAppointmentPassTime(int64_t appointmentPassTime) { DARABONBA_PTR_SET_VALUE(appointmentPassTime_, appointmentPassTime) };


          // appointmentTime Field Functions 
          bool hasAppointmentTime() const { return this->appointmentTime_ != nullptr;};
          void deleteAppointmentTime() { this->appointmentTime_ = nullptr;};
          inline int64_t getAppointmentTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentTime_, 0L) };
          inline PerformanceOrders& setAppointmentTime(int64_t appointmentTime) { DARABONBA_PTR_SET_VALUE(appointmentTime_, appointmentTime) };


          // commodityDesc Field Functions 
          bool hasCommodityDesc() const { return this->commodityDesc_ != nullptr;};
          void deleteCommodityDesc() { this->commodityDesc_ = nullptr;};
          inline string getCommodityDesc() const { DARABONBA_PTR_GET_DEFAULT(commodityDesc_, "") };
          inline PerformanceOrders& setCommodityDesc(string commodityDesc) { DARABONBA_PTR_SET_VALUE(commodityDesc_, commodityDesc) };


          // creatorEmpId Field Functions 
          bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
          void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
          inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
          inline PerformanceOrders& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


          // cycleService Field Functions 
          bool hasCycleService() const { return this->cycleService_ != nullptr;};
          void deleteCycleService() { this->cycleService_ = nullptr;};
          inline bool getCycleService() const { DARABONBA_PTR_GET_DEFAULT(cycleService_, false) };
          inline PerformanceOrders& setCycleService(bool cycleService) { DARABONBA_PTR_SET_VALUE(cycleService_, cycleService) };


          // extList Field Functions 
          bool hasExtList() const { return this->extList_ != nullptr;};
          void deleteExtList() { this->extList_ = nullptr;};
          inline const vector<PerformanceOrders::ExtList> & getExtList() const { DARABONBA_PTR_GET_CONST(extList_, vector<PerformanceOrders::ExtList>) };
          inline vector<PerformanceOrders::ExtList> getExtList() { DARABONBA_PTR_GET(extList_, vector<PerformanceOrders::ExtList>) };
          inline PerformanceOrders& setExtList(const vector<PerformanceOrders::ExtList> & extList) { DARABONBA_PTR_SET_VALUE(extList_, extList) };
          inline PerformanceOrders& setExtList(vector<PerformanceOrders::ExtList> && extList) { DARABONBA_PTR_SET_RVALUE(extList_, extList) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline PerformanceOrders& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline PerformanceOrders& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline PerformanceOrders& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // mergeSolutionAndReporterOneStep Field Functions 
          bool hasMergeSolutionAndReporterOneStep() const { return this->mergeSolutionAndReporterOneStep_ != nullptr;};
          void deleteMergeSolutionAndReporterOneStep() { this->mergeSolutionAndReporterOneStep_ = nullptr;};
          inline bool getMergeSolutionAndReporterOneStep() const { DARABONBA_PTR_GET_DEFAULT(mergeSolutionAndReporterOneStep_, false) };
          inline PerformanceOrders& setMergeSolutionAndReporterOneStep(bool mergeSolutionAndReporterOneStep) { DARABONBA_PTR_SET_VALUE(mergeSolutionAndReporterOneStep_, mergeSolutionAndReporterOneStep) };


          // modifierEmpId Field Functions 
          bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
          void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
          inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
          inline PerformanceOrders& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


          // ntmCommodityCode Field Functions 
          bool hasNtmCommodityCode() const { return this->ntmCommodityCode_ != nullptr;};
          void deleteNtmCommodityCode() { this->ntmCommodityCode_ = nullptr;};
          inline string getNtmCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(ntmCommodityCode_, "") };
          inline PerformanceOrders& setNtmCommodityCode(string ntmCommodityCode) { DARABONBA_PTR_SET_VALUE(ntmCommodityCode_, ntmCommodityCode) };


          // orderDetail Field Functions 
          bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
          void deleteOrderDetail() { this->orderDetail_ = nullptr;};
          inline           const Darabonba::Json & getOrderDetail() const { DARABONBA_GET(orderDetail_) };
          Darabonba::Json & getOrderDetail() { DARABONBA_GET(orderDetail_) };
          inline PerformanceOrders& setOrderDetail(const Darabonba::Json & orderDetail) { DARABONBA_SET_VALUE(orderDetail_, orderDetail) };
          inline PerformanceOrders& setOrderDetail(Darabonba::Json && orderDetail) { DARABONBA_SET_RVALUE(orderDetail_, orderDetail) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
          inline PerformanceOrders& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // packCount Field Functions 
          bool hasPackCount() const { return this->packCount_ != nullptr;};
          void deletePackCount() { this->packCount_ = nullptr;};
          inline int32_t getPackCount() const { DARABONBA_PTR_GET_DEFAULT(packCount_, 0) };
          inline PerformanceOrders& setPackCount(int32_t packCount) { DARABONBA_PTR_SET_VALUE(packCount_, packCount) };


          // packDetails Field Functions 
          bool hasPackDetails() const { return this->packDetails_ != nullptr;};
          void deletePackDetails() { this->packDetails_ = nullptr;};
          inline const vector<Darabonba::Json> & getPackDetails() const { DARABONBA_PTR_GET_CONST(packDetails_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getPackDetails() { DARABONBA_PTR_GET(packDetails_, vector<Darabonba::Json>) };
          inline PerformanceOrders& setPackDetails(const vector<Darabonba::Json> & packDetails) { DARABONBA_PTR_SET_VALUE(packDetails_, packDetails) };
          inline PerformanceOrders& setPackDetails(vector<Darabonba::Json> && packDetails) { DARABONBA_PTR_SET_RVALUE(packDetails_, packDetails) };


          // performanceNodeDTOS Field Functions 
          bool hasPerformanceNodeDTOS() const { return this->performanceNodeDTOS_ != nullptr;};
          void deletePerformanceNodeDTOS() { this->performanceNodeDTOS_ = nullptr;};
          inline const vector<PerformanceOrders::PerformanceNodeDTOS> & getPerformanceNodeDTOS() const { DARABONBA_PTR_GET_CONST(performanceNodeDTOS_, vector<PerformanceOrders::PerformanceNodeDTOS>) };
          inline vector<PerformanceOrders::PerformanceNodeDTOS> getPerformanceNodeDTOS() { DARABONBA_PTR_GET(performanceNodeDTOS_, vector<PerformanceOrders::PerformanceNodeDTOS>) };
          inline PerformanceOrders& setPerformanceNodeDTOS(const vector<PerformanceOrders::PerformanceNodeDTOS> & performanceNodeDTOS) { DARABONBA_PTR_SET_VALUE(performanceNodeDTOS_, performanceNodeDTOS) };
          inline PerformanceOrders& setPerformanceNodeDTOS(vector<PerformanceOrders::PerformanceNodeDTOS> && performanceNodeDTOS) { DARABONBA_PTR_SET_RVALUE(performanceNodeDTOS_, performanceNodeDTOS) };


          // performancePacks Field Functions 
          bool hasPerformancePacks() const { return this->performancePacks_ != nullptr;};
          void deletePerformancePacks() { this->performancePacks_ = nullptr;};
          inline const vector<PerformanceOrders::PerformancePacks> & getPerformancePacks() const { DARABONBA_PTR_GET_CONST(performancePacks_, vector<PerformanceOrders::PerformancePacks>) };
          inline vector<PerformanceOrders::PerformancePacks> getPerformancePacks() { DARABONBA_PTR_GET(performancePacks_, vector<PerformanceOrders::PerformancePacks>) };
          inline PerformanceOrders& setPerformancePacks(const vector<PerformanceOrders::PerformancePacks> & performancePacks) { DARABONBA_PTR_SET_VALUE(performancePacks_, performancePacks) };
          inline PerformanceOrders& setPerformancePacks(vector<PerformanceOrders::PerformancePacks> && performancePacks) { DARABONBA_PTR_SET_RVALUE(performancePacks_, performancePacks) };


          // purchasePackCode Field Functions 
          bool hasPurchasePackCode() const { return this->purchasePackCode_ != nullptr;};
          void deletePurchasePackCode() { this->purchasePackCode_ = nullptr;};
          inline int32_t getPurchasePackCode() const { DARABONBA_PTR_GET_DEFAULT(purchasePackCode_, 0) };
          inline PerformanceOrders& setPurchasePackCode(int32_t purchasePackCode) { DARABONBA_PTR_SET_VALUE(purchasePackCode_, purchasePackCode) };


          // serviceApplyId Field Functions 
          bool hasServiceApplyId() const { return this->serviceApplyId_ != nullptr;};
          void deleteServiceApplyId() { this->serviceApplyId_ = nullptr;};
          inline int64_t getServiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(serviceApplyId_, 0L) };
          inline PerformanceOrders& setServiceApplyId(int64_t serviceApplyId) { DARABONBA_PTR_SET_VALUE(serviceApplyId_, serviceApplyId) };


          // serviceMonthReports Field Functions 
          bool hasServiceMonthReports() const { return this->serviceMonthReports_ != nullptr;};
          void deleteServiceMonthReports() { this->serviceMonthReports_ = nullptr;};
          inline const vector<PerformanceOrders::ServiceMonthReports> & getServiceMonthReports() const { DARABONBA_PTR_GET_CONST(serviceMonthReports_, vector<PerformanceOrders::ServiceMonthReports>) };
          inline vector<PerformanceOrders::ServiceMonthReports> getServiceMonthReports() { DARABONBA_PTR_GET(serviceMonthReports_, vector<PerformanceOrders::ServiceMonthReports>) };
          inline PerformanceOrders& setServiceMonthReports(const vector<PerformanceOrders::ServiceMonthReports> & serviceMonthReports) { DARABONBA_PTR_SET_VALUE(serviceMonthReports_, serviceMonthReports) };
          inline PerformanceOrders& setServiceMonthReports(vector<PerformanceOrders::ServiceMonthReports> && serviceMonthReports) { DARABONBA_PTR_SET_RVALUE(serviceMonthReports_, serviceMonthReports) };


          // serviceReports Field Functions 
          bool hasServiceReports() const { return this->serviceReports_ != nullptr;};
          void deleteServiceReports() { this->serviceReports_ = nullptr;};
          inline const vector<PerformanceOrders::ServiceReports> & getServiceReports() const { DARABONBA_PTR_GET_CONST(serviceReports_, vector<PerformanceOrders::ServiceReports>) };
          inline vector<PerformanceOrders::ServiceReports> getServiceReports() { DARABONBA_PTR_GET(serviceReports_, vector<PerformanceOrders::ServiceReports>) };
          inline PerformanceOrders& setServiceReports(const vector<PerformanceOrders::ServiceReports> & serviceReports) { DARABONBA_PTR_SET_VALUE(serviceReports_, serviceReports) };
          inline PerformanceOrders& setServiceReports(vector<PerformanceOrders::ServiceReports> && serviceReports) { DARABONBA_PTR_SET_RVALUE(serviceReports_, serviceReports) };


          // serviceSchemes Field Functions 
          bool hasServiceSchemes() const { return this->serviceSchemes_ != nullptr;};
          void deleteServiceSchemes() { this->serviceSchemes_ = nullptr;};
          inline const vector<PerformanceOrders::ServiceSchemes> & getServiceSchemes() const { DARABONBA_PTR_GET_CONST(serviceSchemes_, vector<PerformanceOrders::ServiceSchemes>) };
          inline vector<PerformanceOrders::ServiceSchemes> getServiceSchemes() { DARABONBA_PTR_GET(serviceSchemes_, vector<PerformanceOrders::ServiceSchemes>) };
          inline PerformanceOrders& setServiceSchemes(const vector<PerformanceOrders::ServiceSchemes> & serviceSchemes) { DARABONBA_PTR_SET_VALUE(serviceSchemes_, serviceSchemes) };
          inline PerformanceOrders& setServiceSchemes(vector<PerformanceOrders::ServiceSchemes> && serviceSchemes) { DARABONBA_PTR_SET_RVALUE(serviceSchemes_, serviceSchemes) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline PerformanceOrders& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusStr Field Functions 
          bool hasStatusStr() const { return this->statusStr_ != nullptr;};
          void deleteStatusStr() { this->statusStr_ = nullptr;};
          inline string getStatusStr() const { DARABONBA_PTR_GET_DEFAULT(statusStr_, "") };
          inline PerformanceOrders& setStatusStr(string statusStr) { DARABONBA_PTR_SET_VALUE(statusStr_, statusStr) };


          // supportTime Field Functions 
          bool hasSupportTime() const { return this->supportTime_ != nullptr;};
          void deleteSupportTime() { this->supportTime_ = nullptr;};
          inline const vector<int64_t> & getSupportTime() const { DARABONBA_PTR_GET_CONST(supportTime_, vector<int64_t>) };
          inline vector<int64_t> getSupportTime() { DARABONBA_PTR_GET(supportTime_, vector<int64_t>) };
          inline PerformanceOrders& setSupportTime(const vector<int64_t> & supportTime) { DARABONBA_PTR_SET_VALUE(supportTime_, supportTime) };
          inline PerformanceOrders& setSupportTime(vector<int64_t> && supportTime) { DARABONBA_PTR_SET_RVALUE(supportTime_, supportTime) };


          // tamEngineers Field Functions 
          bool hasTamEngineers() const { return this->tamEngineers_ != nullptr;};
          void deleteTamEngineers() { this->tamEngineers_ = nullptr;};
          inline const vector<PerformanceOrders::TamEngineers> & getTamEngineers() const { DARABONBA_PTR_GET_CONST(tamEngineers_, vector<PerformanceOrders::TamEngineers>) };
          inline vector<PerformanceOrders::TamEngineers> getTamEngineers() { DARABONBA_PTR_GET(tamEngineers_, vector<PerformanceOrders::TamEngineers>) };
          inline PerformanceOrders& setTamEngineers(const vector<PerformanceOrders::TamEngineers> & tamEngineers) { DARABONBA_PTR_SET_VALUE(tamEngineers_, tamEngineers) };
          inline PerformanceOrders& setTamEngineers(vector<PerformanceOrders::TamEngineers> && tamEngineers) { DARABONBA_PTR_SET_RVALUE(tamEngineers_, tamEngineers) };


        protected:
          shared_ptr<vector<PerformanceOrders::ApplyFileVOList>> applyFileVOList_ {};
          shared_ptr<string> appointmentCode_ {};
          shared_ptr<int64_t> appointmentEndTime_ {};
          shared_ptr<string> appointmentId_ {};
          shared_ptr<int64_t> appointmentPassTime_ {};
          shared_ptr<int64_t> appointmentTime_ {};
          shared_ptr<string> commodityDesc_ {};
          shared_ptr<string> creatorEmpId_ {};
          shared_ptr<bool> cycleService_ {};
          shared_ptr<vector<PerformanceOrders::ExtList>> extList_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<bool> mergeSolutionAndReporterOneStep_ {};
          shared_ptr<string> modifierEmpId_ {};
          shared_ptr<string> ntmCommodityCode_ {};
          Darabonba::Json orderDetail_ {};
          shared_ptr<int64_t> orderId_ {};
          shared_ptr<int32_t> packCount_ {};
          shared_ptr<vector<Darabonba::Json>> packDetails_ {};
          shared_ptr<vector<PerformanceOrders::PerformanceNodeDTOS>> performanceNodeDTOS_ {};
          shared_ptr<vector<PerformanceOrders::PerformancePacks>> performancePacks_ {};
          shared_ptr<int32_t> purchasePackCode_ {};
          shared_ptr<int64_t> serviceApplyId_ {};
          shared_ptr<vector<PerformanceOrders::ServiceMonthReports>> serviceMonthReports_ {};
          shared_ptr<vector<PerformanceOrders::ServiceReports>> serviceReports_ {};
          shared_ptr<vector<PerformanceOrders::ServiceSchemes>> serviceSchemes_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> statusStr_ {};
          shared_ptr<vector<int64_t>> supportTime_ {};
          shared_ptr<vector<PerformanceOrders::TamEngineers>> tamEngineers_ {};
        };

        class PayOrders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PayOrders& obj) { 
            DARABONBA_PTR_TO_JSON(amount, amount_);
            DARABONBA_PTR_TO_JSON(compassCommodityCode, compassCommodityCode_);
            DARABONBA_PTR_TO_JSON(compassCommodityName, compassCommodityName_);
            DARABONBA_PTR_TO_JSON(creatorEmpId, creatorEmpId_);
            DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(modifierEmpId, modifierEmpId_);
            DARABONBA_ANY_TO_JSON(operate, operate_);
            DARABONBA_ANY_TO_JSON(orderDetail, orderDetail_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
            DARABONBA_PTR_TO_JSON(originalPrice, originalPrice_);
            DARABONBA_PTR_TO_JSON(payAmount, payAmount_);
            DARABONBA_PTR_TO_JSON(payTime, payTime_);
            DARABONBA_PTR_TO_JSON(productName, productName_);
            DARABONBA_PTR_TO_JSON(reneWalUrl, reneWalUrl_);
            DARABONBA_ANY_TO_JSON(serviceContentMap, serviceContentMap_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(statusStr, statusStr_);
            DARABONBA_PTR_TO_JSON(supportDays, supportDays_);
            DARABONBA_PTR_TO_JSON(uid, uid_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, PayOrders& obj) { 
            DARABONBA_PTR_FROM_JSON(amount, amount_);
            DARABONBA_PTR_FROM_JSON(compassCommodityCode, compassCommodityCode_);
            DARABONBA_PTR_FROM_JSON(compassCommodityName, compassCommodityName_);
            DARABONBA_PTR_FROM_JSON(creatorEmpId, creatorEmpId_);
            DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(modifierEmpId, modifierEmpId_);
            DARABONBA_ANY_FROM_JSON(operate, operate_);
            DARABONBA_ANY_FROM_JSON(orderDetail, orderDetail_);
            DARABONBA_PTR_FROM_JSON(orderId, orderId_);
            DARABONBA_PTR_FROM_JSON(originalPrice, originalPrice_);
            DARABONBA_PTR_FROM_JSON(payAmount, payAmount_);
            DARABONBA_PTR_FROM_JSON(payTime, payTime_);
            DARABONBA_PTR_FROM_JSON(productName, productName_);
            DARABONBA_PTR_FROM_JSON(reneWalUrl, reneWalUrl_);
            DARABONBA_ANY_FROM_JSON(serviceContentMap, serviceContentMap_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(statusStr, statusStr_);
            DARABONBA_PTR_FROM_JSON(supportDays, supportDays_);
            DARABONBA_PTR_FROM_JSON(uid, uid_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          PayOrders() = default ;
          PayOrders(const PayOrders &) = default ;
          PayOrders(PayOrders &&) = default ;
          PayOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PayOrders() = default ;
          PayOrders& operator=(const PayOrders &) = default ;
          PayOrders& operator=(PayOrders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->compassCommodityCode_ == nullptr && this->compassCommodityName_ == nullptr && this->creatorEmpId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->modifierEmpId_ == nullptr && this->operate_ == nullptr && this->orderDetail_ == nullptr && this->orderId_ == nullptr
        && this->originalPrice_ == nullptr && this->payAmount_ == nullptr && this->payTime_ == nullptr && this->productName_ == nullptr && this->reneWalUrl_ == nullptr
        && this->serviceContentMap_ == nullptr && this->status_ == nullptr && this->statusStr_ == nullptr && this->supportDays_ == nullptr && this->uid_ == nullptr
        && this->url_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline PayOrders& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // compassCommodityCode Field Functions 
          bool hasCompassCommodityCode() const { return this->compassCommodityCode_ != nullptr;};
          void deleteCompassCommodityCode() { this->compassCommodityCode_ = nullptr;};
          inline string getCompassCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(compassCommodityCode_, "") };
          inline PayOrders& setCompassCommodityCode(string compassCommodityCode) { DARABONBA_PTR_SET_VALUE(compassCommodityCode_, compassCommodityCode) };


          // compassCommodityName Field Functions 
          bool hasCompassCommodityName() const { return this->compassCommodityName_ != nullptr;};
          void deleteCompassCommodityName() { this->compassCommodityName_ = nullptr;};
          inline string getCompassCommodityName() const { DARABONBA_PTR_GET_DEFAULT(compassCommodityName_, "") };
          inline PayOrders& setCompassCommodityName(string compassCommodityName) { DARABONBA_PTR_SET_VALUE(compassCommodityName_, compassCommodityName) };


          // creatorEmpId Field Functions 
          bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
          void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
          inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
          inline PayOrders& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline PayOrders& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline PayOrders& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline PayOrders& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifierEmpId Field Functions 
          bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
          void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
          inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
          inline PayOrders& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


          // operate Field Functions 
          bool hasOperate() const { return this->operate_ != nullptr;};
          void deleteOperate() { this->operate_ = nullptr;};
          inline           const Darabonba::Json & getOperate() const { DARABONBA_GET(operate_) };
          Darabonba::Json & getOperate() { DARABONBA_GET(operate_) };
          inline PayOrders& setOperate(const Darabonba::Json & operate) { DARABONBA_SET_VALUE(operate_, operate) };
          inline PayOrders& setOperate(Darabonba::Json && operate) { DARABONBA_SET_RVALUE(operate_, operate) };


          // orderDetail Field Functions 
          bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
          void deleteOrderDetail() { this->orderDetail_ = nullptr;};
          inline           const Darabonba::Json & getOrderDetail() const { DARABONBA_GET(orderDetail_) };
          Darabonba::Json & getOrderDetail() { DARABONBA_GET(orderDetail_) };
          inline PayOrders& setOrderDetail(const Darabonba::Json & orderDetail) { DARABONBA_SET_VALUE(orderDetail_, orderDetail) };
          inline PayOrders& setOrderDetail(Darabonba::Json && orderDetail) { DARABONBA_SET_RVALUE(orderDetail_, orderDetail) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
          inline PayOrders& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // originalPrice Field Functions 
          bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
          void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
          inline double getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
          inline PayOrders& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


          // payAmount Field Functions 
          bool hasPayAmount() const { return this->payAmount_ != nullptr;};
          void deletePayAmount() { this->payAmount_ = nullptr;};
          inline double getPayAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0.0) };
          inline PayOrders& setPayAmount(double payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


          // payTime Field Functions 
          bool hasPayTime() const { return this->payTime_ != nullptr;};
          void deletePayTime() { this->payTime_ = nullptr;};
          inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
          inline PayOrders& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


          // productName Field Functions 
          bool hasProductName() const { return this->productName_ != nullptr;};
          void deleteProductName() { this->productName_ = nullptr;};
          inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
          inline PayOrders& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


          // reneWalUrl Field Functions 
          bool hasReneWalUrl() const { return this->reneWalUrl_ != nullptr;};
          void deleteReneWalUrl() { this->reneWalUrl_ = nullptr;};
          inline string getReneWalUrl() const { DARABONBA_PTR_GET_DEFAULT(reneWalUrl_, "") };
          inline PayOrders& setReneWalUrl(string reneWalUrl) { DARABONBA_PTR_SET_VALUE(reneWalUrl_, reneWalUrl) };


          // serviceContentMap Field Functions 
          bool hasServiceContentMap() const { return this->serviceContentMap_ != nullptr;};
          void deleteServiceContentMap() { this->serviceContentMap_ = nullptr;};
          inline           const Darabonba::Json & getServiceContentMap() const { DARABONBA_GET(serviceContentMap_) };
          Darabonba::Json & getServiceContentMap() { DARABONBA_GET(serviceContentMap_) };
          inline PayOrders& setServiceContentMap(const Darabonba::Json & serviceContentMap) { DARABONBA_SET_VALUE(serviceContentMap_, serviceContentMap) };
          inline PayOrders& setServiceContentMap(Darabonba::Json && serviceContentMap) { DARABONBA_SET_RVALUE(serviceContentMap_, serviceContentMap) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline PayOrders& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusStr Field Functions 
          bool hasStatusStr() const { return this->statusStr_ != nullptr;};
          void deleteStatusStr() { this->statusStr_ = nullptr;};
          inline string getStatusStr() const { DARABONBA_PTR_GET_DEFAULT(statusStr_, "") };
          inline PayOrders& setStatusStr(string statusStr) { DARABONBA_PTR_SET_VALUE(statusStr_, statusStr) };


          // supportDays Field Functions 
          bool hasSupportDays() const { return this->supportDays_ != nullptr;};
          void deleteSupportDays() { this->supportDays_ = nullptr;};
          inline int32_t getSupportDays() const { DARABONBA_PTR_GET_DEFAULT(supportDays_, 0) };
          inline PayOrders& setSupportDays(int32_t supportDays) { DARABONBA_PTR_SET_VALUE(supportDays_, supportDays) };


          // uid Field Functions 
          bool hasUid() const { return this->uid_ != nullptr;};
          void deleteUid() { this->uid_ = nullptr;};
          inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
          inline PayOrders& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline PayOrders& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> amount_ {};
          shared_ptr<string> compassCommodityCode_ {};
          shared_ptr<string> compassCommodityName_ {};
          shared_ptr<string> creatorEmpId_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> modifierEmpId_ {};
          Darabonba::Json operate_ {};
          Darabonba::Json orderDetail_ {};
          shared_ptr<int64_t> orderId_ {};
          shared_ptr<double> originalPrice_ {};
          shared_ptr<double> payAmount_ {};
          shared_ptr<string> payTime_ {};
          shared_ptr<string> productName_ {};
          shared_ptr<string> reneWalUrl_ {};
          Darabonba::Json serviceContentMap_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> statusStr_ {};
          shared_ptr<int32_t> supportDays_ {};
          shared_ptr<string> uid_ {};
          shared_ptr<string> url_ {};
        };

        class Appointments : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Appointments& obj) { 
            DARABONBA_PTR_TO_JSON(huhangId, huhangId_);
            DARABONBA_PTR_TO_JSON(purchaseCode, purchaseCode_);
            DARABONBA_PTR_TO_JSON(purchaseDesc, purchaseDesc_);
            DARABONBA_PTR_TO_JSON(supportDays, supportDays_);
            DARABONBA_PTR_TO_JSON(travelDays, travelDays_);
          };
          friend void from_json(const Darabonba::Json& j, Appointments& obj) { 
            DARABONBA_PTR_FROM_JSON(huhangId, huhangId_);
            DARABONBA_PTR_FROM_JSON(purchaseCode, purchaseCode_);
            DARABONBA_PTR_FROM_JSON(purchaseDesc, purchaseDesc_);
            DARABONBA_PTR_FROM_JSON(supportDays, supportDays_);
            DARABONBA_PTR_FROM_JSON(travelDays, travelDays_);
          };
          Appointments() = default ;
          Appointments(const Appointments &) = default ;
          Appointments(Appointments &&) = default ;
          Appointments(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Appointments() = default ;
          Appointments& operator=(const Appointments &) = default ;
          Appointments& operator=(Appointments &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->huhangId_ == nullptr
        && this->purchaseCode_ == nullptr && this->purchaseDesc_ == nullptr && this->supportDays_ == nullptr && this->travelDays_ == nullptr; };
          // huhangId Field Functions 
          bool hasHuhangId() const { return this->huhangId_ != nullptr;};
          void deleteHuhangId() { this->huhangId_ = nullptr;};
          inline int64_t getHuhangId() const { DARABONBA_PTR_GET_DEFAULT(huhangId_, 0L) };
          inline Appointments& setHuhangId(int64_t huhangId) { DARABONBA_PTR_SET_VALUE(huhangId_, huhangId) };


          // purchaseCode Field Functions 
          bool hasPurchaseCode() const { return this->purchaseCode_ != nullptr;};
          void deletePurchaseCode() { this->purchaseCode_ = nullptr;};
          inline int32_t getPurchaseCode() const { DARABONBA_PTR_GET_DEFAULT(purchaseCode_, 0) };
          inline Appointments& setPurchaseCode(int32_t purchaseCode) { DARABONBA_PTR_SET_VALUE(purchaseCode_, purchaseCode) };


          // purchaseDesc Field Functions 
          bool hasPurchaseDesc() const { return this->purchaseDesc_ != nullptr;};
          void deletePurchaseDesc() { this->purchaseDesc_ = nullptr;};
          inline string getPurchaseDesc() const { DARABONBA_PTR_GET_DEFAULT(purchaseDesc_, "") };
          inline Appointments& setPurchaseDesc(string purchaseDesc) { DARABONBA_PTR_SET_VALUE(purchaseDesc_, purchaseDesc) };


          // supportDays Field Functions 
          bool hasSupportDays() const { return this->supportDays_ != nullptr;};
          void deleteSupportDays() { this->supportDays_ = nullptr;};
          inline int32_t getSupportDays() const { DARABONBA_PTR_GET_DEFAULT(supportDays_, 0) };
          inline Appointments& setSupportDays(int32_t supportDays) { DARABONBA_PTR_SET_VALUE(supportDays_, supportDays) };


          // travelDays Field Functions 
          bool hasTravelDays() const { return this->travelDays_ != nullptr;};
          void deleteTravelDays() { this->travelDays_ = nullptr;};
          inline int32_t getTravelDays() const { DARABONBA_PTR_GET_DEFAULT(travelDays_, 0) };
          inline Appointments& setTravelDays(int32_t travelDays) { DARABONBA_PTR_SET_VALUE(travelDays_, travelDays) };


        protected:
          shared_ptr<int64_t> huhangId_ {};
          shared_ptr<int32_t> purchaseCode_ {};
          shared_ptr<string> purchaseDesc_ {};
          shared_ptr<int32_t> supportDays_ {};
          shared_ptr<int32_t> travelDays_ {};
        };

        virtual bool empty() const override { return this->applierId_ == nullptr
        && this->applyCode_ == nullptr && this->applyComponentDetails_ == nullptr && this->applyTime_ == nullptr && this->appointments_ == nullptr && this->buyUrl_ == nullptr
        && this->creatorEmpId_ == nullptr && this->customerName_ == nullptr && this->cycleService_ == nullptr && this->executedCount_ == nullptr && this->finishCount_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isOneToOneExpertServiceByTime_ == nullptr && this->mergeSolutionAndReporterOneStep_ == nullptr
        && this->modifierEmpId_ == nullptr && this->packDetails_ == nullptr && this->payOrders_ == nullptr && this->payUrl_ == nullptr && this->performanceOrders_ == nullptr
        && this->performancePacks_ == nullptr && this->reneWalUrl_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr && this->serviceReports_ == nullptr
        && this->serviceTimeRange_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr && this->statusStr_ == nullptr && this->termOfValidity_ == nullptr
        && this->totalPack_ == nullptr && this->type_ == nullptr && this->usePack_ == nullptr && this->userRights_ == nullptr; };
        // applierId Field Functions 
        bool hasApplierId() const { return this->applierId_ != nullptr;};
        void deleteApplierId() { this->applierId_ = nullptr;};
        inline string getApplierId() const { DARABONBA_PTR_GET_DEFAULT(applierId_, "") };
        inline List& setApplierId(string applierId) { DARABONBA_PTR_SET_VALUE(applierId_, applierId) };


        // applyCode Field Functions 
        bool hasApplyCode() const { return this->applyCode_ != nullptr;};
        void deleteApplyCode() { this->applyCode_ = nullptr;};
        inline string getApplyCode() const { DARABONBA_PTR_GET_DEFAULT(applyCode_, "") };
        inline List& setApplyCode(string applyCode) { DARABONBA_PTR_SET_VALUE(applyCode_, applyCode) };


        // applyComponentDetails Field Functions 
        bool hasApplyComponentDetails() const { return this->applyComponentDetails_ != nullptr;};
        void deleteApplyComponentDetails() { this->applyComponentDetails_ = nullptr;};
        inline const vector<vector<string>> & getApplyComponentDetails() const { DARABONBA_PTR_GET_CONST(applyComponentDetails_, vector<vector<string>>) };
        inline vector<vector<string>> getApplyComponentDetails() { DARABONBA_PTR_GET(applyComponentDetails_, vector<vector<string>>) };
        inline List& setApplyComponentDetails(const vector<vector<string>> & applyComponentDetails) { DARABONBA_PTR_SET_VALUE(applyComponentDetails_, applyComponentDetails) };
        inline List& setApplyComponentDetails(vector<vector<string>> && applyComponentDetails) { DARABONBA_PTR_SET_RVALUE(applyComponentDetails_, applyComponentDetails) };


        // applyTime Field Functions 
        bool hasApplyTime() const { return this->applyTime_ != nullptr;};
        void deleteApplyTime() { this->applyTime_ = nullptr;};
        inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
        inline List& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


        // appointments Field Functions 
        bool hasAppointments() const { return this->appointments_ != nullptr;};
        void deleteAppointments() { this->appointments_ = nullptr;};
        inline const vector<List::Appointments> & getAppointments() const { DARABONBA_PTR_GET_CONST(appointments_, vector<List::Appointments>) };
        inline vector<List::Appointments> getAppointments() { DARABONBA_PTR_GET(appointments_, vector<List::Appointments>) };
        inline List& setAppointments(const vector<List::Appointments> & appointments) { DARABONBA_PTR_SET_VALUE(appointments_, appointments) };
        inline List& setAppointments(vector<List::Appointments> && appointments) { DARABONBA_PTR_SET_RVALUE(appointments_, appointments) };


        // buyUrl Field Functions 
        bool hasBuyUrl() const { return this->buyUrl_ != nullptr;};
        void deleteBuyUrl() { this->buyUrl_ = nullptr;};
        inline string getBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(buyUrl_, "") };
        inline List& setBuyUrl(string buyUrl) { DARABONBA_PTR_SET_VALUE(buyUrl_, buyUrl) };


        // creatorEmpId Field Functions 
        bool hasCreatorEmpId() const { return this->creatorEmpId_ != nullptr;};
        void deleteCreatorEmpId() { this->creatorEmpId_ = nullptr;};
        inline string getCreatorEmpId() const { DARABONBA_PTR_GET_DEFAULT(creatorEmpId_, "") };
        inline List& setCreatorEmpId(string creatorEmpId) { DARABONBA_PTR_SET_VALUE(creatorEmpId_, creatorEmpId) };


        // customerName Field Functions 
        bool hasCustomerName() const { return this->customerName_ != nullptr;};
        void deleteCustomerName() { this->customerName_ = nullptr;};
        inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
        inline List& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


        // cycleService Field Functions 
        bool hasCycleService() const { return this->cycleService_ != nullptr;};
        void deleteCycleService() { this->cycleService_ = nullptr;};
        inline bool getCycleService() const { DARABONBA_PTR_GET_DEFAULT(cycleService_, false) };
        inline List& setCycleService(bool cycleService) { DARABONBA_PTR_SET_VALUE(cycleService_, cycleService) };


        // executedCount Field Functions 
        bool hasExecutedCount() const { return this->executedCount_ != nullptr;};
        void deleteExecutedCount() { this->executedCount_ = nullptr;};
        inline int64_t getExecutedCount() const { DARABONBA_PTR_GET_DEFAULT(executedCount_, 0L) };
        inline List& setExecutedCount(int64_t executedCount) { DARABONBA_PTR_SET_VALUE(executedCount_, executedCount) };


        // finishCount Field Functions 
        bool hasFinishCount() const { return this->finishCount_ != nullptr;};
        void deleteFinishCount() { this->finishCount_ = nullptr;};
        inline int64_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0L) };
        inline List& setFinishCount(int64_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline List& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isOneToOneExpertServiceByTime Field Functions 
        bool hasIsOneToOneExpertServiceByTime() const { return this->isOneToOneExpertServiceByTime_ != nullptr;};
        void deleteIsOneToOneExpertServiceByTime() { this->isOneToOneExpertServiceByTime_ = nullptr;};
        inline bool getIsOneToOneExpertServiceByTime() const { DARABONBA_PTR_GET_DEFAULT(isOneToOneExpertServiceByTime_, false) };
        inline List& setIsOneToOneExpertServiceByTime(bool isOneToOneExpertServiceByTime) { DARABONBA_PTR_SET_VALUE(isOneToOneExpertServiceByTime_, isOneToOneExpertServiceByTime) };


        // mergeSolutionAndReporterOneStep Field Functions 
        bool hasMergeSolutionAndReporterOneStep() const { return this->mergeSolutionAndReporterOneStep_ != nullptr;};
        void deleteMergeSolutionAndReporterOneStep() { this->mergeSolutionAndReporterOneStep_ = nullptr;};
        inline bool getMergeSolutionAndReporterOneStep() const { DARABONBA_PTR_GET_DEFAULT(mergeSolutionAndReporterOneStep_, false) };
        inline List& setMergeSolutionAndReporterOneStep(bool mergeSolutionAndReporterOneStep) { DARABONBA_PTR_SET_VALUE(mergeSolutionAndReporterOneStep_, mergeSolutionAndReporterOneStep) };


        // modifierEmpId Field Functions 
        bool hasModifierEmpId() const { return this->modifierEmpId_ != nullptr;};
        void deleteModifierEmpId() { this->modifierEmpId_ = nullptr;};
        inline string getModifierEmpId() const { DARABONBA_PTR_GET_DEFAULT(modifierEmpId_, "") };
        inline List& setModifierEmpId(string modifierEmpId) { DARABONBA_PTR_SET_VALUE(modifierEmpId_, modifierEmpId) };


        // packDetails Field Functions 
        bool hasPackDetails() const { return this->packDetails_ != nullptr;};
        void deletePackDetails() { this->packDetails_ = nullptr;};
        inline const vector<Darabonba::Json> & getPackDetails() const { DARABONBA_PTR_GET_CONST(packDetails_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getPackDetails() { DARABONBA_PTR_GET(packDetails_, vector<Darabonba::Json>) };
        inline List& setPackDetails(const vector<Darabonba::Json> & packDetails) { DARABONBA_PTR_SET_VALUE(packDetails_, packDetails) };
        inline List& setPackDetails(vector<Darabonba::Json> && packDetails) { DARABONBA_PTR_SET_RVALUE(packDetails_, packDetails) };


        // payOrders Field Functions 
        bool hasPayOrders() const { return this->payOrders_ != nullptr;};
        void deletePayOrders() { this->payOrders_ = nullptr;};
        inline const vector<List::PayOrders> & getPayOrders() const { DARABONBA_PTR_GET_CONST(payOrders_, vector<List::PayOrders>) };
        inline vector<List::PayOrders> getPayOrders() { DARABONBA_PTR_GET(payOrders_, vector<List::PayOrders>) };
        inline List& setPayOrders(const vector<List::PayOrders> & payOrders) { DARABONBA_PTR_SET_VALUE(payOrders_, payOrders) };
        inline List& setPayOrders(vector<List::PayOrders> && payOrders) { DARABONBA_PTR_SET_RVALUE(payOrders_, payOrders) };


        // payUrl Field Functions 
        bool hasPayUrl() const { return this->payUrl_ != nullptr;};
        void deletePayUrl() { this->payUrl_ = nullptr;};
        inline string getPayUrl() const { DARABONBA_PTR_GET_DEFAULT(payUrl_, "") };
        inline List& setPayUrl(string payUrl) { DARABONBA_PTR_SET_VALUE(payUrl_, payUrl) };


        // performanceOrders Field Functions 
        bool hasPerformanceOrders() const { return this->performanceOrders_ != nullptr;};
        void deletePerformanceOrders() { this->performanceOrders_ = nullptr;};
        inline const vector<List::PerformanceOrders> & getPerformanceOrders() const { DARABONBA_PTR_GET_CONST(performanceOrders_, vector<List::PerformanceOrders>) };
        inline vector<List::PerformanceOrders> getPerformanceOrders() { DARABONBA_PTR_GET(performanceOrders_, vector<List::PerformanceOrders>) };
        inline List& setPerformanceOrders(const vector<List::PerformanceOrders> & performanceOrders) { DARABONBA_PTR_SET_VALUE(performanceOrders_, performanceOrders) };
        inline List& setPerformanceOrders(vector<List::PerformanceOrders> && performanceOrders) { DARABONBA_PTR_SET_RVALUE(performanceOrders_, performanceOrders) };


        // performancePacks Field Functions 
        bool hasPerformancePacks() const { return this->performancePacks_ != nullptr;};
        void deletePerformancePacks() { this->performancePacks_ = nullptr;};
        inline const vector<List::PerformancePacks> & getPerformancePacks() const { DARABONBA_PTR_GET_CONST(performancePacks_, vector<List::PerformancePacks>) };
        inline vector<List::PerformancePacks> getPerformancePacks() { DARABONBA_PTR_GET(performancePacks_, vector<List::PerformancePacks>) };
        inline List& setPerformancePacks(const vector<List::PerformancePacks> & performancePacks) { DARABONBA_PTR_SET_VALUE(performancePacks_, performancePacks) };
        inline List& setPerformancePacks(vector<List::PerformancePacks> && performancePacks) { DARABONBA_PTR_SET_RVALUE(performancePacks_, performancePacks) };


        // reneWalUrl Field Functions 
        bool hasReneWalUrl() const { return this->reneWalUrl_ != nullptr;};
        void deleteReneWalUrl() { this->reneWalUrl_ = nullptr;};
        inline string getReneWalUrl() const { DARABONBA_PTR_GET_DEFAULT(reneWalUrl_, "") };
        inline List& setReneWalUrl(string reneWalUrl) { DARABONBA_PTR_SET_VALUE(reneWalUrl_, reneWalUrl) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline List& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline List& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // serviceReports Field Functions 
        bool hasServiceReports() const { return this->serviceReports_ != nullptr;};
        void deleteServiceReports() { this->serviceReports_ = nullptr;};
        inline const vector<List::ServiceReports> & getServiceReports() const { DARABONBA_PTR_GET_CONST(serviceReports_, vector<List::ServiceReports>) };
        inline vector<List::ServiceReports> getServiceReports() { DARABONBA_PTR_GET(serviceReports_, vector<List::ServiceReports>) };
        inline List& setServiceReports(const vector<List::ServiceReports> & serviceReports) { DARABONBA_PTR_SET_VALUE(serviceReports_, serviceReports) };
        inline List& setServiceReports(vector<List::ServiceReports> && serviceReports) { DARABONBA_PTR_SET_RVALUE(serviceReports_, serviceReports) };


        // serviceTimeRange Field Functions 
        bool hasServiceTimeRange() const { return this->serviceTimeRange_ != nullptr;};
        void deleteServiceTimeRange() { this->serviceTimeRange_ = nullptr;};
        inline const vector<int64_t> & getServiceTimeRange() const { DARABONBA_PTR_GET_CONST(serviceTimeRange_, vector<int64_t>) };
        inline vector<int64_t> getServiceTimeRange() { DARABONBA_PTR_GET(serviceTimeRange_, vector<int64_t>) };
        inline List& setServiceTimeRange(const vector<int64_t> & serviceTimeRange) { DARABONBA_PTR_SET_VALUE(serviceTimeRange_, serviceTimeRange) };
        inline List& setServiceTimeRange(vector<int64_t> && serviceTimeRange) { DARABONBA_PTR_SET_RVALUE(serviceTimeRange_, serviceTimeRange) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
        inline List& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // statusStr Field Functions 
        bool hasStatusStr() const { return this->statusStr_ != nullptr;};
        void deleteStatusStr() { this->statusStr_ = nullptr;};
        inline string getStatusStr() const { DARABONBA_PTR_GET_DEFAULT(statusStr_, "") };
        inline List& setStatusStr(string statusStr) { DARABONBA_PTR_SET_VALUE(statusStr_, statusStr) };


        // termOfValidity Field Functions 
        bool hasTermOfValidity() const { return this->termOfValidity_ != nullptr;};
        void deleteTermOfValidity() { this->termOfValidity_ = nullptr;};
        inline string getTermOfValidity() const { DARABONBA_PTR_GET_DEFAULT(termOfValidity_, "") };
        inline List& setTermOfValidity(string termOfValidity) { DARABONBA_PTR_SET_VALUE(termOfValidity_, termOfValidity) };


        // totalPack Field Functions 
        bool hasTotalPack() const { return this->totalPack_ != nullptr;};
        void deleteTotalPack() { this->totalPack_ = nullptr;};
        inline int32_t getTotalPack() const { DARABONBA_PTR_GET_DEFAULT(totalPack_, 0) };
        inline List& setTotalPack(int32_t totalPack) { DARABONBA_PTR_SET_VALUE(totalPack_, totalPack) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline List& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // usePack Field Functions 
        bool hasUsePack() const { return this->usePack_ != nullptr;};
        void deleteUsePack() { this->usePack_ = nullptr;};
        inline int64_t getUsePack() const { DARABONBA_PTR_GET_DEFAULT(usePack_, 0L) };
        inline List& setUsePack(int64_t usePack) { DARABONBA_PTR_SET_VALUE(usePack_, usePack) };


        // userRights Field Functions 
        bool hasUserRights() const { return this->userRights_ != nullptr;};
        void deleteUserRights() { this->userRights_ = nullptr;};
        inline string getUserRights() const { DARABONBA_PTR_GET_DEFAULT(userRights_, "") };
        inline List& setUserRights(string userRights) { DARABONBA_PTR_SET_VALUE(userRights_, userRights) };


      protected:
        shared_ptr<string> applierId_ {};
        shared_ptr<string> applyCode_ {};
        shared_ptr<vector<vector<string>>> applyComponentDetails_ {};
        shared_ptr<int64_t> applyTime_ {};
        shared_ptr<vector<List::Appointments>> appointments_ {};
        shared_ptr<string> buyUrl_ {};
        shared_ptr<string> creatorEmpId_ {};
        shared_ptr<string> customerName_ {};
        shared_ptr<bool> cycleService_ {};
        shared_ptr<int64_t> executedCount_ {};
        shared_ptr<int64_t> finishCount_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isOneToOneExpertServiceByTime_ {};
        shared_ptr<bool> mergeSolutionAndReporterOneStep_ {};
        shared_ptr<string> modifierEmpId_ {};
        shared_ptr<vector<Darabonba::Json>> packDetails_ {};
        shared_ptr<vector<List::PayOrders>> payOrders_ {};
        shared_ptr<string> payUrl_ {};
        shared_ptr<vector<List::PerformanceOrders>> performanceOrders_ {};
        shared_ptr<vector<List::PerformancePacks>> performancePacks_ {};
        shared_ptr<string> reneWalUrl_ {};
        shared_ptr<string> serviceCode_ {};
        shared_ptr<string> serviceName_ {};
        shared_ptr<vector<List::ServiceReports>> serviceReports_ {};
        shared_ptr<vector<int64_t>> serviceTimeRange_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> statusCode_ {};
        shared_ptr<string> statusStr_ {};
        shared_ptr<string> termOfValidity_ {};
        shared_ptr<int32_t> totalPack_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> usePack_ {};
        shared_ptr<string> userRights_ {};
      };

      virtual bool empty() const override { return this->extend_ == nullptr
        && this->list_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline       const Darabonba::Json & getExtend() const { DARABONBA_GET(extend_) };
      Darabonba::Json & getExtend() { DARABONBA_GET(extend_) };
      inline Data& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
      inline Data& setExtend(Darabonba::Json && extend) { DARABONBA_SET_RVALUE(extend_, extend) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      Darabonba::Json extend_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListServiceApplyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListServiceApplyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListServiceApplyResponseBody::Data) };
    inline ListServiceApplyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListServiceApplyResponseBody::Data) };
    inline ListServiceApplyResponseBody& setData(const ListServiceApplyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListServiceApplyResponseBody& setData(ListServiceApplyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListServiceApplyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceApplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListServiceApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListServiceApplyResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CustomerService20231228
#endif
