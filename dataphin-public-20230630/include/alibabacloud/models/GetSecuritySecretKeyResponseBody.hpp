// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSECRETKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSECRETKEYRESPONSEBODY_HPP_
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
  class GetSecuritySecretKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecuritySecretKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecuritySecretKeyInfo, securitySecretKeyInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecuritySecretKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecuritySecretKeyInfo, securitySecretKeyInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSecuritySecretKeyResponseBody() = default ;
    GetSecuritySecretKeyResponseBody(const GetSecuritySecretKeyResponseBody &) = default ;
    GetSecuritySecretKeyResponseBody(GetSecuritySecretKeyResponseBody &&) = default ;
    GetSecuritySecretKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecuritySecretKeyResponseBody() = default ;
    GetSecuritySecretKeyResponseBody& operator=(const GetSecuritySecretKeyResponseBody &) = default ;
    GetSecuritySecretKeyResponseBody& operator=(GetSecuritySecretKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecuritySecretKeyInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecuritySecretKeyInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AlgorithmType, algorithmType_);
        DARABONBA_PTR_TO_JSON(AlgorithmTypeAlias, algorithmTypeAlias_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableOpenapiQuery, enableOpenapiQuery_);
        DARABONBA_PTR_TO_JSON(GenerationType, generationType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsOwnerManageOnly, isOwnerManageOnly_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(SecretKeyList, secretKeyList_);
        DARABONBA_PTR_TO_JSON(SubKeyCount, subKeyCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SecuritySecretKeyInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AlgorithmType, algorithmType_);
        DARABONBA_PTR_FROM_JSON(AlgorithmTypeAlias, algorithmTypeAlias_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableOpenapiQuery, enableOpenapiQuery_);
        DARABONBA_PTR_FROM_JSON(GenerationType, generationType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsOwnerManageOnly, isOwnerManageOnly_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(SecretKeyList, secretKeyList_);
        DARABONBA_PTR_FROM_JSON(SubKeyCount, subKeyCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SecuritySecretKeyInfo() = default ;
      SecuritySecretKeyInfo(const SecuritySecretKeyInfo &) = default ;
      SecuritySecretKeyInfo(SecuritySecretKeyInfo &&) = default ;
      SecuritySecretKeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecuritySecretKeyInfo() = default ;
      SecuritySecretKeyInfo& operator=(const SecuritySecretKeyInfo &) = default ;
      SecuritySecretKeyInfo& operator=(SecuritySecretKeyInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithmType_ == nullptr
        && this->algorithmTypeAlias_ == nullptr && this->description_ == nullptr && this->enableOpenapiQuery_ == nullptr && this->generationType_ == nullptr && this->id_ == nullptr
        && this->isOwnerManageOnly_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr && this->secretKeyList_ == nullptr
        && this->subKeyCount_ == nullptr && this->type_ == nullptr; };
      // algorithmType Field Functions 
      bool hasAlgorithmType() const { return this->algorithmType_ != nullptr;};
      void deleteAlgorithmType() { this->algorithmType_ = nullptr;};
      inline string getAlgorithmType() const { DARABONBA_PTR_GET_DEFAULT(algorithmType_, "") };
      inline SecuritySecretKeyInfo& setAlgorithmType(string algorithmType) { DARABONBA_PTR_SET_VALUE(algorithmType_, algorithmType) };


      // algorithmTypeAlias Field Functions 
      bool hasAlgorithmTypeAlias() const { return this->algorithmTypeAlias_ != nullptr;};
      void deleteAlgorithmTypeAlias() { this->algorithmTypeAlias_ = nullptr;};
      inline string getAlgorithmTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(algorithmTypeAlias_, "") };
      inline SecuritySecretKeyInfo& setAlgorithmTypeAlias(string algorithmTypeAlias) { DARABONBA_PTR_SET_VALUE(algorithmTypeAlias_, algorithmTypeAlias) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SecuritySecretKeyInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableOpenapiQuery Field Functions 
      bool hasEnableOpenapiQuery() const { return this->enableOpenapiQuery_ != nullptr;};
      void deleteEnableOpenapiQuery() { this->enableOpenapiQuery_ = nullptr;};
      inline bool getEnableOpenapiQuery() const { DARABONBA_PTR_GET_DEFAULT(enableOpenapiQuery_, false) };
      inline SecuritySecretKeyInfo& setEnableOpenapiQuery(bool enableOpenapiQuery) { DARABONBA_PTR_SET_VALUE(enableOpenapiQuery_, enableOpenapiQuery) };


      // generationType Field Functions 
      bool hasGenerationType() const { return this->generationType_ != nullptr;};
      void deleteGenerationType() { this->generationType_ = nullptr;};
      inline string getGenerationType() const { DARABONBA_PTR_GET_DEFAULT(generationType_, "") };
      inline SecuritySecretKeyInfo& setGenerationType(string generationType) { DARABONBA_PTR_SET_VALUE(generationType_, generationType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SecuritySecretKeyInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isOwnerManageOnly Field Functions 
      bool hasIsOwnerManageOnly() const { return this->isOwnerManageOnly_ != nullptr;};
      void deleteIsOwnerManageOnly() { this->isOwnerManageOnly_ = nullptr;};
      inline bool getIsOwnerManageOnly() const { DARABONBA_PTR_GET_DEFAULT(isOwnerManageOnly_, false) };
      inline SecuritySecretKeyInfo& setIsOwnerManageOnly(bool isOwnerManageOnly) { DARABONBA_PTR_SET_VALUE(isOwnerManageOnly_, isOwnerManageOnly) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecuritySecretKeyInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline SecuritySecretKeyInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline SecuritySecretKeyInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // secretKeyList Field Functions 
      bool hasSecretKeyList() const { return this->secretKeyList_ != nullptr;};
      void deleteSecretKeyList() { this->secretKeyList_ = nullptr;};
      inline const vector<string> & getSecretKeyList() const { DARABONBA_PTR_GET_CONST(secretKeyList_, vector<string>) };
      inline vector<string> getSecretKeyList() { DARABONBA_PTR_GET(secretKeyList_, vector<string>) };
      inline SecuritySecretKeyInfo& setSecretKeyList(const vector<string> & secretKeyList) { DARABONBA_PTR_SET_VALUE(secretKeyList_, secretKeyList) };
      inline SecuritySecretKeyInfo& setSecretKeyList(vector<string> && secretKeyList) { DARABONBA_PTR_SET_RVALUE(secretKeyList_, secretKeyList) };


      // subKeyCount Field Functions 
      bool hasSubKeyCount() const { return this->subKeyCount_ != nullptr;};
      void deleteSubKeyCount() { this->subKeyCount_ = nullptr;};
      inline int64_t getSubKeyCount() const { DARABONBA_PTR_GET_DEFAULT(subKeyCount_, 0L) };
      inline SecuritySecretKeyInfo& setSubKeyCount(int64_t subKeyCount) { DARABONBA_PTR_SET_VALUE(subKeyCount_, subKeyCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SecuritySecretKeyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> algorithmType_ {};
      shared_ptr<string> algorithmTypeAlias_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enableOpenapiQuery_ {};
      shared_ptr<string> generationType_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<bool> isOwnerManageOnly_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> ownerName_ {};
      shared_ptr<vector<string>> secretKeyList_ {};
      shared_ptr<int64_t> subKeyCount_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->securitySecretKeyInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecuritySecretKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSecuritySecretKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecuritySecretKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecuritySecretKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securitySecretKeyInfo Field Functions 
    bool hasSecuritySecretKeyInfo() const { return this->securitySecretKeyInfo_ != nullptr;};
    void deleteSecuritySecretKeyInfo() { this->securitySecretKeyInfo_ = nullptr;};
    inline const GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo & getSecuritySecretKeyInfo() const { DARABONBA_PTR_GET_CONST(securitySecretKeyInfo_, GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo) };
    inline GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo getSecuritySecretKeyInfo() { DARABONBA_PTR_GET(securitySecretKeyInfo_, GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo) };
    inline GetSecuritySecretKeyResponseBody& setSecuritySecretKeyInfo(const GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo & securitySecretKeyInfo) { DARABONBA_PTR_SET_VALUE(securitySecretKeyInfo_, securitySecretKeyInfo) };
    inline GetSecuritySecretKeyResponseBody& setSecuritySecretKeyInfo(GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo && securitySecretKeyInfo) { DARABONBA_PTR_SET_RVALUE(securitySecretKeyInfo_, securitySecretKeyInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSecuritySecretKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSecuritySecretKeyResponseBody::SecuritySecretKeyInfo> securitySecretKeyInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
