// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFACEENTITYRESPONSEBODYDATAFACES_HPP_
#define ALIBABACLOUD_MODELS_GETFACEENTITYRESPONSEBODYDATAFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GetFaceEntityResponseBodyDataFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFaceEntityResponseBodyDataFaces& obj) { 
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFaceEntityResponseBodyDataFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
    };
    GetFaceEntityResponseBodyDataFaces() = default ;
    GetFaceEntityResponseBodyDataFaces(const GetFaceEntityResponseBodyDataFaces &) = default ;
    GetFaceEntityResponseBodyDataFaces(GetFaceEntityResponseBodyDataFaces &&) = default ;
    GetFaceEntityResponseBodyDataFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFaceEntityResponseBodyDataFaces() = default ;
    GetFaceEntityResponseBodyDataFaces& operator=(const GetFaceEntityResponseBodyDataFaces &) = default ;
    GetFaceEntityResponseBodyDataFaces& operator=(GetFaceEntityResponseBodyDataFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceId_ == nullptr; };
    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline GetFaceEntityResponseBodyDataFaces& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


  protected:
    std::shared_ptr<string> faceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
