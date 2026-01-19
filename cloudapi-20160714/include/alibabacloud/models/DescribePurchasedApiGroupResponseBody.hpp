// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PurchasedTime, purchasedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PurchasedTime, purchasedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePurchasedApiGroupResponseBody() = default ;
    DescribePurchasedApiGroupResponseBody(const DescribePurchasedApiGroupResponseBody &) = default ;
    DescribePurchasedApiGroupResponseBody(DescribePurchasedApiGroupResponseBody &&) = default ;
    DescribePurchasedApiGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupResponseBody() = default ;
    DescribePurchasedApiGroupResponseBody& operator=(const DescribePurchasedApiGroupResponseBody &) = default ;
    DescribePurchasedApiGroupResponseBody& operator=(DescribePurchasedApiGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(DomainItem, domainItem_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainItem, domainItem_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainItem& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        };
        friend void from_json(const Darabonba::Json& j, DomainItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        };
        DomainItem() = default ;
        DomainItem(const DomainItem &) = default ;
        DomainItem(DomainItem &&) = default ;
        DomainItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainItem() = default ;
        DomainItem& operator=(const DomainItem &) = default ;
        DomainItem& operator=(DomainItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      protected:
        // The domain name.
        shared_ptr<string> domainName_ {};
      };

      virtual bool empty() const override { return this->domainItem_ == nullptr; };
      // domainItem Field Functions 
      bool hasDomainItem() const { return this->domainItem_ != nullptr;};
      void deleteDomainItem() { this->domainItem_ = nullptr;};
      inline const vector<Domains::DomainItem> & getDomainItem() const { DARABONBA_PTR_GET_CONST(domainItem_, vector<Domains::DomainItem>) };
      inline vector<Domains::DomainItem> getDomainItem() { DARABONBA_PTR_GET(domainItem_, vector<Domains::DomainItem>) };
      inline Domains& setDomainItem(const vector<Domains::DomainItem> & domainItem) { DARABONBA_PTR_SET_VALUE(domainItem_, domainItem) };
      inline Domains& setDomainItem(vector<Domains::DomainItem> && domainItem) { DARABONBA_PTR_SET_RVALUE(domainItem_, domainItem) };


    protected:
      shared_ptr<vector<Domains::DomainItem>> domainItem_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->domains_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->purchasedTime_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePurchasedApiGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const DescribePurchasedApiGroupResponseBody::Domains & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, DescribePurchasedApiGroupResponseBody::Domains) };
    inline DescribePurchasedApiGroupResponseBody::Domains getDomains() { DARABONBA_PTR_GET(domains_, DescribePurchasedApiGroupResponseBody::Domains) };
    inline DescribePurchasedApiGroupResponseBody& setDomains(const DescribePurchasedApiGroupResponseBody::Domains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribePurchasedApiGroupResponseBody& setDomains(DescribePurchasedApiGroupResponseBody::Domains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribePurchasedApiGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribePurchasedApiGroupResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // purchasedTime Field Functions 
    bool hasPurchasedTime() const { return this->purchasedTime_ != nullptr;};
    void deletePurchasedTime() { this->purchasedTime_ = nullptr;};
    inline string getPurchasedTime() const { DARABONBA_PTR_GET_DEFAULT(purchasedTime_, "") };
    inline DescribePurchasedApiGroupResponseBody& setPurchasedTime(string purchasedTime) { DARABONBA_PTR_SET_VALUE(purchasedTime_, purchasedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePurchasedApiGroupResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedApiGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePurchasedApiGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the API group.
    shared_ptr<string> description_ {};
    // The list of domain names.
    shared_ptr<DescribePurchasedApiGroupResponseBody::Domains> domains_ {};
    // The ID of the API group.
    shared_ptr<string> groupId_ {};
    // The name of the API group.
    shared_ptr<string> groupName_ {};
    // The time when the API group was purchased.
    shared_ptr<string> purchasedTime_ {};
    // The region where the API group is located.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **DELETE**: The API group is deleted.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
