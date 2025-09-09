// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSHONOR_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSHONOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsHonor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsHonor& obj) { 
      DARABONBA_PTR_TO_JSON(Importance, importance_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsHonor& obj) { 
      DARABONBA_PTR_FROM_JSON(Importance, importance_);
    };
    PushTaskNotificationAndroidOptionsHonor() = default ;
    PushTaskNotificationAndroidOptionsHonor(const PushTaskNotificationAndroidOptionsHonor &) = default ;
    PushTaskNotificationAndroidOptionsHonor(PushTaskNotificationAndroidOptionsHonor &&) = default ;
    PushTaskNotificationAndroidOptionsHonor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsHonor() = default ;
    PushTaskNotificationAndroidOptionsHonor& operator=(const PushTaskNotificationAndroidOptionsHonor &) = default ;
    PushTaskNotificationAndroidOptionsHonor& operator=(PushTaskNotificationAndroidOptionsHonor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->importance_ != nullptr; };
    // importance Field Functions 
    bool hasImportance() const { return this->importance_ != nullptr;};
    void deleteImportance() { this->importance_ = nullptr;};
    inline int32_t importance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
    inline PushTaskNotificationAndroidOptionsHonor& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


  protected:
    std::shared_ptr<int32_t> importance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
