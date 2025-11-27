// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSREQUESTORDERPARAM_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSREQUESTORDERPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersRequestOrderParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersRequestOrderParam& obj) { 
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersRequestOrderParam& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    FilterUsersRequestOrderParam() = default ;
    FilterUsersRequestOrderParam(const FilterUsersRequestOrderParam &) = default ;
    FilterUsersRequestOrderParam(FilterUsersRequestOrderParam &&) = default ;
    FilterUsersRequestOrderParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersRequestOrderParam() = default ;
    FilterUsersRequestOrderParam& operator=(const FilterUsersRequestOrderParam &) = default ;
    FilterUsersRequestOrderParam& operator=(FilterUsersRequestOrderParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderField_ == nullptr
        && return this->orderType_ == nullptr; };
    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline FilterUsersRequestOrderParam& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline FilterUsersRequestOrderParam& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // The field that you want to sort by.
    // 
    // Valid values:
    // 
    // *   EndUserId: the username.
    // *   id: the ID of the primary key.
    // *   gmt_created: the creation time.
    std::shared_ptr<string> orderField_ = nullptr;
    // The direction of the sort.
    // 
    // Valid values:
    // 
    // *   ASC: the ascending order.
    // *   DESC (default): the descending order.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
