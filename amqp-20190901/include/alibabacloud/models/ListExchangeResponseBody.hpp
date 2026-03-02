// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGERESPONSEBODY_HPP_
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
  class ListExchangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListExchangeResponseBody() = default ;
    ListExchangeResponseBody(const ListExchangeResponseBody &) = default ;
    ListExchangeResponseBody(ListExchangeResponseBody &&) = default ;
    ListExchangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangeResponseBody() = default ;
    ListExchangeResponseBody& operator=(const ListExchangeResponseBody &) = default ;
    ListExchangeResponseBody& operator=(ListExchangeResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ExchangVO, exchangVO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ExchangVO, exchangVO_);
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
        class ExchangVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExchangVO& obj) { 
            DARABONBA_PTR_TO_JSON(Attributes, attributes_);
            DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
            DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
            DARABONBA_PTR_TO_JSON(Internal, internal_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
          };
          friend void from_json(const Darabonba::Json& j, ExchangVO& obj) { 
            DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
            DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
            DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
            DARABONBA_PTR_FROM_JSON(Internal, internal_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
          };
          ExchangVO() = default ;
          ExchangVO(const ExchangVO &) = default ;
          ExchangVO(ExchangVO &&) = default ;
          ExchangVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExchangVO() = default ;
          ExchangVO& operator=(const ExchangVO &) = default ;
          ExchangVO& operator=(ExchangVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributes_ == nullptr
        && this->autoDelete_ == nullptr && this->canDelete_ == nullptr && this->createTime_ == nullptr && this->exchangeType_ == nullptr && this->internal_ == nullptr
        && this->name_ == nullptr && this->vhostName_ == nullptr; };
          // attributes Field Functions 
          bool hasAttributes() const { return this->attributes_ != nullptr;};
          void deleteAttributes() { this->attributes_ = nullptr;};
          inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
          inline ExchangVO& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


          // autoDelete Field Functions 
          bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
          void deleteAutoDelete() { this->autoDelete_ = nullptr;};
          inline bool getAutoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
          inline ExchangVO& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


          // canDelete Field Functions 
          bool hasCanDelete() const { return this->canDelete_ != nullptr;};
          void deleteCanDelete() { this->canDelete_ = nullptr;};
          inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
          inline ExchangVO& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline ExchangVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // exchangeType Field Functions 
          bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
          void deleteExchangeType() { this->exchangeType_ = nullptr;};
          inline int32_t getExchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, 0) };
          inline ExchangVO& setExchangeType(int32_t exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


          // internal Field Functions 
          bool hasInternal() const { return this->internal_ != nullptr;};
          void deleteInternal() { this->internal_ = nullptr;};
          inline bool getInternal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
          inline ExchangVO& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ExchangVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline ExchangVO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


        protected:
          shared_ptr<string> attributes_ {};
          shared_ptr<bool> autoDelete_ {};
          shared_ptr<bool> canDelete_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<int32_t> exchangeType_ {};
          shared_ptr<bool> internal_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> vhostName_ {};
        };

        virtual bool empty() const override { return this->exchangVO_ == nullptr; };
        // exchangVO Field Functions 
        bool hasExchangVO() const { return this->exchangVO_ != nullptr;};
        void deleteExchangVO() { this->exchangVO_ = nullptr;};
        inline const vector<VoList::ExchangVO> & getExchangVO() const { DARABONBA_PTR_GET_CONST(exchangVO_, vector<VoList::ExchangVO>) };
        inline vector<VoList::ExchangVO> getExchangVO() { DARABONBA_PTR_GET(exchangVO_, vector<VoList::ExchangVO>) };
        inline VoList& setExchangVO(const vector<VoList::ExchangVO> & exchangVO) { DARABONBA_PTR_SET_VALUE(exchangVO_, exchangVO) };
        inline VoList& setExchangVO(vector<VoList::ExchangVO> && exchangVO) { DARABONBA_PTR_SET_RVALUE(exchangVO_, exchangVO) };


      protected:
        shared_ptr<vector<VoList::ExchangVO>> exchangVO_ {};
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
    inline ListExchangeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListExchangeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListExchangeResponseBody::Data) };
    inline ListExchangeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListExchangeResponseBody::Data) };
    inline ListExchangeResponseBody& setData(const ListExchangeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListExchangeResponseBody& setData(ListExchangeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListExchangeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExchangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListExchangeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListExchangeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
