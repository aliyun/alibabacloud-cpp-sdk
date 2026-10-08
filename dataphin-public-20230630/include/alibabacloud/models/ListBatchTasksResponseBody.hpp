// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBatchTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBatchTasksResponseBody() = default ;
    ListBatchTasksResponseBody(const ListBatchTasksResponseBody &) = default ;
    ListBatchTasksResponseBody(ListBatchTasksResponseBody &&) = default ;
    ListBatchTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchTasksResponseBody() = default ;
    ListBatchTasksResponseBody& operator=(const ListBatchTasksResponseBody &) = default ;
    ListBatchTasksResponseBody& operator=(ListBatchTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResultData, resultData_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResultData, resultData_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultData& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(LastSubmitStatus, lastSubmitStatus_);
          DARABONBA_PTR_TO_JSON(LastVersion, lastVersion_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(Published, published_);
          DARABONBA_PTR_TO_JSON(Released, released_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ResultData& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(LastSubmitStatus, lastSubmitStatus_);
          DARABONBA_PTR_FROM_JSON(LastVersion, lastVersion_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(Published, published_);
          DARABONBA_PTR_FROM_JSON(Released, released_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ResultData() = default ;
        ResultData(const ResultData &) = default ;
        ResultData(ResultData &&) = default ;
        ResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultData() = default ;
        ResultData& operator=(const ResultData &) = default ;
        ResultData& operator=(ResultData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->directory_ == nullptr && this->fileId_ == nullptr && this->lastSubmitStatus_ == nullptr && this->lastVersion_ == nullptr && this->name_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeOutputNameList_ == nullptr && this->nodeType_ == nullptr && this->operatorType_ == nullptr
        && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr && this->published_ == nullptr && this->released_ == nullptr && this->status_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ResultData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline ResultData& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline ResultData& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // lastSubmitStatus Field Functions 
        bool hasLastSubmitStatus() const { return this->lastSubmitStatus_ != nullptr;};
        void deleteLastSubmitStatus() { this->lastSubmitStatus_ = nullptr;};
        inline string getLastSubmitStatus() const { DARABONBA_PTR_GET_DEFAULT(lastSubmitStatus_, "") };
        inline ResultData& setLastSubmitStatus(string lastSubmitStatus) { DARABONBA_PTR_SET_VALUE(lastSubmitStatus_, lastSubmitStatus) };


        // lastVersion Field Functions 
        bool hasLastVersion() const { return this->lastVersion_ != nullptr;};
        void deleteLastVersion() { this->lastVersion_ = nullptr;};
        inline int32_t getLastVersion() const { DARABONBA_PTR_GET_DEFAULT(lastVersion_, 0) };
        inline ResultData& setLastVersion(int32_t lastVersion) { DARABONBA_PTR_SET_VALUE(lastVersion_, lastVersion) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ResultData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline ResultData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeOutputNameList Field Functions 
        bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
        void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
        inline const vector<string> & getNodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
        inline vector<string> getNodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
        inline ResultData& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
        inline ResultData& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline int32_t getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
        inline ResultData& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // operatorType Field Functions 
        bool hasOperatorType() const { return this->operatorType_ != nullptr;};
        void deleteOperatorType() { this->operatorType_ = nullptr;};
        inline int32_t getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, 0) };
        inline ResultData& setOperatorType(int32_t operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline ResultData& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
        inline ResultData& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // published Field Functions 
        bool hasPublished() const { return this->published_ != nullptr;};
        void deletePublished() { this->published_ = nullptr;};
        inline bool getPublished() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
        inline ResultData& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


        // released Field Functions 
        bool hasReleased() const { return this->released_ != nullptr;};
        void deleteReleased() { this->released_ = nullptr;};
        inline bool getReleased() const { DARABONBA_PTR_GET_DEFAULT(released_, false) };
        inline ResultData& setReleased(bool released) { DARABONBA_PTR_SET_VALUE(released_, released) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResultData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> directory_ {};
        shared_ptr<int64_t> fileId_ {};
        shared_ptr<string> lastSubmitStatus_ {};
        shared_ptr<int32_t> lastVersion_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeName_ {};
        shared_ptr<vector<string>> nodeOutputNameList_ {};
        shared_ptr<int32_t> nodeType_ {};
        shared_ptr<int32_t> operatorType_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<bool> published_ {};
        shared_ptr<bool> released_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->resultData_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageResult& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline PageResult& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resultData Field Functions 
      bool hasResultData() const { return this->resultData_ != nullptr;};
      void deleteResultData() { this->resultData_ = nullptr;};
      inline const vector<PageResult::ResultData> & getResultData() const { DARABONBA_PTR_GET_CONST(resultData_, vector<PageResult::ResultData>) };
      inline vector<PageResult::ResultData> getResultData() { DARABONBA_PTR_GET(resultData_, vector<PageResult::ResultData>) };
      inline PageResult& setResultData(const vector<PageResult::ResultData> & resultData) { DARABONBA_PTR_SET_VALUE(resultData_, resultData) };
      inline PageResult& setResultData(vector<PageResult::ResultData> && resultData) { DARABONBA_PTR_SET_RVALUE(resultData_, resultData) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<PageResult::ResultData>> resultData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBatchTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBatchTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBatchTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListBatchTasksResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListBatchTasksResponseBody::PageResult) };
    inline ListBatchTasksResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListBatchTasksResponseBody::PageResult) };
    inline ListBatchTasksResponseBody& setPageResult(const ListBatchTasksResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListBatchTasksResponseBody& setPageResult(ListBatchTasksResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBatchTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBatchTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListBatchTasksResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
