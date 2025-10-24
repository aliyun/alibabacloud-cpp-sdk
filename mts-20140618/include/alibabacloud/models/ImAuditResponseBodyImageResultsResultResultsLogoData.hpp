// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSLOGODATA_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSLOGODATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResultsLogoData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResultsLogoData& obj) { 
      DARABONBA_PTR_TO_JSON(h, h_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(w, w_);
      DARABONBA_PTR_TO_JSON(x, x_);
      DARABONBA_PTR_TO_JSON(y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResultsLogoData& obj) { 
      DARABONBA_PTR_FROM_JSON(h, h_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(w, w_);
      DARABONBA_PTR_FROM_JSON(x, x_);
      DARABONBA_PTR_FROM_JSON(y, y_);
    };
    ImAuditResponseBodyImageResultsResultResultsLogoData() = default ;
    ImAuditResponseBodyImageResultsResultResultsLogoData(const ImAuditResponseBodyImageResultsResultResultsLogoData &) = default ;
    ImAuditResponseBodyImageResultsResultResultsLogoData(ImAuditResponseBodyImageResultsResultResultsLogoData &&) = default ;
    ImAuditResponseBodyImageResultsResultResultsLogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResultsLogoData() = default ;
    ImAuditResponseBodyImageResultsResultResultsLogoData& operator=(const ImAuditResponseBodyImageResultsResultResultsLogoData &) = default ;
    ImAuditResponseBodyImageResultsResultResultsLogoData& operator=(ImAuditResponseBodyImageResultsResultResultsLogoData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr && return this->w_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline float h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsLogoData& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsLogoData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsLogoData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline float w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsLogoData& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsLogoData& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsLogoData& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The height of the logo area. Unit: pixel.
    std::shared_ptr<float> h_ = nullptr;
    // The name of the detected logo.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the detected logo. For example, a value of TV indicates a controlled media logo.
    std::shared_ptr<string> type_ = nullptr;
    // The width of the logo area. Unit: pixel.
    std::shared_ptr<float> w_ = nullptr;
    // The distance between the upper-left corner of the logo area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
    std::shared_ptr<float> x_ = nullptr;
    // The distance between the upper-left corner of the logo area and the x-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
