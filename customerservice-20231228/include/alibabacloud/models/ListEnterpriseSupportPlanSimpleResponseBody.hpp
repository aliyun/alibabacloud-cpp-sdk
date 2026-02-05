// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISESUPPORTPLANSIMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISESUPPORTPLANSIMPLERESPONSEBODY_HPP_
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
  class ListEnterpriseSupportPlanSimpleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseSupportPlanSimpleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseSupportPlanSimpleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListEnterpriseSupportPlanSimpleResponseBody() = default ;
    ListEnterpriseSupportPlanSimpleResponseBody(const ListEnterpriseSupportPlanSimpleResponseBody &) = default ;
    ListEnterpriseSupportPlanSimpleResponseBody(ListEnterpriseSupportPlanSimpleResponseBody &&) = default ;
    ListEnterpriseSupportPlanSimpleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseSupportPlanSimpleResponseBody() = default ;
    ListEnterpriseSupportPlanSimpleResponseBody& operator=(const ListEnterpriseSupportPlanSimpleResponseBody &) = default ;
    ListEnterpriseSupportPlanSimpleResponseBody& operator=(ListEnterpriseSupportPlanSimpleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(canApplyFreeOrder, canApplyFreeOrder_);
        DARABONBA_PTR_TO_JSON(customerId, customerId_);
        DARABONBA_PTR_TO_JSON(docs, docs_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(firstPayTime, firstPayTime_);
        DARABONBA_PTR_TO_JSON(freeOrderApplyCode, freeOrderApplyCode_);
        DARABONBA_PTR_TO_JSON(freeOrderApplyId, freeOrderApplyId_);
        DARABONBA_PTR_TO_JSON(freeOrderApplyTime, freeOrderApplyTime_);
        DARABONBA_PTR_TO_JSON(freeOrderApprovedTime, freeOrderApprovedTime_);
        DARABONBA_PTR_TO_JSON(freeOrderExpectStartTime, freeOrderExpectStartTime_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(nodes, nodes_);
        DARABONBA_PTR_TO_JSON(operateInfos, operateInfos_);
        DARABONBA_PTR_TO_JSON(orderIds, orderIds_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
        DARABONBA_PTR_TO_JSON(serviceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(serviceStatusName, serviceStatusName_);
        DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
        DARABONBA_PTR_TO_JSON(sortTime, sortTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(taskNum, taskNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(canApplyFreeOrder, canApplyFreeOrder_);
        DARABONBA_PTR_FROM_JSON(customerId, customerId_);
        DARABONBA_PTR_FROM_JSON(docs, docs_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(firstPayTime, firstPayTime_);
        DARABONBA_PTR_FROM_JSON(freeOrderApplyCode, freeOrderApplyCode_);
        DARABONBA_PTR_FROM_JSON(freeOrderApplyId, freeOrderApplyId_);
        DARABONBA_PTR_FROM_JSON(freeOrderApplyTime, freeOrderApplyTime_);
        DARABONBA_PTR_FROM_JSON(freeOrderApprovedTime, freeOrderApprovedTime_);
        DARABONBA_PTR_FROM_JSON(freeOrderExpectStartTime, freeOrderExpectStartTime_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(operateInfos, operateInfos_);
        DARABONBA_PTR_FROM_JSON(orderIds, orderIds_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(serviceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(serviceStatusName, serviceStatusName_);
        DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(sortTime, sortTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(taskNum, taskNum_);
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
      class OperateInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperateInfos& obj) { 
          DARABONBA_PTR_TO_JSON(canClick, canClick_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, OperateInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(canClick, canClick_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        OperateInfos() = default ;
        OperateInfos(const OperateInfos &) = default ;
        OperateInfos(OperateInfos &&) = default ;
        OperateInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperateInfos() = default ;
        OperateInfos& operator=(const OperateInfos &) = default ;
        OperateInfos& operator=(OperateInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canClick_ == nullptr
        && this->text_ == nullptr && this->url_ == nullptr; };
        // canClick Field Functions 
        bool hasCanClick() const { return this->canClick_ != nullptr;};
        void deleteCanClick() { this->canClick_ = nullptr;};
        inline bool getCanClick() const { DARABONBA_PTR_GET_DEFAULT(canClick_, false) };
        inline OperateInfos& setCanClick(bool canClick) { DARABONBA_PTR_SET_VALUE(canClick_, canClick) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline OperateInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline OperateInfos& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<bool> canClick_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> url_ {};
      };

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(docNode, docNode_);
          DARABONBA_PTR_TO_JSON(finishNode, finishNode_);
          DARABONBA_PTR_TO_JSON(freeOrderAuditNode, freeOrderAuditNode_);
          DARABONBA_PTR_TO_JSON(freeOrderNode, freeOrderNode_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(orderDate, orderDate_);
          DARABONBA_PTR_TO_JSON(orderNode, orderNode_);
          DARABONBA_PTR_TO_JSON(serviceImplementation, serviceImplementation_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(docNode, docNode_);
          DARABONBA_PTR_FROM_JSON(finishNode, finishNode_);
          DARABONBA_PTR_FROM_JSON(freeOrderAuditNode, freeOrderAuditNode_);
          DARABONBA_PTR_FROM_JSON(freeOrderNode, freeOrderNode_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(orderDate, orderDate_);
          DARABONBA_PTR_FROM_JSON(orderNode, orderNode_);
          DARABONBA_PTR_FROM_JSON(serviceImplementation, serviceImplementation_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceImplementation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceImplementation& obj) { 
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceImplementation& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          };
          ServiceImplementation() = default ;
          ServiceImplementation(const ServiceImplementation &) = default ;
          ServiceImplementation(ServiceImplementation &&) = default ;
          ServiceImplementation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceImplementation() = default ;
          ServiceImplementation& operator=(const ServiceImplementation &) = default ;
          ServiceImplementation& operator=(ServiceImplementation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline ServiceImplementation& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline ServiceImplementation& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> startTime_ {};
        };

        class OrderNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OrderNode& obj) { 
            DARABONBA_PTR_TO_JSON(payTime, payTime_);
            DARABONBA_PTR_TO_JSON(uid, uid_);
          };
          friend void from_json(const Darabonba::Json& j, OrderNode& obj) { 
            DARABONBA_PTR_FROM_JSON(payTime, payTime_);
            DARABONBA_PTR_FROM_JSON(uid, uid_);
          };
          OrderNode() = default ;
          OrderNode(const OrderNode &) = default ;
          OrderNode(OrderNode &&) = default ;
          OrderNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OrderNode() = default ;
          OrderNode& operator=(const OrderNode &) = default ;
          OrderNode& operator=(OrderNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->payTime_ == nullptr
        && this->uid_ == nullptr; };
          // payTime Field Functions 
          bool hasPayTime() const { return this->payTime_ != nullptr;};
          void deletePayTime() { this->payTime_ = nullptr;};
          inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
          inline OrderNode& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


          // uid Field Functions 
          bool hasUid() const { return this->uid_ != nullptr;};
          void deleteUid() { this->uid_ = nullptr;};
          inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
          inline OrderNode& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        protected:
          shared_ptr<string> payTime_ {};
          shared_ptr<string> uid_ {};
        };

        class FreeOrderNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FreeOrderNode& obj) { 
            DARABONBA_PTR_TO_JSON(applyTime, applyTime_);
            DARABONBA_PTR_TO_JSON(uid, uid_);
          };
          friend void from_json(const Darabonba::Json& j, FreeOrderNode& obj) { 
            DARABONBA_PTR_FROM_JSON(applyTime, applyTime_);
            DARABONBA_PTR_FROM_JSON(uid, uid_);
          };
          FreeOrderNode() = default ;
          FreeOrderNode(const FreeOrderNode &) = default ;
          FreeOrderNode(FreeOrderNode &&) = default ;
          FreeOrderNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FreeOrderNode() = default ;
          FreeOrderNode& operator=(const FreeOrderNode &) = default ;
          FreeOrderNode& operator=(FreeOrderNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->uid_ == nullptr; };
          // applyTime Field Functions 
          bool hasApplyTime() const { return this->applyTime_ != nullptr;};
          void deleteApplyTime() { this->applyTime_ = nullptr;};
          inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
          inline FreeOrderNode& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


          // uid Field Functions 
          bool hasUid() const { return this->uid_ != nullptr;};
          void deleteUid() { this->uid_ = nullptr;};
          inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
          inline FreeOrderNode& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        protected:
          shared_ptr<string> applyTime_ {};
          shared_ptr<string> uid_ {};
        };

        class FreeOrderAuditNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FreeOrderAuditNode& obj) { 
            DARABONBA_PTR_TO_JSON(auditTime, auditTime_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(statusName, statusName_);
          };
          friend void from_json(const Darabonba::Json& j, FreeOrderAuditNode& obj) { 
            DARABONBA_PTR_FROM_JSON(auditTime, auditTime_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(statusName, statusName_);
          };
          FreeOrderAuditNode() = default ;
          FreeOrderAuditNode(const FreeOrderAuditNode &) = default ;
          FreeOrderAuditNode(FreeOrderAuditNode &&) = default ;
          FreeOrderAuditNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FreeOrderAuditNode() = default ;
          FreeOrderAuditNode& operator=(const FreeOrderAuditNode &) = default ;
          FreeOrderAuditNode& operator=(FreeOrderAuditNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->auditTime_ == nullptr
        && this->status_ == nullptr && this->statusName_ == nullptr; };
          // auditTime Field Functions 
          bool hasAuditTime() const { return this->auditTime_ != nullptr;};
          void deleteAuditTime() { this->auditTime_ = nullptr;};
          inline string getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
          inline FreeOrderAuditNode& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline FreeOrderAuditNode& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusName Field Functions 
          bool hasStatusName() const { return this->statusName_ != nullptr;};
          void deleteStatusName() { this->statusName_ = nullptr;};
          inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
          inline FreeOrderAuditNode& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


        protected:
          shared_ptr<string> auditTime_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> statusName_ {};
        };

        class FinishNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FinishNode& obj) { 
            DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
          };
          friend void from_json(const Darabonba::Json& j, FinishNode& obj) { 
            DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
          };
          FinishNode() = default ;
          FinishNode(const FinishNode &) = default ;
          FinishNode(FinishNode &&) = default ;
          FinishNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FinishNode() = default ;
          FinishNode& operator=(const FinishNode &) = default ;
          FinishNode& operator=(FinishNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->finishTime_ == nullptr; };
          // finishTime Field Functions 
          bool hasFinishTime() const { return this->finishTime_ != nullptr;};
          void deleteFinishTime() { this->finishTime_ = nullptr;};
          inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
          inline FinishNode& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        protected:
          shared_ptr<string> finishTime_ {};
        };

        class DocNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DocNode& obj) { 
            DARABONBA_PTR_TO_JSON(docId, docId_);
            DARABONBA_PTR_TO_JSON(docName, docName_);
            DARABONBA_PTR_TO_JSON(docSubmitTime, docSubmitTime_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
            DARABONBA_PTR_TO_JSON(freeOrderApplyCode, freeOrderApplyCode_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
          };
          friend void from_json(const Darabonba::Json& j, DocNode& obj) { 
            DARABONBA_PTR_FROM_JSON(docId, docId_);
            DARABONBA_PTR_FROM_JSON(docName, docName_);
            DARABONBA_PTR_FROM_JSON(docSubmitTime, docSubmitTime_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
            DARABONBA_PTR_FROM_JSON(freeOrderApplyCode, freeOrderApplyCode_);
            DARABONBA_PTR_FROM_JSON(orderId, orderId_);
          };
          DocNode() = default ;
          DocNode(const DocNode &) = default ;
          DocNode(DocNode &&) = default ;
          DocNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DocNode() = default ;
          DocNode& operator=(const DocNode &) = default ;
          DocNode& operator=(DocNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->docId_ == nullptr
        && this->docName_ == nullptr && this->docSubmitTime_ == nullptr && this->fileName_ == nullptr && this->freeOrderApplyCode_ == nullptr && this->orderId_ == nullptr; };
          // docId Field Functions 
          bool hasDocId() const { return this->docId_ != nullptr;};
          void deleteDocId() { this->docId_ = nullptr;};
          inline int64_t getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, 0L) };
          inline DocNode& setDocId(int64_t docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


          // docName Field Functions 
          bool hasDocName() const { return this->docName_ != nullptr;};
          void deleteDocName() { this->docName_ = nullptr;};
          inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
          inline DocNode& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


          // docSubmitTime Field Functions 
          bool hasDocSubmitTime() const { return this->docSubmitTime_ != nullptr;};
          void deleteDocSubmitTime() { this->docSubmitTime_ = nullptr;};
          inline string getDocSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(docSubmitTime_, "") };
          inline DocNode& setDocSubmitTime(string docSubmitTime) { DARABONBA_PTR_SET_VALUE(docSubmitTime_, docSubmitTime) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline DocNode& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // freeOrderApplyCode Field Functions 
          bool hasFreeOrderApplyCode() const { return this->freeOrderApplyCode_ != nullptr;};
          void deleteFreeOrderApplyCode() { this->freeOrderApplyCode_ = nullptr;};
          inline string getFreeOrderApplyCode() const { DARABONBA_PTR_GET_DEFAULT(freeOrderApplyCode_, "") };
          inline DocNode& setFreeOrderApplyCode(string freeOrderApplyCode) { DARABONBA_PTR_SET_VALUE(freeOrderApplyCode_, freeOrderApplyCode) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline DocNode& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        protected:
          shared_ptr<int64_t> docId_ {};
          shared_ptr<string> docName_ {};
          shared_ptr<string> docSubmitTime_ {};
          shared_ptr<string> fileName_ {};
          shared_ptr<string> freeOrderApplyCode_ {};
          shared_ptr<string> orderId_ {};
        };

        virtual bool empty() const override { return this->docNode_ == nullptr
        && this->finishNode_ == nullptr && this->freeOrderAuditNode_ == nullptr && this->freeOrderNode_ == nullptr && this->name_ == nullptr && this->orderDate_ == nullptr
        && this->orderNode_ == nullptr && this->serviceImplementation_ == nullptr && this->status_ == nullptr; };
        // docNode Field Functions 
        bool hasDocNode() const { return this->docNode_ != nullptr;};
        void deleteDocNode() { this->docNode_ = nullptr;};
        inline const Nodes::DocNode & getDocNode() const { DARABONBA_PTR_GET_CONST(docNode_, Nodes::DocNode) };
        inline Nodes::DocNode getDocNode() { DARABONBA_PTR_GET(docNode_, Nodes::DocNode) };
        inline Nodes& setDocNode(const Nodes::DocNode & docNode) { DARABONBA_PTR_SET_VALUE(docNode_, docNode) };
        inline Nodes& setDocNode(Nodes::DocNode && docNode) { DARABONBA_PTR_SET_RVALUE(docNode_, docNode) };


        // finishNode Field Functions 
        bool hasFinishNode() const { return this->finishNode_ != nullptr;};
        void deleteFinishNode() { this->finishNode_ = nullptr;};
        inline const Nodes::FinishNode & getFinishNode() const { DARABONBA_PTR_GET_CONST(finishNode_, Nodes::FinishNode) };
        inline Nodes::FinishNode getFinishNode() { DARABONBA_PTR_GET(finishNode_, Nodes::FinishNode) };
        inline Nodes& setFinishNode(const Nodes::FinishNode & finishNode) { DARABONBA_PTR_SET_VALUE(finishNode_, finishNode) };
        inline Nodes& setFinishNode(Nodes::FinishNode && finishNode) { DARABONBA_PTR_SET_RVALUE(finishNode_, finishNode) };


        // freeOrderAuditNode Field Functions 
        bool hasFreeOrderAuditNode() const { return this->freeOrderAuditNode_ != nullptr;};
        void deleteFreeOrderAuditNode() { this->freeOrderAuditNode_ = nullptr;};
        inline const Nodes::FreeOrderAuditNode & getFreeOrderAuditNode() const { DARABONBA_PTR_GET_CONST(freeOrderAuditNode_, Nodes::FreeOrderAuditNode) };
        inline Nodes::FreeOrderAuditNode getFreeOrderAuditNode() { DARABONBA_PTR_GET(freeOrderAuditNode_, Nodes::FreeOrderAuditNode) };
        inline Nodes& setFreeOrderAuditNode(const Nodes::FreeOrderAuditNode & freeOrderAuditNode) { DARABONBA_PTR_SET_VALUE(freeOrderAuditNode_, freeOrderAuditNode) };
        inline Nodes& setFreeOrderAuditNode(Nodes::FreeOrderAuditNode && freeOrderAuditNode) { DARABONBA_PTR_SET_RVALUE(freeOrderAuditNode_, freeOrderAuditNode) };


        // freeOrderNode Field Functions 
        bool hasFreeOrderNode() const { return this->freeOrderNode_ != nullptr;};
        void deleteFreeOrderNode() { this->freeOrderNode_ = nullptr;};
        inline const Nodes::FreeOrderNode & getFreeOrderNode() const { DARABONBA_PTR_GET_CONST(freeOrderNode_, Nodes::FreeOrderNode) };
        inline Nodes::FreeOrderNode getFreeOrderNode() { DARABONBA_PTR_GET(freeOrderNode_, Nodes::FreeOrderNode) };
        inline Nodes& setFreeOrderNode(const Nodes::FreeOrderNode & freeOrderNode) { DARABONBA_PTR_SET_VALUE(freeOrderNode_, freeOrderNode) };
        inline Nodes& setFreeOrderNode(Nodes::FreeOrderNode && freeOrderNode) { DARABONBA_PTR_SET_RVALUE(freeOrderNode_, freeOrderNode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orderDate Field Functions 
        bool hasOrderDate() const { return this->orderDate_ != nullptr;};
        void deleteOrderDate() { this->orderDate_ = nullptr;};
        inline int64_t getOrderDate() const { DARABONBA_PTR_GET_DEFAULT(orderDate_, 0L) };
        inline Nodes& setOrderDate(int64_t orderDate) { DARABONBA_PTR_SET_VALUE(orderDate_, orderDate) };


        // orderNode Field Functions 
        bool hasOrderNode() const { return this->orderNode_ != nullptr;};
        void deleteOrderNode() { this->orderNode_ = nullptr;};
        inline const Nodes::OrderNode & getOrderNode() const { DARABONBA_PTR_GET_CONST(orderNode_, Nodes::OrderNode) };
        inline Nodes::OrderNode getOrderNode() { DARABONBA_PTR_GET(orderNode_, Nodes::OrderNode) };
        inline Nodes& setOrderNode(const Nodes::OrderNode & orderNode) { DARABONBA_PTR_SET_VALUE(orderNode_, orderNode) };
        inline Nodes& setOrderNode(Nodes::OrderNode && orderNode) { DARABONBA_PTR_SET_RVALUE(orderNode_, orderNode) };


        // serviceImplementation Field Functions 
        bool hasServiceImplementation() const { return this->serviceImplementation_ != nullptr;};
        void deleteServiceImplementation() { this->serviceImplementation_ = nullptr;};
        inline const Nodes::ServiceImplementation & getServiceImplementation() const { DARABONBA_PTR_GET_CONST(serviceImplementation_, Nodes::ServiceImplementation) };
        inline Nodes::ServiceImplementation getServiceImplementation() { DARABONBA_PTR_GET(serviceImplementation_, Nodes::ServiceImplementation) };
        inline Nodes& setServiceImplementation(const Nodes::ServiceImplementation & serviceImplementation) { DARABONBA_PTR_SET_VALUE(serviceImplementation_, serviceImplementation) };
        inline Nodes& setServiceImplementation(Nodes::ServiceImplementation && serviceImplementation) { DARABONBA_PTR_SET_RVALUE(serviceImplementation_, serviceImplementation) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Nodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<Nodes::DocNode> docNode_ {};
        shared_ptr<Nodes::FinishNode> finishNode_ {};
        shared_ptr<Nodes::FreeOrderAuditNode> freeOrderAuditNode_ {};
        shared_ptr<Nodes::FreeOrderNode> freeOrderNode_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> orderDate_ {};
        shared_ptr<Nodes::OrderNode> orderNode_ {};
        shared_ptr<Nodes::ServiceImplementation> serviceImplementation_ {};
        shared_ptr<int32_t> status_ {};
      };

      class Docs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Docs& obj) { 
          DARABONBA_PTR_TO_JSON(docId, docId_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(freeOrderApplyCode, freeOrderApplyCode_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(orderId, orderId_);
          DARABONBA_PTR_TO_JSON(uploadTime, uploadTime_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Docs& obj) { 
          DARABONBA_PTR_FROM_JSON(docId, docId_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(freeOrderApplyCode, freeOrderApplyCode_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(orderId, orderId_);
          DARABONBA_PTR_FROM_JSON(uploadTime, uploadTime_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Docs() = default ;
        Docs(const Docs &) = default ;
        Docs(Docs &&) = default ;
        Docs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Docs() = default ;
        Docs& operator=(const Docs &) = default ;
        Docs& operator=(Docs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->docId_ == nullptr
        && this->fileName_ == nullptr && this->freeOrderApplyCode_ == nullptr && this->name_ == nullptr && this->orderId_ == nullptr && this->uploadTime_ == nullptr
        && this->url_ == nullptr; };
        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline int64_t getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, 0L) };
        inline Docs& setDocId(int64_t docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Docs& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // freeOrderApplyCode Field Functions 
        bool hasFreeOrderApplyCode() const { return this->freeOrderApplyCode_ != nullptr;};
        void deleteFreeOrderApplyCode() { this->freeOrderApplyCode_ = nullptr;};
        inline string getFreeOrderApplyCode() const { DARABONBA_PTR_GET_DEFAULT(freeOrderApplyCode_, "") };
        inline Docs& setFreeOrderApplyCode(string freeOrderApplyCode) { DARABONBA_PTR_SET_VALUE(freeOrderApplyCode_, freeOrderApplyCode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Docs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline Docs& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // uploadTime Field Functions 
        bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
        void deleteUploadTime() { this->uploadTime_ = nullptr;};
        inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
        inline Docs& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Docs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<int64_t> docId_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> freeOrderApplyCode_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<string> uploadTime_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->canApplyFreeOrder_ == nullptr
        && this->customerId_ == nullptr && this->docs_ == nullptr && this->endTime_ == nullptr && this->firstPayTime_ == nullptr && this->freeOrderApplyCode_ == nullptr
        && this->freeOrderApplyId_ == nullptr && this->freeOrderApplyTime_ == nullptr && this->freeOrderApprovedTime_ == nullptr && this->freeOrderExpectStartTime_ == nullptr && this->instanceId_ == nullptr
        && this->nodes_ == nullptr && this->operateInfos_ == nullptr && this->orderIds_ == nullptr && this->serviceName_ == nullptr && this->serviceStatus_ == nullptr
        && this->serviceStatusName_ == nullptr && this->serviceType_ == nullptr && this->sortTime_ == nullptr && this->startTime_ == nullptr && this->taskNum_ == nullptr; };
      // canApplyFreeOrder Field Functions 
      bool hasCanApplyFreeOrder() const { return this->canApplyFreeOrder_ != nullptr;};
      void deleteCanApplyFreeOrder() { this->canApplyFreeOrder_ = nullptr;};
      inline bool getCanApplyFreeOrder() const { DARABONBA_PTR_GET_DEFAULT(canApplyFreeOrder_, false) };
      inline Data& setCanApplyFreeOrder(bool canApplyFreeOrder) { DARABONBA_PTR_SET_VALUE(canApplyFreeOrder_, canApplyFreeOrder) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
      inline Data& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


      // docs Field Functions 
      bool hasDocs() const { return this->docs_ != nullptr;};
      void deleteDocs() { this->docs_ = nullptr;};
      inline const vector<Data::Docs> & getDocs() const { DARABONBA_PTR_GET_CONST(docs_, vector<Data::Docs>) };
      inline vector<Data::Docs> getDocs() { DARABONBA_PTR_GET(docs_, vector<Data::Docs>) };
      inline Data& setDocs(const vector<Data::Docs> & docs) { DARABONBA_PTR_SET_VALUE(docs_, docs) };
      inline Data& setDocs(vector<Data::Docs> && docs) { DARABONBA_PTR_SET_RVALUE(docs_, docs) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // firstPayTime Field Functions 
      bool hasFirstPayTime() const { return this->firstPayTime_ != nullptr;};
      void deleteFirstPayTime() { this->firstPayTime_ = nullptr;};
      inline string getFirstPayTime() const { DARABONBA_PTR_GET_DEFAULT(firstPayTime_, "") };
      inline Data& setFirstPayTime(string firstPayTime) { DARABONBA_PTR_SET_VALUE(firstPayTime_, firstPayTime) };


      // freeOrderApplyCode Field Functions 
      bool hasFreeOrderApplyCode() const { return this->freeOrderApplyCode_ != nullptr;};
      void deleteFreeOrderApplyCode() { this->freeOrderApplyCode_ = nullptr;};
      inline string getFreeOrderApplyCode() const { DARABONBA_PTR_GET_DEFAULT(freeOrderApplyCode_, "") };
      inline Data& setFreeOrderApplyCode(string freeOrderApplyCode) { DARABONBA_PTR_SET_VALUE(freeOrderApplyCode_, freeOrderApplyCode) };


      // freeOrderApplyId Field Functions 
      bool hasFreeOrderApplyId() const { return this->freeOrderApplyId_ != nullptr;};
      void deleteFreeOrderApplyId() { this->freeOrderApplyId_ = nullptr;};
      inline int64_t getFreeOrderApplyId() const { DARABONBA_PTR_GET_DEFAULT(freeOrderApplyId_, 0L) };
      inline Data& setFreeOrderApplyId(int64_t freeOrderApplyId) { DARABONBA_PTR_SET_VALUE(freeOrderApplyId_, freeOrderApplyId) };


      // freeOrderApplyTime Field Functions 
      bool hasFreeOrderApplyTime() const { return this->freeOrderApplyTime_ != nullptr;};
      void deleteFreeOrderApplyTime() { this->freeOrderApplyTime_ = nullptr;};
      inline string getFreeOrderApplyTime() const { DARABONBA_PTR_GET_DEFAULT(freeOrderApplyTime_, "") };
      inline Data& setFreeOrderApplyTime(string freeOrderApplyTime) { DARABONBA_PTR_SET_VALUE(freeOrderApplyTime_, freeOrderApplyTime) };


      // freeOrderApprovedTime Field Functions 
      bool hasFreeOrderApprovedTime() const { return this->freeOrderApprovedTime_ != nullptr;};
      void deleteFreeOrderApprovedTime() { this->freeOrderApprovedTime_ = nullptr;};
      inline string getFreeOrderApprovedTime() const { DARABONBA_PTR_GET_DEFAULT(freeOrderApprovedTime_, "") };
      inline Data& setFreeOrderApprovedTime(string freeOrderApprovedTime) { DARABONBA_PTR_SET_VALUE(freeOrderApprovedTime_, freeOrderApprovedTime) };


      // freeOrderExpectStartTime Field Functions 
      bool hasFreeOrderExpectStartTime() const { return this->freeOrderExpectStartTime_ != nullptr;};
      void deleteFreeOrderExpectStartTime() { this->freeOrderExpectStartTime_ = nullptr;};
      inline string getFreeOrderExpectStartTime() const { DARABONBA_PTR_GET_DEFAULT(freeOrderExpectStartTime_, "") };
      inline Data& setFreeOrderExpectStartTime(string freeOrderExpectStartTime) { DARABONBA_PTR_SET_VALUE(freeOrderExpectStartTime_, freeOrderExpectStartTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // operateInfos Field Functions 
      bool hasOperateInfos() const { return this->operateInfos_ != nullptr;};
      void deleteOperateInfos() { this->operateInfos_ = nullptr;};
      inline const vector<Data::OperateInfos> & getOperateInfos() const { DARABONBA_PTR_GET_CONST(operateInfos_, vector<Data::OperateInfos>) };
      inline vector<Data::OperateInfos> getOperateInfos() { DARABONBA_PTR_GET(operateInfos_, vector<Data::OperateInfos>) };
      inline Data& setOperateInfos(const vector<Data::OperateInfos> & operateInfos) { DARABONBA_PTR_SET_VALUE(operateInfos_, operateInfos) };
      inline Data& setOperateInfos(vector<Data::OperateInfos> && operateInfos) { DARABONBA_PTR_SET_RVALUE(operateInfos_, operateInfos) };


      // orderIds Field Functions 
      bool hasOrderIds() const { return this->orderIds_ != nullptr;};
      void deleteOrderIds() { this->orderIds_ = nullptr;};
      inline const vector<int64_t> & getOrderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<int64_t>) };
      inline vector<int64_t> getOrderIds() { DARABONBA_PTR_GET(orderIds_, vector<int64_t>) };
      inline Data& setOrderIds(const vector<int64_t> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
      inline Data& setOrderIds(vector<int64_t> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline Data& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // serviceStatusName Field Functions 
      bool hasServiceStatusName() const { return this->serviceStatusName_ != nullptr;};
      void deleteServiceStatusName() { this->serviceStatusName_ = nullptr;};
      inline string getServiceStatusName() const { DARABONBA_PTR_GET_DEFAULT(serviceStatusName_, "") };
      inline Data& setServiceStatusName(string serviceStatusName) { DARABONBA_PTR_SET_VALUE(serviceStatusName_, serviceStatusName) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Data& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // sortTime Field Functions 
      bool hasSortTime() const { return this->sortTime_ != nullptr;};
      void deleteSortTime() { this->sortTime_ = nullptr;};
      inline string getSortTime() const { DARABONBA_PTR_GET_DEFAULT(sortTime_, "") };
      inline Data& setSortTime(string sortTime) { DARABONBA_PTR_SET_VALUE(sortTime_, sortTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskNum Field Functions 
      bool hasTaskNum() const { return this->taskNum_ != nullptr;};
      void deleteTaskNum() { this->taskNum_ = nullptr;};
      inline int64_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0L) };
      inline Data& setTaskNum(int64_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


    protected:
      shared_ptr<bool> canApplyFreeOrder_ {};
      shared_ptr<string> customerId_ {};
      shared_ptr<vector<Data::Docs>> docs_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> firstPayTime_ {};
      shared_ptr<string> freeOrderApplyCode_ {};
      shared_ptr<int64_t> freeOrderApplyId_ {};
      shared_ptr<string> freeOrderApplyTime_ {};
      shared_ptr<string> freeOrderApprovedTime_ {};
      shared_ptr<string> freeOrderExpectStartTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      shared_ptr<vector<Data::OperateInfos>> operateInfos_ {};
      shared_ptr<vector<int64_t>> orderIds_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> serviceStatus_ {};
      shared_ptr<string> serviceStatusName_ {};
      shared_ptr<string> serviceType_ {};
      shared_ptr<string> sortTime_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<int64_t> taskNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEnterpriseSupportPlanSimpleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEnterpriseSupportPlanSimpleResponseBody::Data>) };
    inline vector<ListEnterpriseSupportPlanSimpleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEnterpriseSupportPlanSimpleResponseBody::Data>) };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setData(const vector<ListEnterpriseSupportPlanSimpleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setData(vector<ListEnterpriseSupportPlanSimpleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnterpriseSupportPlanSimpleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListEnterpriseSupportPlanSimpleResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CustomerService20231228
#endif
