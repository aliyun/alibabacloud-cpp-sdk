// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANCODEBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANCODEBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScanCodeBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanCodeBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindReq, bindReq_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ScanCodeBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindReq, bindReq_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ScanCodeBindRequest() = default ;
    ScanCodeBindRequest(const ScanCodeBindRequest &) = default ;
    ScanCodeBindRequest(ScanCodeBindRequest &&) = default ;
    ScanCodeBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanCodeBindRequest() = default ;
    ScanCodeBindRequest& operator=(const ScanCodeBindRequest &) = default ;
    ScanCodeBindRequest& operator=(ScanCodeBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. Enter the Project ID of the project to which the product belongs. You can view this in the Tmall Genie AI Platform console.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. Enter PROJECT_ID here.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier. Enter the value of userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Device ID type:  
      // OPEN_ID: Default Device ID identifier.  
      // UNION_ID: Organization-dimension Device ID identifier. You must request an organization in advance on the Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class BindReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindReq& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      };
      friend void from_json(const Darabonba::Json& j, BindReq& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      };
      BindReq() = default ;
      BindReq(const BindReq &) = default ;
      BindReq(BindReq &&) = default ;
      BindReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindReq() = default ;
      BindReq& operator=(const BindReq &) = default ;
      BindReq& operator=(BindReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->code_ == nullptr && this->extInfo_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline BindReq& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline BindReq& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline BindReq& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    protected:
      // Product client ID
      // 
      // This parameter is required.
      shared_ptr<string> clientId_ {};
      // authCode
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // Extension parameter
      shared_ptr<string> extInfo_ {};
    };

    virtual bool empty() const override { return this->bindReq_ == nullptr
        && this->userInfo_ == nullptr; };
    // bindReq Field Functions 
    bool hasBindReq() const { return this->bindReq_ != nullptr;};
    void deleteBindReq() { this->bindReq_ = nullptr;};
    inline const ScanCodeBindRequest::BindReq & getBindReq() const { DARABONBA_PTR_GET_CONST(bindReq_, ScanCodeBindRequest::BindReq) };
    inline ScanCodeBindRequest::BindReq getBindReq() { DARABONBA_PTR_GET(bindReq_, ScanCodeBindRequest::BindReq) };
    inline ScanCodeBindRequest& setBindReq(const ScanCodeBindRequest::BindReq & bindReq) { DARABONBA_PTR_SET_VALUE(bindReq_, bindReq) };
    inline ScanCodeBindRequest& setBindReq(ScanCodeBindRequest::BindReq && bindReq) { DARABONBA_PTR_SET_RVALUE(bindReq_, bindReq) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ScanCodeBindRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ScanCodeBindRequest::UserInfo) };
    inline ScanCodeBindRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, ScanCodeBindRequest::UserInfo) };
    inline ScanCodeBindRequest& setUserInfo(const ScanCodeBindRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ScanCodeBindRequest& setUserInfo(ScanCodeBindRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Input parameters for QR code scanning binding
    // 
    // This parameter is required.
    shared_ptr<ScanCodeBindRequest::BindReq> bindReq_ {};
    // User identity information
    // 
    // This parameter is required.
    shared_ptr<ScanCodeBindRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
