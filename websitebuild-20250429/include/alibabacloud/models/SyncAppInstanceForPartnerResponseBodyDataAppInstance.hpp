// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODYDATAAPPINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODYDATAAPPINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerResponseBodyDataAppInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerResponseBodyDataAppInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerResponseBodyDataAppInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
    };
    SyncAppInstanceForPartnerResponseBodyDataAppInstance() = default ;
    SyncAppInstanceForPartnerResponseBodyDataAppInstance(const SyncAppInstanceForPartnerResponseBodyDataAppInstance &) = default ;
    SyncAppInstanceForPartnerResponseBodyDataAppInstance(SyncAppInstanceForPartnerResponseBodyDataAppInstance &&) = default ;
    SyncAppInstanceForPartnerResponseBodyDataAppInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerResponseBodyDataAppInstance() = default ;
    SyncAppInstanceForPartnerResponseBodyDataAppInstance& operator=(const SyncAppInstanceForPartnerResponseBodyDataAppInstance &) = default ;
    SyncAppInstanceForPartnerResponseBodyDataAppInstance& operator=(SyncAppInstanceForPartnerResponseBodyDataAppInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SyncAppInstanceForPartnerResponseBodyDataAppInstance& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
