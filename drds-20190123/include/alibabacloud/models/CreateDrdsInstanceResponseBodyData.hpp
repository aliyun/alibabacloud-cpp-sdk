// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRDSINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRDSINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateDrdsInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDrdsInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceIdList, drdsInstanceIdList_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDrdsInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceIdList, drdsInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreateDrdsInstanceResponseBodyData() = default ;
    CreateDrdsInstanceResponseBodyData(const CreateDrdsInstanceResponseBodyData &) = default ;
    CreateDrdsInstanceResponseBodyData(CreateDrdsInstanceResponseBodyData &&) = default ;
    CreateDrdsInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDrdsInstanceResponseBodyData() = default ;
    CreateDrdsInstanceResponseBodyData& operator=(const CreateDrdsInstanceResponseBodyData &) = default ;
    CreateDrdsInstanceResponseBodyData& operator=(CreateDrdsInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceIdList_ != nullptr
        && this->orderId_ != nullptr; };
    // drdsInstanceIdList Field Functions 
    bool hasDrdsInstanceIdList() const { return this->drdsInstanceIdList_ != nullptr;};
    void deleteDrdsInstanceIdList() { this->drdsInstanceIdList_ = nullptr;};
    inline const Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList & drdsInstanceIdList() const { DARABONBA_PTR_GET_CONST(drdsInstanceIdList_, Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList) };
    inline Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList drdsInstanceIdList() { DARABONBA_PTR_GET(drdsInstanceIdList_, Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList) };
    inline CreateDrdsInstanceResponseBodyData& setDrdsInstanceIdList(const Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList & drdsInstanceIdList) { DARABONBA_PTR_SET_VALUE(drdsInstanceIdList_, drdsInstanceIdList) };
    inline CreateDrdsInstanceResponseBodyData& setDrdsInstanceIdList(Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList && drdsInstanceIdList) { DARABONBA_PTR_SET_RVALUE(drdsInstanceIdList_, drdsInstanceIdList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateDrdsInstanceResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // Indicates the ID of the instance.
    std::shared_ptr<Models::CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList> drdsInstanceIdList_ = nullptr;
    // Indicates the ID of the order.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
