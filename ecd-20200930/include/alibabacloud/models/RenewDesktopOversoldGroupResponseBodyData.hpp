// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWDESKTOPOVERSOLDGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RENEWDESKTOPOVERSOLDGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RenewDesktopOversoldGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewDesktopOversoldGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewDesktopOversoldGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
    };
    RenewDesktopOversoldGroupResponseBodyData() = default ;
    RenewDesktopOversoldGroupResponseBodyData(const RenewDesktopOversoldGroupResponseBodyData &) = default ;
    RenewDesktopOversoldGroupResponseBodyData(RenewDesktopOversoldGroupResponseBodyData &&) = default ;
    RenewDesktopOversoldGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewDesktopOversoldGroupResponseBodyData() = default ;
    RenewDesktopOversoldGroupResponseBodyData& operator=(const RenewDesktopOversoldGroupResponseBodyData &) = default ;
    RenewDesktopOversoldGroupResponseBodyData& operator=(RenewDesktopOversoldGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->oversoldGroupId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline RenewDesktopOversoldGroupResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string oversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline RenewDesktopOversoldGroupResponseBodyData& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


  protected:
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> oversoldGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
