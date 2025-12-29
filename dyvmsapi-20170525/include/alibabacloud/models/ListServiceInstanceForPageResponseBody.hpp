// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFORPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFORPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListServiceInstanceForPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceForPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceForPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListServiceInstanceForPageResponseBody() = default ;
    ListServiceInstanceForPageResponseBody(const ListServiceInstanceForPageResponseBody &) = default ;
    ListServiceInstanceForPageResponseBody(ListServiceInstanceForPageResponseBody &&) = default ;
    ListServiceInstanceForPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceForPageResponseBody() = default ;
    ListServiceInstanceForPageResponseBody& operator=(const ListServiceInstanceForPageResponseBody &) = default ;
    ListServiceInstanceForPageResponseBody& operator=(ListServiceInstanceForPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RelationAvailableCount, relationAvailableCount_);
          DARABONBA_PTR_TO_JSON(RelationTotalCount, relationTotalCount_);
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UsageId, usageId_);
          DARABONBA_PTR_TO_JSON(UsageName, usageName_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RelationAvailableCount, relationAvailableCount_);
          DARABONBA_PTR_FROM_JSON(RelationTotalCount, relationTotalCount_);
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UsageId, usageId_);
          DARABONBA_PTR_FROM_JSON(UsageName, usageName_);
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
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->code_ == nullptr && this->gmtCreate_ == nullptr && this->instanceStatus_ == nullptr && this->name_ == nullptr && this->relationAvailableCount_ == nullptr
        && this->relationTotalCount_ == nullptr && this->sceneId_ == nullptr && this->sceneName_ == nullptr && this->status_ == nullptr && this->usageId_ == nullptr
        && this->usageName_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline Records& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Records& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Records& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline Records& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Records& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // relationAvailableCount Field Functions 
        bool hasRelationAvailableCount() const { return this->relationAvailableCount_ != nullptr;};
        void deleteRelationAvailableCount() { this->relationAvailableCount_ = nullptr;};
        inline int64_t getRelationAvailableCount() const { DARABONBA_PTR_GET_DEFAULT(relationAvailableCount_, 0L) };
        inline Records& setRelationAvailableCount(int64_t relationAvailableCount) { DARABONBA_PTR_SET_VALUE(relationAvailableCount_, relationAvailableCount) };


        // relationTotalCount Field Functions 
        bool hasRelationTotalCount() const { return this->relationTotalCount_ != nullptr;};
        void deleteRelationTotalCount() { this->relationTotalCount_ = nullptr;};
        inline int64_t getRelationTotalCount() const { DARABONBA_PTR_GET_DEFAULT(relationTotalCount_, 0L) };
        inline Records& setRelationTotalCount(int64_t relationTotalCount) { DARABONBA_PTR_SET_VALUE(relationTotalCount_, relationTotalCount) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
        inline Records& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline Records& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // usageId Field Functions 
        bool hasUsageId() const { return this->usageId_ != nullptr;};
        void deleteUsageId() { this->usageId_ = nullptr;};
        inline int64_t getUsageId() const { DARABONBA_PTR_GET_DEFAULT(usageId_, 0L) };
        inline Records& setUsageId(int64_t usageId) { DARABONBA_PTR_SET_VALUE(usageId_, usageId) };


        // usageName Field Functions 
        bool hasUsageName() const { return this->usageName_ != nullptr;};
        void deleteUsageName() { this->usageName_ = nullptr;};
        inline string getUsageName() const { DARABONBA_PTR_GET_DEFAULT(usageName_, "") };
        inline Records& setUsageName(string usageName) { DARABONBA_PTR_SET_VALUE(usageName_, usageName) };


      protected:
        // aliUid
        shared_ptr<int64_t> aliUid_ {};
        // 服务实例号
        shared_ptr<string> code_ {};
        // 创建时间（时间戳）
        shared_ptr<string> gmtCreate_ {};
        // 实例状态（init：初始化；usable：可用；unusable：不可用；destory：注销）
        shared_ptr<string> instanceStatus_ {};
        // 服务实例名称
        shared_ptr<string> name_ {};
        // 关联可用数量
        shared_ptr<int64_t> relationAvailableCount_ {};
        // 关联总数量
        shared_ptr<int64_t> relationTotalCount_ {};
        // 场景ID
        shared_ptr<int64_t> sceneId_ {};
        // 场景名称
        shared_ptr<string> sceneName_ {};
        // 绑定状态：绑定；未绑定
        shared_ptr<string> status_ {};
        // 用途ID
        shared_ptr<int64_t> usageId_ {};
        // 用途名称
        shared_ptr<string> usageName_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Model& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Model& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Model::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Model::Records>) };
      inline vector<Model::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Model::Records>) };
      inline Model& setRecords(const vector<Model::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Model& setRecords(vector<Model::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Model& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Model& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      // 当前页码
      shared_ptr<int64_t> pageNo_ {};
      // 每页数量
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Model::Records>> records_ {};
      // 总数
      shared_ptr<int64_t> totalCount_ {};
      // 总页数
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListServiceInstanceForPageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListServiceInstanceForPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceInstanceForPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const ListServiceInstanceForPageResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, ListServiceInstanceForPageResponseBody::Model) };
    inline ListServiceInstanceForPageResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, ListServiceInstanceForPageResponseBody::Model) };
    inline ListServiceInstanceForPageResponseBody& setModel(const ListServiceInstanceForPageResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline ListServiceInstanceForPageResponseBody& setModel(ListServiceInstanceForPageResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceForPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListServiceInstanceForPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // 状态码，OK表示响应成功
    shared_ptr<string> code_ {};
    // 响应消息
    shared_ptr<string> message_ {};
    shared_ptr<ListServiceInstanceForPageResponseBody::Model> model_ {};
    // 请求唯一id
    shared_ptr<string> requestId_ {};
    // 是否成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
