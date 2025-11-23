// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODYCREATEORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODYCREATEORDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateOrderResponseBodyCreateOrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderResponseBodyCreateOrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(OrderIds, orderIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderResponseBodyCreateOrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderIds, orderIds_);
    };
    CreateOrderResponseBodyCreateOrderResult() = default ;
    CreateOrderResponseBodyCreateOrderResult(const CreateOrderResponseBodyCreateOrderResult &) = default ;
    CreateOrderResponseBodyCreateOrderResult(CreateOrderResponseBodyCreateOrderResult &&) = default ;
    CreateOrderResponseBodyCreateOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderResponseBodyCreateOrderResult() = default ;
    CreateOrderResponseBodyCreateOrderResult& operator=(const CreateOrderResponseBodyCreateOrderResult &) = default ;
    CreateOrderResponseBodyCreateOrderResult& operator=(CreateOrderResponseBodyCreateOrderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderIds_ == nullptr; };
    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline const vector<int64_t> & orderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<int64_t>) };
    inline vector<int64_t> orderIds() { DARABONBA_PTR_GET(orderIds_, vector<int64_t>) };
    inline CreateOrderResponseBodyCreateOrderResult& setOrderIds(const vector<int64_t> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
    inline CreateOrderResponseBodyCreateOrderResult& setOrderIds(vector<int64_t> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


  protected:
    std::shared_ptr<vector<int64_t>> orderIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
