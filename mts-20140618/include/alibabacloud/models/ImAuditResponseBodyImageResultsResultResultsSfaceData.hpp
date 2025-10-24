// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSSFACEDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSSFACEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResultsSfaceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResultsSfaceData& obj) { 
      DARABONBA_PTR_TO_JSON(faces, faces_);
      DARABONBA_PTR_TO_JSON(h, h_);
      DARABONBA_PTR_TO_JSON(w, w_);
      DARABONBA_PTR_TO_JSON(x, x_);
      DARABONBA_PTR_TO_JSON(y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResultsSfaceData& obj) { 
      DARABONBA_PTR_FROM_JSON(faces, faces_);
      DARABONBA_PTR_FROM_JSON(h, h_);
      DARABONBA_PTR_FROM_JSON(w, w_);
      DARABONBA_PTR_FROM_JSON(x, x_);
      DARABONBA_PTR_FROM_JSON(y, y_);
    };
    ImAuditResponseBodyImageResultsResultResultsSfaceData() = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceData(const ImAuditResponseBodyImageResultsResultResultsSfaceData &) = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceData(ImAuditResponseBodyImageResultsResultResultsSfaceData &&) = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResultsSfaceData() = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceData& operator=(const ImAuditResponseBodyImageResultsResultResultsSfaceData &) = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceData& operator=(ImAuditResponseBodyImageResultsResultResultsSfaceData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faces_ == nullptr
        && return this->h_ == nullptr && return this->w_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces> & faces() const { DARABONBA_PTR_GET_CONST(faces_, vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces> faces() { DARABONBA_PTR_GET(faces_, vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces>) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceData& setFaces(const vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces> & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceData& setFaces(vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces> && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline float h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceData& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline float w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceData& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceData& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceData& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The information about the face detected in the moderated image.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces>> faces_ = nullptr;
    // The height of the face area. Unit: pixel.
    std::shared_ptr<float> h_ = nullptr;
    // The width of the face area. Unit: pixel.
    std::shared_ptr<float> w_ = nullptr;
    // The distance between the upper-left corner of the face area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
    std::shared_ptr<float> x_ = nullptr;
    // The distance between the upper-left corner of the face area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
