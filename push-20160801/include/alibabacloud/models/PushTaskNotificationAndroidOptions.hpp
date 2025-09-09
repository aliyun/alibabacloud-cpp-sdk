// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroidOptionsAccs.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroidOptionsHonor.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroidOptionsHuawei.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroidOptionsOppo.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroidOptionsVivo.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroidOptionsXiaomi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Accs, accs_);
      DARABONBA_PTR_TO_JSON(Honor, honor_);
      DARABONBA_PTR_TO_JSON(Huawei, huawei_);
      DARABONBA_PTR_TO_JSON(Oppo, oppo_);
      DARABONBA_PTR_TO_JSON(Vivo, vivo_);
      DARABONBA_PTR_TO_JSON(Xiaomi, xiaomi_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Accs, accs_);
      DARABONBA_PTR_FROM_JSON(Honor, honor_);
      DARABONBA_PTR_FROM_JSON(Huawei, huawei_);
      DARABONBA_PTR_FROM_JSON(Oppo, oppo_);
      DARABONBA_PTR_FROM_JSON(Vivo, vivo_);
      DARABONBA_PTR_FROM_JSON(Xiaomi, xiaomi_);
    };
    PushTaskNotificationAndroidOptions() = default ;
    PushTaskNotificationAndroidOptions(const PushTaskNotificationAndroidOptions &) = default ;
    PushTaskNotificationAndroidOptions(PushTaskNotificationAndroidOptions &&) = default ;
    PushTaskNotificationAndroidOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptions() = default ;
    PushTaskNotificationAndroidOptions& operator=(const PushTaskNotificationAndroidOptions &) = default ;
    PushTaskNotificationAndroidOptions& operator=(PushTaskNotificationAndroidOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accs_ != nullptr
        && this->honor_ != nullptr && this->huawei_ != nullptr && this->oppo_ != nullptr && this->vivo_ != nullptr && this->xiaomi_ != nullptr; };
    // accs Field Functions 
    bool hasAccs() const { return this->accs_ != nullptr;};
    void deleteAccs() { this->accs_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptionsAccs & accs() const { DARABONBA_PTR_GET_CONST(accs_, Models::PushTaskNotificationAndroidOptionsAccs) };
    inline Models::PushTaskNotificationAndroidOptionsAccs accs() { DARABONBA_PTR_GET(accs_, Models::PushTaskNotificationAndroidOptionsAccs) };
    inline PushTaskNotificationAndroidOptions& setAccs(const Models::PushTaskNotificationAndroidOptionsAccs & accs) { DARABONBA_PTR_SET_VALUE(accs_, accs) };
    inline PushTaskNotificationAndroidOptions& setAccs(Models::PushTaskNotificationAndroidOptionsAccs && accs) { DARABONBA_PTR_SET_RVALUE(accs_, accs) };


    // honor Field Functions 
    bool hasHonor() const { return this->honor_ != nullptr;};
    void deleteHonor() { this->honor_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptionsHonor & honor() const { DARABONBA_PTR_GET_CONST(honor_, Models::PushTaskNotificationAndroidOptionsHonor) };
    inline Models::PushTaskNotificationAndroidOptionsHonor honor() { DARABONBA_PTR_GET(honor_, Models::PushTaskNotificationAndroidOptionsHonor) };
    inline PushTaskNotificationAndroidOptions& setHonor(const Models::PushTaskNotificationAndroidOptionsHonor & honor) { DARABONBA_PTR_SET_VALUE(honor_, honor) };
    inline PushTaskNotificationAndroidOptions& setHonor(Models::PushTaskNotificationAndroidOptionsHonor && honor) { DARABONBA_PTR_SET_RVALUE(honor_, honor) };


    // huawei Field Functions 
    bool hasHuawei() const { return this->huawei_ != nullptr;};
    void deleteHuawei() { this->huawei_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptionsHuawei & huawei() const { DARABONBA_PTR_GET_CONST(huawei_, Models::PushTaskNotificationAndroidOptionsHuawei) };
    inline Models::PushTaskNotificationAndroidOptionsHuawei huawei() { DARABONBA_PTR_GET(huawei_, Models::PushTaskNotificationAndroidOptionsHuawei) };
    inline PushTaskNotificationAndroidOptions& setHuawei(const Models::PushTaskNotificationAndroidOptionsHuawei & huawei) { DARABONBA_PTR_SET_VALUE(huawei_, huawei) };
    inline PushTaskNotificationAndroidOptions& setHuawei(Models::PushTaskNotificationAndroidOptionsHuawei && huawei) { DARABONBA_PTR_SET_RVALUE(huawei_, huawei) };


    // oppo Field Functions 
    bool hasOppo() const { return this->oppo_ != nullptr;};
    void deleteOppo() { this->oppo_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptionsOppo & oppo() const { DARABONBA_PTR_GET_CONST(oppo_, Models::PushTaskNotificationAndroidOptionsOppo) };
    inline Models::PushTaskNotificationAndroidOptionsOppo oppo() { DARABONBA_PTR_GET(oppo_, Models::PushTaskNotificationAndroidOptionsOppo) };
    inline PushTaskNotificationAndroidOptions& setOppo(const Models::PushTaskNotificationAndroidOptionsOppo & oppo) { DARABONBA_PTR_SET_VALUE(oppo_, oppo) };
    inline PushTaskNotificationAndroidOptions& setOppo(Models::PushTaskNotificationAndroidOptionsOppo && oppo) { DARABONBA_PTR_SET_RVALUE(oppo_, oppo) };


    // vivo Field Functions 
    bool hasVivo() const { return this->vivo_ != nullptr;};
    void deleteVivo() { this->vivo_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptionsVivo & vivo() const { DARABONBA_PTR_GET_CONST(vivo_, Models::PushTaskNotificationAndroidOptionsVivo) };
    inline Models::PushTaskNotificationAndroidOptionsVivo vivo() { DARABONBA_PTR_GET(vivo_, Models::PushTaskNotificationAndroidOptionsVivo) };
    inline PushTaskNotificationAndroidOptions& setVivo(const Models::PushTaskNotificationAndroidOptionsVivo & vivo) { DARABONBA_PTR_SET_VALUE(vivo_, vivo) };
    inline PushTaskNotificationAndroidOptions& setVivo(Models::PushTaskNotificationAndroidOptionsVivo && vivo) { DARABONBA_PTR_SET_RVALUE(vivo_, vivo) };


    // xiaomi Field Functions 
    bool hasXiaomi() const { return this->xiaomi_ != nullptr;};
    void deleteXiaomi() { this->xiaomi_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptionsXiaomi & xiaomi() const { DARABONBA_PTR_GET_CONST(xiaomi_, Models::PushTaskNotificationAndroidOptionsXiaomi) };
    inline Models::PushTaskNotificationAndroidOptionsXiaomi xiaomi() { DARABONBA_PTR_GET(xiaomi_, Models::PushTaskNotificationAndroidOptionsXiaomi) };
    inline PushTaskNotificationAndroidOptions& setXiaomi(const Models::PushTaskNotificationAndroidOptionsXiaomi & xiaomi) { DARABONBA_PTR_SET_VALUE(xiaomi_, xiaomi) };
    inline PushTaskNotificationAndroidOptions& setXiaomi(Models::PushTaskNotificationAndroidOptionsXiaomi && xiaomi) { DARABONBA_PTR_SET_RVALUE(xiaomi_, xiaomi) };


  protected:
    std::shared_ptr<Models::PushTaskNotificationAndroidOptionsAccs> accs_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationAndroidOptionsHonor> honor_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationAndroidOptionsHuawei> huawei_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationAndroidOptionsOppo> oppo_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationAndroidOptionsVivo> vivo_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationAndroidOptionsXiaomi> xiaomi_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
