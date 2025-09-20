// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETIMAGE_HPP_
#define ALIBABACLOUD_MODELS_TARGETIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TargetImageAnimations.hpp>
#include <alibabacloud/models/TargetImageSnapshots.hpp>
#include <alibabacloud/models/TargetImageSprites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetImage& obj) { 
      DARABONBA_PTR_TO_JSON(Animations, animations_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Sprites, sprites_);
    };
    friend void from_json(const Darabonba::Json& j, TargetImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Animations, animations_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Sprites, sprites_);
    };
    TargetImage() = default ;
    TargetImage(const TargetImage &) = default ;
    TargetImage(TargetImage &&) = default ;
    TargetImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetImage() = default ;
    TargetImage& operator=(const TargetImage &) = default ;
    TargetImage& operator=(TargetImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->animations_ != nullptr
        && this->snapshots_ != nullptr && this->sprites_ != nullptr; };
    // animations Field Functions 
    bool hasAnimations() const { return this->animations_ != nullptr;};
    void deleteAnimations() { this->animations_ = nullptr;};
    inline const vector<TargetImageAnimations> & animations() const { DARABONBA_PTR_GET_CONST(animations_, vector<TargetImageAnimations>) };
    inline vector<TargetImageAnimations> animations() { DARABONBA_PTR_GET(animations_, vector<TargetImageAnimations>) };
    inline TargetImage& setAnimations(const vector<TargetImageAnimations> & animations) { DARABONBA_PTR_SET_VALUE(animations_, animations) };
    inline TargetImage& setAnimations(vector<TargetImageAnimations> && animations) { DARABONBA_PTR_SET_RVALUE(animations_, animations) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<TargetImageSnapshots> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<TargetImageSnapshots>) };
    inline vector<TargetImageSnapshots> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<TargetImageSnapshots>) };
    inline TargetImage& setSnapshots(const vector<TargetImageSnapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline TargetImage& setSnapshots(vector<TargetImageSnapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // sprites Field Functions 
    bool hasSprites() const { return this->sprites_ != nullptr;};
    void deleteSprites() { this->sprites_ = nullptr;};
    inline const vector<TargetImageSprites> & sprites() const { DARABONBA_PTR_GET_CONST(sprites_, vector<TargetImageSprites>) };
    inline vector<TargetImageSprites> sprites() { DARABONBA_PTR_GET(sprites_, vector<TargetImageSprites>) };
    inline TargetImage& setSprites(const vector<TargetImageSprites> & sprites) { DARABONBA_PTR_SET_VALUE(sprites_, sprites) };
    inline TargetImage& setSprites(vector<TargetImageSprites> && sprites) { DARABONBA_PTR_SET_RVALUE(sprites_, sprites) };


  protected:
    std::shared_ptr<vector<TargetImageAnimations>> animations_ = nullptr;
    std::shared_ptr<vector<TargetImageSnapshots>> snapshots_ = nullptr;
    std::shared_ptr<vector<TargetImageSprites>> sprites_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
