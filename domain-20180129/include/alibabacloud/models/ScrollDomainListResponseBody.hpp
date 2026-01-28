// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ScrollDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScrollDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
    };
    friend void from_json(const Darabonba::Json& j, ScrollDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
    };
    ScrollDomainListResponseBody() = default ;
    ScrollDomainListResponseBody(const ScrollDomainListResponseBody &) = default ;
    ScrollDomainListResponseBody(ScrollDomainListResponseBody &&) = default ;
    ScrollDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScrollDomainListResponseBody() = default ;
    ScrollDomainListResponseBody& operator=(const ScrollDomainListResponseBody &) = default ;
    ScrollDomainListResponseBody& operator=(ScrollDomainListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
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
      class Domain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Domain& obj) { 
          DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
          DARABONBA_PTR_TO_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
          DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(DomainType, domainType_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
          DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_TO_JSON(ExpirationDateStatus, expirationDateStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Premium, premium_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
          DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
          DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
          DARABONBA_PTR_FROM_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
          DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
          DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateStatus, expirationDateStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Premium, premium_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
          DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
          DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
        };
        Domain() = default ;
        Domain(const Domain &) = default ;
        Domain(Domain &&) = default ;
        Domain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Domain() = default ;
        Domain& operator=(const Domain &) = default ;
        Domain& operator=(Domain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tag& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tag& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class TagItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagItem() = default ;
            TagItem(const TagItem &) = default ;
            TagItem(TagItem &&) = default ;
            TagItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagItem() = default ;
            TagItem& operator=(const TagItem &) = default ;
            TagItem& operator=(TagItem &&) = default ;
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
            inline TagItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
          inline const vector<Tag::TagItem> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tag::TagItem>) };
          inline vector<Tag::TagItem> getTag() { DARABONBA_PTR_GET(tag_, vector<Tag::TagItem>) };
          inline Tag& setTag(const vector<Tag::TagItem> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tag& setTag(vector<Tag::TagItem> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tag::TagItem>> tag_ {};
        };

        class DnsList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DnsList& obj) { 
            DARABONBA_PTR_TO_JSON(Dns, dns_);
          };
          friend void from_json(const Darabonba::Json& j, DnsList& obj) { 
            DARABONBA_PTR_FROM_JSON(Dns, dns_);
          };
          DnsList() = default ;
          DnsList(const DnsList &) = default ;
          DnsList(DnsList &&) = default ;
          DnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DnsList() = default ;
          DnsList& operator=(const DnsList &) = default ;
          DnsList& operator=(DnsList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dns_ == nullptr; };
          // dns Field Functions 
          bool hasDns() const { return this->dns_ != nullptr;};
          void deleteDns() { this->dns_ = nullptr;};
          inline const vector<string> & getDns() const { DARABONBA_PTR_GET_CONST(dns_, vector<string>) };
          inline vector<string> getDns() { DARABONBA_PTR_GET(dns_, vector<string>) };
          inline DnsList& setDns(const vector<string> & dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };
          inline DnsList& setDns(vector<string> && dns) { DARABONBA_PTR_SET_RVALUE(dns_, dns) };


        protected:
          shared_ptr<vector<string>> dns_ {};
        };

        virtual bool empty() const override { return this->dnsList_ == nullptr
        && this->domainAuditStatus_ == nullptr && this->domainGroupId_ == nullptr && this->domainGroupName_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr
        && this->domainType_ == nullptr && this->email_ == nullptr && this->expirationCurrDateDiff_ == nullptr && this->expirationDate_ == nullptr && this->expirationDateLong_ == nullptr
        && this->expirationDateStatus_ == nullptr && this->instanceId_ == nullptr && this->premium_ == nullptr && this->productId_ == nullptr && this->registrantOrganization_ == nullptr
        && this->registrantType_ == nullptr && this->registrationDate_ == nullptr && this->registrationDateLong_ == nullptr && this->remark_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tag_ == nullptr && this->zhRegistrantOrganization_ == nullptr; };
        // dnsList Field Functions 
        bool hasDnsList() const { return this->dnsList_ != nullptr;};
        void deleteDnsList() { this->dnsList_ = nullptr;};
        inline const Domain::DnsList & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, Domain::DnsList) };
        inline Domain::DnsList getDnsList() { DARABONBA_PTR_GET(dnsList_, Domain::DnsList) };
        inline Domain& setDnsList(const Domain::DnsList & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
        inline Domain& setDnsList(Domain::DnsList && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


        // domainAuditStatus Field Functions 
        bool hasDomainAuditStatus() const { return this->domainAuditStatus_ != nullptr;};
        void deleteDomainAuditStatus() { this->domainAuditStatus_ = nullptr;};
        inline string getDomainAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(domainAuditStatus_, "") };
        inline Domain& setDomainAuditStatus(string domainAuditStatus) { DARABONBA_PTR_SET_VALUE(domainAuditStatus_, domainAuditStatus) };


        // domainGroupId Field Functions 
        bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
        void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
        inline string getDomainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
        inline Domain& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


        // domainGroupName Field Functions 
        bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
        void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
        inline string getDomainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
        inline Domain& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Domain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainStatus Field Functions 
        bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
        void deleteDomainStatus() { this->domainStatus_ = nullptr;};
        inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
        inline Domain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


        // domainType Field Functions 
        bool hasDomainType() const { return this->domainType_ != nullptr;};
        void deleteDomainType() { this->domainType_ = nullptr;};
        inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
        inline Domain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Domain& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // expirationCurrDateDiff Field Functions 
        bool hasExpirationCurrDateDiff() const { return this->expirationCurrDateDiff_ != nullptr;};
        void deleteExpirationCurrDateDiff() { this->expirationCurrDateDiff_ = nullptr;};
        inline int32_t getExpirationCurrDateDiff() const { DARABONBA_PTR_GET_DEFAULT(expirationCurrDateDiff_, 0) };
        inline Domain& setExpirationCurrDateDiff(int32_t expirationCurrDateDiff) { DARABONBA_PTR_SET_VALUE(expirationCurrDateDiff_, expirationCurrDateDiff) };


        // expirationDate Field Functions 
        bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
        void deleteExpirationDate() { this->expirationDate_ = nullptr;};
        inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
        inline Domain& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


        // expirationDateLong Field Functions 
        bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
        void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
        inline int64_t getExpirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
        inline Domain& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


        // expirationDateStatus Field Functions 
        bool hasExpirationDateStatus() const { return this->expirationDateStatus_ != nullptr;};
        void deleteExpirationDateStatus() { this->expirationDateStatus_ = nullptr;};
        inline string getExpirationDateStatus() const { DARABONBA_PTR_GET_DEFAULT(expirationDateStatus_, "") };
        inline Domain& setExpirationDateStatus(string expirationDateStatus) { DARABONBA_PTR_SET_VALUE(expirationDateStatus_, expirationDateStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Domain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // premium Field Functions 
        bool hasPremium() const { return this->premium_ != nullptr;};
        void deletePremium() { this->premium_ = nullptr;};
        inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
        inline Domain& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Domain& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // registrantOrganization Field Functions 
        bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
        void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
        inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
        inline Domain& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


        // registrantType Field Functions 
        bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
        void deleteRegistrantType() { this->registrantType_ = nullptr;};
        inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
        inline Domain& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


        // registrationDate Field Functions 
        bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
        void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
        inline string getRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
        inline Domain& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


        // registrationDateLong Field Functions 
        bool hasRegistrationDateLong() const { return this->registrationDateLong_ != nullptr;};
        void deleteRegistrationDateLong() { this->registrationDateLong_ = nullptr;};
        inline int64_t getRegistrationDateLong() const { DARABONBA_PTR_GET_DEFAULT(registrationDateLong_, 0L) };
        inline Domain& setRegistrationDateLong(int64_t registrationDateLong) { DARABONBA_PTR_SET_VALUE(registrationDateLong_, registrationDateLong) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Domain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Domain& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const Domain::Tag & getTag() const { DARABONBA_PTR_GET_CONST(tag_, Domain::Tag) };
        inline Domain::Tag getTag() { DARABONBA_PTR_GET(tag_, Domain::Tag) };
        inline Domain& setTag(const Domain::Tag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline Domain& setTag(Domain::Tag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        // zhRegistrantOrganization Field Functions 
        bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
        void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
        inline string getZhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
        inline Domain& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


      protected:
        // The Domain Name System (DNS) servers of the domain name.
        shared_ptr<Domain::DnsList> dnsList_ {};
        // The status of real-name verification for the domain name. Valid values:
        // 
        // *   **FAILED**: Real-name verification for the domain name fails.
        // *   **SUCCEED**: Real-name verification for the domain name is successful.
        // *   **NONAUDIT**: Real-name verification for the domain name is not performed.
        // *   **AUDITING**: Real-name verification for the domain name is in progress.
        shared_ptr<string> domainAuditStatus_ {};
        // The ID of the domain name group.
        shared_ptr<string> domainGroupId_ {};
        // The name of the domain name group.
        shared_ptr<string> domainGroupName_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The status of the domain name. Valid values:
        // 
        // *   **1**: The domain name needs to be renewed.
        // *   **2**: The domain name needs to be redeemed.
        // *   **3**: The domain name is normal.
        // *   **4**: The domain name is being transferred out.
        // *   **5**: The information about the domain name registrant is being modified.
        // *   **6**: Real-name verification is not performed on the domain name.
        // *   **7**: Real-name verification for the domain name fails.
        // *   **8**: The real-name verification is being reviewed.
        shared_ptr<string> domainStatus_ {};
        // The type of the domain name. Valid values:
        // 
        // *   **New gTLD**
        // *   **gTLD**
        // *   **ccTLD**
        shared_ptr<string> domainType_ {};
        // The email address.
        shared_ptr<string> email_ {};
        // The number of days from the expiration date of the domain name to the current date.
        shared_ptr<int32_t> expirationCurrDateDiff_ {};
        // The time when the domain name expires.
        shared_ptr<string> expirationDate_ {};
        // The time when the domain name expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> expirationDateLong_ {};
        // Indicates whether the domain name expires. Valid values:
        // 
        // *   **1**: The domain name does not expire.
        // *   **2**: The domain name expires.
        shared_ptr<string> expirationDateStatus_ {};
        // The instance ID of the domain name.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the domain name is a premium domain name.
        shared_ptr<bool> premium_ {};
        // The service ID.
        shared_ptr<string> productId_ {};
        // The registrant of the domain name.
        shared_ptr<string> registrantOrganization_ {};
        // The registration type of the domain name. Valid values:
        // 
        // *   **1**: individual.
        // *   **2**: enterprise.
        shared_ptr<string> registrantType_ {};
        // The time when the domain name was registered.
        shared_ptr<string> registrationDate_ {};
        // The time when the domain name was registered. This value is a UNIX timestamp that indicates the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> registrationDateLong_ {};
        // The remarks on the domain name.
        shared_ptr<string> remark_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The resource tag.
        shared_ptr<Domain::Tag> tag_ {};
        // The Chinese name of the domain name registrant.
        shared_ptr<string> zhRegistrantOrganization_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline const vector<Data::Domain> & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Data::Domain>) };
      inline vector<Data::Domain> getDomain() { DARABONBA_PTR_GET(domain_, vector<Data::Domain>) };
      inline Data& setDomain(const vector<Data::Domain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
      inline Data& setDomain(vector<Data::Domain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    protected:
      shared_ptr<vector<Data::Domain>> domain_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scrollId_ == nullptr && this->totalItemNum_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ScrollDomainListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ScrollDomainListResponseBody::Data) };
    inline ScrollDomainListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ScrollDomainListResponseBody::Data) };
    inline ScrollDomainListResponseBody& setData(const ScrollDomainListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ScrollDomainListResponseBody& setData(ScrollDomainListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ScrollDomainListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScrollDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ScrollDomainListResponseBody& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ScrollDomainListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


  protected:
    // The domain names.
    shared_ptr<ScrollDomainListResponseBody::Data> data_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scroll ID.
    shared_ptr<string> scrollId_ {};
    // The number of remaining domain names to be queried.
    shared_ptr<int32_t> totalItemNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
