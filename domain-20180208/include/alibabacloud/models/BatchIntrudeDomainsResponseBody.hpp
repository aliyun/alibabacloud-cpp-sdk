// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchIntrudeDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchIntrudeDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchIntrudeDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchIntrudeDomainsResponseBody() = default ;
    BatchIntrudeDomainsResponseBody(const BatchIntrudeDomainsResponseBody &) = default ;
    BatchIntrudeDomainsResponseBody(BatchIntrudeDomainsResponseBody &&) = default ;
    BatchIntrudeDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchIntrudeDomainsResponseBody() = default ;
    BatchIntrudeDomainsResponseBody& operator=(const BatchIntrudeDomainsResponseBody &) = default ;
    BatchIntrudeDomainsResponseBody& operator=(BatchIntrudeDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
        DARABONBA_PTR_TO_JSON(FailureList, failureList_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(SuccessList, successList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
        DARABONBA_PTR_FROM_JSON(FailureList, failureList_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
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
      class SuccessList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessList& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessList& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        SuccessList() = default ;
        SuccessList(const SuccessList &) = default ;
        SuccessList(SuccessList &&) = default ;
        SuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessList() = default ;
        SuccessList& operator=(const SuccessList &) = default ;
        SuccessList& operator=(SuccessList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->success_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline SuccessList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline SuccessList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline SuccessList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline SuccessList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<bool> success_ {};
      };

      class FailureList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailureList& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, FailureList& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        FailureList() = default ;
        FailureList(const FailureList &) = default ;
        FailureList(FailureList &&) = default ;
        FailureList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailureList() = default ;
        FailureList& operator=(const FailureList &) = default ;
        FailureList& operator=(FailureList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->success_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline FailureList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline FailureList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline FailureList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline FailureList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->failureCount_ == nullptr
        && this->failureList_ == nullptr && this->successCount_ == nullptr && this->successList_ == nullptr; };
      // failureCount Field Functions 
      bool hasFailureCount() const { return this->failureCount_ != nullptr;};
      void deleteFailureCount() { this->failureCount_ = nullptr;};
      inline int32_t getFailureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
      inline Data& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


      // failureList Field Functions 
      bool hasFailureList() const { return this->failureList_ != nullptr;};
      void deleteFailureList() { this->failureList_ = nullptr;};
      inline const vector<Data::FailureList> & getFailureList() const { DARABONBA_PTR_GET_CONST(failureList_, vector<Data::FailureList>) };
      inline vector<Data::FailureList> getFailureList() { DARABONBA_PTR_GET(failureList_, vector<Data::FailureList>) };
      inline Data& setFailureList(const vector<Data::FailureList> & failureList) { DARABONBA_PTR_SET_VALUE(failureList_, failureList) };
      inline Data& setFailureList(vector<Data::FailureList> && failureList) { DARABONBA_PTR_SET_RVALUE(failureList_, failureList) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // successList Field Functions 
      bool hasSuccessList() const { return this->successList_ != nullptr;};
      void deleteSuccessList() { this->successList_ = nullptr;};
      inline const vector<Data::SuccessList> & getSuccessList() const { DARABONBA_PTR_GET_CONST(successList_, vector<Data::SuccessList>) };
      inline vector<Data::SuccessList> getSuccessList() { DARABONBA_PTR_GET(successList_, vector<Data::SuccessList>) };
      inline Data& setSuccessList(const vector<Data::SuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
      inline Data& setSuccessList(vector<Data::SuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


    protected:
      shared_ptr<int32_t> failureCount_ {};
      shared_ptr<vector<Data::FailureList>> failureList_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<vector<Data::SuccessList>> successList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchIntrudeDomainsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchIntrudeDomainsResponseBody::Data) };
    inline BatchIntrudeDomainsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchIntrudeDomainsResponseBody::Data) };
    inline BatchIntrudeDomainsResponseBody& setData(const BatchIntrudeDomainsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchIntrudeDomainsResponseBody& setData(BatchIntrudeDomainsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchIntrudeDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<BatchIntrudeDomainsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
