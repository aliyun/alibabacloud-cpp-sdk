// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEO_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TargetVideoFilterVideoDelogos.hpp>
#include <alibabacloud/models/TargetVideoFilterVideoDesensitization.hpp>
#include <alibabacloud/models/TargetVideoFilterVideoWatermarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideoFilterVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideoFilterVideo& obj) { 
      DARABONBA_PTR_TO_JSON(Delogos, delogos_);
      DARABONBA_PTR_TO_JSON(Desensitization, desensitization_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideoFilterVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(Delogos, delogos_);
      DARABONBA_PTR_FROM_JSON(Desensitization, desensitization_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    TargetVideoFilterVideo() = default ;
    TargetVideoFilterVideo(const TargetVideoFilterVideo &) = default ;
    TargetVideoFilterVideo(TargetVideoFilterVideo &&) = default ;
    TargetVideoFilterVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideoFilterVideo() = default ;
    TargetVideoFilterVideo& operator=(const TargetVideoFilterVideo &) = default ;
    TargetVideoFilterVideo& operator=(TargetVideoFilterVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delogos_ != nullptr
        && this->desensitization_ != nullptr && this->speed_ != nullptr && this->watermarks_ != nullptr; };
    // delogos Field Functions 
    bool hasDelogos() const { return this->delogos_ != nullptr;};
    void deleteDelogos() { this->delogos_ = nullptr;};
    inline const vector<Models::TargetVideoFilterVideoDelogos> & delogos() const { DARABONBA_PTR_GET_CONST(delogos_, vector<Models::TargetVideoFilterVideoDelogos>) };
    inline vector<Models::TargetVideoFilterVideoDelogos> delogos() { DARABONBA_PTR_GET(delogos_, vector<Models::TargetVideoFilterVideoDelogos>) };
    inline TargetVideoFilterVideo& setDelogos(const vector<Models::TargetVideoFilterVideoDelogos> & delogos) { DARABONBA_PTR_SET_VALUE(delogos_, delogos) };
    inline TargetVideoFilterVideo& setDelogos(vector<Models::TargetVideoFilterVideoDelogos> && delogos) { DARABONBA_PTR_SET_RVALUE(delogos_, delogos) };


    // desensitization Field Functions 
    bool hasDesensitization() const { return this->desensitization_ != nullptr;};
    void deleteDesensitization() { this->desensitization_ = nullptr;};
    inline const Models::TargetVideoFilterVideoDesensitization & desensitization() const { DARABONBA_PTR_GET_CONST(desensitization_, Models::TargetVideoFilterVideoDesensitization) };
    inline Models::TargetVideoFilterVideoDesensitization desensitization() { DARABONBA_PTR_GET(desensitization_, Models::TargetVideoFilterVideoDesensitization) };
    inline TargetVideoFilterVideo& setDesensitization(const Models::TargetVideoFilterVideoDesensitization & desensitization) { DARABONBA_PTR_SET_VALUE(desensitization_, desensitization) };
    inline TargetVideoFilterVideo& setDesensitization(Models::TargetVideoFilterVideoDesensitization && desensitization) { DARABONBA_PTR_SET_RVALUE(desensitization_, desensitization) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline float speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
    inline TargetVideoFilterVideo& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<Models::TargetVideoFilterVideoWatermarks> & watermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<Models::TargetVideoFilterVideoWatermarks>) };
    inline vector<Models::TargetVideoFilterVideoWatermarks> watermarks() { DARABONBA_PTR_GET(watermarks_, vector<Models::TargetVideoFilterVideoWatermarks>) };
    inline TargetVideoFilterVideo& setWatermarks(const vector<Models::TargetVideoFilterVideoWatermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline TargetVideoFilterVideo& setWatermarks(vector<Models::TargetVideoFilterVideoWatermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    std::shared_ptr<vector<Models::TargetVideoFilterVideoDelogos>> delogos_ = nullptr;
    std::shared_ptr<Models::TargetVideoFilterVideoDesensitization> desensitization_ = nullptr;
    std::shared_ptr<float> speed_ = nullptr;
    std::shared_ptr<vector<Models::TargetVideoFilterVideoWatermarks>> watermarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
