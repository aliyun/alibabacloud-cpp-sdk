// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODYRESULTOBJECTNAMELISTVARIABLELIST_HPP_
#define ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODYRESULTOBJECTNAMELISTVARIABLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutType, outType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutType, outType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList() = default ;
    CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList(const CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList &) = default ;
    CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList(CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList &&) = default ;
    CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList() = default ;
    CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& operator=(const CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList &) = default ;
    CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& operator=(CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->outType_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outType Field Functions 
    bool hasOutType() const { return this->outType_ != nullptr;};
    void deleteOutType() { this->outType_ = nullptr;};
    inline string outType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
    inline CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // Variable id
    std::shared_ptr<int64_t> id_ = nullptr;
    // Variable name
    std::shared_ptr<string> name_ = nullptr;
    // Variable type
    std::shared_ptr<string> outType_ = nullptr;
    // Title
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
