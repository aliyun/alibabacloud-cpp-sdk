// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONREQUESTSORTCRITERION_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONREQUESTSORTCRITERION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTablePartitionRequestSortCriterion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTablePartitionRequestSortCriterion& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTablePartitionRequestSortCriterion& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
    };
    GetMetaTablePartitionRequestSortCriterion() = default ;
    GetMetaTablePartitionRequestSortCriterion(const GetMetaTablePartitionRequestSortCriterion &) = default ;
    GetMetaTablePartitionRequestSortCriterion(GetMetaTablePartitionRequestSortCriterion &&) = default ;
    GetMetaTablePartitionRequestSortCriterion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTablePartitionRequestSortCriterion() = default ;
    GetMetaTablePartitionRequestSortCriterion& operator=(const GetMetaTablePartitionRequestSortCriterion &) = default ;
    GetMetaTablePartitionRequestSortCriterion& operator=(GetMetaTablePartitionRequestSortCriterion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr
        && this->sortField_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline GetMetaTablePartitionRequestSortCriterion& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline GetMetaTablePartitionRequestSortCriterion& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


  protected:
    // The order in which partitions in the metatable are sorted. Valid values: asc and desc. Default value: desc.
    std::shared_ptr<string> order_ = nullptr;
    // The field that is used to sort partitions in the metatable. Valid values: name and modify_time. By default, partitions in the metatable are sorted based on their creation time.
    std::shared_ptr<string> sortField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
