// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIQUIFYFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LIQUIFYFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class LiquifyFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiquifyFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(SlimDegree, slimDegree_);
    };
    friend void from_json(const Darabonba::Json& j, LiquifyFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(SlimDegree, slimDegree_);
    };
    LiquifyFaceRequest() = default ;
    LiquifyFaceRequest(const LiquifyFaceRequest &) = default ;
    LiquifyFaceRequest(LiquifyFaceRequest &&) = default ;
    LiquifyFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiquifyFaceRequest() = default ;
    LiquifyFaceRequest& operator=(const LiquifyFaceRequest &) = default ;
    LiquifyFaceRequest& operator=(LiquifyFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->slimDegree_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline LiquifyFaceRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // slimDegree Field Functions 
    bool hasSlimDegree() const { return this->slimDegree_ != nullptr;};
    void deleteSlimDegree() { this->slimDegree_ = nullptr;};
    inline float slimDegree() const { DARABONBA_PTR_GET_DEFAULT(slimDegree_, 0.0) };
    inline LiquifyFaceRequest& setSlimDegree(float slimDegree) { DARABONBA_PTR_SET_VALUE(slimDegree_, slimDegree) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<float> slimDegree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
