// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSHUAWEI_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSHUAWEI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsHuawei : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsHuawei& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Importance, importance_);
      DARABONBA_PTR_TO_JSON(ReceiptId, receiptId_);
      DARABONBA_PTR_TO_JSON(Urgency, urgency_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsHuawei& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Importance, importance_);
      DARABONBA_PTR_FROM_JSON(ReceiptId, receiptId_);
      DARABONBA_PTR_FROM_JSON(Urgency, urgency_);
    };
    PushTaskNotificationAndroidOptionsHuawei() = default ;
    PushTaskNotificationAndroidOptionsHuawei(const PushTaskNotificationAndroidOptionsHuawei &) = default ;
    PushTaskNotificationAndroidOptionsHuawei(PushTaskNotificationAndroidOptionsHuawei &&) = default ;
    PushTaskNotificationAndroidOptionsHuawei(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsHuawei() = default ;
    PushTaskNotificationAndroidOptionsHuawei& operator=(const PushTaskNotificationAndroidOptionsHuawei &) = default ;
    PushTaskNotificationAndroidOptionsHuawei& operator=(PushTaskNotificationAndroidOptionsHuawei &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->importance_ != nullptr && this->receiptId_ != nullptr && this->urgency_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PushTaskNotificationAndroidOptionsHuawei& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // importance Field Functions 
    bool hasImportance() const { return this->importance_ != nullptr;};
    void deleteImportance() { this->importance_ = nullptr;};
    inline int32_t importance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
    inline PushTaskNotificationAndroidOptionsHuawei& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


    // receiptId Field Functions 
    bool hasReceiptId() const { return this->receiptId_ != nullptr;};
    void deleteReceiptId() { this->receiptId_ = nullptr;};
    inline string receiptId() const { DARABONBA_PTR_GET_DEFAULT(receiptId_, "") };
    inline PushTaskNotificationAndroidOptionsHuawei& setReceiptId(string receiptId) { DARABONBA_PTR_SET_VALUE(receiptId_, receiptId) };


    // urgency Field Functions 
    bool hasUrgency() const { return this->urgency_ != nullptr;};
    void deleteUrgency() { this->urgency_ = nullptr;};
    inline string urgency() const { DARABONBA_PTR_GET_DEFAULT(urgency_, "") };
    inline PushTaskNotificationAndroidOptionsHuawei& setUrgency(string urgency) { DARABONBA_PTR_SET_VALUE(urgency_, urgency) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> importance_ = nullptr;
    std::shared_ptr<string> receiptId_ = nullptr;
    std::shared_ptr<string> urgency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
