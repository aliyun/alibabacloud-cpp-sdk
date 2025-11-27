// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMILARIMAGE_HPP_
#define ALIBABACLOUD_MODELS_SIMILARIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimilarImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimilarImage& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, SimilarImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    SimilarImage() = default ;
    SimilarImage(const SimilarImage &) = default ;
    SimilarImage(SimilarImage &&) = default ;
    SimilarImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimilarImage() = default ;
    SimilarImage& operator=(const SimilarImage &) = default ;
    SimilarImage& operator=(SimilarImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageScore_ == nullptr
        && return this->URI_ == nullptr; };
    // imageScore Field Functions 
    bool hasImageScore() const { return this->imageScore_ != nullptr;};
    void deleteImageScore() { this->imageScore_ = nullptr;};
    inline double imageScore() const { DARABONBA_PTR_GET_DEFAULT(imageScore_, 0.0) };
    inline SimilarImage& setImageScore(double imageScore) { DARABONBA_PTR_SET_VALUE(imageScore_, imageScore) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline SimilarImage& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    std::shared_ptr<double> imageScore_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
