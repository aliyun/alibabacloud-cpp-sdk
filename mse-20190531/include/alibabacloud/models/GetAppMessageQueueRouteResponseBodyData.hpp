// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPMESSAGEQUEUEROUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPMESSAGEQUEUEROUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetAppMessageQueueRouteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppMessageQueueRouteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FilterSide, filterSide_);
      DARABONBA_PTR_TO_JSON(GrayBaseTags, grayBaseTags_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppMessageQueueRouteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FilterSide, filterSide_);
      DARABONBA_PTR_FROM_JSON(GrayBaseTags, grayBaseTags_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetAppMessageQueueRouteResponseBodyData() = default ;
    GetAppMessageQueueRouteResponseBodyData(const GetAppMessageQueueRouteResponseBodyData &) = default ;
    GetAppMessageQueueRouteResponseBodyData(GetAppMessageQueueRouteResponseBodyData &&) = default ;
    GetAppMessageQueueRouteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppMessageQueueRouteResponseBodyData() = default ;
    GetAppMessageQueueRouteResponseBodyData& operator=(const GetAppMessageQueueRouteResponseBodyData &) = default ;
    GetAppMessageQueueRouteResponseBodyData& operator=(GetAppMessageQueueRouteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->enable_ == nullptr && return this->filterSide_ == nullptr && return this->grayBaseTags_ == nullptr && return this->region_ == nullptr && return this->tags_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAppMessageQueueRouteResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetAppMessageQueueRouteResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSide Field Functions 
    bool hasFilterSide() const { return this->filterSide_ != nullptr;};
    void deleteFilterSide() { this->filterSide_ = nullptr;};
    inline string filterSide() const { DARABONBA_PTR_GET_DEFAULT(filterSide_, "") };
    inline GetAppMessageQueueRouteResponseBodyData& setFilterSide(string filterSide) { DARABONBA_PTR_SET_VALUE(filterSide_, filterSide) };


    // grayBaseTags Field Functions 
    bool hasGrayBaseTags() const { return this->grayBaseTags_ != nullptr;};
    void deleteGrayBaseTags() { this->grayBaseTags_ = nullptr;};
    inline const vector<string> & grayBaseTags() const { DARABONBA_PTR_GET_CONST(grayBaseTags_, vector<string>) };
    inline vector<string> grayBaseTags() { DARABONBA_PTR_GET(grayBaseTags_, vector<string>) };
    inline GetAppMessageQueueRouteResponseBodyData& setGrayBaseTags(const vector<string> & grayBaseTags) { DARABONBA_PTR_SET_VALUE(grayBaseTags_, grayBaseTags) };
    inline GetAppMessageQueueRouteResponseBodyData& setGrayBaseTags(vector<string> && grayBaseTags) { DARABONBA_PTR_SET_RVALUE(grayBaseTags_, grayBaseTags) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAppMessageQueueRouteResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetAppMessageQueueRouteResponseBodyData& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAppMessageQueueRouteResponseBodyData& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // Indicates whether the canary release for messaging feature is enabled.
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // The side for message filtering when the canary release for messaging feature is enabled.
    std::shared_ptr<string> filterSide_ = nullptr;
    std::shared_ptr<vector<string>> grayBaseTags_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The tags used to ignore message consumption for nodes in untagged environments.
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
