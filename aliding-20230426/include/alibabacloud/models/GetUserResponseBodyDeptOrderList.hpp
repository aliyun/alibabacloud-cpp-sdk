// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYDEPTORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYDEPTORDERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserResponseBodyDeptOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyDeptOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(deptId, deptId_);
      DARABONBA_PTR_TO_JSON(order, order_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyDeptOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(deptId, deptId_);
      DARABONBA_PTR_FROM_JSON(order, order_);
    };
    GetUserResponseBodyDeptOrderList() = default ;
    GetUserResponseBodyDeptOrderList(const GetUserResponseBodyDeptOrderList &) = default ;
    GetUserResponseBodyDeptOrderList(GetUserResponseBodyDeptOrderList &&) = default ;
    GetUserResponseBodyDeptOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyDeptOrderList() = default ;
    GetUserResponseBodyDeptOrderList& operator=(const GetUserResponseBodyDeptOrderList &) = default ;
    GetUserResponseBodyDeptOrderList& operator=(GetUserResponseBodyDeptOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deptId_ != nullptr
        && this->order_ != nullptr; };
    // deptId Field Functions 
    bool hasDeptId() const { return this->deptId_ != nullptr;};
    void deleteDeptId() { this->deptId_ = nullptr;};
    inline int64_t deptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, 0L) };
    inline GetUserResponseBodyDeptOrderList& setDeptId(int64_t deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int64_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
    inline GetUserResponseBodyDeptOrderList& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    std::shared_ptr<int64_t> deptId_ = nullptr;
    std::shared_ptr<int64_t> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
