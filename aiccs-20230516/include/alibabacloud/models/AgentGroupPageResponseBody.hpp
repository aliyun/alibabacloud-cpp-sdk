// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTGROUPPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AGENTGROUPPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AgentGroupPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentGroupPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, AgentGroupPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    AgentGroupPageResponseBody() = default ;
    AgentGroupPageResponseBody(const AgentGroupPageResponseBody &) = default ;
    AgentGroupPageResponseBody(AgentGroupPageResponseBody &&) = default ;
    AgentGroupPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentGroupPageResponseBody() = default ;
    AgentGroupPageResponseBody& operator=(const AgentGroupPageResponseBody &) = default ;
    AgentGroupPageResponseBody& operator=(AgentGroupPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Current, current_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Current, current_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(AgentGroupId, agentGroupId_);
          DARABONBA_PTR_TO_JSON(AgentGroupName, agentGroupName_);
          DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentGroupId, agentGroupId_);
          DARABONBA_PTR_FROM_JSON(AgentGroupName, agentGroupName_);
          DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentGroupId_ == nullptr
        && this->agentGroupName_ == nullptr && this->agentIds_ == nullptr && this->createTime_ == nullptr; };
        // agentGroupId Field Functions 
        bool hasAgentGroupId() const { return this->agentGroupId_ != nullptr;};
        void deleteAgentGroupId() { this->agentGroupId_ = nullptr;};
        inline int64_t getAgentGroupId() const { DARABONBA_PTR_GET_DEFAULT(agentGroupId_, 0L) };
        inline Records& setAgentGroupId(int64_t agentGroupId) { DARABONBA_PTR_SET_VALUE(agentGroupId_, agentGroupId) };


        // agentGroupName Field Functions 
        bool hasAgentGroupName() const { return this->agentGroupName_ != nullptr;};
        void deleteAgentGroupName() { this->agentGroupName_ = nullptr;};
        inline string getAgentGroupName() const { DARABONBA_PTR_GET_DEFAULT(agentGroupName_, "") };
        inline Records& setAgentGroupName(string agentGroupName) { DARABONBA_PTR_SET_VALUE(agentGroupName_, agentGroupName) };


        // agentIds Field Functions 
        bool hasAgentIds() const { return this->agentIds_ != nullptr;};
        void deleteAgentIds() { this->agentIds_ = nullptr;};
        inline const vector<int64_t> & getAgentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<int64_t>) };
        inline vector<int64_t> getAgentIds() { DARABONBA_PTR_GET(agentIds_, vector<int64_t>) };
        inline Records& setAgentIds(const vector<int64_t> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
        inline Records& setAgentIds(vector<int64_t> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Records& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      protected:
        // 坐席组ID
        shared_ptr<int64_t> agentGroupId_ {};
        // 坐席组名称
        shared_ptr<string> agentGroupName_ {};
        // 坐席组下的坐席id列表
        shared_ptr<vector<int64_t>> agentIds_ {};
        // 创建坐席组的时间
        shared_ptr<string> createTime_ {};
      };

      virtual bool empty() const override { return this->current_ == nullptr
        && this->pages_ == nullptr && this->records_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // current Field Functions 
      bool hasCurrent() const { return this->current_ != nullptr;};
      void deleteCurrent() { this->current_ = nullptr;};
      inline int64_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
      inline Model& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline int64_t getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0L) };
      inline Model& setPages(int64_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Model::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Model::Records>) };
      inline vector<Model::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Model::Records>) };
      inline Model& setRecords(const vector<Model::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Model& setRecords(vector<Model::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Model& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Model& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> current_ {};
      shared_ptr<int64_t> pages_ {};
      shared_ptr<vector<Model::Records>> records_ {};
      shared_ptr<int64_t> size_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->timestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline AgentGroupPageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AgentGroupPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AgentGroupPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const AgentGroupPageResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, AgentGroupPageResponseBody::Model) };
    inline AgentGroupPageResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, AgentGroupPageResponseBody::Model) };
    inline AgentGroupPageResponseBody& setModel(const AgentGroupPageResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline AgentGroupPageResponseBody& setModel(AgentGroupPageResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AgentGroupPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AgentGroupPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline AgentGroupPageResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AgentGroupPageResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
