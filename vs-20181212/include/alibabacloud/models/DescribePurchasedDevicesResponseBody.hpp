// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribePurchasedDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePurchasedDevicesResponseBody() = default ;
    DescribePurchasedDevicesResponseBody(const DescribePurchasedDevicesResponseBody &) = default ;
    DescribePurchasedDevicesResponseBody(DescribePurchasedDevicesResponseBody &&) = default ;
    DescribePurchasedDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedDevicesResponseBody() = default ;
    DescribePurchasedDevicesResponseBody& operator=(const DescribePurchasedDevicesResponseBody &) = default ;
    DescribePurchasedDevicesResponseBody& operator=(DescribePurchasedDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RegisterCode, registerCode_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RegisterCode, registerCode_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->orderId_ == nullptr && this->region_ == nullptr && this->registerCode_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr
        && this->vendor_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Devices& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Devices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Devices& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Devices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Devices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Devices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Devices& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Devices& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // registerCode Field Functions 
      bool hasRegisterCode() const { return this->registerCode_ != nullptr;};
      void deleteRegisterCode() { this->registerCode_ = nullptr;};
      inline string getRegisterCode() const { DARABONBA_PTR_GET_DEFAULT(registerCode_, "") };
      inline Devices& setRegisterCode(string registerCode) { DARABONBA_PTR_SET_VALUE(registerCode_, registerCode) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline Devices& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Devices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Devices& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> registerCode_ {};
      shared_ptr<string> subType_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->devices_ == nullptr
        && this->pageCount_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<DescribePurchasedDevicesResponseBody::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<DescribePurchasedDevicesResponseBody::Devices>) };
    inline vector<DescribePurchasedDevicesResponseBody::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<DescribePurchasedDevicesResponseBody::Devices>) };
    inline DescribePurchasedDevicesResponseBody& setDevices(const vector<DescribePurchasedDevicesResponseBody::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline DescribePurchasedDevicesResponseBody& setDevices(vector<DescribePurchasedDevicesResponseBody::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribePurchasedDevicesResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribePurchasedDevicesResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePurchasedDevicesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePurchasedDevicesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribePurchasedDevicesResponseBody::Devices>> devices_ {};
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
