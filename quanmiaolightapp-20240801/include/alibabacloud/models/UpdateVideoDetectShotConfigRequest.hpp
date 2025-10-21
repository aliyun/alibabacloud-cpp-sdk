// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEODETECTSHOTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEODETECTSHOTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class UpdateVideoDetectShotConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoDetectShotConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(asyncConcurrency, asyncConcurrency_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoDetectShotConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncConcurrency, asyncConcurrency_);
    };
    UpdateVideoDetectShotConfigRequest() = default ;
    UpdateVideoDetectShotConfigRequest(const UpdateVideoDetectShotConfigRequest &) = default ;
    UpdateVideoDetectShotConfigRequest(UpdateVideoDetectShotConfigRequest &&) = default ;
    UpdateVideoDetectShotConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoDetectShotConfigRequest() = default ;
    UpdateVideoDetectShotConfigRequest& operator=(const UpdateVideoDetectShotConfigRequest &) = default ;
    UpdateVideoDetectShotConfigRequest& operator=(UpdateVideoDetectShotConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncConcurrency_ == nullptr; };
    // asyncConcurrency Field Functions 
    bool hasAsyncConcurrency() const { return this->asyncConcurrency_ != nullptr;};
    void deleteAsyncConcurrency() { this->asyncConcurrency_ = nullptr;};
    inline int32_t asyncConcurrency() const { DARABONBA_PTR_GET_DEFAULT(asyncConcurrency_, 0) };
    inline UpdateVideoDetectShotConfigRequest& setAsyncConcurrency(int32_t asyncConcurrency) { DARABONBA_PTR_SET_VALUE(asyncConcurrency_, asyncConcurrency) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> asyncConcurrency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
