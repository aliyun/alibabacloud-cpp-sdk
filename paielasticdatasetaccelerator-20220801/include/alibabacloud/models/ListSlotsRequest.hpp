// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class ListSlotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(SlotIds, slotIds_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUri, storageUri_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(SlotIds, slotIds_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUri, storageUri_);
    };
    ListSlotsRequest() = default ;
    ListSlotsRequest(const ListSlotsRequest &) = default ;
    ListSlotsRequest(ListSlotsRequest &&) = default ;
    ListSlotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlotsRequest() = default ;
    ListSlotsRequest& operator=(const ListSlotsRequest &) = default ;
    ListSlotsRequest& operator=(ListSlotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointIds_ == nullptr
        && this->instanceIds_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->phase_ == nullptr && this->slotIds_ == nullptr && this->sortBy_ == nullptr && this->storageType_ == nullptr && this->storageUri_ == nullptr; };
    // endpointIds Field Functions 
    bool hasEndpointIds() const { return this->endpointIds_ != nullptr;};
    void deleteEndpointIds() { this->endpointIds_ = nullptr;};
    inline string getEndpointIds() const { DARABONBA_PTR_GET_DEFAULT(endpointIds_, "") };
    inline ListSlotsRequest& setEndpointIds(string endpointIds) { DARABONBA_PTR_SET_VALUE(endpointIds_, endpointIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ListSlotsRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSlotsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSlotsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSlotsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSlotsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListSlotsRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // slotIds Field Functions 
    bool hasSlotIds() const { return this->slotIds_ != nullptr;};
    void deleteSlotIds() { this->slotIds_ = nullptr;};
    inline string getSlotIds() const { DARABONBA_PTR_GET_DEFAULT(slotIds_, "") };
    inline ListSlotsRequest& setSlotIds(string slotIds) { DARABONBA_PTR_SET_VALUE(slotIds_, slotIds) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSlotsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListSlotsRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUri Field Functions 
    bool hasStorageUri() const { return this->storageUri_ != nullptr;};
    void deleteStorageUri() { this->storageUri_ = nullptr;};
    inline string getStorageUri() const { DARABONBA_PTR_GET_DEFAULT(storageUri_, "") };
    inline ListSlotsRequest& setStorageUri(string storageUri) { DARABONBA_PTR_SET_VALUE(storageUri_, storageUri) };


  protected:
    // 加速槽所对应的数据集加速挂载点的唯一标识符。
    shared_ptr<string> endpointIds_ {};
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> order_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> phase_ {};
    shared_ptr<string> slotIds_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> storageType_ {};
    // 数据集加速槽的数据存储路径（URI）。
    shared_ptr<string> storageUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
