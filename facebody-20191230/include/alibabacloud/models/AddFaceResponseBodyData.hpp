// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class AddFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(QualitieScore, qualitieScore_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(QualitieScore, qualitieScore_);
    };
    AddFaceResponseBodyData() = default ;
    AddFaceResponseBodyData(const AddFaceResponseBodyData &) = default ;
    AddFaceResponseBodyData(AddFaceResponseBodyData &&) = default ;
    AddFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceResponseBodyData() = default ;
    AddFaceResponseBodyData& operator=(const AddFaceResponseBodyData &) = default ;
    AddFaceResponseBodyData& operator=(AddFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceId_ == nullptr
        && return this->qualitieScore_ == nullptr; };
    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline AddFaceResponseBodyData& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // qualitieScore Field Functions 
    bool hasQualitieScore() const { return this->qualitieScore_ != nullptr;};
    void deleteQualitieScore() { this->qualitieScore_ = nullptr;};
    inline float qualitieScore() const { DARABONBA_PTR_GET_DEFAULT(qualitieScore_, 0.0) };
    inline AddFaceResponseBodyData& setQualitieScore(float qualitieScore) { DARABONBA_PTR_SET_VALUE(qualitieScore_, qualitieScore) };


  protected:
    std::shared_ptr<string> faceId_ = nullptr;
    std::shared_ptr<float> qualitieScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
