// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIVISION_HPP_
#define ALIBABACLOUD_MODELS_DIVISION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class Division : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Division& obj) { 
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(divisionLevel, divisionLevel_);
      DARABONBA_PTR_TO_JSON(divisionName, divisionName_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(pinyin, pinyin_);
    };
    friend void from_json(const Darabonba::Json& j, Division& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(divisionLevel, divisionLevel_);
      DARABONBA_PTR_FROM_JSON(divisionName, divisionName_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(pinyin, pinyin_);
    };
    Division() = default ;
    Division(const Division &) = default ;
    Division(Division &&) = default ;
    Division(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Division() = default ;
    Division& operator=(const Division &) = default ;
    Division& operator=(Division &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->divisionCode_ == nullptr
        && this->divisionLevel_ == nullptr && this->divisionName_ == nullptr && this->parentId_ == nullptr && this->pinyin_ == nullptr; };
    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline int64_t getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, 0L) };
    inline Division& setDivisionCode(int64_t divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // divisionLevel Field Functions 
    bool hasDivisionLevel() const { return this->divisionLevel_ != nullptr;};
    void deleteDivisionLevel() { this->divisionLevel_ = nullptr;};
    inline int64_t getDivisionLevel() const { DARABONBA_PTR_GET_DEFAULT(divisionLevel_, 0L) };
    inline Division& setDivisionLevel(int64_t divisionLevel) { DARABONBA_PTR_SET_VALUE(divisionLevel_, divisionLevel) };


    // divisionName Field Functions 
    bool hasDivisionName() const { return this->divisionName_ != nullptr;};
    void deleteDivisionName() { this->divisionName_ = nullptr;};
    inline string getDivisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
    inline Division& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline Division& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pinyin Field Functions 
    bool hasPinyin() const { return this->pinyin_ != nullptr;};
    void deletePinyin() { this->pinyin_ = nullptr;};
    inline string getPinyin() const { DARABONBA_PTR_GET_DEFAULT(pinyin_, "") };
    inline Division& setPinyin(string pinyin) { DARABONBA_PTR_SET_VALUE(pinyin_, pinyin) };


  protected:
    shared_ptr<int64_t> divisionCode_ {};
    shared_ptr<int64_t> divisionLevel_ {};
    shared_ptr<string> divisionName_ {};
    shared_ptr<int64_t> parentId_ {};
    shared_ptr<string> pinyin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
