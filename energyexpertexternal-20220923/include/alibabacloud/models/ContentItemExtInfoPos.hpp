// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTITEMEXTINFOPOS_HPP_
#define ALIBABACLOUD_MODELS_CONTENTITEMEXTINFOPOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ContentItemExtInfoPos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentItemExtInfoPos& obj) { 
      DARABONBA_PTR_TO_JSON(x, x_);
      DARABONBA_PTR_TO_JSON(y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ContentItemExtInfoPos& obj) { 
      DARABONBA_PTR_FROM_JSON(x, x_);
      DARABONBA_PTR_FROM_JSON(y, y_);
    };
    ContentItemExtInfoPos() = default ;
    ContentItemExtInfoPos(const ContentItemExtInfoPos &) = default ;
    ContentItemExtInfoPos(ContentItemExtInfoPos &&) = default ;
    ContentItemExtInfoPos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentItemExtInfoPos() = default ;
    ContentItemExtInfoPos& operator=(const ContentItemExtInfoPos &) = default ;
    ContentItemExtInfoPos& operator=(ContentItemExtInfoPos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int64_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
    inline ContentItemExtInfoPos& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int64_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
    inline ContentItemExtInfoPos& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int64_t> x_ = nullptr;
    std::shared_ptr<int64_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
