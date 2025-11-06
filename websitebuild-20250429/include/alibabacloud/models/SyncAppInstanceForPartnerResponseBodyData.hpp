// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncAppInstanceForPartnerResponseBodyDataAppInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstance, appInstance_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstance, appInstance_);
    };
    SyncAppInstanceForPartnerResponseBodyData() = default ;
    SyncAppInstanceForPartnerResponseBodyData(const SyncAppInstanceForPartnerResponseBodyData &) = default ;
    SyncAppInstanceForPartnerResponseBodyData(SyncAppInstanceForPartnerResponseBodyData &&) = default ;
    SyncAppInstanceForPartnerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerResponseBodyData() = default ;
    SyncAppInstanceForPartnerResponseBodyData& operator=(const SyncAppInstanceForPartnerResponseBodyData &) = default ;
    SyncAppInstanceForPartnerResponseBodyData& operator=(SyncAppInstanceForPartnerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstance_ == nullptr; };
    // appInstance Field Functions 
    bool hasAppInstance() const { return this->appInstance_ != nullptr;};
    void deleteAppInstance() { this->appInstance_ = nullptr;};
    inline const Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance & appInstance() const { DARABONBA_PTR_GET_CONST(appInstance_, Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance) };
    inline Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance appInstance() { DARABONBA_PTR_GET(appInstance_, Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance) };
    inline SyncAppInstanceForPartnerResponseBodyData& setAppInstance(const Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance & appInstance) { DARABONBA_PTR_SET_VALUE(appInstance_, appInstance) };
    inline SyncAppInstanceForPartnerResponseBodyData& setAppInstance(Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance && appInstance) { DARABONBA_PTR_SET_RVALUE(appInstance_, appInstance) };


  protected:
    std::shared_ptr<Models::SyncAppInstanceForPartnerResponseBodyDataAppInstance> appInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
