// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CANCELRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CancelResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, CancelResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    CancelResponseBodyData() = default ;
    CancelResponseBodyData(const CancelResponseBodyData &) = default ;
    CancelResponseBodyData(CancelResponseBodyData &&) = default ;
    CancelResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelResponseBodyData() = default ;
    CancelResponseBodyData& operator=(const CancelResponseBodyData &) = default ;
    CancelResponseBodyData& operator=(CancelResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline CancelResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    // order number
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
