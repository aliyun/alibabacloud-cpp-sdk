// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMdsCubeTasksResponseBody() = default ;
    ListMdsCubeTasksResponseBody(const ListMdsCubeTasksResponseBody &) = default ;
    ListMdsCubeTasksResponseBody(ListMdsCubeTasksResponseBody &&) = default ;
    ListMdsCubeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeTasksResponseBody() = default ;
    ListMdsCubeTasksResponseBody& operator=(const ListMdsCubeTasksResponseBody &) = default ;
    ListMdsCubeTasksResponseBody& operator=(ListMdsCubeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
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
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(AppCode, appCode_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
            DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
            DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
            DARABONBA_PTR_TO_JSON(PublishType, publishType_);
            DARABONBA_PTR_TO_JSON(ResourceVersion, resourceVersion_);
            DARABONBA_PTR_TO_JSON(TaskDesc, taskDesc_);
            DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
            DARABONBA_PTR_TO_JSON(TemplateResourceId, templateResourceId_);
            DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
            DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
            DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
            DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
            DARABONBA_PTR_FROM_JSON(ResourceVersion, resourceVersion_);
            DARABONBA_PTR_FROM_JSON(TaskDesc, taskDesc_);
            DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
            DARABONBA_PTR_FROM_JSON(TemplateResourceId, templateResourceId_);
            DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->greyConfigInfo_ == nullptr && this->greyEndtimeData_ == nullptr && this->greyNum_ == nullptr
        && this->id_ == nullptr && this->operator_ == nullptr && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->resourceVersion_ == nullptr
        && this->taskDesc_ == nullptr && this->taskStatus_ == nullptr && this->templateId_ == nullptr && this->templateResourceId_ == nullptr && this->whitelistIds_ == nullptr; };
          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline Content& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline Content& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // greyConfigInfo Field Functions 
          bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
          void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
          inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
          inline Content& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


          // greyEndtimeData Field Functions 
          bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
          void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
          inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
          inline Content& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


          // greyNum Field Functions 
          bool hasGreyNum() const { return this->greyNum_ != nullptr;};
          void deleteGreyNum() { this->greyNum_ = nullptr;};
          inline int32_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
          inline Content& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Content& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Content& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // publishMode Field Functions 
          bool hasPublishMode() const { return this->publishMode_ != nullptr;};
          void deletePublishMode() { this->publishMode_ = nullptr;};
          inline int32_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
          inline Content& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


          // publishType Field Functions 
          bool hasPublishType() const { return this->publishType_ != nullptr;};
          void deletePublishType() { this->publishType_ = nullptr;};
          inline int32_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
          inline Content& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


          // resourceVersion Field Functions 
          bool hasResourceVersion() const { return this->resourceVersion_ != nullptr;};
          void deleteResourceVersion() { this->resourceVersion_ = nullptr;};
          inline string getResourceVersion() const { DARABONBA_PTR_GET_DEFAULT(resourceVersion_, "") };
          inline Content& setResourceVersion(string resourceVersion) { DARABONBA_PTR_SET_VALUE(resourceVersion_, resourceVersion) };


          // taskDesc Field Functions 
          bool hasTaskDesc() const { return this->taskDesc_ != nullptr;};
          void deleteTaskDesc() { this->taskDesc_ = nullptr;};
          inline string getTaskDesc() const { DARABONBA_PTR_GET_DEFAULT(taskDesc_, "") };
          inline Content& setTaskDesc(string taskDesc) { DARABONBA_PTR_SET_VALUE(taskDesc_, taskDesc) };


          // taskStatus Field Functions 
          bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
          void deleteTaskStatus() { this->taskStatus_ = nullptr;};
          inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
          inline Content& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Content& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


          // templateResourceId Field Functions 
          bool hasTemplateResourceId() const { return this->templateResourceId_ != nullptr;};
          void deleteTemplateResourceId() { this->templateResourceId_ = nullptr;};
          inline int64_t getTemplateResourceId() const { DARABONBA_PTR_GET_DEFAULT(templateResourceId_, 0L) };
          inline Content& setTemplateResourceId(int64_t templateResourceId) { DARABONBA_PTR_SET_VALUE(templateResourceId_, templateResourceId) };


          // whitelistIds Field Functions 
          bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
          void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
          inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
          inline Content& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


        protected:
          shared_ptr<string> appCode_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<string> greyConfigInfo_ {};
          shared_ptr<string> greyEndtimeData_ {};
          shared_ptr<int32_t> greyNum_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<int32_t> publishMode_ {};
          shared_ptr<int32_t> publishType_ {};
          shared_ptr<string> resourceVersion_ {};
          shared_ptr<string> taskDesc_ {};
          shared_ptr<int32_t> taskStatus_ {};
          shared_ptr<string> templateId_ {};
          shared_ptr<int64_t> templateResourceId_ {};
          shared_ptr<string> whitelistIds_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
        inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
        inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline Data& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<vector<Data::Content>> content_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<string> resultMsg_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMdsCubeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMdsCubeTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const ListMdsCubeTasksResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, ListMdsCubeTasksResponseBody::ResultContent) };
    inline ListMdsCubeTasksResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, ListMdsCubeTasksResponseBody::ResultContent) };
    inline ListMdsCubeTasksResponseBody& setResultContent(const ListMdsCubeTasksResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline ListMdsCubeTasksResponseBody& setResultContent(ListMdsCubeTasksResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMdsCubeTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<ListMdsCubeTasksResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
