// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOSHOTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOSHOTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class DetectVideoShotResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoShotResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ShotFrameIds, shotFrameIds_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoShotResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ShotFrameIds, shotFrameIds_);
    };
    DetectVideoShotResponseBodyData() = default ;
    DetectVideoShotResponseBodyData(const DetectVideoShotResponseBodyData &) = default ;
    DetectVideoShotResponseBodyData(DetectVideoShotResponseBodyData &&) = default ;
    DetectVideoShotResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoShotResponseBodyData() = default ;
    DetectVideoShotResponseBodyData& operator=(const DetectVideoShotResponseBodyData &) = default ;
    DetectVideoShotResponseBodyData& operator=(DetectVideoShotResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shotFrameIds_ != nullptr; };
    // shotFrameIds Field Functions 
    bool hasShotFrameIds() const { return this->shotFrameIds_ != nullptr;};
    void deleteShotFrameIds() { this->shotFrameIds_ = nullptr;};
    inline const vector<int32_t> & shotFrameIds() const { DARABONBA_PTR_GET_CONST(shotFrameIds_, vector<int32_t>) };
    inline vector<int32_t> shotFrameIds() { DARABONBA_PTR_GET(shotFrameIds_, vector<int32_t>) };
    inline DetectVideoShotResponseBodyData& setShotFrameIds(const vector<int32_t> & shotFrameIds) { DARABONBA_PTR_SET_VALUE(shotFrameIds_, shotFrameIds) };
    inline DetectVideoShotResponseBodyData& setShotFrameIds(vector<int32_t> && shotFrameIds) { DARABONBA_PTR_SET_RVALUE(shotFrameIds_, shotFrameIds) };


  protected:
    // 1
    std::shared_ptr<vector<int32_t>> shotFrameIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
