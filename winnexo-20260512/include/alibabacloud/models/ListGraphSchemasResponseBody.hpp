// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAPHSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAPHSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListGraphSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGraphSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGraphSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGraphSchemasResponseBody() = default ;
    ListGraphSchemasResponseBody(const ListGraphSchemasResponseBody &) = default ;
    ListGraphSchemasResponseBody(ListGraphSchemasResponseBody &&) = default ;
    ListGraphSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGraphSchemasResponseBody() = default ;
    ListGraphSchemasResponseBody& operator=(const ListGraphSchemasResponseBody &) = default ;
    ListGraphSchemasResponseBody& operator=(ListGraphSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(activeVersion, activeVersion_);
        DARABONBA_PTR_TO_JSON(businessProfile, businessProfile_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(graphName, graphName_);
        DARABONBA_PTR_TO_JSON(graphStatus, graphStatus_);
        DARABONBA_PTR_TO_JSON(hasDraft, hasDraft_);
        DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(objectTypeCount, objectTypeCount_);
        DARABONBA_PTR_TO_JSON(relationCount, relationCount_);
        DARABONBA_PTR_TO_JSON(semanticTags, semanticTags_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(activeVersion, activeVersion_);
        DARABONBA_PTR_FROM_JSON(businessProfile, businessProfile_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(graphName, graphName_);
        DARABONBA_PTR_FROM_JSON(graphStatus, graphStatus_);
        DARABONBA_PTR_FROM_JSON(hasDraft, hasDraft_);
        DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(objectTypeCount, objectTypeCount_);
        DARABONBA_PTR_FROM_JSON(relationCount, relationCount_);
        DARABONBA_PTR_FROM_JSON(semanticTags, semanticTags_);
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
      virtual bool empty() const override { return this->activeVersion_ == nullptr
        && this->businessProfile_ == nullptr && this->displayName_ == nullptr && this->graphName_ == nullptr && this->graphStatus_ == nullptr && this->hasDraft_ == nullptr
        && this->isDefault_ == nullptr && this->objectTypeCount_ == nullptr && this->relationCount_ == nullptr && this->semanticTags_ == nullptr; };
      // activeVersion Field Functions 
      bool hasActiveVersion() const { return this->activeVersion_ != nullptr;};
      void deleteActiveVersion() { this->activeVersion_ = nullptr;};
      inline string getActiveVersion() const { DARABONBA_PTR_GET_DEFAULT(activeVersion_, "") };
      inline Items& setActiveVersion(string activeVersion) { DARABONBA_PTR_SET_VALUE(activeVersion_, activeVersion) };


      // businessProfile Field Functions 
      bool hasBusinessProfile() const { return this->businessProfile_ != nullptr;};
      void deleteBusinessProfile() { this->businessProfile_ = nullptr;};
      inline string getBusinessProfile() const { DARABONBA_PTR_GET_DEFAULT(businessProfile_, "") };
      inline Items& setBusinessProfile(string businessProfile) { DARABONBA_PTR_SET_VALUE(businessProfile_, businessProfile) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // graphName Field Functions 
      bool hasGraphName() const { return this->graphName_ != nullptr;};
      void deleteGraphName() { this->graphName_ = nullptr;};
      inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
      inline Items& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


      // graphStatus Field Functions 
      bool hasGraphStatus() const { return this->graphStatus_ != nullptr;};
      void deleteGraphStatus() { this->graphStatus_ = nullptr;};
      inline string getGraphStatus() const { DARABONBA_PTR_GET_DEFAULT(graphStatus_, "") };
      inline Items& setGraphStatus(string graphStatus) { DARABONBA_PTR_SET_VALUE(graphStatus_, graphStatus) };


      // hasDraft Field Functions 
      bool hasHasDraft() const { return this->hasDraft_ != nullptr;};
      void deleteHasDraft() { this->hasDraft_ = nullptr;};
      inline bool getHasDraft() const { DARABONBA_PTR_GET_DEFAULT(hasDraft_, false) };
      inline Items& setHasDraft(bool hasDraft) { DARABONBA_PTR_SET_VALUE(hasDraft_, hasDraft) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Items& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // objectTypeCount Field Functions 
      bool hasObjectTypeCount() const { return this->objectTypeCount_ != nullptr;};
      void deleteObjectTypeCount() { this->objectTypeCount_ = nullptr;};
      inline int64_t getObjectTypeCount() const { DARABONBA_PTR_GET_DEFAULT(objectTypeCount_, 0L) };
      inline Items& setObjectTypeCount(int64_t objectTypeCount) { DARABONBA_PTR_SET_VALUE(objectTypeCount_, objectTypeCount) };


      // relationCount Field Functions 
      bool hasRelationCount() const { return this->relationCount_ != nullptr;};
      void deleteRelationCount() { this->relationCount_ = nullptr;};
      inline int64_t getRelationCount() const { DARABONBA_PTR_GET_DEFAULT(relationCount_, 0L) };
      inline Items& setRelationCount(int64_t relationCount) { DARABONBA_PTR_SET_VALUE(relationCount_, relationCount) };


      // semanticTags Field Functions 
      bool hasSemanticTags() const { return this->semanticTags_ != nullptr;};
      void deleteSemanticTags() { this->semanticTags_ = nullptr;};
      inline const vector<string> & getSemanticTags() const { DARABONBA_PTR_GET_CONST(semanticTags_, vector<string>) };
      inline vector<string> getSemanticTags() { DARABONBA_PTR_GET(semanticTags_, vector<string>) };
      inline Items& setSemanticTags(const vector<string> & semanticTags) { DARABONBA_PTR_SET_VALUE(semanticTags_, semanticTags) };
      inline Items& setSemanticTags(vector<string> && semanticTags) { DARABONBA_PTR_SET_RVALUE(semanticTags_, semanticTags) };


    protected:
      // active Schema 版本
      shared_ptr<string> activeVersion_ {};
      // 业务说明，未设置时为空字符串
      shared_ptr<string> businessProfile_ {};
      // 图谱展示名，空值时兜底 graphName
      shared_ptr<string> displayName_ {};
      // 图谱名称
      // 
      // This parameter is required.
      shared_ptr<string> graphName_ {};
      // 图谱状态：PUBLISHED / DEVELOPING（当前用户有活动草稿）/ PUBLISHING（当前用户发布中）
      // 
      // This parameter is required.
      shared_ptr<string> graphStatus_ {};
      // 当前调用者视角是否存在个人活动草稿；部署/系统级 Token 恒 false
      // 
      // This parameter is required.
      shared_ptr<bool> hasDraft_ {};
      // 是否为租户默认图谱
      // 
      // This parameter is required.
      shared_ptr<bool> isDefault_ {};
      // object_type 数量，解析失败兜底 0
      // 
      // This parameter is required.
      shared_ptr<int64_t> objectTypeCount_ {};
      // relation 数量，解析失败兜底 0
      // 
      // This parameter is required.
      shared_ptr<int64_t> relationCount_ {};
      // 语义标签列表，未配置时为空数组
      // 
      // This parameter is required.
      shared_ptr<vector<string>> semanticTags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGraphSchemasResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListGraphSchemasResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListGraphSchemasResponseBody::Items>) };
    inline vector<ListGraphSchemasResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListGraphSchemasResponseBody::Items>) };
    inline ListGraphSchemasResponseBody& setItems(const vector<ListGraphSchemasResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGraphSchemasResponseBody& setItems(vector<ListGraphSchemasResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGraphSchemasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGraphSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 租户下 active 图谱摘要列表
    shared_ptr<vector<ListGraphSchemasResponseBody::Items>> items_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
