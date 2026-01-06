// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Hanas, hanas_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Hanas, hanas_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHanaInstancesResponseBody() = default ;
    DescribeHanaInstancesResponseBody(const DescribeHanaInstancesResponseBody &) = default ;
    DescribeHanaInstancesResponseBody(DescribeHanaInstancesResponseBody &&) = default ;
    DescribeHanaInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaInstancesResponseBody() = default ;
    DescribeHanaInstancesResponseBody& operator=(const DescribeHanaInstancesResponseBody &) = default ;
    DescribeHanaInstancesResponseBody& operator=(DescribeHanaInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Hanas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hanas& obj) { 
        DARABONBA_PTR_TO_JSON(Hana, hana_);
      };
      friend void from_json(const Darabonba::Json& j, Hanas& obj) { 
        DARABONBA_PTR_FROM_JSON(Hana, hana_);
      };
      Hanas() = default ;
      Hanas(const Hanas &) = default ;
      Hanas(Hanas &&) = default ;
      Hanas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Hanas() = default ;
      Hanas& operator=(const Hanas &) = default ;
      Hanas& operator=(Hanas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Hana : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hana& obj) { 
          DARABONBA_PTR_TO_JSON(AlertSetting, alertSetting_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
          DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
          DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
          DARABONBA_PTR_TO_JSON(HanaName, hanaName_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(InstanceNumber, instanceNumber_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(ValidateCertificate, validateCertificate_);
          DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
        };
        friend void from_json(const Darabonba::Json& j, Hana& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertSetting, alertSetting_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
          DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
          DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
          DARABONBA_PTR_FROM_JSON(HanaName, hanaName_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(InstanceNumber, instanceNumber_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(ValidateCertificate, validateCertificate_);
          DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
        };
        Hana() = default ;
        Hana(const Hana &) = default ;
        Hana(Hana &&) = default ;
        Hana(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hana() = default ;
        Hana& operator=(const Hana &) = default ;
        Hana& operator=(Hana &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->alertSetting_ == nullptr
        && this->clusterId_ == nullptr && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->hanaName_ == nullptr
        && this->host_ == nullptr && this->instanceNumber_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr
        && this->tags_ == nullptr && this->useSsl_ == nullptr && this->userName_ == nullptr && this->validateCertificate_ == nullptr && this->vaultId_ == nullptr; };
        // alertSetting Field Functions 
        bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
        void deleteAlertSetting() { this->alertSetting_ = nullptr;};
        inline string getAlertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
        inline Hana& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Hana& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // crossAccountRoleName Field Functions 
        bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
        void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
        inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
        inline Hana& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


        // crossAccountType Field Functions 
        bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
        void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
        inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
        inline Hana& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


        // crossAccountUserId Field Functions 
        bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
        void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
        inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
        inline Hana& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


        // hanaName Field Functions 
        bool hasHanaName() const { return this->hanaName_ != nullptr;};
        void deleteHanaName() { this->hanaName_ = nullptr;};
        inline string getHanaName() const { DARABONBA_PTR_GET_DEFAULT(hanaName_, "") };
        inline Hana& setHanaName(string hanaName) { DARABONBA_PTR_SET_VALUE(hanaName_, hanaName) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Hana& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // instanceNumber Field Functions 
        bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
        void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
        inline int32_t getInstanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, 0) };
        inline Hana& setInstanceNumber(int32_t instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Hana& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Hana& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusMessage Field Functions 
        bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
        void deleteStatusMessage() { this->statusMessage_ = nullptr;};
        inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
        inline Hana& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Hana::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Hana::Tags) };
        inline Hana::Tags getTags() { DARABONBA_PTR_GET(tags_, Hana::Tags) };
        inline Hana& setTags(const Hana::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Hana& setTags(Hana::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // useSsl Field Functions 
        bool hasUseSsl() const { return this->useSsl_ != nullptr;};
        void deleteUseSsl() { this->useSsl_ = nullptr;};
        inline bool getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, false) };
        inline Hana& setUseSsl(bool useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline Hana& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // validateCertificate Field Functions 
        bool hasValidateCertificate() const { return this->validateCertificate_ != nullptr;};
        void deleteValidateCertificate() { this->validateCertificate_ = nullptr;};
        inline bool getValidateCertificate() const { DARABONBA_PTR_GET_DEFAULT(validateCertificate_, false) };
        inline Hana& setValidateCertificate(bool validateCertificate) { DARABONBA_PTR_SET_VALUE(validateCertificate_, validateCertificate) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline Hana& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // The alert settings. Valid value: INHERITED, which indicates that the Cloud Backup client sends alert notifications by using the same method configured for the backup vault.
        shared_ptr<string> alertSetting_ {};
        // The ID of the SAP HANA instance.
        shared_ptr<string> clusterId_ {};
        // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountRoleName_ {};
        // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
        // 
        // *   **SELF_ACCOUNT**: Data is backed up within the same Alibaba Cloud account.
        // *   **CROSS_ACCOUNT**: Data is backed up across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountType_ {};
        // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<int64_t> crossAccountUserId_ {};
        // The name of the SAP HANA instance.
        shared_ptr<string> hanaName_ {};
        // The private or internal IP address of the host where the primary node of the SAP HANA instance resides.
        shared_ptr<string> host_ {};
        // The instance number of the SAP HANA system.
        shared_ptr<int32_t> instanceNumber_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The status of the SAP HANA instance. Valid values:
        // 
        // *   INITIALIZING: The instance is being initialized.
        // *   INITIALIZED: The instance is registered.
        // *   INVALID_HANA_NODE: The instance is invalid.
        // *   INITIALIZE_FAILED: The client fails to be installed on the instance.
        shared_ptr<int64_t> status_ {};
        // The status information.
        shared_ptr<string> statusMessage_ {};
        // The tags of the SAP HANA instance.
        shared_ptr<Hana::Tags> tags_ {};
        // Indicates whether the SAP HANA instance is connected over Secure Sockets Layer (SSL). Valid values:
        // 
        // *   true: The SAP HANA instance is connected over SSL.
        // *   false: The SAP HANA instance is not connected over SSL.
        shared_ptr<bool> useSsl_ {};
        // The username of the SYSTEMDB database.
        shared_ptr<string> userName_ {};
        // Indicates whether the SSL certificate of the SAP HANA instance is verified.
        shared_ptr<bool> validateCertificate_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->hana_ == nullptr; };
      // hana Field Functions 
      bool hasHana() const { return this->hana_ != nullptr;};
      void deleteHana() { this->hana_ = nullptr;};
      inline const vector<Hanas::Hana> & getHana() const { DARABONBA_PTR_GET_CONST(hana_, vector<Hanas::Hana>) };
      inline vector<Hanas::Hana> getHana() { DARABONBA_PTR_GET(hana_, vector<Hanas::Hana>) };
      inline Hanas& setHana(const vector<Hanas::Hana> & hana) { DARABONBA_PTR_SET_VALUE(hana_, hana) };
      inline Hanas& setHana(vector<Hanas::Hana> && hana) { DARABONBA_PTR_SET_RVALUE(hana_, hana) };


    protected:
      shared_ptr<vector<Hanas::Hana>> hana_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hanas_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHanaInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hanas Field Functions 
    bool hasHanas() const { return this->hanas_ != nullptr;};
    void deleteHanas() { this->hanas_ = nullptr;};
    inline const DescribeHanaInstancesResponseBody::Hanas & getHanas() const { DARABONBA_PTR_GET_CONST(hanas_, DescribeHanaInstancesResponseBody::Hanas) };
    inline DescribeHanaInstancesResponseBody::Hanas getHanas() { DARABONBA_PTR_GET(hanas_, DescribeHanaInstancesResponseBody::Hanas) };
    inline DescribeHanaInstancesResponseBody& setHanas(const DescribeHanaInstancesResponseBody::Hanas & hanas) { DARABONBA_PTR_SET_VALUE(hanas_, hanas) };
    inline DescribeHanaInstancesResponseBody& setHanas(DescribeHanaInstancesResponseBody::Hanas && hanas) { DARABONBA_PTR_SET_RVALUE(hanas_, hanas) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHanaInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHanaInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHanaInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHanaInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHanaInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHanaInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The information about the SAP HANA instances.
    shared_ptr<DescribeHanaInstancesResponseBody::Hanas> hanas_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
