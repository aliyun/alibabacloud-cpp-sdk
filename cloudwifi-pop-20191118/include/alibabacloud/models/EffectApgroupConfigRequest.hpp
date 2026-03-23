// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EFFECTAPGROUPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EFFECTAPGROUPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class EffectApgroupConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EffectApgroupConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApGroupUUId, apGroupUUId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, EffectApgroupConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApGroupUUId, apGroupUUId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    EffectApgroupConfigRequest() = default ;
    EffectApgroupConfigRequest(const EffectApgroupConfigRequest &) = default ;
    EffectApgroupConfigRequest(EffectApgroupConfigRequest &&) = default ;
    EffectApgroupConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EffectApgroupConfigRequest() = default ;
    EffectApgroupConfigRequest& operator=(const EffectApgroupConfigRequest &) = default ;
    EffectApgroupConfigRequest& operator=(EffectApgroupConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apGroupUUId_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr; };
    // apGroupUUId Field Functions 
    bool hasApGroupUUId() const { return this->apGroupUUId_ != nullptr;};
    void deleteApGroupUUId() { this->apGroupUUId_ = nullptr;};
    inline string getApGroupUUId() const { DARABONBA_PTR_GET_DEFAULT(apGroupUUId_, "") };
    inline EffectApgroupConfigRequest& setApGroupUUId(string apGroupUUId) { DARABONBA_PTR_SET_VALUE(apGroupUUId_, apGroupUUId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline EffectApgroupConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EffectApgroupConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // This parameter is required.
    shared_ptr<string> apGroupUUId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
