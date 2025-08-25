// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSLOGODATALIST_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSLOGODATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyDataResultsSubResultsLogoDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyDataResultsSubResultsLogoDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyDataResultsSubResultsLogoDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    ScanImageResponseBodyDataResultsSubResultsLogoDataList() = default ;
    ScanImageResponseBodyDataResultsSubResultsLogoDataList(const ScanImageResponseBodyDataResultsSubResultsLogoDataList &) = default ;
    ScanImageResponseBodyDataResultsSubResultsLogoDataList(ScanImageResponseBodyDataResultsSubResultsLogoDataList &&) = default ;
    ScanImageResponseBodyDataResultsSubResultsLogoDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyDataResultsSubResultsLogoDataList() = default ;
    ScanImageResponseBodyDataResultsSubResultsLogoDataList& operator=(const ScanImageResponseBodyDataResultsSubResultsLogoDataList &) = default ;
    ScanImageResponseBodyDataResultsSubResultsLogoDataList& operator=(ScanImageResponseBodyDataResultsSubResultsLogoDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsLogoDataList& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScanImageResponseBodyDataResultsSubResultsLogoDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ScanImageResponseBodyDataResultsSubResultsLogoDataList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsLogoDataList& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsLogoDataList& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsLogoDataList& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
