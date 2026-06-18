// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTNEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTNEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class PageQueryAgentListNewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryAgentListNewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryAgentListNewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PageQueryAgentListNewResponseBody() = default ;
    PageQueryAgentListNewResponseBody(const PageQueryAgentListNewResponseBody &) = default ;
    PageQueryAgentListNewResponseBody(PageQueryAgentListNewResponseBody &&) = default ;
    PageQueryAgentListNewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryAgentListNewResponseBody() = default ;
    PageQueryAgentListNewResponseBody& operator=(const PageQueryAgentListNewResponseBody &) = default ;
    PageQueryAgentListNewResponseBody& operator=(PageQueryAgentListNewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentMode, agentMode_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DeployBranchId, deployBranchId_);
          DARABONBA_PTR_TO_JSON(DeployBranchName, deployBranchName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EffectiveVersionId, effectiveVersionId_);
          DARABONBA_PTR_TO_JSON(EffectiveVersionName, effectiveVersionName_);
          DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_TO_JSON(LatestPublishTime, latestPublishTime_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentMode, agentMode_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DeployBranchId, deployBranchId_);
          DARABONBA_PTR_FROM_JSON(DeployBranchName, deployBranchName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EffectiveVersionId, effectiveVersionId_);
          DARABONBA_PTR_FROM_JSON(EffectiveVersionName, effectiveVersionName_);
          DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_FROM_JSON(LatestPublishTime, latestPublishTime_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentMode_ == nullptr && this->agentName_ == nullptr && this->applicationCode_ == nullptr && this->createTime_ == nullptr && this->deployBranchId_ == nullptr
        && this->deployBranchName_ == nullptr && this->description_ == nullptr && this->effectiveVersionId_ == nullptr && this->effectiveVersionName_ == nullptr && this->isAvailable_ == nullptr
        && this->latestPublishTime_ == nullptr && this->modifyTime_ == nullptr && this->scene_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
        inline List& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentMode Field Functions 
        bool hasAgentMode() const { return this->agentMode_ != nullptr;};
        void deleteAgentMode() { this->agentMode_ = nullptr;};
        inline int64_t getAgentMode() const { DARABONBA_PTR_GET_DEFAULT(agentMode_, 0L) };
        inline List& setAgentMode(int64_t agentMode) { DARABONBA_PTR_SET_VALUE(agentMode_, agentMode) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // applicationCode Field Functions 
        bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
        void deleteApplicationCode() { this->applicationCode_ = nullptr;};
        inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
        inline List& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // deployBranchId Field Functions 
        bool hasDeployBranchId() const { return this->deployBranchId_ != nullptr;};
        void deleteDeployBranchId() { this->deployBranchId_ = nullptr;};
        inline int64_t getDeployBranchId() const { DARABONBA_PTR_GET_DEFAULT(deployBranchId_, 0L) };
        inline List& setDeployBranchId(int64_t deployBranchId) { DARABONBA_PTR_SET_VALUE(deployBranchId_, deployBranchId) };


        // deployBranchName Field Functions 
        bool hasDeployBranchName() const { return this->deployBranchName_ != nullptr;};
        void deleteDeployBranchName() { this->deployBranchName_ = nullptr;};
        inline string getDeployBranchName() const { DARABONBA_PTR_GET_DEFAULT(deployBranchName_, "") };
        inline List& setDeployBranchName(string deployBranchName) { DARABONBA_PTR_SET_VALUE(deployBranchName_, deployBranchName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectiveVersionId Field Functions 
        bool hasEffectiveVersionId() const { return this->effectiveVersionId_ != nullptr;};
        void deleteEffectiveVersionId() { this->effectiveVersionId_ = nullptr;};
        inline int64_t getEffectiveVersionId() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersionId_, 0L) };
        inline List& setEffectiveVersionId(int64_t effectiveVersionId) { DARABONBA_PTR_SET_VALUE(effectiveVersionId_, effectiveVersionId) };


        // effectiveVersionName Field Functions 
        bool hasEffectiveVersionName() const { return this->effectiveVersionName_ != nullptr;};
        void deleteEffectiveVersionName() { this->effectiveVersionName_ = nullptr;};
        inline string getEffectiveVersionName() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersionName_, "") };
        inline List& setEffectiveVersionName(string effectiveVersionName) { DARABONBA_PTR_SET_VALUE(effectiveVersionName_, effectiveVersionName) };


        // isAvailable Field Functions 
        bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
        void deleteIsAvailable() { this->isAvailable_ = nullptr;};
        inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
        inline List& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


        // latestPublishTime Field Functions 
        bool hasLatestPublishTime() const { return this->latestPublishTime_ != nullptr;};
        void deleteLatestPublishTime() { this->latestPublishTime_ = nullptr;};
        inline string getLatestPublishTime() const { DARABONBA_PTR_GET_DEFAULT(latestPublishTime_, "") };
        inline List& setLatestPublishTime(string latestPublishTime) { DARABONBA_PTR_SET_VALUE(latestPublishTime_, latestPublishTime) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline List& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline List& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      protected:
        // The agent ID.
        shared_ptr<int64_t> agentId_ {};
        // The agent creation mode. Valid values:<br>
        // `0`: Prompt mode (`PROMPT`). `1`: Conversation flow mode (`CONVERSATION`).<br>
        shared_ptr<int64_t> agentMode_ {};
        // The agent name.
        shared_ptr<string> agentName_ {};
        // The application code.
        shared_ptr<string> applicationCode_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The deployment branch ID.
        shared_ptr<int64_t> deployBranchId_ {};
        // The effective branch name.
        shared_ptr<string> deployBranchName_ {};
        // The agent description.
        shared_ptr<string> description_ {};
        // The effective version ID.
        shared_ptr<int64_t> effectiveVersionId_ {};
        // The effective version name.
        shared_ptr<string> effectiveVersionName_ {};
        // Specifies whether the agent can be used for outbound calls. A value of `true` means the agent\\"s current deployment branch has a published version.
        shared_ptr<bool> isAvailable_ {};
        // The most recent publish time.
        shared_ptr<string> latestPublishTime_ {};
        // The last modified time.
        shared_ptr<string> modifyTime_ {};
        // The scene.
        shared_ptr<string> scene_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The data list.
      shared_ptr<vector<Data::List>> list_ {};
      // The current page number.
      shared_ptr<int64_t> pageNo_ {};
      // The page size.
      shared_ptr<int64_t> pageSize_ {};
      // The total count.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline PageQueryAgentListNewResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PageQueryAgentListNewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PageQueryAgentListNewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PageQueryAgentListNewResponseBody::Data) };
    inline PageQueryAgentListNewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PageQueryAgentListNewResponseBody::Data) };
    inline PageQueryAgentListNewResponseBody& setData(const PageQueryAgentListNewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PageQueryAgentListNewResponseBody& setData(PageQueryAgentListNewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PageQueryAgentListNewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageQueryAgentListNewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PageQueryAgentListNewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The access denied detail.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<PageQueryAgentListNewResponseBody::Data> data_ {};
    // The message that describes the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Specifies whether the request succeeded.
    // 
    // - **`true`**: The request succeeded.
    // 
    // - **`false`**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
