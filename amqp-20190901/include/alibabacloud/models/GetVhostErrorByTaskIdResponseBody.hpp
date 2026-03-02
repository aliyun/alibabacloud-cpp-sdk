// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVHOSTERRORBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVHOSTERRORBYTASKIDRESPONSEBODY_HPP_
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
  class GetVhostErrorByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVhostErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVhostErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetVhostErrorByTaskIdResponseBody() = default ;
    GetVhostErrorByTaskIdResponseBody(const GetVhostErrorByTaskIdResponseBody &) = default ;
    GetVhostErrorByTaskIdResponseBody(GetVhostErrorByTaskIdResponseBody &&) = default ;
    GetVhostErrorByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVhostErrorByTaskIdResponseBody() = default ;
    GetVhostErrorByTaskIdResponseBody& operator=(const GetVhostErrorByTaskIdResponseBody &) = default ;
    GetVhostErrorByTaskIdResponseBody& operator=(GetVhostErrorByTaskIdResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(VhostErrorDO, vhostErrorDO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(VhostErrorDO, vhostErrorDO_);
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
        class VhostErrorDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VhostErrorDO& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
          };
          friend void from_json(const Darabonba::Json& j, VhostErrorDO& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
          };
          VhostErrorDO() = default ;
          VhostErrorDO(const VhostErrorDO &) = default ;
          VhostErrorDO(VhostErrorDO &&) = default ;
          VhostErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VhostErrorDO() = default ;
          VhostErrorDO& operator=(const VhostErrorDO &) = default ;
          VhostErrorDO& operator=(VhostErrorDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->taskId_ == nullptr && this->vhostName_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline int32_t getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, 0) };
          inline VhostErrorDO& setErrorMessage(int32_t errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
          inline VhostErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline VhostErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


        protected:
          shared_ptr<int32_t> errorMessage_ {};
          shared_ptr<int64_t> taskId_ {};
          shared_ptr<string> vhostName_ {};
        };

        virtual bool empty() const override { return this->vhostErrorDO_ == nullptr; };
        // vhostErrorDO Field Functions 
        bool hasVhostErrorDO() const { return this->vhostErrorDO_ != nullptr;};
        void deleteVhostErrorDO() { this->vhostErrorDO_ = nullptr;};
        inline const vector<VoList::VhostErrorDO> & getVhostErrorDO() const { DARABONBA_PTR_GET_CONST(vhostErrorDO_, vector<VoList::VhostErrorDO>) };
        inline vector<VoList::VhostErrorDO> getVhostErrorDO() { DARABONBA_PTR_GET(vhostErrorDO_, vector<VoList::VhostErrorDO>) };
        inline VoList& setVhostErrorDO(const vector<VoList::VhostErrorDO> & vhostErrorDO) { DARABONBA_PTR_SET_VALUE(vhostErrorDO_, vhostErrorDO) };
        inline VoList& setVhostErrorDO(vector<VoList::VhostErrorDO> && vhostErrorDO) { DARABONBA_PTR_SET_RVALUE(vhostErrorDO_, vhostErrorDO) };


      protected:
        shared_ptr<vector<VoList::VhostErrorDO>> vhostErrorDO_ {};
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
    inline GetVhostErrorByTaskIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVhostErrorByTaskIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetVhostErrorByTaskIdResponseBody::Data) };
    inline GetVhostErrorByTaskIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetVhostErrorByTaskIdResponseBody::Data) };
    inline GetVhostErrorByTaskIdResponseBody& setData(const GetVhostErrorByTaskIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVhostErrorByTaskIdResponseBody& setData(GetVhostErrorByTaskIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVhostErrorByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVhostErrorByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetVhostErrorByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetVhostErrorByTaskIdResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
