// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORTASKLIMITRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORTASKLIMITRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeMonitorTaskLimitResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorTaskLimitResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(maxTotalItem, maxTotalItem_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorTaskLimitResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(maxTotalItem, maxTotalItem_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
    };
    DescribeMonitorTaskLimitResponseBodyResultObject() = default ;
    DescribeMonitorTaskLimitResponseBodyResultObject(const DescribeMonitorTaskLimitResponseBodyResultObject &) = default ;
    DescribeMonitorTaskLimitResponseBodyResultObject(DescribeMonitorTaskLimitResponseBodyResultObject &&) = default ;
    DescribeMonitorTaskLimitResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorTaskLimitResponseBodyResultObject() = default ;
    DescribeMonitorTaskLimitResponseBodyResultObject& operator=(const DescribeMonitorTaskLimitResponseBodyResultObject &) = default ;
    DescribeMonitorTaskLimitResponseBodyResultObject& operator=(DescribeMonitorTaskLimitResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->maxTotalItem_ == nullptr && return this->totalItem_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline bool limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, false) };
    inline DescribeMonitorTaskLimitResponseBodyResultObject& setLimit(bool limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // maxTotalItem Field Functions 
    bool hasMaxTotalItem() const { return this->maxTotalItem_ != nullptr;};
    void deleteMaxTotalItem() { this->maxTotalItem_ = nullptr;};
    inline int32_t maxTotalItem() const { DARABONBA_PTR_GET_DEFAULT(maxTotalItem_, 0) };
    inline DescribeMonitorTaskLimitResponseBodyResultObject& setMaxTotalItem(int32_t maxTotalItem) { DARABONBA_PTR_SET_VALUE(maxTotalItem_, maxTotalItem) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t totalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeMonitorTaskLimitResponseBodyResultObject& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


  protected:
    // Whether the maximum limit has been reached
    std::shared_ptr<bool> limit_ = nullptr;
    // Maximum number of items
    std::shared_ptr<int32_t> maxTotalItem_ = nullptr;
    // Total number of items
    std::shared_ptr<int32_t> totalItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
