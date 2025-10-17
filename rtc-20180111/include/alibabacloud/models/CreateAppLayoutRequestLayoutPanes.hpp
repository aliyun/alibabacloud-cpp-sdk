// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLAYOUTREQUESTLAYOUTPANES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLAYOUTREQUESTLAYOUTPANES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppLayoutRequestLayoutPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppLayoutRequestLayoutPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(PaneId, paneId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppLayoutRequestLayoutPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    CreateAppLayoutRequestLayoutPanes() = default ;
    CreateAppLayoutRequestLayoutPanes(const CreateAppLayoutRequestLayoutPanes &) = default ;
    CreateAppLayoutRequestLayoutPanes(CreateAppLayoutRequestLayoutPanes &&) = default ;
    CreateAppLayoutRequestLayoutPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppLayoutRequestLayoutPanes() = default ;
    CreateAppLayoutRequestLayoutPanes& operator=(const CreateAppLayoutRequestLayoutPanes &) = default ;
    CreateAppLayoutRequestLayoutPanes& operator=(CreateAppLayoutRequestLayoutPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->paneId_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr && return this->ZOrder_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline CreateAppLayoutRequestLayoutPanes& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline int64_t paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0L) };
    inline CreateAppLayoutRequestLayoutPanes& setPaneId(int64_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline CreateAppLayoutRequestLayoutPanes& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline double x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline CreateAppLayoutRequestLayoutPanes& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline double y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline CreateAppLayoutRequestLayoutPanes& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline CreateAppLayoutRequestLayoutPanes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    std::shared_ptr<double> height_ = nullptr;
    std::shared_ptr<int64_t> paneId_ = nullptr;
    std::shared_ptr<double> width_ = nullptr;
    std::shared_ptr<double> x_ = nullptr;
    std::shared_ptr<double> y_ = nullptr;
    std::shared_ptr<int32_t> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
