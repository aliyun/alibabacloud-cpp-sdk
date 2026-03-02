// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGEDOWNSTREAMBINDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGEDOWNSTREAMBINDINGSRESPONSEBODY_HPP_
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
  class ListExchangeDownstreamBindingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangeDownstreamBindingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangeDownstreamBindingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListExchangeDownstreamBindingsResponseBody() = default ;
    ListExchangeDownstreamBindingsResponseBody(const ListExchangeDownstreamBindingsResponseBody &) = default ;
    ListExchangeDownstreamBindingsResponseBody(ListExchangeDownstreamBindingsResponseBody &&) = default ;
    ListExchangeDownstreamBindingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangeDownstreamBindingsResponseBody() = default ;
    ListExchangeDownstreamBindingsResponseBody& operator=(const ListExchangeDownstreamBindingsResponseBody &) = default ;
    ListExchangeDownstreamBindingsResponseBody& operator=(ListExchangeDownstreamBindingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
          DARABONBA_PTR_TO_JSON(BindingVO, bindingVO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(BindingVO, bindingVO_);
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
        class BindingVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BindingVO& obj) { 
            DARABONBA_PTR_TO_JSON(Argument, argument_);
            DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
            DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
            DARABONBA_PTR_TO_JSON(DstName, dstName_);
            DARABONBA_PTR_TO_JSON(SrcName, srcName_);
          };
          friend void from_json(const Darabonba::Json& j, BindingVO& obj) { 
            DARABONBA_PTR_FROM_JSON(Argument, argument_);
            DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
            DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
            DARABONBA_PTR_FROM_JSON(DstName, dstName_);
            DARABONBA_PTR_FROM_JSON(SrcName, srcName_);
          };
          BindingVO() = default ;
          BindingVO(const BindingVO &) = default ;
          BindingVO(BindingVO &&) = default ;
          BindingVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BindingVO() = default ;
          BindingVO& operator=(const BindingVO &) = default ;
          BindingVO& operator=(BindingVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->argument_ == nullptr
        && this->bindingKey_ == nullptr && this->bindingType_ == nullptr && this->dstName_ == nullptr && this->srcName_ == nullptr; };
          // argument Field Functions 
          bool hasArgument() const { return this->argument_ != nullptr;};
          void deleteArgument() { this->argument_ = nullptr;};
          inline string getArgument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
          inline BindingVO& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


          // bindingKey Field Functions 
          bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
          void deleteBindingKey() { this->bindingKey_ = nullptr;};
          inline string getBindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
          inline BindingVO& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


          // bindingType Field Functions 
          bool hasBindingType() const { return this->bindingType_ != nullptr;};
          void deleteBindingType() { this->bindingType_ = nullptr;};
          inline int32_t getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, 0) };
          inline BindingVO& setBindingType(int32_t bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


          // dstName Field Functions 
          bool hasDstName() const { return this->dstName_ != nullptr;};
          void deleteDstName() { this->dstName_ = nullptr;};
          inline string getDstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
          inline BindingVO& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


          // srcName Field Functions 
          bool hasSrcName() const { return this->srcName_ != nullptr;};
          void deleteSrcName() { this->srcName_ = nullptr;};
          inline string getSrcName() const { DARABONBA_PTR_GET_DEFAULT(srcName_, "") };
          inline BindingVO& setSrcName(string srcName) { DARABONBA_PTR_SET_VALUE(srcName_, srcName) };


        protected:
          shared_ptr<string> argument_ {};
          shared_ptr<string> bindingKey_ {};
          shared_ptr<int32_t> bindingType_ {};
          shared_ptr<string> dstName_ {};
          shared_ptr<string> srcName_ {};
        };

        virtual bool empty() const override { return this->bindingVO_ == nullptr; };
        // bindingVO Field Functions 
        bool hasBindingVO() const { return this->bindingVO_ != nullptr;};
        void deleteBindingVO() { this->bindingVO_ = nullptr;};
        inline const vector<VoList::BindingVO> & getBindingVO() const { DARABONBA_PTR_GET_CONST(bindingVO_, vector<VoList::BindingVO>) };
        inline vector<VoList::BindingVO> getBindingVO() { DARABONBA_PTR_GET(bindingVO_, vector<VoList::BindingVO>) };
        inline VoList& setBindingVO(const vector<VoList::BindingVO> & bindingVO) { DARABONBA_PTR_SET_VALUE(bindingVO_, bindingVO) };
        inline VoList& setBindingVO(vector<VoList::BindingVO> && bindingVO) { DARABONBA_PTR_SET_RVALUE(bindingVO_, bindingVO) };


      protected:
        shared_ptr<vector<VoList::BindingVO>> bindingVO_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->voList_ == nullptr; };
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
      shared_ptr<Data::VoList> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListExchangeDownstreamBindingsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListExchangeDownstreamBindingsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListExchangeDownstreamBindingsResponseBody::Data) };
    inline ListExchangeDownstreamBindingsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListExchangeDownstreamBindingsResponseBody::Data) };
    inline ListExchangeDownstreamBindingsResponseBody& setData(const ListExchangeDownstreamBindingsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListExchangeDownstreamBindingsResponseBody& setData(ListExchangeDownstreamBindingsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListExchangeDownstreamBindingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExchangeDownstreamBindingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListExchangeDownstreamBindingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListExchangeDownstreamBindingsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
