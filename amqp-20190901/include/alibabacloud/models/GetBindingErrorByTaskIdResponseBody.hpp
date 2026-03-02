// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBINDINGERRORBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBINDINGERRORBYTASKIDRESPONSEBODY_HPP_
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
  class GetBindingErrorByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBindingErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBindingErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBindingErrorByTaskIdResponseBody() = default ;
    GetBindingErrorByTaskIdResponseBody(const GetBindingErrorByTaskIdResponseBody &) = default ;
    GetBindingErrorByTaskIdResponseBody(GetBindingErrorByTaskIdResponseBody &&) = default ;
    GetBindingErrorByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBindingErrorByTaskIdResponseBody() = default ;
    GetBindingErrorByTaskIdResponseBody& operator=(const GetBindingErrorByTaskIdResponseBody &) = default ;
    GetBindingErrorByTaskIdResponseBody& operator=(GetBindingErrorByTaskIdResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BindingErrorDO, bindingErrorDO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(BindingErrorDO, bindingErrorDO_);
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
        class BindingErrorDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BindingErrorDO& obj) { 
            DARABONBA_PTR_TO_JSON(Destination, destination_);
            DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
            DARABONBA_PTR_TO_JSON(Src, src_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
          };
          friend void from_json(const Darabonba::Json& j, BindingErrorDO& obj) { 
            DARABONBA_PTR_FROM_JSON(Destination, destination_);
            DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
            DARABONBA_PTR_FROM_JSON(Src, src_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
          };
          BindingErrorDO() = default ;
          BindingErrorDO(const BindingErrorDO &) = default ;
          BindingErrorDO(BindingErrorDO &&) = default ;
          BindingErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BindingErrorDO() = default ;
          BindingErrorDO& operator=(const BindingErrorDO &) = default ;
          BindingErrorDO& operator=(BindingErrorDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destination_ == nullptr
        && this->destinationType_ == nullptr && this->errorMessage_ == nullptr && this->routingKey_ == nullptr && this->src_ == nullptr && this->taskId_ == nullptr
        && this->vhostName_ == nullptr; };
          // destination Field Functions 
          bool hasDestination() const { return this->destination_ != nullptr;};
          void deleteDestination() { this->destination_ = nullptr;};
          inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
          inline BindingErrorDO& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


          // destinationType Field Functions 
          bool hasDestinationType() const { return this->destinationType_ != nullptr;};
          void deleteDestinationType() { this->destinationType_ = nullptr;};
          inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
          inline BindingErrorDO& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline BindingErrorDO& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // routingKey Field Functions 
          bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
          void deleteRoutingKey() { this->routingKey_ = nullptr;};
          inline string getRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
          inline BindingErrorDO& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


          // src Field Functions 
          bool hasSrc() const { return this->src_ != nullptr;};
          void deleteSrc() { this->src_ = nullptr;};
          inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
          inline BindingErrorDO& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
          inline BindingErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline BindingErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


        protected:
          shared_ptr<string> destination_ {};
          shared_ptr<string> destinationType_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> routingKey_ {};
          shared_ptr<string> src_ {};
          shared_ptr<int64_t> taskId_ {};
          shared_ptr<string> vhostName_ {};
        };

        virtual bool empty() const override { return this->bindingErrorDO_ == nullptr; };
        // bindingErrorDO Field Functions 
        bool hasBindingErrorDO() const { return this->bindingErrorDO_ != nullptr;};
        void deleteBindingErrorDO() { this->bindingErrorDO_ = nullptr;};
        inline const vector<VoList::BindingErrorDO> & getBindingErrorDO() const { DARABONBA_PTR_GET_CONST(bindingErrorDO_, vector<VoList::BindingErrorDO>) };
        inline vector<VoList::BindingErrorDO> getBindingErrorDO() { DARABONBA_PTR_GET(bindingErrorDO_, vector<VoList::BindingErrorDO>) };
        inline VoList& setBindingErrorDO(const vector<VoList::BindingErrorDO> & bindingErrorDO) { DARABONBA_PTR_SET_VALUE(bindingErrorDO_, bindingErrorDO) };
        inline VoList& setBindingErrorDO(vector<VoList::BindingErrorDO> && bindingErrorDO) { DARABONBA_PTR_SET_RVALUE(bindingErrorDO_, bindingErrorDO) };


      protected:
        shared_ptr<vector<VoList::BindingErrorDO>> bindingErrorDO_ {};
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
    inline GetBindingErrorByTaskIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBindingErrorByTaskIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBindingErrorByTaskIdResponseBody::Data) };
    inline GetBindingErrorByTaskIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBindingErrorByTaskIdResponseBody::Data) };
    inline GetBindingErrorByTaskIdResponseBody& setData(const GetBindingErrorByTaskIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBindingErrorByTaskIdResponseBody& setData(GetBindingErrorByTaskIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBindingErrorByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBindingErrorByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBindingErrorByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetBindingErrorByTaskIdResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
