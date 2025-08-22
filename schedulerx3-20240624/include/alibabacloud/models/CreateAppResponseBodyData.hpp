// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
    };
    CreateAppResponseBodyData() = default ;
    CreateAppResponseBodyData(const CreateAppResponseBodyData &) = default ;
    CreateAppResponseBodyData(CreateAppResponseBodyData &&) = default ;
    CreateAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyData() = default ;
    CreateAppResponseBodyData& operator=(const CreateAppResponseBodyData &) = default ;
    CreateAppResponseBodyData& operator=(CreateAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->appGroupId_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateAppResponseBodyData& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline CreateAppResponseBodyData& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<int64_t> appGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
