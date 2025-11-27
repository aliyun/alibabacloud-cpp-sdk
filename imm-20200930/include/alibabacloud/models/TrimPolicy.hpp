// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIMPOLICY_HPP_
#define ALIBABACLOUD_MODELS_TRIMPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TrimPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrimPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(DisableDeleteEmptyCell, disableDeleteEmptyCell_);
      DARABONBA_PTR_TO_JSON(DisableDeleteRepeatedStyle, disableDeleteRepeatedStyle_);
      DARABONBA_PTR_TO_JSON(DisableDeleteUnusedPicture, disableDeleteUnusedPicture_);
      DARABONBA_PTR_TO_JSON(DisableDeleteUnusedShape, disableDeleteUnusedShape_);
    };
    friend void from_json(const Darabonba::Json& j, TrimPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableDeleteEmptyCell, disableDeleteEmptyCell_);
      DARABONBA_PTR_FROM_JSON(DisableDeleteRepeatedStyle, disableDeleteRepeatedStyle_);
      DARABONBA_PTR_FROM_JSON(DisableDeleteUnusedPicture, disableDeleteUnusedPicture_);
      DARABONBA_PTR_FROM_JSON(DisableDeleteUnusedShape, disableDeleteUnusedShape_);
    };
    TrimPolicy() = default ;
    TrimPolicy(const TrimPolicy &) = default ;
    TrimPolicy(TrimPolicy &&) = default ;
    TrimPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrimPolicy() = default ;
    TrimPolicy& operator=(const TrimPolicy &) = default ;
    TrimPolicy& operator=(TrimPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disableDeleteEmptyCell_ == nullptr
        && return this->disableDeleteRepeatedStyle_ == nullptr && return this->disableDeleteUnusedPicture_ == nullptr && return this->disableDeleteUnusedShape_ == nullptr; };
    // disableDeleteEmptyCell Field Functions 
    bool hasDisableDeleteEmptyCell() const { return this->disableDeleteEmptyCell_ != nullptr;};
    void deleteDisableDeleteEmptyCell() { this->disableDeleteEmptyCell_ = nullptr;};
    inline bool disableDeleteEmptyCell() const { DARABONBA_PTR_GET_DEFAULT(disableDeleteEmptyCell_, false) };
    inline TrimPolicy& setDisableDeleteEmptyCell(bool disableDeleteEmptyCell) { DARABONBA_PTR_SET_VALUE(disableDeleteEmptyCell_, disableDeleteEmptyCell) };


    // disableDeleteRepeatedStyle Field Functions 
    bool hasDisableDeleteRepeatedStyle() const { return this->disableDeleteRepeatedStyle_ != nullptr;};
    void deleteDisableDeleteRepeatedStyle() { this->disableDeleteRepeatedStyle_ = nullptr;};
    inline bool disableDeleteRepeatedStyle() const { DARABONBA_PTR_GET_DEFAULT(disableDeleteRepeatedStyle_, false) };
    inline TrimPolicy& setDisableDeleteRepeatedStyle(bool disableDeleteRepeatedStyle) { DARABONBA_PTR_SET_VALUE(disableDeleteRepeatedStyle_, disableDeleteRepeatedStyle) };


    // disableDeleteUnusedPicture Field Functions 
    bool hasDisableDeleteUnusedPicture() const { return this->disableDeleteUnusedPicture_ != nullptr;};
    void deleteDisableDeleteUnusedPicture() { this->disableDeleteUnusedPicture_ = nullptr;};
    inline bool disableDeleteUnusedPicture() const { DARABONBA_PTR_GET_DEFAULT(disableDeleteUnusedPicture_, false) };
    inline TrimPolicy& setDisableDeleteUnusedPicture(bool disableDeleteUnusedPicture) { DARABONBA_PTR_SET_VALUE(disableDeleteUnusedPicture_, disableDeleteUnusedPicture) };


    // disableDeleteUnusedShape Field Functions 
    bool hasDisableDeleteUnusedShape() const { return this->disableDeleteUnusedShape_ != nullptr;};
    void deleteDisableDeleteUnusedShape() { this->disableDeleteUnusedShape_ = nullptr;};
    inline bool disableDeleteUnusedShape() const { DARABONBA_PTR_GET_DEFAULT(disableDeleteUnusedShape_, false) };
    inline TrimPolicy& setDisableDeleteUnusedShape(bool disableDeleteUnusedShape) { DARABONBA_PTR_SET_VALUE(disableDeleteUnusedShape_, disableDeleteUnusedShape) };


  protected:
    std::shared_ptr<bool> disableDeleteEmptyCell_ = nullptr;
    std::shared_ptr<bool> disableDeleteRepeatedStyle_ = nullptr;
    std::shared_ptr<bool> disableDeleteUnusedPicture_ = nullptr;
    std::shared_ptr<bool> disableDeleteUnusedShape_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
