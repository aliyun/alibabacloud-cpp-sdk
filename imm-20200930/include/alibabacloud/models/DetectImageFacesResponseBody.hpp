// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGEFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGEFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Figure.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageFacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageFacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Faces, faces_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageFacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Faces, faces_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageFacesResponseBody() = default ;
    DetectImageFacesResponseBody(const DetectImageFacesResponseBody &) = default ;
    DetectImageFacesResponseBody(DetectImageFacesResponseBody &&) = default ;
    DetectImageFacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageFacesResponseBody() = default ;
    DetectImageFacesResponseBody& operator=(const DetectImageFacesResponseBody &) = default ;
    DetectImageFacesResponseBody& operator=(DetectImageFacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faces_ != nullptr
        && this->requestId_ != nullptr; };
    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const vector<Figure> & faces() const { DARABONBA_PTR_GET_CONST(faces_, vector<Figure>) };
    inline vector<Figure> faces() { DARABONBA_PTR_GET(faces_, vector<Figure>) };
    inline DetectImageFacesResponseBody& setFaces(const vector<Figure> & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline DetectImageFacesResponseBody& setFaces(vector<Figure> && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageFacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The faces.
    std::shared_ptr<vector<Figure>> faces_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
