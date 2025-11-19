// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWPORTCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_VIEWPORTCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ViewPortConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewPortConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ViewPortConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    ViewPortConfiguration() = default ;
    ViewPortConfiguration(const ViewPortConfiguration &) = default ;
    ViewPortConfiguration(ViewPortConfiguration &&) = default ;
    ViewPortConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewPortConfiguration() = default ;
    ViewPortConfiguration& operator=(const ViewPortConfiguration &) = default ;
    ViewPortConfiguration& operator=(ViewPortConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline ViewPortConfiguration& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline ViewPortConfiguration& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // 视口高度（像素）
    // 
    // This parameter is required.
    std::shared_ptr<float> height_ = nullptr;
    // 视口宽度（像素）
    // 
    // This parameter is required.
    std::shared_ptr<float> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
