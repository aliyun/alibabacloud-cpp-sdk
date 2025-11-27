// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCHRONIZEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCHRONIZEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class SynchronizeAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SynchronizeAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TargetRegionIds, targetRegionIds_);
    };
    friend void from_json(const Darabonba::Json& j, SynchronizeAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TargetRegionIds, targetRegionIds_);
    };
    SynchronizeAppRequest() = default ;
    SynchronizeAppRequest(const SynchronizeAppRequest &) = default ;
    SynchronizeAppRequest(SynchronizeAppRequest &&) = default ;
    SynchronizeAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SynchronizeAppRequest() = default ;
    SynchronizeAppRequest& operator=(const SynchronizeAppRequest &) = default ;
    SynchronizeAppRequest& operator=(SynchronizeAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->targetRegionIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SynchronizeAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // targetRegionIds Field Functions 
    bool hasTargetRegionIds() const { return this->targetRegionIds_ != nullptr;};
    void deleteTargetRegionIds() { this->targetRegionIds_ = nullptr;};
    inline const vector<string> & targetRegionIds() const { DARABONBA_PTR_GET_CONST(targetRegionIds_, vector<string>) };
    inline vector<string> targetRegionIds() { DARABONBA_PTR_GET(targetRegionIds_, vector<string>) };
    inline SynchronizeAppRequest& setTargetRegionIds(const vector<string> & targetRegionIds) { DARABONBA_PTR_SET_VALUE(targetRegionIds_, targetRegionIds) };
    inline SynchronizeAppRequest& setTargetRegionIds(vector<string> && targetRegionIds) { DARABONBA_PTR_SET_RVALUE(targetRegionIds_, targetRegionIds) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The list of arrays that are synchronized to the specified region. If \\"all\\" is included, it is synchronized to all other unsynchronized regions by default.
    std::shared_ptr<vector<string>> targetRegionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
