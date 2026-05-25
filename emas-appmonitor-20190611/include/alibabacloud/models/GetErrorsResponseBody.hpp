// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetErrorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorsResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorsResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetErrorsResponseBody() = default ;
    GetErrorsResponseBody(const GetErrorsResponseBody &) = default ;
    GetErrorsResponseBody(GetErrorsResponseBody &&) = default ;
    GetErrorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorsResponseBody() = default ;
    GetErrorsResponseBody& operator=(const GetErrorsResponseBody &) = default ;
    GetErrorsResponseBody& operator=(GetErrorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(ClientTime, clientTime_);
          DARABONBA_PTR_TO_JSON(Did, did_);
          DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
          DARABONBA_PTR_TO_JSON(Utdid, utdid_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientTime, clientTime_);
          DARABONBA_PTR_FROM_JSON(Did, did_);
          DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
          DARABONBA_PTR_FROM_JSON(Utdid, utdid_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientTime_ == nullptr
        && this->did_ == nullptr && this->digestHash_ == nullptr && this->utdid_ == nullptr && this->uuid_ == nullptr; };
        // clientTime Field Functions 
        bool hasClientTime() const { return this->clientTime_ != nullptr;};
        void deleteClientTime() { this->clientTime_ = nullptr;};
        inline int64_t getClientTime() const { DARABONBA_PTR_GET_DEFAULT(clientTime_, 0L) };
        inline Items& setClientTime(int64_t clientTime) { DARABONBA_PTR_SET_VALUE(clientTime_, clientTime) };


        // did Field Functions 
        bool hasDid() const { return this->did_ != nullptr;};
        void deleteDid() { this->did_ = nullptr;};
        inline string getDid() const { DARABONBA_PTR_GET_DEFAULT(did_, "") };
        inline Items& setDid(string did) { DARABONBA_PTR_SET_VALUE(did_, did) };


        // digestHash Field Functions 
        bool hasDigestHash() const { return this->digestHash_ != nullptr;};
        void deleteDigestHash() { this->digestHash_ = nullptr;};
        inline string getDigestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
        inline Items& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


        // utdid Field Functions 
        bool hasUtdid() const { return this->utdid_ != nullptr;};
        void deleteUtdid() { this->utdid_ = nullptr;};
        inline string getUtdid() const { DARABONBA_PTR_GET_DEFAULT(utdid_, "") };
        inline Items& setUtdid(string utdid) { DARABONBA_PTR_SET_VALUE(utdid_, utdid) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline Items& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<int64_t> clientTime_ {};
        shared_ptr<string> did_ {};
        shared_ptr<string> digestHash_ {};
        // Utdid
        shared_ptr<string> utdid_ {};
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pages_ == nullptr && this->total_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Model::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Model::Items>) };
      inline vector<Model::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Model::Items>) };
      inline Model& setItems(const vector<Model::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Model& setItems(vector<Model::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Model& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Model& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline int32_t getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0) };
      inline Model& setPages(int32_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Model& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Model::Items>> items_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> pages_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->args_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & getArgs() const { DARABONBA_GET(args_) };
    Darabonba::Json & getArgs() { DARABONBA_GET(args_) };
    inline GetErrorsResponseBody& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline GetErrorsResponseBody& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline GetErrorsResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErrorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetErrorsResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetErrorsResponseBody::Model) };
    inline GetErrorsResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetErrorsResponseBody::Model) };
    inline GetErrorsResponseBody& setModel(const GetErrorsResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetErrorsResponseBody& setModel(GetErrorsResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErrorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetErrorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Args
    Darabonba::Json args_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetErrorsResponseBody::Model> model_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
