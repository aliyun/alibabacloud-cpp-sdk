// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGESCORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGESCORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectImageScoreResponseBodyImageScore.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageScoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageScoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageScoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageScoreResponseBody() = default ;
    DetectImageScoreResponseBody(const DetectImageScoreResponseBody &) = default ;
    DetectImageScoreResponseBody(DetectImageScoreResponseBody &&) = default ;
    DetectImageScoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageScoreResponseBody() = default ;
    DetectImageScoreResponseBody& operator=(const DetectImageScoreResponseBody &) = default ;
    DetectImageScoreResponseBody& operator=(DetectImageScoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageScore_ != nullptr
        && this->requestId_ != nullptr; };
    // imageScore Field Functions 
    bool hasImageScore() const { return this->imageScore_ != nullptr;};
    void deleteImageScore() { this->imageScore_ = nullptr;};
    inline const DetectImageScoreResponseBodyImageScore & imageScore() const { DARABONBA_PTR_GET_CONST(imageScore_, DetectImageScoreResponseBodyImageScore) };
    inline DetectImageScoreResponseBodyImageScore imageScore() { DARABONBA_PTR_GET(imageScore_, DetectImageScoreResponseBodyImageScore) };
    inline DetectImageScoreResponseBody& setImageScore(const DetectImageScoreResponseBodyImageScore & imageScore) { DARABONBA_PTR_SET_VALUE(imageScore_, imageScore) };
    inline DetectImageScoreResponseBody& setImageScore(DetectImageScoreResponseBodyImageScore && imageScore) { DARABONBA_PTR_SET_RVALUE(imageScore_, imageScore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageScoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quality score of the image.
    std::shared_ptr<DetectImageScoreResponseBodyImageScore> imageScore_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
