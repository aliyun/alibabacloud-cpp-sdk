// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYSALEINSTANCELISTVERSIONSUMMARYECSCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYSALEINSTANCELISTVERSIONSUMMARYECSCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& obj) { 
      DARABONBA_PTR_TO_JSON(Assigned, assigned_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Used, used_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
    };
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount() = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount(const ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount &) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount(ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount &&) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount() = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& operator=(const ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount &) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& operator=(ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assigned_ == nullptr
        && return this->count_ == nullptr && return this->used_ == nullptr; };
    // assigned Field Functions 
    bool hasAssigned() const { return this->assigned_ != nullptr;};
    void deleteAssigned() { this->assigned_ = nullptr;};
    inline int64_t assigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline int64_t used() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


  protected:
    // 已分配已购授权台数。
    std::shared_ptr<int64_t> assigned_ = nullptr;
    // Number of ECS authorizations allocated.
    std::shared_ptr<int64_t> count_ = nullptr;
    // Number of ECS authorizations used.
    std::shared_ptr<int64_t> used_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
