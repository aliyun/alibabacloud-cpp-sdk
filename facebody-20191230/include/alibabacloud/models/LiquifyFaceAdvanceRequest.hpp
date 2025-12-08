// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIQUIFYFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LIQUIFYFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class LiquifyFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiquifyFaceAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(SlimDegree, slimDegree_);
    };
    friend void from_json(const Darabonba::Json& j, LiquifyFaceAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(SlimDegree, slimDegree_);
    };
    LiquifyFaceAdvanceRequest() = default ;
    LiquifyFaceAdvanceRequest(const LiquifyFaceAdvanceRequest &) = default ;
    LiquifyFaceAdvanceRequest(LiquifyFaceAdvanceRequest &&) = default ;
    LiquifyFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiquifyFaceAdvanceRequest() = default ;
    LiquifyFaceAdvanceRequest& operator=(const LiquifyFaceAdvanceRequest &) = default ;
    LiquifyFaceAdvanceRequest& operator=(LiquifyFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->slimDegree_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline LiquifyFaceAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // slimDegree Field Functions 
    bool hasSlimDegree() const { return this->slimDegree_ != nullptr;};
    void deleteSlimDegree() { this->slimDegree_ = nullptr;};
    inline float slimDegree() const { DARABONBA_PTR_GET_DEFAULT(slimDegree_, 0.0) };
    inline LiquifyFaceAdvanceRequest& setSlimDegree(float slimDegree) { DARABONBA_PTR_SET_VALUE(slimDegree_, slimDegree) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<float> slimDegree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
