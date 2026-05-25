// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETISSUESRESPONSEBODY_HPP_
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
  class GetIssuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssuesResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssuesResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIssuesResponseBody() = default ;
    GetIssuesResponseBody(const GetIssuesResponseBody &) = default ;
    GetIssuesResponseBody(GetIssuesResponseBody &&) = default ;
    GetIssuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssuesResponseBody() = default ;
    GetIssuesResponseBody& operator=(const GetIssuesResponseBody &) = default ;
    GetIssuesResponseBody& operator=(GetIssuesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AffectedUserCount, affectedUserCount_);
          DARABONBA_PTR_TO_JSON(AllocSizeMax, allocSizeMax_);
          DARABONBA_PTR_TO_JSON(AllocSizePct50, allocSizePct50_);
          DARABONBA_PTR_TO_JSON(AllocSizePct70, allocSizePct70_);
          DARABONBA_PTR_TO_JSON(AllocSizePct90, allocSizePct90_);
          DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
          DARABONBA_PTR_TO_JSON(DomScore, domScore_);
          DARABONBA_PTR_TO_JSON(ErrorColumn, errorColumn_);
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_TO_JSON(ErrorDeviceCount, errorDeviceCount_);
          DARABONBA_PTR_TO_JSON(ErrorDeviceRate, errorDeviceRate_);
          DARABONBA_PTR_TO_JSON(ErrorFileName, errorFileName_);
          DARABONBA_PTR_TO_JSON(ErrorLine, errorLine_);
          DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
          DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
          DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
          DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          DARABONBA_PTR_TO_JSON(FirstVersion, firstVersion_);
          DARABONBA_PTR_TO_JSON(LagCost, lagCost_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Stack, stack_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(AffectedUserCount, affectedUserCount_);
          DARABONBA_PTR_FROM_JSON(AllocSizeMax, allocSizeMax_);
          DARABONBA_PTR_FROM_JSON(AllocSizePct50, allocSizePct50_);
          DARABONBA_PTR_FROM_JSON(AllocSizePct70, allocSizePct70_);
          DARABONBA_PTR_FROM_JSON(AllocSizePct90, allocSizePct90_);
          DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
          DARABONBA_PTR_FROM_JSON(DomScore, domScore_);
          DARABONBA_PTR_FROM_JSON(ErrorColumn, errorColumn_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_FROM_JSON(ErrorDeviceCount, errorDeviceCount_);
          DARABONBA_PTR_FROM_JSON(ErrorDeviceRate, errorDeviceRate_);
          DARABONBA_PTR_FROM_JSON(ErrorFileName, errorFileName_);
          DARABONBA_PTR_FROM_JSON(ErrorLine, errorLine_);
          DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
          DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
          DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
          DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          DARABONBA_PTR_FROM_JSON(FirstVersion, firstVersion_);
          DARABONBA_PTR_FROM_JSON(LagCost, lagCost_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Stack, stack_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->affectedUserCount_ == nullptr
        && this->allocSizeMax_ == nullptr && this->allocSizePct50_ == nullptr && this->allocSizePct70_ == nullptr && this->allocSizePct90_ == nullptr && this->digestHash_ == nullptr
        && this->domScore_ == nullptr && this->errorColumn_ == nullptr && this->errorCount_ == nullptr && this->errorDeviceCount_ == nullptr && this->errorDeviceRate_ == nullptr
        && this->errorFileName_ == nullptr && this->errorLine_ == nullptr && this->errorName_ == nullptr && this->errorRate_ == nullptr && this->errorType_ == nullptr
        && this->eventTime_ == nullptr && this->firstVersion_ == nullptr && this->lagCost_ == nullptr && this->name_ == nullptr && this->reason_ == nullptr
        && this->stack_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
        // affectedUserCount Field Functions 
        bool hasAffectedUserCount() const { return this->affectedUserCount_ != nullptr;};
        void deleteAffectedUserCount() { this->affectedUserCount_ = nullptr;};
        inline int32_t getAffectedUserCount() const { DARABONBA_PTR_GET_DEFAULT(affectedUserCount_, 0) };
        inline Items& setAffectedUserCount(int32_t affectedUserCount) { DARABONBA_PTR_SET_VALUE(affectedUserCount_, affectedUserCount) };


        // allocSizeMax Field Functions 
        bool hasAllocSizeMax() const { return this->allocSizeMax_ != nullptr;};
        void deleteAllocSizeMax() { this->allocSizeMax_ = nullptr;};
        inline int64_t getAllocSizeMax() const { DARABONBA_PTR_GET_DEFAULT(allocSizeMax_, 0L) };
        inline Items& setAllocSizeMax(int64_t allocSizeMax) { DARABONBA_PTR_SET_VALUE(allocSizeMax_, allocSizeMax) };


        // allocSizePct50 Field Functions 
        bool hasAllocSizePct50() const { return this->allocSizePct50_ != nullptr;};
        void deleteAllocSizePct50() { this->allocSizePct50_ = nullptr;};
        inline int64_t getAllocSizePct50() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct50_, 0L) };
        inline Items& setAllocSizePct50(int64_t allocSizePct50) { DARABONBA_PTR_SET_VALUE(allocSizePct50_, allocSizePct50) };


        // allocSizePct70 Field Functions 
        bool hasAllocSizePct70() const { return this->allocSizePct70_ != nullptr;};
        void deleteAllocSizePct70() { this->allocSizePct70_ = nullptr;};
        inline int64_t getAllocSizePct70() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct70_, 0L) };
        inline Items& setAllocSizePct70(int64_t allocSizePct70) { DARABONBA_PTR_SET_VALUE(allocSizePct70_, allocSizePct70) };


        // allocSizePct90 Field Functions 
        bool hasAllocSizePct90() const { return this->allocSizePct90_ != nullptr;};
        void deleteAllocSizePct90() { this->allocSizePct90_ = nullptr;};
        inline int64_t getAllocSizePct90() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct90_, 0L) };
        inline Items& setAllocSizePct90(int64_t allocSizePct90) { DARABONBA_PTR_SET_VALUE(allocSizePct90_, allocSizePct90) };


        // digestHash Field Functions 
        bool hasDigestHash() const { return this->digestHash_ != nullptr;};
        void deleteDigestHash() { this->digestHash_ = nullptr;};
        inline string getDigestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
        inline Items& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


        // domScore Field Functions 
        bool hasDomScore() const { return this->domScore_ != nullptr;};
        void deleteDomScore() { this->domScore_ = nullptr;};
        inline string getDomScore() const { DARABONBA_PTR_GET_DEFAULT(domScore_, "") };
        inline Items& setDomScore(string domScore) { DARABONBA_PTR_SET_VALUE(domScore_, domScore) };


        // errorColumn Field Functions 
        bool hasErrorColumn() const { return this->errorColumn_ != nullptr;};
        void deleteErrorColumn() { this->errorColumn_ = nullptr;};
        inline int32_t getErrorColumn() const { DARABONBA_PTR_GET_DEFAULT(errorColumn_, 0) };
        inline Items& setErrorColumn(int32_t errorColumn) { DARABONBA_PTR_SET_VALUE(errorColumn_, errorColumn) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int32_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
        inline Items& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // errorDeviceCount Field Functions 
        bool hasErrorDeviceCount() const { return this->errorDeviceCount_ != nullptr;};
        void deleteErrorDeviceCount() { this->errorDeviceCount_ = nullptr;};
        inline int32_t getErrorDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceCount_, 0) };
        inline Items& setErrorDeviceCount(int32_t errorDeviceCount) { DARABONBA_PTR_SET_VALUE(errorDeviceCount_, errorDeviceCount) };


        // errorDeviceRate Field Functions 
        bool hasErrorDeviceRate() const { return this->errorDeviceRate_ != nullptr;};
        void deleteErrorDeviceRate() { this->errorDeviceRate_ = nullptr;};
        inline double getErrorDeviceRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceRate_, 0.0) };
        inline Items& setErrorDeviceRate(double errorDeviceRate) { DARABONBA_PTR_SET_VALUE(errorDeviceRate_, errorDeviceRate) };


        // errorFileName Field Functions 
        bool hasErrorFileName() const { return this->errorFileName_ != nullptr;};
        void deleteErrorFileName() { this->errorFileName_ = nullptr;};
        inline string getErrorFileName() const { DARABONBA_PTR_GET_DEFAULT(errorFileName_, "") };
        inline Items& setErrorFileName(string errorFileName) { DARABONBA_PTR_SET_VALUE(errorFileName_, errorFileName) };


        // errorLine Field Functions 
        bool hasErrorLine() const { return this->errorLine_ != nullptr;};
        void deleteErrorLine() { this->errorLine_ = nullptr;};
        inline int32_t getErrorLine() const { DARABONBA_PTR_GET_DEFAULT(errorLine_, 0) };
        inline Items& setErrorLine(int32_t errorLine) { DARABONBA_PTR_SET_VALUE(errorLine_, errorLine) };


        // errorName Field Functions 
        bool hasErrorName() const { return this->errorName_ != nullptr;};
        void deleteErrorName() { this->errorName_ = nullptr;};
        inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
        inline Items& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


        // errorRate Field Functions 
        bool hasErrorRate() const { return this->errorRate_ != nullptr;};
        void deleteErrorRate() { this->errorRate_ = nullptr;};
        inline double getErrorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, 0.0) };
        inline Items& setErrorRate(double errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


        // errorType Field Functions 
        bool hasErrorType() const { return this->errorType_ != nullptr;};
        void deleteErrorType() { this->errorType_ = nullptr;};
        inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
        inline Items& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


        // eventTime Field Functions 
        bool hasEventTime() const { return this->eventTime_ != nullptr;};
        void deleteEventTime() { this->eventTime_ = nullptr;};
        inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
        inline Items& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // firstVersion Field Functions 
        bool hasFirstVersion() const { return this->firstVersion_ != nullptr;};
        void deleteFirstVersion() { this->firstVersion_ = nullptr;};
        inline string getFirstVersion() const { DARABONBA_PTR_GET_DEFAULT(firstVersion_, "") };
        inline Items& setFirstVersion(string firstVersion) { DARABONBA_PTR_SET_VALUE(firstVersion_, firstVersion) };


        // lagCost Field Functions 
        bool hasLagCost() const { return this->lagCost_ != nullptr;};
        void deleteLagCost() { this->lagCost_ = nullptr;};
        inline int64_t getLagCost() const { DARABONBA_PTR_GET_DEFAULT(lagCost_, 0L) };
        inline Items& setLagCost(int64_t lagCost) { DARABONBA_PTR_SET_VALUE(lagCost_, lagCost) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Items& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // stack Field Functions 
        bool hasStack() const { return this->stack_ != nullptr;};
        void deleteStack() { this->stack_ = nullptr;};
        inline string getStack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
        inline Items& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Items& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Items& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> affectedUserCount_ {};
        shared_ptr<int64_t> allocSizeMax_ {};
        shared_ptr<int64_t> allocSizePct50_ {};
        shared_ptr<int64_t> allocSizePct70_ {};
        shared_ptr<int64_t> allocSizePct90_ {};
        shared_ptr<string> digestHash_ {};
        shared_ptr<string> domScore_ {};
        shared_ptr<int32_t> errorColumn_ {};
        shared_ptr<int32_t> errorCount_ {};
        shared_ptr<int32_t> errorDeviceCount_ {};
        shared_ptr<double> errorDeviceRate_ {};
        shared_ptr<string> errorFileName_ {};
        shared_ptr<int32_t> errorLine_ {};
        shared_ptr<string> errorName_ {};
        shared_ptr<double> errorRate_ {};
        shared_ptr<string> errorType_ {};
        shared_ptr<string> eventTime_ {};
        shared_ptr<string> firstVersion_ {};
        shared_ptr<int64_t> lagCost_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<string> stack_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> type_ {};
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
    inline GetIssuesResponseBody& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline GetIssuesResponseBody& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline GetIssuesResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIssuesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetIssuesResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetIssuesResponseBody::Model) };
    inline GetIssuesResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetIssuesResponseBody::Model) };
    inline GetIssuesResponseBody& setModel(const GetIssuesResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetIssuesResponseBody& setModel(GetIssuesResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIssuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIssuesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Args
    Darabonba::Json args_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetIssuesResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
