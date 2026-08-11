// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPDETAILTOPOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPDETAILTOPOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppDetailTopoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppDetailTopoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TimeQuery, timeQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppDetailTopoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TimeQuery, timeQueryShrink_);
    };
    GetAiAppDetailTopoShrinkRequest() = default ;
    GetAiAppDetailTopoShrinkRequest(const GetAiAppDetailTopoShrinkRequest &) = default ;
    GetAiAppDetailTopoShrinkRequest(GetAiAppDetailTopoShrinkRequest &&) = default ;
    GetAiAppDetailTopoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppDetailTopoShrinkRequest() = default ;
    GetAiAppDetailTopoShrinkRequest& operator=(const GetAiAppDetailTopoShrinkRequest &) = default ;
    GetAiAppDetailTopoShrinkRequest& operator=(GetAiAppDetailTopoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->regionId_ == nullptr && this->timeQueryShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAiAppDetailTopoShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAiAppDetailTopoShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timeQueryShrink Field Functions 
    bool hasTimeQueryShrink() const { return this->timeQueryShrink_ != nullptr;};
    void deleteTimeQueryShrink() { this->timeQueryShrink_ = nullptr;};
    inline string getTimeQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(timeQueryShrink_, "") };
    inline GetAiAppDetailTopoShrinkRequest& setTimeQueryShrink(string timeQueryShrink) { DARABONBA_PTR_SET_VALUE(timeQueryShrink_, timeQueryShrink) };


  protected:
    // The application ID that identifies a specific AI application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The time query.
    shared_ptr<string> timeQueryShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
