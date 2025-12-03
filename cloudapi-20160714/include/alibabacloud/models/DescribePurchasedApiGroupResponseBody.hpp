// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePurchasedApiGroupResponseBodyDomains.hpp>
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
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->domains_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->purchasedTime_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePurchasedApiGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const DescribePurchasedApiGroupResponseBodyDomains & domains() const { DARABONBA_PTR_GET_CONST(domains_, DescribePurchasedApiGroupResponseBodyDomains) };
    inline DescribePurchasedApiGroupResponseBodyDomains domains() { DARABONBA_PTR_GET(domains_, DescribePurchasedApiGroupResponseBodyDomains) };
    inline DescribePurchasedApiGroupResponseBody& setDomains(const DescribePurchasedApiGroupResponseBodyDomains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribePurchasedApiGroupResponseBody& setDomains(DescribePurchasedApiGroupResponseBodyDomains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribePurchasedApiGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribePurchasedApiGroupResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // purchasedTime Field Functions 
    bool hasPurchasedTime() const { return this->purchasedTime_ != nullptr;};
    void deletePurchasedTime() { this->purchasedTime_ = nullptr;};
    inline string purchasedTime() const { DARABONBA_PTR_GET_DEFAULT(purchasedTime_, "") };
    inline DescribePurchasedApiGroupResponseBody& setPurchasedTime(string purchasedTime) { DARABONBA_PTR_SET_VALUE(purchasedTime_, purchasedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePurchasedApiGroupResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedApiGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePurchasedApiGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the API group.
    std::shared_ptr<string> description_ = nullptr;
    // The list of domain names.
    std::shared_ptr<DescribePurchasedApiGroupResponseBodyDomains> domains_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when the API group was purchased.
    std::shared_ptr<string> purchasedTime_ = nullptr;
    // The region where the API group is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **DELETE**: The API group is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
