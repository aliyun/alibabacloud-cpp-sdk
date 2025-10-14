// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEAMSRESPONSEBODYTEAMSICON_HPP_
#define ALIBABACLOUD_MODELS_LISTTEAMSRESPONSEBODYTEAMSICON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTeamsResponseBodyTeamsIcon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTeamsResponseBodyTeamsIcon& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTeamsResponseBodyTeamsIcon& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTeamsResponseBodyTeamsIcon() = default ;
    ListTeamsResponseBodyTeamsIcon(const ListTeamsResponseBodyTeamsIcon &) = default ;
    ListTeamsResponseBodyTeamsIcon(ListTeamsResponseBodyTeamsIcon &&) = default ;
    ListTeamsResponseBodyTeamsIcon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTeamsResponseBodyTeamsIcon() = default ;
    ListTeamsResponseBodyTeamsIcon& operator=(const ListTeamsResponseBodyTeamsIcon &) = default ;
    ListTeamsResponseBodyTeamsIcon& operator=(ListTeamsResponseBodyTeamsIcon &&) = default ;
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
    inline ListTeamsResponseBodyTeamsIcon& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTeamsResponseBodyTeamsIcon& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
