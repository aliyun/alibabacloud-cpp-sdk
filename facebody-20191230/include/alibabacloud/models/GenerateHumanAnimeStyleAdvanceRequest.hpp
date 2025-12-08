// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenerateHumanAnimeStyleAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanAnimeStyleAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgoType, algoType_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanAnimeStyleAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgoType, algoType_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
    };
    GenerateHumanAnimeStyleAdvanceRequest() = default ;
    GenerateHumanAnimeStyleAdvanceRequest(const GenerateHumanAnimeStyleAdvanceRequest &) = default ;
    GenerateHumanAnimeStyleAdvanceRequest(GenerateHumanAnimeStyleAdvanceRequest &&) = default ;
    GenerateHumanAnimeStyleAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanAnimeStyleAdvanceRequest() = default ;
    GenerateHumanAnimeStyleAdvanceRequest& operator=(const GenerateHumanAnimeStyleAdvanceRequest &) = default ;
    GenerateHumanAnimeStyleAdvanceRequest& operator=(GenerateHumanAnimeStyleAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algoType_ == nullptr
        && return this->imageURLObject_ == nullptr; };
    // algoType Field Functions 
    bool hasAlgoType() const { return this->algoType_ != nullptr;};
    void deleteAlgoType() { this->algoType_ = nullptr;};
    inline string algoType() const { DARABONBA_PTR_GET_DEFAULT(algoType_, "") };
    inline GenerateHumanAnimeStyleAdvanceRequest& setAlgoType(string algoType) { DARABONBA_PTR_SET_VALUE(algoType_, algoType) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline GenerateHumanAnimeStyleAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


  protected:
    std::shared_ptr<string> algoType_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
