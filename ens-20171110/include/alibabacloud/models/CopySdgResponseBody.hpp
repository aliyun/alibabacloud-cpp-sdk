// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSDGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYSDGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySDGResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySDGResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySDGResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopySDGResponseBody() = default ;
    CopySDGResponseBody(const CopySDGResponseBody &) = default ;
    CopySDGResponseBody(CopySDGResponseBody &&) = default ;
    CopySDGResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySDGResponseBody() = default ;
    CopySDGResponseBody& operator=(const CopySDGResponseBody &) = default ;
    CopySDGResponseBody& operator=(CopySDGResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
          DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
          DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FailedItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailedItems& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, FailedItems& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          };
          FailedItems() = default ;
          FailedItems(const FailedItems &) = default ;
          FailedItems(FailedItems &&) = default ;
          FailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailedItems() = default ;
          FailedItems& operator=(const FailedItems &) = default ;
          FailedItems& operator=(FailedItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationRegionId_ == nullptr
        && this->errorMessage_ == nullptr; };
          // destinationRegionId Field Functions 
          bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
          void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
          inline string getDestinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
          inline FailedItems& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FailedItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          // The ID of the destination node.
          shared_ptr<string> destinationRegionId_ {};
          // The error message.
          shared_ptr<string> errorMessage_ {};
        };

        virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->failedItems_ == nullptr && this->successCount_ == nullptr; };
        // failedCount Field Functions 
        bool hasFailedCount() const { return this->failedCount_ != nullptr;};
        void deleteFailedCount() { this->failedCount_ = nullptr;};
        inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
        inline Result& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


        // failedItems Field Functions 
        bool hasFailedItems() const { return this->failedItems_ != nullptr;};
        void deleteFailedItems() { this->failedItems_ = nullptr;};
        inline const vector<Result::FailedItems> & getFailedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Result::FailedItems>) };
        inline vector<Result::FailedItems> getFailedItems() { DARABONBA_PTR_GET(failedItems_, vector<Result::FailedItems>) };
        inline Result& setFailedItems(const vector<Result::FailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
        inline Result& setFailedItems(vector<Result::FailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


        // successCount Field Functions 
        bool hasSuccessCount() const { return this->successCount_ != nullptr;};
        void deleteSuccessCount() { this->successCount_ = nullptr;};
        inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
        inline Result& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      protected:
        // The number of failed nodes.
        shared_ptr<int64_t> failedCount_ {};
        // Details of failed nodes.
        shared_ptr<vector<Result::FailedItems>> failedItems_ {};
        // The number of successful nodes.
        shared_ptr<int64_t> successCount_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The response message. Success is returned for a successful request.
      shared_ptr<string> message_ {};
      // The execution result of the synchronization request.
      shared_ptr<Data::Result> result_ {};
      // Indicates whether all tasks are successful. Valid values:
      // 
      // *   **true**: All tasks are successful.
      // *   **false**: Failed tasks exist.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CopySDGResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CopySDGResponseBody::Data) };
    inline CopySDGResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CopySDGResponseBody::Data) };
    inline CopySDGResponseBody& setData(const CopySDGResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CopySDGResponseBody& setData(CopySDGResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopySDGResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data object.
    shared_ptr<CopySDGResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
