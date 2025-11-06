// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGEQUEUEROUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGEQUEUEROUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateMessageQueueRouteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageQueueRouteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FilterSide, filterSide_);
      DARABONBA_PTR_TO_JSON(GrayBaseTags, grayBaseTagsShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageQueueRouteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FilterSide, filterSide_);
      DARABONBA_PTR_FROM_JSON(GrayBaseTags, grayBaseTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    UpdateMessageQueueRouteShrinkRequest() = default ;
    UpdateMessageQueueRouteShrinkRequest(const UpdateMessageQueueRouteShrinkRequest &) = default ;
    UpdateMessageQueueRouteShrinkRequest(UpdateMessageQueueRouteShrinkRequest &&) = default ;
    UpdateMessageQueueRouteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageQueueRouteShrinkRequest() = default ;
    UpdateMessageQueueRouteShrinkRequest& operator=(const UpdateMessageQueueRouteShrinkRequest &) = default ;
    UpdateMessageQueueRouteShrinkRequest& operator=(UpdateMessageQueueRouteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->enable_ == nullptr && return this->filterSide_ == nullptr && return this->grayBaseTagsShrink_ == nullptr
        && return this->namespace_ == nullptr && return this->region_ == nullptr && return this->tagsShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateMessageQueueRouteShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSide Field Functions 
    bool hasFilterSide() const { return this->filterSide_ != nullptr;};
    void deleteFilterSide() { this->filterSide_ = nullptr;};
    inline string filterSide() const { DARABONBA_PTR_GET_DEFAULT(filterSide_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setFilterSide(string filterSide) { DARABONBA_PTR_SET_VALUE(filterSide_, filterSide) };


    // grayBaseTagsShrink Field Functions 
    bool hasGrayBaseTagsShrink() const { return this->grayBaseTagsShrink_ != nullptr;};
    void deleteGrayBaseTagsShrink() { this->grayBaseTagsShrink_ = nullptr;};
    inline string grayBaseTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(grayBaseTagsShrink_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setGrayBaseTagsShrink(string grayBaseTagsShrink) { DARABONBA_PTR_SET_VALUE(grayBaseTagsShrink_, grayBaseTagsShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateMessageQueueRouteShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    // Specifies whether the canary release for messaging feature is enabled for the application. Valid values:
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // The side for message filtering when the canary release for messaging feature is enabled.
    std::shared_ptr<string> filterSide_ = nullptr;
    std::shared_ptr<string> grayBaseTagsShrink_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The tag that is negligible for the untagged environment of the application.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
