// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUPGRADEITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKUPGRADEITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckUpgradeItemResponseBodyUpgradeItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CheckUpgradeItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUpgradeItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpgradeItem, upgradeItem_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUpgradeItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpgradeItem, upgradeItem_);
    };
    CheckUpgradeItemResponseBody() = default ;
    CheckUpgradeItemResponseBody(const CheckUpgradeItemResponseBody &) = default ;
    CheckUpgradeItemResponseBody(CheckUpgradeItemResponseBody &&) = default ;
    CheckUpgradeItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUpgradeItemResponseBody() = default ;
    CheckUpgradeItemResponseBody& operator=(const CheckUpgradeItemResponseBody &) = default ;
    CheckUpgradeItemResponseBody& operator=(CheckUpgradeItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->upgradeItem_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckUpgradeItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // upgradeItem Field Functions 
    bool hasUpgradeItem() const { return this->upgradeItem_ != nullptr;};
    void deleteUpgradeItem() { this->upgradeItem_ = nullptr;};
    inline const CheckUpgradeItemResponseBodyUpgradeItem & upgradeItem() const { DARABONBA_PTR_GET_CONST(upgradeItem_, CheckUpgradeItemResponseBodyUpgradeItem) };
    inline CheckUpgradeItemResponseBodyUpgradeItem upgradeItem() { DARABONBA_PTR_GET(upgradeItem_, CheckUpgradeItemResponseBodyUpgradeItem) };
    inline CheckUpgradeItemResponseBody& setUpgradeItem(const CheckUpgradeItemResponseBodyUpgradeItem & upgradeItem) { DARABONBA_PTR_SET_VALUE(upgradeItem_, upgradeItem) };
    inline CheckUpgradeItemResponseBody& setUpgradeItem(CheckUpgradeItemResponseBodyUpgradeItem && upgradeItem) { DARABONBA_PTR_SET_RVALUE(upgradeItem_, upgradeItem) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CheckUpgradeItemResponseBodyUpgradeItem> upgradeItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
