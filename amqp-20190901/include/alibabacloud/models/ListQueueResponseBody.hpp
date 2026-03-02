// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODY_HPP_
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
  class ListQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQueueResponseBody() = default ;
    ListQueueResponseBody(const ListQueueResponseBody &) = default ;
    ListQueueResponseBody(ListQueueResponseBody &&) = default ;
    ListQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueResponseBody() = default ;
    ListQueueResponseBody& operator=(const ListQueueResponseBody &) = default ;
    ListQueueResponseBody& operator=(ListQueueResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(QueueVO, queueVO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(QueueVO, queueVO_);
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
        class QueueVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueVO& obj) { 
            DARABONBA_PTR_TO_JSON(AccumulationCount, accumulationCount_);
            DARABONBA_ANY_TO_JSON(Attributes, attributes_);
            DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
            DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Durable, durable_);
            DARABONBA_PTR_TO_JSON(Exclusive, exclusive_);
            DARABONBA_PTR_TO_JSON(LastConsumeTime, lastConsumeTime_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
          };
          friend void from_json(const Darabonba::Json& j, QueueVO& obj) { 
            DARABONBA_PTR_FROM_JSON(AccumulationCount, accumulationCount_);
            DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
            DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
            DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Durable, durable_);
            DARABONBA_PTR_FROM_JSON(Exclusive, exclusive_);
            DARABONBA_PTR_FROM_JSON(LastConsumeTime, lastConsumeTime_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
          };
          QueueVO() = default ;
          QueueVO(const QueueVO &) = default ;
          QueueVO(QueueVO &&) = default ;
          QueueVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueueVO() = default ;
          QueueVO& operator=(const QueueVO &) = default ;
          QueueVO& operator=(QueueVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accumulationCount_ == nullptr
        && this->attributes_ == nullptr && this->autoDelete_ == nullptr && this->canDelete_ == nullptr && this->createTime_ == nullptr && this->durable_ == nullptr
        && this->exclusive_ == nullptr && this->lastConsumeTime_ == nullptr && this->name_ == nullptr && this->vhostName_ == nullptr; };
          // accumulationCount Field Functions 
          bool hasAccumulationCount() const { return this->accumulationCount_ != nullptr;};
          void deleteAccumulationCount() { this->accumulationCount_ = nullptr;};
          inline int64_t getAccumulationCount() const { DARABONBA_PTR_GET_DEFAULT(accumulationCount_, 0L) };
          inline QueueVO& setAccumulationCount(int64_t accumulationCount) { DARABONBA_PTR_SET_VALUE(accumulationCount_, accumulationCount) };


          // attributes Field Functions 
          bool hasAttributes() const { return this->attributes_ != nullptr;};
          void deleteAttributes() { this->attributes_ = nullptr;};
          inline           const Darabonba::Json & getAttributes() const { DARABONBA_GET(attributes_) };
          Darabonba::Json & getAttributes() { DARABONBA_GET(attributes_) };
          inline QueueVO& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
          inline QueueVO& setAttributes(Darabonba::Json && attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


          // autoDelete Field Functions 
          bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
          void deleteAutoDelete() { this->autoDelete_ = nullptr;};
          inline bool getAutoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
          inline QueueVO& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


          // canDelete Field Functions 
          bool hasCanDelete() const { return this->canDelete_ != nullptr;};
          void deleteCanDelete() { this->canDelete_ = nullptr;};
          inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
          inline QueueVO& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline QueueVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // durable Field Functions 
          bool hasDurable() const { return this->durable_ != nullptr;};
          void deleteDurable() { this->durable_ = nullptr;};
          inline bool getDurable() const { DARABONBA_PTR_GET_DEFAULT(durable_, false) };
          inline QueueVO& setDurable(bool durable) { DARABONBA_PTR_SET_VALUE(durable_, durable) };


          // exclusive Field Functions 
          bool hasExclusive() const { return this->exclusive_ != nullptr;};
          void deleteExclusive() { this->exclusive_ = nullptr;};
          inline bool getExclusive() const { DARABONBA_PTR_GET_DEFAULT(exclusive_, false) };
          inline QueueVO& setExclusive(bool exclusive) { DARABONBA_PTR_SET_VALUE(exclusive_, exclusive) };


          // lastConsumeTime Field Functions 
          bool hasLastConsumeTime() const { return this->lastConsumeTime_ != nullptr;};
          void deleteLastConsumeTime() { this->lastConsumeTime_ = nullptr;};
          inline int64_t getLastConsumeTime() const { DARABONBA_PTR_GET_DEFAULT(lastConsumeTime_, 0L) };
          inline QueueVO& setLastConsumeTime(int64_t lastConsumeTime) { DARABONBA_PTR_SET_VALUE(lastConsumeTime_, lastConsumeTime) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline QueueVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline QueueVO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


        protected:
          shared_ptr<int64_t> accumulationCount_ {};
          Darabonba::Json attributes_ {};
          shared_ptr<bool> autoDelete_ {};
          shared_ptr<bool> canDelete_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<bool> durable_ {};
          shared_ptr<bool> exclusive_ {};
          shared_ptr<int64_t> lastConsumeTime_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> vhostName_ {};
        };

        virtual bool empty() const override { return this->queueVO_ == nullptr; };
        // queueVO Field Functions 
        bool hasQueueVO() const { return this->queueVO_ != nullptr;};
        void deleteQueueVO() { this->queueVO_ = nullptr;};
        inline const vector<VoList::QueueVO> & getQueueVO() const { DARABONBA_PTR_GET_CONST(queueVO_, vector<VoList::QueueVO>) };
        inline vector<VoList::QueueVO> getQueueVO() { DARABONBA_PTR_GET(queueVO_, vector<VoList::QueueVO>) };
        inline VoList& setQueueVO(const vector<VoList::QueueVO> & queueVO) { DARABONBA_PTR_SET_VALUE(queueVO_, queueVO) };
        inline VoList& setQueueVO(vector<VoList::QueueVO> && queueVO) { DARABONBA_PTR_SET_RVALUE(queueVO_, queueVO) };


      protected:
        shared_ptr<vector<VoList::QueueVO>> queueVO_ {};
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
    inline ListQueueResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQueueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQueueResponseBody::Data) };
    inline ListQueueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQueueResponseBody::Data) };
    inline ListQueueResponseBody& setData(const ListQueueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQueueResponseBody& setData(ListQueueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListQueueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQueueResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListQueueResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
