// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_TO_JSON(PushTasks, pushTasks_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_FROM_JSON(PushTasks, pushTasks_);
    };
    MassPushV2Request() = default ;
    MassPushV2Request(const MassPushV2Request &) = default ;
    MassPushV2Request(MassPushV2Request &&) = default ;
    MassPushV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushV2Request() = default ;
    MassPushV2Request& operator=(const MassPushV2Request &) = default ;
    MassPushV2Request& operator=(MassPushV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->idempotentToken_ == nullptr && return this->pushTasks_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline MassPushV2Request& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string idempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline MassPushV2Request& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // pushTasks Field Functions 
    bool hasPushTasks() const { return this->pushTasks_ != nullptr;};
    void deletePushTasks() { this->pushTasks_ = nullptr;};
    inline const vector<PushTask> & pushTasks() const { DARABONBA_PTR_GET_CONST(pushTasks_, vector<PushTask>) };
    inline vector<PushTask> pushTasks() { DARABONBA_PTR_GET(pushTasks_, vector<PushTask>) };
    inline MassPushV2Request& setPushTasks(const vector<PushTask> & pushTasks) { DARABONBA_PTR_SET_VALUE(pushTasks_, pushTasks) };
    inline MassPushV2Request& setPushTasks(vector<PushTask> && pushTasks) { DARABONBA_PTR_SET_RVALUE(pushTasks_, pushTasks) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> idempotentToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<PushTask>> pushTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
