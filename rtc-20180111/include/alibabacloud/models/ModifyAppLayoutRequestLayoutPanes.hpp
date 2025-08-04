// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTREQUESTLAYOUTPANES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTREQUESTLAYOUTPANES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppLayoutRequestLayoutPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppLayoutRequestLayoutPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(PaneId, paneId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppLayoutRequestLayoutPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    ModifyAppLayoutRequestLayoutPanes() = default ;
    ModifyAppLayoutRequestLayoutPanes(const ModifyAppLayoutRequestLayoutPanes &) = default ;
    ModifyAppLayoutRequestLayoutPanes(ModifyAppLayoutRequestLayoutPanes &&) = default ;
    ModifyAppLayoutRequestLayoutPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppLayoutRequestLayoutPanes() = default ;
    ModifyAppLayoutRequestLayoutPanes& operator=(const ModifyAppLayoutRequestLayoutPanes &) = default ;
    ModifyAppLayoutRequestLayoutPanes& operator=(ModifyAppLayoutRequestLayoutPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->paneId_ != nullptr && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr && this->ZOrder_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline ModifyAppLayoutRequestLayoutPanes& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline int64_t paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0L) };
    inline ModifyAppLayoutRequestLayoutPanes& setPaneId(int64_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline ModifyAppLayoutRequestLayoutPanes& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline double x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline ModifyAppLayoutRequestLayoutPanes& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline double y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline ModifyAppLayoutRequestLayoutPanes& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline ModifyAppLayoutRequestLayoutPanes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


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
