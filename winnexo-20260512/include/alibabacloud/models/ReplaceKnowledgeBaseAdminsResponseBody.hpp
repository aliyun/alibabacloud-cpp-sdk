// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEKNOWLEDGEBASEADMINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPLACEKNOWLEDGEBASEADMINSRESPONSEBODY_HPP_
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
  class ReplaceKnowledgeBaseAdminsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceKnowledgeBaseAdminsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(effectiveApprovers, effectiveApprovers_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(principals, principals_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceKnowledgeBaseAdminsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(effectiveApprovers, effectiveApprovers_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(principals, principals_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ReplaceKnowledgeBaseAdminsResponseBody() = default ;
    ReplaceKnowledgeBaseAdminsResponseBody(const ReplaceKnowledgeBaseAdminsResponseBody &) = default ;
    ReplaceKnowledgeBaseAdminsResponseBody(ReplaceKnowledgeBaseAdminsResponseBody &&) = default ;
    ReplaceKnowledgeBaseAdminsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceKnowledgeBaseAdminsResponseBody() = default ;
    ReplaceKnowledgeBaseAdminsResponseBody& operator=(const ReplaceKnowledgeBaseAdminsResponseBody &) = default ;
    ReplaceKnowledgeBaseAdminsResponseBody& operator=(ReplaceKnowledgeBaseAdminsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Principals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Principals& obj) { 
        DARABONBA_PTR_TO_JSON(immutable, immutable_);
        DARABONBA_PTR_TO_JSON(principalId, principalId_);
        DARABONBA_PTR_TO_JSON(principalName, principalName_);
        DARABONBA_PTR_TO_JSON(principalType, principalType_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Principals& obj) { 
        DARABONBA_PTR_FROM_JSON(immutable, immutable_);
        DARABONBA_PTR_FROM_JSON(principalId, principalId_);
        DARABONBA_PTR_FROM_JSON(principalName, principalName_);
        DARABONBA_PTR_FROM_JSON(principalType, principalType_);
        DARABONBA_PTR_FROM_JSON(source, source_);
      };
      Principals() = default ;
      Principals(const Principals &) = default ;
      Principals(Principals &&) = default ;
      Principals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Principals() = default ;
      Principals& operator=(const Principals &) = default ;
      Principals& operator=(Principals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->immutable_ == nullptr
        && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->source_ == nullptr; };
      // immutable Field Functions 
      bool hasImmutable() const { return this->immutable_ != nullptr;};
      void deleteImmutable() { this->immutable_ = nullptr;};
      inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
      inline Principals& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Principals& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Principals& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Principals& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Principals& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // 是否为不可移除的创建者
      shared_ptr<bool> immutable_ {};
      // 用户 ID 或用户组 ID
      shared_ptr<string> principalId_ {};
      // 主体显示名称，无法解析时为空
      shared_ptr<string> principalName_ {};
      // 主体类型：USER 或 USER_GROUP
      shared_ptr<string> principalType_ {};
      // 权限来源：CREATOR 或 DIRECT
      shared_ptr<string> source_ {};
    };

    class EffectiveApprovers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectiveApprovers& obj) { 
        DARABONBA_PTR_TO_JSON(sourcePrincipalIds, sourcePrincipalIds_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(userName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, EffectiveApprovers& obj) { 
        DARABONBA_PTR_FROM_JSON(sourcePrincipalIds, sourcePrincipalIds_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(userName, userName_);
      };
      EffectiveApprovers() = default ;
      EffectiveApprovers(const EffectiveApprovers &) = default ;
      EffectiveApprovers(EffectiveApprovers &&) = default ;
      EffectiveApprovers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectiveApprovers() = default ;
      EffectiveApprovers& operator=(const EffectiveApprovers &) = default ;
      EffectiveApprovers& operator=(EffectiveApprovers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourcePrincipalIds_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // sourcePrincipalIds Field Functions 
      bool hasSourcePrincipalIds() const { return this->sourcePrincipalIds_ != nullptr;};
      void deleteSourcePrincipalIds() { this->sourcePrincipalIds_ = nullptr;};
      inline const vector<string> & getSourcePrincipalIds() const { DARABONBA_PTR_GET_CONST(sourcePrincipalIds_, vector<string>) };
      inline vector<string> getSourcePrincipalIds() { DARABONBA_PTR_GET(sourcePrincipalIds_, vector<string>) };
      inline EffectiveApprovers& setSourcePrincipalIds(const vector<string> & sourcePrincipalIds) { DARABONBA_PTR_SET_VALUE(sourcePrincipalIds_, sourcePrincipalIds) };
      inline EffectiveApprovers& setSourcePrincipalIds(vector<string> && sourcePrincipalIds) { DARABONBA_PTR_SET_RVALUE(sourcePrincipalIds_, sourcePrincipalIds) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline EffectiveApprovers& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline EffectiveApprovers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // 产生该审批权限的主体 ID 列表
      shared_ptr<vector<string>> sourcePrincipalIds_ {};
      // 有效审批用户 ID
      shared_ptr<int64_t> userId_ {};
      // 租户内显示名称，无法解析时为空
      shared_ptr<string> userName_ {};
    };

    class Creator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Creator& obj) { 
        DARABONBA_PTR_TO_JSON(immutable, immutable_);
        DARABONBA_PTR_TO_JSON(principalId, principalId_);
        DARABONBA_PTR_TO_JSON(principalName, principalName_);
        DARABONBA_PTR_TO_JSON(principalType, principalType_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Creator& obj) { 
        DARABONBA_PTR_FROM_JSON(immutable, immutable_);
        DARABONBA_PTR_FROM_JSON(principalId, principalId_);
        DARABONBA_PTR_FROM_JSON(principalName, principalName_);
        DARABONBA_PTR_FROM_JSON(principalType, principalType_);
        DARABONBA_PTR_FROM_JSON(source, source_);
      };
      Creator() = default ;
      Creator(const Creator &) = default ;
      Creator(Creator &&) = default ;
      Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Creator() = default ;
      Creator& operator=(const Creator &) = default ;
      Creator& operator=(Creator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->immutable_ == nullptr
        && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->source_ == nullptr; };
      // immutable Field Functions 
      bool hasImmutable() const { return this->immutable_ != nullptr;};
      void deleteImmutable() { this->immutable_ = nullptr;};
      inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
      inline Creator& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Creator& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Creator& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Creator& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Creator& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // 是否为不可移除的创建者
      shared_ptr<bool> immutable_ {};
      // 用户 ID 或用户组 ID
      shared_ptr<string> principalId_ {};
      // 主体显示名称，无法解析时为空
      shared_ptr<string> principalName_ {};
      // 主体类型：USER 或 USER_GROUP
      shared_ptr<string> principalType_ {};
      // 权限来源：CREATOR 或 DIRECT
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->creator_ == nullptr && this->directoryId_ == nullptr && this->effectiveApprovers_ == nullptr && this->message_ == nullptr && this->principals_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const ReplaceKnowledgeBaseAdminsResponseBody::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, ReplaceKnowledgeBaseAdminsResponseBody::Creator) };
    inline ReplaceKnowledgeBaseAdminsResponseBody::Creator getCreator() { DARABONBA_PTR_GET(creator_, ReplaceKnowledgeBaseAdminsResponseBody::Creator) };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setCreator(const ReplaceKnowledgeBaseAdminsResponseBody::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setCreator(ReplaceKnowledgeBaseAdminsResponseBody::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // effectiveApprovers Field Functions 
    bool hasEffectiveApprovers() const { return this->effectiveApprovers_ != nullptr;};
    void deleteEffectiveApprovers() { this->effectiveApprovers_ = nullptr;};
    inline const vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers> & getEffectiveApprovers() const { DARABONBA_PTR_GET_CONST(effectiveApprovers_, vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers>) };
    inline vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers> getEffectiveApprovers() { DARABONBA_PTR_GET(effectiveApprovers_, vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers>) };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setEffectiveApprovers(const vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers> & effectiveApprovers) { DARABONBA_PTR_SET_VALUE(effectiveApprovers_, effectiveApprovers) };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setEffectiveApprovers(vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers> && effectiveApprovers) { DARABONBA_PTR_SET_RVALUE(effectiveApprovers_, effectiveApprovers) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // principals Field Functions 
    bool hasPrincipals() const { return this->principals_ != nullptr;};
    void deletePrincipals() { this->principals_ = nullptr;};
    inline const vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals>) };
    inline vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals>) };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setPrincipals(const vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setPrincipals(vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReplaceKnowledgeBaseAdminsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码
    shared_ptr<string> code_ {};
    // 知识库创建者
    shared_ptr<ReplaceKnowledgeBaseAdminsResponseBody::Creator> creator_ {};
    // 已配置的知识库根目录业务 ID
    shared_ptr<string> directoryId_ {};
    // 用户组展开和去重后的有效审批人
    shared_ptr<vector<ReplaceKnowledgeBaseAdminsResponseBody::EffectiveApprovers>> effectiveApprovers_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 配置完成后的管理员主体列表，包含创建者
    shared_ptr<vector<ReplaceKnowledgeBaseAdminsResponseBody::Principals>> principals_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
