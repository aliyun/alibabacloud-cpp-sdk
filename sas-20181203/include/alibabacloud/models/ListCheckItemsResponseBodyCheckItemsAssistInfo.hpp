// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODYCHECKITEMSASSISTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODYCHECKITEMSASSISTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemsResponseBodyCheckItemsAssistInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemsResponseBodyCheckItemsAssistInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemsResponseBodyCheckItemsAssistInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCheckItemsResponseBodyCheckItemsAssistInfo() = default ;
    ListCheckItemsResponseBodyCheckItemsAssistInfo(const ListCheckItemsResponseBodyCheckItemsAssistInfo &) = default ;
    ListCheckItemsResponseBodyCheckItemsAssistInfo(ListCheckItemsResponseBodyCheckItemsAssistInfo &&) = default ;
    ListCheckItemsResponseBodyCheckItemsAssistInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemsResponseBodyCheckItemsAssistInfo() = default ;
    ListCheckItemsResponseBodyCheckItemsAssistInfo& operator=(const ListCheckItemsResponseBodyCheckItemsAssistInfo &) = default ;
    ListCheckItemsResponseBodyCheckItemsAssistInfo& operator=(ListCheckItemsResponseBodyCheckItemsAssistInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->value_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckItemsResponseBodyCheckItemsAssistInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListCheckItemsResponseBodyCheckItemsAssistInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of the help information for the check item risk. Values:
    // 
    // - **text**：Text
    std::shared_ptr<string> type_ = nullptr;
    // The content of the help information for the check item risk.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
