// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLERESPONSEBODYRESULTOBJECTMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLERESPONSEBODYRESULTOBJECTMESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CheckCopyRuleVariableResponseBodyResultObjectMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCopyRuleVariableResponseBodyResultObjectMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCopyRuleVariableResponseBodyResultObjectMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CheckCopyRuleVariableResponseBodyResultObjectMessage() = default ;
    CheckCopyRuleVariableResponseBodyResultObjectMessage(const CheckCopyRuleVariableResponseBodyResultObjectMessage &) = default ;
    CheckCopyRuleVariableResponseBodyResultObjectMessage(CheckCopyRuleVariableResponseBodyResultObjectMessage &&) = default ;
    CheckCopyRuleVariableResponseBodyResultObjectMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCopyRuleVariableResponseBodyResultObjectMessage() = default ;
    CheckCopyRuleVariableResponseBodyResultObjectMessage& operator=(const CheckCopyRuleVariableResponseBodyResultObjectMessage &) = default ;
    CheckCopyRuleVariableResponseBodyResultObjectMessage& operator=(CheckCopyRuleVariableResponseBodyResultObjectMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->title_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CheckCopyRuleVariableResponseBodyResultObjectMessage& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CheckCopyRuleVariableResponseBodyResultObjectMessage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CheckCopyRuleVariableResponseBodyResultObjectMessage& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckCopyRuleVariableResponseBodyResultObjectMessage& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Primary key ID of the variable
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the variable
    std::shared_ptr<string> name_ = nullptr;
    // Title of the variable
    std::shared_ptr<string> title_ = nullptr;
    // Type of the variable
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
