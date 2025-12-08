// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETOUCHSKINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETOUCHSKINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RetouchSkinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetouchSkinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(RetouchDegree, retouchDegree_);
      DARABONBA_PTR_TO_JSON(WhiteningDegree, whiteningDegree_);
    };
    friend void from_json(const Darabonba::Json& j, RetouchSkinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(RetouchDegree, retouchDegree_);
      DARABONBA_PTR_FROM_JSON(WhiteningDegree, whiteningDegree_);
    };
    RetouchSkinRequest() = default ;
    RetouchSkinRequest(const RetouchSkinRequest &) = default ;
    RetouchSkinRequest(RetouchSkinRequest &&) = default ;
    RetouchSkinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetouchSkinRequest() = default ;
    RetouchSkinRequest& operator=(const RetouchSkinRequest &) = default ;
    RetouchSkinRequest& operator=(RetouchSkinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->retouchDegree_ == nullptr && return this->whiteningDegree_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline RetouchSkinRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // retouchDegree Field Functions 
    bool hasRetouchDegree() const { return this->retouchDegree_ != nullptr;};
    void deleteRetouchDegree() { this->retouchDegree_ = nullptr;};
    inline float retouchDegree() const { DARABONBA_PTR_GET_DEFAULT(retouchDegree_, 0.0) };
    inline RetouchSkinRequest& setRetouchDegree(float retouchDegree) { DARABONBA_PTR_SET_VALUE(retouchDegree_, retouchDegree) };


    // whiteningDegree Field Functions 
    bool hasWhiteningDegree() const { return this->whiteningDegree_ != nullptr;};
    void deleteWhiteningDegree() { this->whiteningDegree_ = nullptr;};
    inline float whiteningDegree() const { DARABONBA_PTR_GET_DEFAULT(whiteningDegree_, 0.0) };
    inline RetouchSkinRequest& setWhiteningDegree(float whiteningDegree) { DARABONBA_PTR_SET_VALUE(whiteningDegree_, whiteningDegree) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<float> retouchDegree_ = nullptr;
    std::shared_ptr<float> whiteningDegree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
