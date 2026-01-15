// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMAliyunResourceSyncResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMAliyunResourceSyncResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMAliyunResourceSyncResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetHDMAliyunResourceSyncResultResponseBody() = default ;
    GetHDMAliyunResourceSyncResultResponseBody(const GetHDMAliyunResourceSyncResultResponseBody &) = default ;
    GetHDMAliyunResourceSyncResultResponseBody(GetHDMAliyunResourceSyncResultResponseBody &&) = default ;
    GetHDMAliyunResourceSyncResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMAliyunResourceSyncResultResponseBody() = default ;
    GetHDMAliyunResourceSyncResultResponseBody& operator=(const GetHDMAliyunResourceSyncResultResponseBody &) = default ;
    GetHDMAliyunResourceSyncResultResponseBody& operator=(GetHDMAliyunResourceSyncResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(SubResults, subResults_);
        DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(SubResults, subResults_);
        DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
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
      class SubResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubResults& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceSyncSubResult, resourceSyncSubResult_);
        };
        friend void from_json(const Darabonba::Json& j, SubResults& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceSyncSubResult, resourceSyncSubResult_);
        };
        SubResults() = default ;
        SubResults(const SubResults &) = default ;
        SubResults(SubResults &&) = default ;
        SubResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubResults() = default ;
        SubResults& operator=(const SubResults &) = default ;
        SubResults& operator=(SubResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceSyncSubResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceSyncSubResult& obj) { 
            DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_TO_JSON(Success, success_);
            DARABONBA_PTR_TO_JSON(SyncCount, syncCount_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceSyncSubResult& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_FROM_JSON(Success, success_);
            DARABONBA_PTR_FROM_JSON(SyncCount, syncCount_);
          };
          ResourceSyncSubResult() = default ;
          ResourceSyncSubResult(const ResourceSyncSubResult &) = default ;
          ResourceSyncSubResult(ResourceSyncSubResult &&) = default ;
          ResourceSyncSubResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceSyncSubResult() = default ;
          ResourceSyncSubResult& operator=(const ResourceSyncSubResult &) = default ;
          ResourceSyncSubResult& operator=(ResourceSyncSubResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->resourceType_ == nullptr && this->success_ == nullptr && this->syncCount_ == nullptr; };
          // errMsg Field Functions 
          bool hasErrMsg() const { return this->errMsg_ != nullptr;};
          void deleteErrMsg() { this->errMsg_ = nullptr;};
          inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
          inline ResourceSyncSubResult& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline ResourceSyncSubResult& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          // success Field Functions 
          bool hasSuccess() const { return this->success_ != nullptr;};
          void deleteSuccess() { this->success_ = nullptr;};
          inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
          inline ResourceSyncSubResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


          // syncCount Field Functions 
          bool hasSyncCount() const { return this->syncCount_ != nullptr;};
          void deleteSyncCount() { this->syncCount_ = nullptr;};
          inline int32_t getSyncCount() const { DARABONBA_PTR_GET_DEFAULT(syncCount_, 0) };
          inline ResourceSyncSubResult& setSyncCount(int32_t syncCount) { DARABONBA_PTR_SET_VALUE(syncCount_, syncCount) };


        protected:
          shared_ptr<string> errMsg_ {};
          shared_ptr<string> resourceType_ {};
          shared_ptr<bool> success_ {};
          shared_ptr<int32_t> syncCount_ {};
        };

        virtual bool empty() const override { return this->resourceSyncSubResult_ == nullptr; };
        // resourceSyncSubResult Field Functions 
        bool hasResourceSyncSubResult() const { return this->resourceSyncSubResult_ != nullptr;};
        void deleteResourceSyncSubResult() { this->resourceSyncSubResult_ = nullptr;};
        inline const vector<SubResults::ResourceSyncSubResult> & getResourceSyncSubResult() const { DARABONBA_PTR_GET_CONST(resourceSyncSubResult_, vector<SubResults::ResourceSyncSubResult>) };
        inline vector<SubResults::ResourceSyncSubResult> getResourceSyncSubResult() { DARABONBA_PTR_GET(resourceSyncSubResult_, vector<SubResults::ResourceSyncSubResult>) };
        inline SubResults& setResourceSyncSubResult(const vector<SubResults::ResourceSyncSubResult> & resourceSyncSubResult) { DARABONBA_PTR_SET_VALUE(resourceSyncSubResult_, resourceSyncSubResult) };
        inline SubResults& setResourceSyncSubResult(vector<SubResults::ResourceSyncSubResult> && resourceSyncSubResult) { DARABONBA_PTR_SET_RVALUE(resourceSyncSubResult_, resourceSyncSubResult) };


      protected:
        shared_ptr<vector<SubResults::ResourceSyncSubResult>> resourceSyncSubResult_ {};
      };

      virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->results_ == nullptr && this->subResults_ == nullptr && this->syncStatus_ == nullptr; };
      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline string getResults() const { DARABONBA_PTR_GET_DEFAULT(results_, "") };
      inline Data& setResults(string results) { DARABONBA_PTR_SET_VALUE(results_, results) };


      // subResults Field Functions 
      bool hasSubResults() const { return this->subResults_ != nullptr;};
      void deleteSubResults() { this->subResults_ = nullptr;};
      inline const Data::SubResults & getSubResults() const { DARABONBA_PTR_GET_CONST(subResults_, Data::SubResults) };
      inline Data::SubResults getSubResults() { DARABONBA_PTR_GET(subResults_, Data::SubResults) };
      inline Data& setSubResults(const Data::SubResults & subResults) { DARABONBA_PTR_SET_VALUE(subResults_, subResults) };
      inline Data& setSubResults(Data::SubResults && subResults) { DARABONBA_PTR_SET_RVALUE(subResults_, subResults) };


      // syncStatus Field Functions 
      bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
      void deleteSyncStatus() { this->syncStatus_ = nullptr;};
      inline string getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
      inline Data& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    protected:
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> results_ {};
      shared_ptr<Data::SubResults> subResults_ {};
      shared_ptr<string> syncStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->synchro_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHDMAliyunResourceSyncResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHDMAliyunResourceSyncResultResponseBody::Data) };
    inline GetHDMAliyunResourceSyncResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHDMAliyunResourceSyncResultResponseBody::Data) };
    inline GetHDMAliyunResourceSyncResultResponseBody& setData(const GetHDMAliyunResourceSyncResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHDMAliyunResourceSyncResultResponseBody& setData(GetHDMAliyunResourceSyncResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline string getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBody& setSynchro(string synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHDMAliyunResourceSyncResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<string> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
