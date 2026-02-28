// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCategoryCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCategoryCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
    };
    friend void from_json(const Darabonba::Json& j, StartCategoryCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
    };
    StartCategoryCallbackRequest() = default ;
    StartCategoryCallbackRequest(const StartCategoryCallbackRequest &) = default ;
    StartCategoryCallbackRequest(StartCategoryCallbackRequest &&) = default ;
    StartCategoryCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCategoryCallbackRequest() = default ;
    StartCategoryCallbackRequest& operator=(const StartCategoryCallbackRequest &) = default ;
    StartCategoryCallbackRequest& operator=(StartCategoryCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Callback : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Callback& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
      };
      friend void from_json(const Darabonba::Json& j, Callback& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
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
      virtual bool empty() const override { return this->category_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Callback& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    protected:
      // This parameter is required.
      shared_ptr<string> category_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->callback_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCategoryCallbackRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline const StartCategoryCallbackRequest::Callback & getCallback() const { DARABONBA_PTR_GET_CONST(callback_, StartCategoryCallbackRequest::Callback) };
    inline StartCategoryCallbackRequest::Callback getCallback() { DARABONBA_PTR_GET(callback_, StartCategoryCallbackRequest::Callback) };
    inline StartCategoryCallbackRequest& setCallback(const StartCategoryCallbackRequest::Callback & callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };
    inline StartCategoryCallbackRequest& setCallback(StartCategoryCallbackRequest::Callback && callback) { DARABONBA_PTR_SET_RVALUE(callback_, callback) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<StartCategoryCallbackRequest::Callback> callback_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
