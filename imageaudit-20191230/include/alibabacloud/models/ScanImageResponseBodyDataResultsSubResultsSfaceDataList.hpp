// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSSFACEDATALIST_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSSFACEDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyDataResultsSubResultsSfaceDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyDataResultsSubResultsSfaceDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Faces, faces_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyDataResultsSubResultsSfaceDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Faces, faces_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    ScanImageResponseBodyDataResultsSubResultsSfaceDataList() = default ;
    ScanImageResponseBodyDataResultsSubResultsSfaceDataList(const ScanImageResponseBodyDataResultsSubResultsSfaceDataList &) = default ;
    ScanImageResponseBodyDataResultsSubResultsSfaceDataList(ScanImageResponseBodyDataResultsSubResultsSfaceDataList &&) = default ;
    ScanImageResponseBodyDataResultsSubResultsSfaceDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyDataResultsSubResultsSfaceDataList() = default ;
    ScanImageResponseBodyDataResultsSubResultsSfaceDataList& operator=(const ScanImageResponseBodyDataResultsSubResultsSfaceDataList &) = default ;
    ScanImageResponseBodyDataResultsSubResultsSfaceDataList& operator=(ScanImageResponseBodyDataResultsSubResultsSfaceDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faces_ != nullptr
        && this->height_ != nullptr && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces> & faces() const { DARABONBA_PTR_GET_CONST(faces_, vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces> faces() { DARABONBA_PTR_GET(faces_, vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces>) };
    inline ScanImageResponseBodyDataResultsSubResultsSfaceDataList& setFaces(const vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces> & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline ScanImageResponseBodyDataResultsSubResultsSfaceDataList& setFaces(vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces> && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsSfaceDataList& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsSfaceDataList& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsSfaceDataList& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsSfaceDataList& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataListFaces>> faces_ = nullptr;
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
