// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATATASKRUNINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATATASKRUNINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBodyDataTaskRunInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBodyDataTaskRunInfo& obj) { 
      DARABONBA_PTR_TO_JSON(concurrentChargeEnable, concurrentChargeEnable_);
      DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBodyDataTaskRunInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(concurrentChargeEnable, concurrentChargeEnable_);
      DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
    };
    GetVideoDetectShotTaskResponseBodyDataTaskRunInfo() = default ;
    GetVideoDetectShotTaskResponseBodyDataTaskRunInfo(const GetVideoDetectShotTaskResponseBodyDataTaskRunInfo &) = default ;
    GetVideoDetectShotTaskResponseBodyDataTaskRunInfo(GetVideoDetectShotTaskResponseBodyDataTaskRunInfo &&) = default ;
    GetVideoDetectShotTaskResponseBodyDataTaskRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBodyDataTaskRunInfo() = default ;
    GetVideoDetectShotTaskResponseBodyDataTaskRunInfo& operator=(const GetVideoDetectShotTaskResponseBodyDataTaskRunInfo &) = default ;
    GetVideoDetectShotTaskResponseBodyDataTaskRunInfo& operator=(GetVideoDetectShotTaskResponseBodyDataTaskRunInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrentChargeEnable_ == nullptr
        && return this->responseTime_ == nullptr; };
    // concurrentChargeEnable Field Functions 
    bool hasConcurrentChargeEnable() const { return this->concurrentChargeEnable_ != nullptr;};
    void deleteConcurrentChargeEnable() { this->concurrentChargeEnable_ = nullptr;};
    inline bool concurrentChargeEnable() const { DARABONBA_PTR_GET_DEFAULT(concurrentChargeEnable_, false) };
    inline GetVideoDetectShotTaskResponseBodyDataTaskRunInfo& setConcurrentChargeEnable(bool concurrentChargeEnable) { DARABONBA_PTR_SET_VALUE(concurrentChargeEnable_, concurrentChargeEnable) };


    // responseTime Field Functions 
    bool hasResponseTime() const { return this->responseTime_ != nullptr;};
    void deleteResponseTime() { this->responseTime_ = nullptr;};
    inline int64_t responseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
    inline GetVideoDetectShotTaskResponseBodyDataTaskRunInfo& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


  protected:
    std::shared_ptr<bool> concurrentChargeEnable_ = nullptr;
    std::shared_ptr<int64_t> responseTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
