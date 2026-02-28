// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCALLBACKMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCALLBACKMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCallbackMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCallbackMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCallbackMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyCallbackMetaRequest() = default ;
    ModifyCallbackMetaRequest(const ModifyCallbackMetaRequest &) = default ;
    ModifyCallbackMetaRequest(ModifyCallbackMetaRequest &&) = default ;
    ModifyCallbackMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCallbackMetaRequest() = default ;
    ModifyCallbackMetaRequest& operator=(const ModifyCallbackMetaRequest &) = default ;
    ModifyCallbackMetaRequest& operator=(ModifyCallbackMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Callback : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Callback& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Conf, conf_);
        DARABONBA_PTR_TO_JSON(SubEvent, subEvent_);
      };
      friend void from_json(const Darabonba::Json& j, Callback& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Conf, conf_);
        DARABONBA_PTR_FROM_JSON(SubEvent, subEvent_);
      };
      Callback() = default ;
      Callback(const Callback &) = default ;
      Callback(Callback &&) = default ;
      Callback(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Callback() = default ;
      Callback& operator=(const Callback &) = default ;
      Callback& operator=(Callback &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->conf_ == nullptr && this->subEvent_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Callback& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // conf Field Functions 
      bool hasConf() const { return this->conf_ != nullptr;};
      void deleteConf() { this->conf_ = nullptr;};
      inline string getConf() const { DARABONBA_PTR_GET_DEFAULT(conf_, "") };
      inline Callback& setConf(string conf) { DARABONBA_PTR_SET_VALUE(conf_, conf) };


      // subEvent Field Functions 
      bool hasSubEvent() const { return this->subEvent_ != nullptr;};
      void deleteSubEvent() { this->subEvent_ = nullptr;};
      inline const vector<int32_t> & getSubEvent() const { DARABONBA_PTR_GET_CONST(subEvent_, vector<int32_t>) };
      inline vector<int32_t> getSubEvent() { DARABONBA_PTR_GET(subEvent_, vector<int32_t>) };
      inline Callback& setSubEvent(const vector<int32_t> & subEvent) { DARABONBA_PTR_SET_VALUE(subEvent_, subEvent) };
      inline Callback& setSubEvent(vector<int32_t> && subEvent) { DARABONBA_PTR_SET_RVALUE(subEvent_, subEvent) };


    protected:
      // This parameter is required.
      shared_ptr<string> category_ {};
      // This parameter is required.
      shared_ptr<string> conf_ {};
      shared_ptr<vector<int32_t>> subEvent_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->callback_ == nullptr && this->ownerId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyCallbackMetaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline const ModifyCallbackMetaRequest::Callback & getCallback() const { DARABONBA_PTR_GET_CONST(callback_, ModifyCallbackMetaRequest::Callback) };
    inline ModifyCallbackMetaRequest::Callback getCallback() { DARABONBA_PTR_GET(callback_, ModifyCallbackMetaRequest::Callback) };
    inline ModifyCallbackMetaRequest& setCallback(const ModifyCallbackMetaRequest::Callback & callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };
    inline ModifyCallbackMetaRequest& setCallback(ModifyCallbackMetaRequest::Callback && callback) { DARABONBA_PTR_SET_RVALUE(callback_, callback) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCallbackMetaRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<ModifyCallbackMetaRequest::Callback> callback_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
