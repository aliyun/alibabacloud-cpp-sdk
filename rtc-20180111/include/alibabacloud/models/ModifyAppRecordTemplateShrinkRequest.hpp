// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPRECORDTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPRECORDTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppRecordTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRecordTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RecordTemplate, recordTemplateShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRecordTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RecordTemplate, recordTemplateShrink_);
    };
    ModifyAppRecordTemplateShrinkRequest() = default ;
    ModifyAppRecordTemplateShrinkRequest(const ModifyAppRecordTemplateShrinkRequest &) = default ;
    ModifyAppRecordTemplateShrinkRequest(ModifyAppRecordTemplateShrinkRequest &&) = default ;
    ModifyAppRecordTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRecordTemplateShrinkRequest() = default ;
    ModifyAppRecordTemplateShrinkRequest& operator=(const ModifyAppRecordTemplateShrinkRequest &) = default ;
    ModifyAppRecordTemplateShrinkRequest& operator=(ModifyAppRecordTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->clientToken_ == nullptr && return this->recordTemplateShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppRecordTemplateShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppRecordTemplateShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // recordTemplateShrink Field Functions 
    bool hasRecordTemplateShrink() const { return this->recordTemplateShrink_ != nullptr;};
    void deleteRecordTemplateShrink() { this->recordTemplateShrink_ = nullptr;};
    inline string recordTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(recordTemplateShrink_, "") };
    inline ModifyAppRecordTemplateShrinkRequest& setRecordTemplateShrink(string recordTemplateShrink) { DARABONBA_PTR_SET_VALUE(recordTemplateShrink_, recordTemplateShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> recordTemplateShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
