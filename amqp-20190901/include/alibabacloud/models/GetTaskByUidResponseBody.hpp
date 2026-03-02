// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetTaskByUidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTaskByUidResponseBody() = default ;
    GetTaskByUidResponseBody(const GetTaskByUidResponseBody &) = default ;
    GetTaskByUidResponseBody(GetTaskByUidResponseBody &&) = default ;
    GetTaskByUidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUidResponseBody() = default ;
    GetTaskByUidResponseBody& operator=(const GetTaskByUidResponseBody &) = default ;
    GetTaskByUidResponseBody& operator=(GetTaskByUidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoList, voList_);
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
      class VoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoList& obj) { 
          DARABONBA_PTR_TO_JSON(ImportDefinitionTaskDO, importDefinitionTaskDO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ImportDefinitionTaskDO, importDefinitionTaskDO_);
        };
        VoList() = default ;
        VoList(const VoList &) = default ;
        VoList(VoList &&) = default ;
        VoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoList() = default ;
        VoList& operator=(const VoList &) = default ;
        VoList& operator=(VoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ImportDefinitionTaskDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImportDefinitionTaskDO& obj) { 
            DARABONBA_PTR_TO_JSON(BindingNum, bindingNum_);
            DARABONBA_PTR_TO_JSON(ExchangeNum, exchangeNum_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ImportType, importType_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
            DARABONBA_PTR_TO_JSON(QueueNum, queueNum_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
            DARABONBA_PTR_TO_JSON(VhostNum, vhostNum_);
          };
          friend void from_json(const Darabonba::Json& j, ImportDefinitionTaskDO& obj) { 
            DARABONBA_PTR_FROM_JSON(BindingNum, bindingNum_);
            DARABONBA_PTR_FROM_JSON(ExchangeNum, exchangeNum_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ImportType, importType_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
            DARABONBA_PTR_FROM_JSON(QueueNum, queueNum_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
            DARABONBA_PTR_FROM_JSON(VhostNum, vhostNum_);
          };
          ImportDefinitionTaskDO() = default ;
          ImportDefinitionTaskDO(const ImportDefinitionTaskDO &) = default ;
          ImportDefinitionTaskDO(ImportDefinitionTaskDO &&) = default ;
          ImportDefinitionTaskDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImportDefinitionTaskDO() = default ;
          ImportDefinitionTaskDO& operator=(const ImportDefinitionTaskDO &) = default ;
          ImportDefinitionTaskDO& operator=(ImportDefinitionTaskDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bindingNum_ == nullptr
        && this->exchangeNum_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->importType_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->queueNum_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr && this->vhostName_ == nullptr
        && this->vhostNum_ == nullptr; };
          // bindingNum Field Functions 
          bool hasBindingNum() const { return this->bindingNum_ != nullptr;};
          void deleteBindingNum() { this->bindingNum_ = nullptr;};
          inline int32_t getBindingNum() const { DARABONBA_PTR_GET_DEFAULT(bindingNum_, 0) };
          inline ImportDefinitionTaskDO& setBindingNum(int32_t bindingNum) { DARABONBA_PTR_SET_VALUE(bindingNum_, bindingNum) };


          // exchangeNum Field Functions 
          bool hasExchangeNum() const { return this->exchangeNum_ != nullptr;};
          void deleteExchangeNum() { this->exchangeNum_ = nullptr;};
          inline int32_t getExchangeNum() const { DARABONBA_PTR_GET_DEFAULT(exchangeNum_, 0) };
          inline ImportDefinitionTaskDO& setExchangeNum(int32_t exchangeNum) { DARABONBA_PTR_SET_VALUE(exchangeNum_, exchangeNum) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline ImportDefinitionTaskDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ImportDefinitionTaskDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // importType Field Functions 
          bool hasImportType() const { return this->importType_ != nullptr;};
          void deleteImportType() { this->importType_ = nullptr;};
          inline int32_t getImportType() const { DARABONBA_PTR_GET_DEFAULT(importType_, 0) };
          inline ImportDefinitionTaskDO& setImportType(int32_t importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline ImportDefinitionTaskDO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceName Field Functions 
          bool hasInstanceName() const { return this->instanceName_ != nullptr;};
          void deleteInstanceName() { this->instanceName_ = nullptr;};
          inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
          inline ImportDefinitionTaskDO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


          // queueNum Field Functions 
          bool hasQueueNum() const { return this->queueNum_ != nullptr;};
          void deleteQueueNum() { this->queueNum_ = nullptr;};
          inline int32_t getQueueNum() const { DARABONBA_PTR_GET_DEFAULT(queueNum_, 0) };
          inline ImportDefinitionTaskDO& setQueueNum(int32_t queueNum) { DARABONBA_PTR_SET_VALUE(queueNum_, queueNum) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline ImportDefinitionTaskDO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
          inline ImportDefinitionTaskDO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline ImportDefinitionTaskDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


          // vhostNum Field Functions 
          bool hasVhostNum() const { return this->vhostNum_ != nullptr;};
          void deleteVhostNum() { this->vhostNum_ = nullptr;};
          inline int32_t getVhostNum() const { DARABONBA_PTR_GET_DEFAULT(vhostNum_, 0) };
          inline ImportDefinitionTaskDO& setVhostNum(int32_t vhostNum) { DARABONBA_PTR_SET_VALUE(vhostNum_, vhostNum) };


        protected:
          shared_ptr<int32_t> bindingNum_ {};
          shared_ptr<int32_t> exchangeNum_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<int32_t> importType_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> instanceName_ {};
          shared_ptr<int32_t> queueNum_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<int64_t> userId_ {};
          shared_ptr<string> vhostName_ {};
          shared_ptr<int32_t> vhostNum_ {};
        };

        virtual bool empty() const override { return this->importDefinitionTaskDO_ == nullptr; };
        // importDefinitionTaskDO Field Functions 
        bool hasImportDefinitionTaskDO() const { return this->importDefinitionTaskDO_ != nullptr;};
        void deleteImportDefinitionTaskDO() { this->importDefinitionTaskDO_ = nullptr;};
        inline const vector<VoList::ImportDefinitionTaskDO> & getImportDefinitionTaskDO() const { DARABONBA_PTR_GET_CONST(importDefinitionTaskDO_, vector<VoList::ImportDefinitionTaskDO>) };
        inline vector<VoList::ImportDefinitionTaskDO> getImportDefinitionTaskDO() { DARABONBA_PTR_GET(importDefinitionTaskDO_, vector<VoList::ImportDefinitionTaskDO>) };
        inline VoList& setImportDefinitionTaskDO(const vector<VoList::ImportDefinitionTaskDO> & importDefinitionTaskDO) { DARABONBA_PTR_SET_VALUE(importDefinitionTaskDO_, importDefinitionTaskDO) };
        inline VoList& setImportDefinitionTaskDO(vector<VoList::ImportDefinitionTaskDO> && importDefinitionTaskDO) { DARABONBA_PTR_SET_RVALUE(importDefinitionTaskDO_, importDefinitionTaskDO) };


      protected:
        shared_ptr<vector<VoList::ImportDefinitionTaskDO>> importDefinitionTaskDO_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voList_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // voList Field Functions 
      bool hasVoList() const { return this->voList_ != nullptr;};
      void deleteVoList() { this->voList_ = nullptr;};
      inline const Data::VoList & getVoList() const { DARABONBA_PTR_GET_CONST(voList_, Data::VoList) };
      inline Data::VoList getVoList() { DARABONBA_PTR_GET(voList_, Data::VoList) };
      inline Data& setVoList(const Data::VoList & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
      inline Data& setVoList(Data::VoList && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<Data::VoList> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTaskByUidResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTaskByUidResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTaskByUidResponseBody::Data) };
    inline GetTaskByUidResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTaskByUidResponseBody::Data) };
    inline GetTaskByUidResponseBody& setData(const GetTaskByUidResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskByUidResponseBody& setData(GetTaskByUidResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskByUidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskByUidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskByUidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetTaskByUidResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
