// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribePurchasedDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribePurchasedDevicesRequest() = default ;
    DescribePurchasedDevicesRequest(const DescribePurchasedDevicesRequest &) = default ;
    DescribePurchasedDevicesRequest(DescribePurchasedDevicesRequest &&) = default ;
    DescribePurchasedDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedDevicesRequest() = default ;
    DescribePurchasedDevicesRequest& operator=(const DescribePurchasedDevicesRequest &) = default ;
    DescribePurchasedDevicesRequest& operator=(DescribePurchasedDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->sortBy_ == nullptr && this->sortDirection_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr && this->vendor_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribePurchasedDevicesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribePurchasedDevicesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePurchasedDevicesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePurchasedDevicesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribePurchasedDevicesRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePurchasedDevicesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribePurchasedDevicesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string getSortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline DescribePurchasedDevicesRequest& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline DescribePurchasedDevicesRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePurchasedDevicesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribePurchasedDevicesRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    shared_ptr<string> groupId_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> sortDirection_ {};
    shared_ptr<string> subType_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
