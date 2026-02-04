// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUPGRADEITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKUPGRADEITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class UpgradeItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpgradeItem& obj) { 
        DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
        DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_TO_JSON(UpgradeItemId, upgradeItemId_);
      };
      friend void from_json(const Darabonba::Json& j, UpgradeItem& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_FROM_JSON(UpgradeItemId, upgradeItemId_);
      };
      UpgradeItem() = default ;
      UpgradeItem(const UpgradeItem &) = default ;
      UpgradeItem(UpgradeItem &&) = default ;
      UpgradeItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpgradeItem() = default ;
      UpgradeItem& operator=(const UpgradeItem &) = default ;
      UpgradeItem& operator=(UpgradeItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkResult_ == nullptr
        && this->checkStatus_ == nullptr && this->upgradeItemId_ == nullptr; };
      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
      inline UpgradeItem& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // checkStatus Field Functions 
      bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
      void deleteCheckStatus() { this->checkStatus_ = nullptr;};
      inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
      inline UpgradeItem& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


      // upgradeItemId Field Functions 
      bool hasUpgradeItemId() const { return this->upgradeItemId_ != nullptr;};
      void deleteUpgradeItemId() { this->upgradeItemId_ = nullptr;};
      inline string getUpgradeItemId() const { DARABONBA_PTR_GET_DEFAULT(upgradeItemId_, "") };
      inline UpgradeItem& setUpgradeItemId(string upgradeItemId) { DARABONBA_PTR_SET_VALUE(upgradeItemId_, upgradeItemId) };


    protected:
      shared_ptr<string> checkResult_ {};
      shared_ptr<string> checkStatus_ {};
      shared_ptr<string> upgradeItemId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->upgradeItem_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckUpgradeItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // upgradeItem Field Functions 
    bool hasUpgradeItem() const { return this->upgradeItem_ != nullptr;};
    void deleteUpgradeItem() { this->upgradeItem_ = nullptr;};
    inline const CheckUpgradeItemResponseBody::UpgradeItem & getUpgradeItem() const { DARABONBA_PTR_GET_CONST(upgradeItem_, CheckUpgradeItemResponseBody::UpgradeItem) };
    inline CheckUpgradeItemResponseBody::UpgradeItem getUpgradeItem() { DARABONBA_PTR_GET(upgradeItem_, CheckUpgradeItemResponseBody::UpgradeItem) };
    inline CheckUpgradeItemResponseBody& setUpgradeItem(const CheckUpgradeItemResponseBody::UpgradeItem & upgradeItem) { DARABONBA_PTR_SET_VALUE(upgradeItem_, upgradeItem) };
    inline CheckUpgradeItemResponseBody& setUpgradeItem(CheckUpgradeItemResponseBody::UpgradeItem && upgradeItem) { DARABONBA_PTR_SET_RVALUE(upgradeItem_, upgradeItem) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CheckUpgradeItemResponseBody::UpgradeItem> upgradeItem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
