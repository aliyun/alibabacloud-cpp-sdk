// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETOUCHSKINADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETOUCHSKINADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RetouchSkinAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetouchSkinAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(RetouchDegree, retouchDegree_);
      DARABONBA_PTR_TO_JSON(WhiteningDegree, whiteningDegree_);
    };
    friend void from_json(const Darabonba::Json& j, RetouchSkinAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(RetouchDegree, retouchDegree_);
      DARABONBA_PTR_FROM_JSON(WhiteningDegree, whiteningDegree_);
    };
    RetouchSkinAdvanceRequest() = default ;
    RetouchSkinAdvanceRequest(const RetouchSkinAdvanceRequest &) = default ;
    RetouchSkinAdvanceRequest(RetouchSkinAdvanceRequest &&) = default ;
    RetouchSkinAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetouchSkinAdvanceRequest() = default ;
    RetouchSkinAdvanceRequest& operator=(const RetouchSkinAdvanceRequest &) = default ;
    RetouchSkinAdvanceRequest& operator=(RetouchSkinAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->retouchDegree_ == nullptr && return this->whiteningDegree_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline RetouchSkinAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // retouchDegree Field Functions 
    bool hasRetouchDegree() const { return this->retouchDegree_ != nullptr;};
    void deleteRetouchDegree() { this->retouchDegree_ = nullptr;};
    inline float retouchDegree() const { DARABONBA_PTR_GET_DEFAULT(retouchDegree_, 0.0) };
    inline RetouchSkinAdvanceRequest& setRetouchDegree(float retouchDegree) { DARABONBA_PTR_SET_VALUE(retouchDegree_, retouchDegree) };


    // whiteningDegree Field Functions 
    bool hasWhiteningDegree() const { return this->whiteningDegree_ != nullptr;};
    void deleteWhiteningDegree() { this->whiteningDegree_ = nullptr;};
    inline float whiteningDegree() const { DARABONBA_PTR_GET_DEFAULT(whiteningDegree_, 0.0) };
    inline RetouchSkinAdvanceRequest& setWhiteningDegree(float whiteningDegree) { DARABONBA_PTR_SET_VALUE(whiteningDegree_, whiteningDegree) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<float> retouchDegree_ = nullptr;
    std::shared_ptr<float> whiteningDegree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
