// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERVIEWPORT_HPP_
#define ALIBABACLOUD_MODELS_BROWSERVIEWPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserViewPort : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserViewPort& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserViewPort& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    BrowserViewPort() = default ;
    BrowserViewPort(const BrowserViewPort &) = default ;
    BrowserViewPort(BrowserViewPort &&) = default ;
    BrowserViewPort(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserViewPort() = default ;
    BrowserViewPort& operator=(const BrowserViewPort &) = default ;
    BrowserViewPort& operator=(BrowserViewPort &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->width_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline BrowserViewPort& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline BrowserViewPort& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<double> height_ = nullptr;
    std::shared_ptr<double> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
