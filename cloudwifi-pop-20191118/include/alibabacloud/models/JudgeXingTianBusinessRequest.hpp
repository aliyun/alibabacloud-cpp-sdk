// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JUDGEXINGTIANBUSINESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_JUDGEXINGTIANBUSINESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class JudgeXingTianBusinessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JudgeXingTianBusinessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(RealmId, realmId_);
    };
    friend void from_json(const Darabonba::Json& j, JudgeXingTianBusinessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(RealmId, realmId_);
    };
    JudgeXingTianBusinessRequest() = default ;
    JudgeXingTianBusinessRequest(const JudgeXingTianBusinessRequest &) = default ;
    JudgeXingTianBusinessRequest(JudgeXingTianBusinessRequest &&) = default ;
    JudgeXingTianBusinessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JudgeXingTianBusinessRequest() = default ;
    JudgeXingTianBusinessRequest& operator=(const JudgeXingTianBusinessRequest &) = default ;
    JudgeXingTianBusinessRequest& operator=(JudgeXingTianBusinessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->realmId_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline JudgeXingTianBusinessRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline JudgeXingTianBusinessRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // realmId Field Functions 
    bool hasRealmId() const { return this->realmId_ != nullptr;};
    void deleteRealmId() { this->realmId_ = nullptr;};
    inline string getRealmId() const { DARABONBA_PTR_GET_DEFAULT(realmId_, "") };
    inline JudgeXingTianBusinessRequest& setRealmId(string realmId) { DARABONBA_PTR_SET_VALUE(realmId_, realmId) };


  protected:
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> realmId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
