// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SaveReceiverDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    SaveReceiverDetailResponseBody() = default ;
    SaveReceiverDetailResponseBody(const SaveReceiverDetailResponseBody &) = default ;
    SaveReceiverDetailResponseBody(SaveReceiverDetailResponseBody &&) = default ;
    SaveReceiverDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveReceiverDetailResponseBody() = default ;
    SaveReceiverDetailResponseBody& operator=(const SaveReceiverDetailResponseBody &) = default ;
    SaveReceiverDetailResponseBody& operator=(SaveReceiverDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
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
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->errMessage_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Detail& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline Detail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      protected:
        // Recipient address.
        shared_ptr<string> email_ {};
        shared_ptr<string> errMessage_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const vector<Data::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Data::Detail>) };
      inline vector<Data::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Data::Detail>) };
      inline Data& setDetail(const vector<Data::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Data& setDetail(vector<Data::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    protected:
      shared_ptr<vector<Data::Detail>> detail_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCount_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SaveReceiverDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SaveReceiverDetailResponseBody::Data) };
    inline SaveReceiverDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SaveReceiverDetailResponseBody::Data) };
    inline SaveReceiverDetailResponseBody& setData(const SaveReceiverDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SaveReceiverDetailResponseBody& setData(SaveReceiverDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int32_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
    inline SaveReceiverDetailResponseBody& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveReceiverDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline SaveReceiverDetailResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // List of recipient addresses that failed to upload.
    shared_ptr<SaveReceiverDetailResponseBody::Data> data_ {};
    // Number of errors.
    shared_ptr<int32_t> errorCount_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Number of successes.
    shared_ptr<int32_t> successCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
