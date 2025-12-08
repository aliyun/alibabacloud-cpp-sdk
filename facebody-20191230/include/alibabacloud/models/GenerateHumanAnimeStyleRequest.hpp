// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenerateHumanAnimeStyleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanAnimeStyleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgoType, algoType_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanAnimeStyleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgoType, algoType_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    GenerateHumanAnimeStyleRequest() = default ;
    GenerateHumanAnimeStyleRequest(const GenerateHumanAnimeStyleRequest &) = default ;
    GenerateHumanAnimeStyleRequest(GenerateHumanAnimeStyleRequest &&) = default ;
    GenerateHumanAnimeStyleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanAnimeStyleRequest() = default ;
    GenerateHumanAnimeStyleRequest& operator=(const GenerateHumanAnimeStyleRequest &) = default ;
    GenerateHumanAnimeStyleRequest& operator=(GenerateHumanAnimeStyleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algoType_ == nullptr
        && return this->imageURL_ == nullptr; };
    // algoType Field Functions 
    bool hasAlgoType() const { return this->algoType_ != nullptr;};
    void deleteAlgoType() { this->algoType_ = nullptr;};
    inline string algoType() const { DARABONBA_PTR_GET_DEFAULT(algoType_, "") };
    inline GenerateHumanAnimeStyleRequest& setAlgoType(string algoType) { DARABONBA_PTR_SET_VALUE(algoType_, algoType) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline GenerateHumanAnimeStyleRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<string> algoType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
