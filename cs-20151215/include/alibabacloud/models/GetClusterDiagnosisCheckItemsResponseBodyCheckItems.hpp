// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSRESPONSEBODYCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSRESPONSEBODYCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterDiagnosisCheckItemsResponseBodyCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDiagnosisCheckItemsResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(display, display_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(refer, refer_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDiagnosisCheckItemsResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(display, display_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(refer, refer_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetClusterDiagnosisCheckItemsResponseBodyCheckItems() = default ;
    GetClusterDiagnosisCheckItemsResponseBodyCheckItems(const GetClusterDiagnosisCheckItemsResponseBodyCheckItems &) = default ;
    GetClusterDiagnosisCheckItemsResponseBodyCheckItems(GetClusterDiagnosisCheckItemsResponseBodyCheckItems &&) = default ;
    GetClusterDiagnosisCheckItemsResponseBodyCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDiagnosisCheckItemsResponseBodyCheckItems() = default ;
    GetClusterDiagnosisCheckItemsResponseBodyCheckItems& operator=(const GetClusterDiagnosisCheckItemsResponseBodyCheckItems &) = default ;
    GetClusterDiagnosisCheckItemsResponseBodyCheckItems& operator=(GetClusterDiagnosisCheckItemsResponseBodyCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->display_ == nullptr && return this->group_ == nullptr && return this->level_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr
        && return this->refer_ == nullptr && return this->value_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline string display() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // refer Field Functions 
    bool hasRefer() const { return this->refer_ != nullptr;};
    void deleteRefer() { this->refer_ = nullptr;};
    inline string refer() const { DARABONBA_PTR_GET_DEFAULT(refer_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setRefer(string refer) { DARABONBA_PTR_SET_VALUE(refer_, refer) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBodyCheckItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description.
    std::shared_ptr<string> desc_ = nullptr;
    // The display name.
    std::shared_ptr<string> display_ = nullptr;
    // The name of the group to which the check item belongs.
    std::shared_ptr<string> group_ = nullptr;
    // The severity level of the check result.
    // 
    // Valid values:
    // 
    // *   normal
    // *   warning
    // *   error
    std::shared_ptr<string> level_ = nullptr;
    // The check result.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> name_ = nullptr;
    // The reference value.
    std::shared_ptr<string> refer_ = nullptr;
    // The value of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
