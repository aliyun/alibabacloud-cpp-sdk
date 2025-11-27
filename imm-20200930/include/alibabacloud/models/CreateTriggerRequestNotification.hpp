// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERREQUESTNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERREQUESTNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MNS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateTriggerRequestNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerRequestNotification& obj) { 
      DARABONBA_PTR_TO_JSON(MNS, MNS_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerRequestNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(MNS, MNS_);
    };
    CreateTriggerRequestNotification() = default ;
    CreateTriggerRequestNotification(const CreateTriggerRequestNotification &) = default ;
    CreateTriggerRequestNotification(CreateTriggerRequestNotification &&) = default ;
    CreateTriggerRequestNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerRequestNotification() = default ;
    CreateTriggerRequestNotification& operator=(const CreateTriggerRequestNotification &) = default ;
    CreateTriggerRequestNotification& operator=(CreateTriggerRequestNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->MNS_ == nullptr; };
    // MNS Field Functions 
    bool hasMNS() const { return this->MNS_ != nullptr;};
    void deleteMNS() { this->MNS_ = nullptr;};
    inline const Models::MNS & MNS() const { DARABONBA_PTR_GET_CONST(MNS_, Models::MNS) };
    inline Models::MNS MNS() { DARABONBA_PTR_GET(MNS_, Models::MNS) };
    inline CreateTriggerRequestNotification& setMNS(const Models::MNS & MNS) { DARABONBA_PTR_SET_VALUE(MNS_, MNS) };
    inline CreateTriggerRequestNotification& setMNS(Models::MNS && MNS) { DARABONBA_PTR_SET_RVALUE(MNS_, MNS) };


  protected:
    // The SMQ notification settings.
    std::shared_ptr<Models::MNS> MNS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
