// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLOUDVENDORACCOUNTAKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCLOUDVENDORACCOUNTAKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddCloudVendorAccountAKResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCloudVendorAccountAKResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCloudVendorAccountAKResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCloudVendorAccountAKResponseBody() = default ;
    AddCloudVendorAccountAKResponseBody(const AddCloudVendorAccountAKResponseBody &) = default ;
    AddCloudVendorAccountAKResponseBody(AddCloudVendorAccountAKResponseBody &&) = default ;
    AddCloudVendorAccountAKResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCloudVendorAccountAKResponseBody() = default ;
    AddCloudVendorAccountAKResponseBody& operator=(const AddCloudVendorAccountAKResponseBody &) = default ;
    AddCloudVendorAccountAKResponseBody& operator=(AddCloudVendorAccountAKResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AkType, akType_);
        DARABONBA_PTR_TO_JSON(AuthId, authId_);
        DARABONBA_PTR_TO_JSON(AuthModules, authModules_);
        DARABONBA_PTR_TO_JSON(CtdrCloudUserId, ctdrCloudUserId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(SecretId, secretId_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AkType, akType_);
        DARABONBA_PTR_FROM_JSON(AuthId, authId_);
        DARABONBA_PTR_FROM_JSON(AuthModules, authModules_);
        DARABONBA_PTR_FROM_JSON(CtdrCloudUserId, ctdrCloudUserId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
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
      class AuthModules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthModules& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(ModuleAssetType, moduleAssetType_);
          DARABONBA_PTR_TO_JSON(ModuleDisp, moduleDisp_);
          DARABONBA_PTR_TO_JSON(ModuleServiceStatus, moduleServiceStatus_);
          DARABONBA_PTR_TO_JSON(ModuleStatement, moduleStatement_);
        };
        friend void from_json(const Darabonba::Json& j, AuthModules& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(ModuleAssetType, moduleAssetType_);
          DARABONBA_PTR_FROM_JSON(ModuleDisp, moduleDisp_);
          DARABONBA_PTR_FROM_JSON(ModuleServiceStatus, moduleServiceStatus_);
          DARABONBA_PTR_FROM_JSON(ModuleStatement, moduleStatement_);
        };
        AuthModules() = default ;
        AuthModules(const AuthModules &) = default ;
        AuthModules(AuthModules &&) = default ;
        AuthModules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthModules() = default ;
        AuthModules& operator=(const AuthModules &) = default ;
        AuthModules& operator=(AuthModules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->message_ == nullptr
        && this->module_ == nullptr && this->moduleAssetType_ == nullptr && this->moduleDisp_ == nullptr && this->moduleServiceStatus_ == nullptr && this->moduleStatement_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AuthModules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline AuthModules& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // moduleAssetType Field Functions 
        bool hasModuleAssetType() const { return this->moduleAssetType_ != nullptr;};
        void deleteModuleAssetType() { this->moduleAssetType_ = nullptr;};
        inline string getModuleAssetType() const { DARABONBA_PTR_GET_DEFAULT(moduleAssetType_, "") };
        inline AuthModules& setModuleAssetType(string moduleAssetType) { DARABONBA_PTR_SET_VALUE(moduleAssetType_, moduleAssetType) };


        // moduleDisp Field Functions 
        bool hasModuleDisp() const { return this->moduleDisp_ != nullptr;};
        void deleteModuleDisp() { this->moduleDisp_ = nullptr;};
        inline string getModuleDisp() const { DARABONBA_PTR_GET_DEFAULT(moduleDisp_, "") };
        inline AuthModules& setModuleDisp(string moduleDisp) { DARABONBA_PTR_SET_VALUE(moduleDisp_, moduleDisp) };


        // moduleServiceStatus Field Functions 
        bool hasModuleServiceStatus() const { return this->moduleServiceStatus_ != nullptr;};
        void deleteModuleServiceStatus() { this->moduleServiceStatus_ = nullptr;};
        inline int32_t getModuleServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleServiceStatus_, 0) };
        inline AuthModules& setModuleServiceStatus(int32_t moduleServiceStatus) { DARABONBA_PTR_SET_VALUE(moduleServiceStatus_, moduleServiceStatus) };


        // moduleStatement Field Functions 
        bool hasModuleStatement() const { return this->moduleStatement_ != nullptr;};
        void deleteModuleStatement() { this->moduleStatement_ = nullptr;};
        inline string getModuleStatement() const { DARABONBA_PTR_GET_DEFAULT(moduleStatement_, "") };
        inline AuthModules& setModuleStatement(string moduleStatement) { DARABONBA_PTR_SET_VALUE(moduleStatement_, moduleStatement) };


      protected:
        // The error message of the module.
        shared_ptr<string> message_ {};
        // The code of the module. Valid values:
        // 
        // *   **HOST**: host
        // *   **CSPM**: configuration assessment
        // *   **SIEM**: CloudSiem
        // *   **TRIAL**: log audit
        shared_ptr<string> module_ {};
        // The cloud asset that is associated with the module.
        shared_ptr<string> moduleAssetType_ {};
        // The display name of the module.
        shared_ptr<string> moduleDisp_ {};
        // The service status of the module. Valid values:
        // 
        // *   **0**: being used
        // *   **1**: exception occurred
        // *   **2**: being validated
        // *   **3**: validation timed out
        shared_ptr<int32_t> moduleServiceStatus_ {};
        // The permission description of the module.
        shared_ptr<string> moduleStatement_ {};
      };

      virtual bool empty() const override { return this->akType_ == nullptr
        && this->authId_ == nullptr && this->authModules_ == nullptr && this->ctdrCloudUserId_ == nullptr && this->message_ == nullptr && this->secretId_ == nullptr
        && this->serviceStatus_ == nullptr && this->status_ == nullptr && this->vendor_ == nullptr && this->vendorAuthAlias_ == nullptr; };
      // akType Field Functions 
      bool hasAkType() const { return this->akType_ != nullptr;};
      void deleteAkType() { this->akType_ = nullptr;};
      inline string getAkType() const { DARABONBA_PTR_GET_DEFAULT(akType_, "") };
      inline Data& setAkType(string akType) { DARABONBA_PTR_SET_VALUE(akType_, akType) };


      // authId Field Functions 
      bool hasAuthId() const { return this->authId_ != nullptr;};
      void deleteAuthId() { this->authId_ = nullptr;};
      inline int64_t getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
      inline Data& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


      // authModules Field Functions 
      bool hasAuthModules() const { return this->authModules_ != nullptr;};
      void deleteAuthModules() { this->authModules_ = nullptr;};
      inline const vector<Data::AuthModules> & getAuthModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<Data::AuthModules>) };
      inline vector<Data::AuthModules> getAuthModules() { DARABONBA_PTR_GET(authModules_, vector<Data::AuthModules>) };
      inline Data& setAuthModules(const vector<Data::AuthModules> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
      inline Data& setAuthModules(vector<Data::AuthModules> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


      // ctdrCloudUserId Field Functions 
      bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
      void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
      inline string getCtdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
      inline Data& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline Data& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline int32_t getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
      inline Data& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Data& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vendorAuthAlias Field Functions 
      bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
      void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
      inline string getVendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
      inline Data& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


    protected:
      // The type of the account to which the AccessKey pair belongs. Valid values:
      // 
      // *   **primary**: a primary account
      // *   **sub**: a sub-account
      shared_ptr<string> akType_ {};
      // The unique ID of the AccessKey pair.
      shared_ptr<int64_t> authId_ {};
      // The modules that are associated with the AccessKey pair.
      shared_ptr<vector<Data::AuthModules>> authModules_ {};
      // Account ID. 
      // 
      // > The account ID of the cloud provider being integrated.
      shared_ptr<string> ctdrCloudUserId_ {};
      // The error message of the AccessKey pair.
      shared_ptr<string> message_ {};
      // The AccessKey ID.
      shared_ptr<string> secretId_ {};
      // The service status of the AccessKey pair. Valid values:
      // 
      // *   **0**: being used
      // *   **1**: exception occurred
      // *   **2**: being validated
      // *   **3**: validation timed out
      shared_ptr<int32_t> serviceStatus_ {};
      // The status of the AccessKey pair. Valid values:
      // 
      // *   **0**: enabled
      // *   **1**: disabled
      shared_ptr<int32_t> status_ {};
      // The cloud service provider. Valid values:
      // 
      // *   **Tencent**: Tencent Cloud
      // *   **HUAWEICLOUD**: Huawei Cloud
      // *   **Azure**: Microsoft Azure
      // *   **AWS**: AWS
      shared_ptr<string> vendor_ {};
      // The name of the AccessKey pair.
      // 
      // >  The account information of the third-party cloud servers.
      shared_ptr<string> vendorAuthAlias_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddCloudVendorAccountAKResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddCloudVendorAccountAKResponseBody::Data) };
    inline AddCloudVendorAccountAKResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddCloudVendorAccountAKResponseBody::Data) };
    inline AddCloudVendorAccountAKResponseBody& setData(const AddCloudVendorAccountAKResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddCloudVendorAccountAKResponseBody& setData(AddCloudVendorAccountAKResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCloudVendorAccountAKResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pair that is added.
    shared_ptr<AddCloudVendorAccountAKResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
