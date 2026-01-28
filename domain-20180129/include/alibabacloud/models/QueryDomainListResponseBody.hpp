// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODY_HPP_
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
  class QueryDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryDomainListResponseBody() = default ;
    QueryDomainListResponseBody(const QueryDomainListResponseBody &) = default ;
    QueryDomainListResponseBody(QueryDomainListResponseBody &&) = default ;
    QueryDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainListResponseBody() = default ;
    QueryDomainListResponseBody& operator=(const QueryDomainListResponseBody &) = default ;
    QueryDomainListResponseBody& operator=(QueryDomainListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Ccompany, ccompany_);
          DARABONBA_PTR_TO_JSON(ChgholderStatus, chgholderStatus_);
          DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
          DARABONBA_PTR_TO_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
          DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(DomainType, domainType_);
          DARABONBA_PTR_TO_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
          DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_TO_JSON(ExpirationDateStatus, expirationDateStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Premium, premium_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_TO_JSON(Registrar, registrar_);
          DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
          DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(Ccompany, ccompany_);
          DARABONBA_PTR_FROM_JSON(ChgholderStatus, chgholderStatus_);
          DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
          DARABONBA_PTR_FROM_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
          DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
          DARABONBA_PTR_FROM_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
          DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateStatus, expirationDateStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Premium, premium_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
          DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
          DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
            // The key of the tag added to the resource.
            shared_ptr<string> key_ {};
            // The value of the tag added to the resource.
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
            DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
          };
          friend void from_json(const Darabonba::Json& j, DnsList& obj) { 
            DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
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
          virtual bool empty() const override { return this->dnsList_ == nullptr; };
          // dnsList Field Functions 
          bool hasDnsList() const { return this->dnsList_ != nullptr;};
          void deleteDnsList() { this->dnsList_ = nullptr;};
          inline const vector<string> & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, vector<string>) };
          inline vector<string> getDnsList() { DARABONBA_PTR_GET(dnsList_, vector<string>) };
          inline DnsList& setDnsList(const vector<string> & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
          inline DnsList& setDnsList(vector<string> && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


        protected:
          shared_ptr<vector<string>> dnsList_ {};
        };

        virtual bool empty() const override { return this->ccompany_ == nullptr
        && this->chgholderStatus_ == nullptr && this->dnsList_ == nullptr && this->domainAuditStatus_ == nullptr && this->domainGroupId_ == nullptr && this->domainGroupName_ == nullptr
        && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->domainType_ == nullptr && this->expirationCurrDateDiff_ == nullptr && this->expirationDate_ == nullptr
        && this->expirationDateLong_ == nullptr && this->expirationDateStatus_ == nullptr && this->instanceId_ == nullptr && this->premium_ == nullptr && this->productId_ == nullptr
        && this->registrantType_ == nullptr && this->registrar_ == nullptr && this->registrationDate_ == nullptr && this->registrationDateLong_ == nullptr && this->remark_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
        // ccompany Field Functions 
        bool hasCcompany() const { return this->ccompany_ != nullptr;};
        void deleteCcompany() { this->ccompany_ = nullptr;};
        inline string getCcompany() const { DARABONBA_PTR_GET_DEFAULT(ccompany_, "") };
        inline Domain& setCcompany(string ccompany) { DARABONBA_PTR_SET_VALUE(ccompany_, ccompany) };


        // chgholderStatus Field Functions 
        bool hasChgholderStatus() const { return this->chgholderStatus_ != nullptr;};
        void deleteChgholderStatus() { this->chgholderStatus_ = nullptr;};
        inline string getChgholderStatus() const { DARABONBA_PTR_GET_DEFAULT(chgholderStatus_, "") };
        inline Domain& setChgholderStatus(string chgholderStatus) { DARABONBA_PTR_SET_VALUE(chgholderStatus_, chgholderStatus) };


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


        // registrantType Field Functions 
        bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
        void deleteRegistrantType() { this->registrantType_ = nullptr;};
        inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
        inline Domain& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


        // registrar Field Functions 
        bool hasRegistrar() const { return this->registrar_ != nullptr;};
        void deleteRegistrar() { this->registrar_ = nullptr;};
        inline string getRegistrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
        inline Domain& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


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


      protected:
        // The name of the domain name registrant.
        shared_ptr<string> ccompany_ {};
        // domain transfer status. value:
        // - 0: domain status normal.
        // - 1: domain is pending change holder.
        // - 2: change holder failed.
        shared_ptr<string> chgholderStatus_ {};
        shared_ptr<Domain::DnsList> dnsList_ {};
        // The state of real-name verification for the domain name. Valid values:
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
        // The state of the domain name. Valid values:
        // 
        // *   **1**: The domain name needs to be renewed.
        // *   **2**: The domain name needs to be redeemed.
        // *   **3**: The domain name is normal.
        shared_ptr<string> domainStatus_ {};
        // The type of the domain name. Valid values:
        // 
        // *   **New gTLD**
        // *   **gTLD**
        // *   **ccTLD**
        shared_ptr<string> domainType_ {};
        // The number of days from the expiration date of the domain name to the current date.
        shared_ptr<int32_t> expirationCurrDateDiff_ {};
        // The time when the domain name expires.
        shared_ptr<string> expirationDate_ {};
        // The validity period of the domain name. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> expirationDateLong_ {};
        // Indicates whether the domain name expires. Valid values:
        // 
        // *   **1**: The domain name does not expire.
        // *   **2**: The domain name expires.
        shared_ptr<string> expirationDateStatus_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the domain name is a premium domain name.
        shared_ptr<bool> premium_ {};
        // The service ID.
        shared_ptr<string> productId_ {};
        // The registration type of the domain name. Valid values:
        // 
        // *   **1**: individual
        // *   **2**: enterprise
        shared_ptr<string> registrantType_ {};
        shared_ptr<string> registrar_ {};
        // The time when the domain name was registered.
        shared_ptr<string> registrationDate_ {};
        // Indicates how long the domain name has been registered. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> registrationDateLong_ {};
        // The remarks of the domain name.
        shared_ptr<string> remark_ {};
        // The ID of the resource group to which the domain name belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The tags added to the resource.
        shared_ptr<Domain::Tag> tag_ {};
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

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryDomainListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDomainListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDomainListResponseBody::Data) };
    inline QueryDomainListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDomainListResponseBody::Data) };
    inline QueryDomainListResponseBody& setData(const QueryDomainListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDomainListResponseBody& setData(QueryDomainListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryDomainListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDomainListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryDomainListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryDomainListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryDomainListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    // The page number.
    shared_ptr<int32_t> currentPageNum_ {};
    // The domain names.
    shared_ptr<QueryDomainListResponseBody::Data> data_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> nextPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the current page is preceded by a page.
    shared_ptr<bool> prePage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of domain names returned.
    shared_ptr<int32_t> totalItemNum_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
