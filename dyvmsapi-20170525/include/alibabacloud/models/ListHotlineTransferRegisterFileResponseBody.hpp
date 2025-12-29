// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListHotlineTransferRegisterFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotlineTransferRegisterFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotlineTransferRegisterFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHotlineTransferRegisterFileResponseBody() = default ;
    ListHotlineTransferRegisterFileResponseBody(const ListHotlineTransferRegisterFileResponseBody &) = default ;
    ListHotlineTransferRegisterFileResponseBody(ListHotlineTransferRegisterFileResponseBody &&) = default ;
    ListHotlineTransferRegisterFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotlineTransferRegisterFileResponseBody() = default ;
    ListHotlineTransferRegisterFileResponseBody& operator=(const ListHotlineTransferRegisterFileResponseBody &) = default ;
    ListHotlineTransferRegisterFileResponseBody& operator=(ListHotlineTransferRegisterFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
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
      class Values : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Values& obj) { 
          DARABONBA_PTR_TO_JSON(Agree, agree_);
          DARABONBA_PTR_TO_JSON(CorpName, corpName_);
          DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
          DARABONBA_PTR_TO_JSON(MngOpIdentityCard, mngOpIdentityCard_);
          DARABONBA_PTR_TO_JSON(MngOpMail, mngOpMail_);
          DARABONBA_PTR_TO_JSON(MngOpMobile, mngOpMobile_);
          DARABONBA_PTR_TO_JSON(MngOpName, mngOpName_);
          DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
          DARABONBA_PTR_TO_JSON(ResUniqueCode, resUniqueCode_);
        };
        friend void from_json(const Darabonba::Json& j, Values& obj) { 
          DARABONBA_PTR_FROM_JSON(Agree, agree_);
          DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
          DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
          DARABONBA_PTR_FROM_JSON(MngOpIdentityCard, mngOpIdentityCard_);
          DARABONBA_PTR_FROM_JSON(MngOpMail, mngOpMail_);
          DARABONBA_PTR_FROM_JSON(MngOpMobile, mngOpMobile_);
          DARABONBA_PTR_FROM_JSON(MngOpName, mngOpName_);
          DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
          DARABONBA_PTR_FROM_JSON(ResUniqueCode, resUniqueCode_);
        };
        Values() = default ;
        Values(const Values &) = default ;
        Values(Values &&) = default ;
        Values(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Values() = default ;
        Values& operator=(const Values &) = default ;
        Values& operator=(Values &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agree_ == nullptr
        && this->corpName_ == nullptr && this->hotlineNumber_ == nullptr && this->mngOpIdentityCard_ == nullptr && this->mngOpMail_ == nullptr && this->mngOpMobile_ == nullptr
        && this->mngOpName_ == nullptr && this->qualificationId_ == nullptr && this->resUniqueCode_ == nullptr; };
        // agree Field Functions 
        bool hasAgree() const { return this->agree_ != nullptr;};
        void deleteAgree() { this->agree_ = nullptr;};
        inline string getAgree() const { DARABONBA_PTR_GET_DEFAULT(agree_, "") };
        inline Values& setAgree(string agree) { DARABONBA_PTR_SET_VALUE(agree_, agree) };


        // corpName Field Functions 
        bool hasCorpName() const { return this->corpName_ != nullptr;};
        void deleteCorpName() { this->corpName_ = nullptr;};
        inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
        inline Values& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


        // hotlineNumber Field Functions 
        bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
        void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
        inline string getHotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
        inline Values& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


        // mngOpIdentityCard Field Functions 
        bool hasMngOpIdentityCard() const { return this->mngOpIdentityCard_ != nullptr;};
        void deleteMngOpIdentityCard() { this->mngOpIdentityCard_ = nullptr;};
        inline string getMngOpIdentityCard() const { DARABONBA_PTR_GET_DEFAULT(mngOpIdentityCard_, "") };
        inline Values& setMngOpIdentityCard(string mngOpIdentityCard) { DARABONBA_PTR_SET_VALUE(mngOpIdentityCard_, mngOpIdentityCard) };


        // mngOpMail Field Functions 
        bool hasMngOpMail() const { return this->mngOpMail_ != nullptr;};
        void deleteMngOpMail() { this->mngOpMail_ = nullptr;};
        inline string getMngOpMail() const { DARABONBA_PTR_GET_DEFAULT(mngOpMail_, "") };
        inline Values& setMngOpMail(string mngOpMail) { DARABONBA_PTR_SET_VALUE(mngOpMail_, mngOpMail) };


        // mngOpMobile Field Functions 
        bool hasMngOpMobile() const { return this->mngOpMobile_ != nullptr;};
        void deleteMngOpMobile() { this->mngOpMobile_ = nullptr;};
        inline string getMngOpMobile() const { DARABONBA_PTR_GET_DEFAULT(mngOpMobile_, "") };
        inline Values& setMngOpMobile(string mngOpMobile) { DARABONBA_PTR_SET_VALUE(mngOpMobile_, mngOpMobile) };


        // mngOpName Field Functions 
        bool hasMngOpName() const { return this->mngOpName_ != nullptr;};
        void deleteMngOpName() { this->mngOpName_ = nullptr;};
        inline string getMngOpName() const { DARABONBA_PTR_GET_DEFAULT(mngOpName_, "") };
        inline Values& setMngOpName(string mngOpName) { DARABONBA_PTR_SET_VALUE(mngOpName_, mngOpName) };


        // qualificationId Field Functions 
        bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
        void deleteQualificationId() { this->qualificationId_ = nullptr;};
        inline string getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
        inline Values& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


        // resUniqueCode Field Functions 
        bool hasResUniqueCode() const { return this->resUniqueCode_ != nullptr;};
        void deleteResUniqueCode() { this->resUniqueCode_ = nullptr;};
        inline int64_t getResUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(resUniqueCode_, 0L) };
        inline Values& setResUniqueCode(int64_t resUniqueCode) { DARABONBA_PTR_SET_VALUE(resUniqueCode_, resUniqueCode) };


      protected:
        // The authenticity of the commitment.
        shared_ptr<string> agree_ {};
        // The enterprise name.
        shared_ptr<string> corpName_ {};
        // The China 400 number.
        shared_ptr<string> hotlineNumber_ {};
        // The ID card number of the handler.
        shared_ptr<string> mngOpIdentityCard_ {};
        // The email address of the handler.
        shared_ptr<string> mngOpMail_ {};
        // The mobile phone number of the handler.
        shared_ptr<string> mngOpMobile_ {};
        // The name of the handler.
        shared_ptr<string> mngOpName_ {};
        // The qualification ID.
        shared_ptr<string> qualificationId_ {};
        // The unique code of the query operation.
        shared_ptr<int64_t> resUniqueCode_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr && this->values_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<Data::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Data::Values>) };
      inline vector<Data::Values> getValues() { DARABONBA_PTR_GET(values_, vector<Data::Values>) };
      inline Data& setValues(const vector<Data::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Data& setValues(vector<Data::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
      // The registration file.
      shared_ptr<vector<Data::Values>> values_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHotlineTransferRegisterFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListHotlineTransferRegisterFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListHotlineTransferRegisterFileResponseBody::Data) };
    inline ListHotlineTransferRegisterFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListHotlineTransferRegisterFileResponseBody::Data) };
    inline ListHotlineTransferRegisterFileResponseBody& setData(const ListHotlineTransferRegisterFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHotlineTransferRegisterFileResponseBody& setData(ListHotlineTransferRegisterFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotlineTransferRegisterFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotlineTransferRegisterFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<ListHotlineTransferRegisterFileResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
