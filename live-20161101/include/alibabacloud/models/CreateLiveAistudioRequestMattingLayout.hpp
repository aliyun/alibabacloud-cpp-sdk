// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEAISTUDIOREQUESTMATTINGLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEAISTUDIOREQUESTMATTINGLAYOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveAIStudioRequestMattingLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveAIStudioRequestMattingLayout& obj) { 
      DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_TO_JSON(PositionX, positionX_);
      DARABONBA_PTR_TO_JSON(PositionY, positionY_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveAIStudioRequestMattingLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionX, positionX_);
      DARABONBA_PTR_FROM_JSON(PositionY, positionY_);
    };
    CreateLiveAIStudioRequestMattingLayout() = default ;
    CreateLiveAIStudioRequestMattingLayout(const CreateLiveAIStudioRequestMattingLayout &) = default ;
    CreateLiveAIStudioRequestMattingLayout(CreateLiveAIStudioRequestMattingLayout &&) = default ;
    CreateLiveAIStudioRequestMattingLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveAIStudioRequestMattingLayout() = default ;
    CreateLiveAIStudioRequestMattingLayout& operator=(const CreateLiveAIStudioRequestMattingLayout &) = default ;
    CreateLiveAIStudioRequestMattingLayout& operator=(CreateLiveAIStudioRequestMattingLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->heightNormalized_ != nullptr
        && this->positionX_ != nullptr && this->positionY_ != nullptr; };
    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline CreateLiveAIStudioRequestMattingLayout& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // positionX Field Functions 
    bool hasPositionX() const { return this->positionX_ != nullptr;};
    void deletePositionX() { this->positionX_ = nullptr;};
    inline float positionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0.0) };
    inline CreateLiveAIStudioRequestMattingLayout& setPositionX(float positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


    // positionY Field Functions 
    bool hasPositionY() const { return this->positionY_ != nullptr;};
    void deletePositionY() { this->positionY_ = nullptr;};
    inline float positionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0.0) };
    inline CreateLiveAIStudioRequestMattingLayout& setPositionY(float positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


  protected:
    // The normalized value of the material height. The value indicates the ratio of the material height to the height of the background. Valid values: **0 to 1**.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The x-coordinate of the material. Valid values: **0 to 1**. The upper-left corner is used as the coordinate origin for the material.
    std::shared_ptr<float> positionX_ = nullptr;
    // The y-coordinate of the material. Valid values: **0 to 1**. The upper-left corner is used as the coordinate origin for the material.
    std::shared_ptr<float> positionY_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
