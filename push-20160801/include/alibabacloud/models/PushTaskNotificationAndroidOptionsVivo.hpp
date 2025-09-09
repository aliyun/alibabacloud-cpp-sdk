// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSVIVO_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSVIVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsVivo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsVivo& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Importance, importance_);
      DARABONBA_PTR_TO_JSON(ReceiptId, receiptId_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsVivo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Importance, importance_);
      DARABONBA_PTR_FROM_JSON(ReceiptId, receiptId_);
    };
    PushTaskNotificationAndroidOptionsVivo() = default ;
    PushTaskNotificationAndroidOptionsVivo(const PushTaskNotificationAndroidOptionsVivo &) = default ;
    PushTaskNotificationAndroidOptionsVivo(PushTaskNotificationAndroidOptionsVivo &&) = default ;
    PushTaskNotificationAndroidOptionsVivo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsVivo() = default ;
    PushTaskNotificationAndroidOptionsVivo& operator=(const PushTaskNotificationAndroidOptionsVivo &) = default ;
    PushTaskNotificationAndroidOptionsVivo& operator=(PushTaskNotificationAndroidOptionsVivo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->importance_ != nullptr && this->receiptId_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PushTaskNotificationAndroidOptionsVivo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // importance Field Functions 
    bool hasImportance() const { return this->importance_ != nullptr;};
    void deleteImportance() { this->importance_ = nullptr;};
    inline int32_t importance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
    inline PushTaskNotificationAndroidOptionsVivo& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


    // receiptId Field Functions 
    bool hasReceiptId() const { return this->receiptId_ != nullptr;};
    void deleteReceiptId() { this->receiptId_ = nullptr;};
    inline string receiptId() const { DARABONBA_PTR_GET_DEFAULT(receiptId_, "") };
    inline PushTaskNotificationAndroidOptionsVivo& setReceiptId(string receiptId) { DARABONBA_PTR_SET_VALUE(receiptId_, receiptId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> importance_ = nullptr;
    std::shared_ptr<string> receiptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
