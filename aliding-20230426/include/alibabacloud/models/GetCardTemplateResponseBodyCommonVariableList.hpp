// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDTEMPLATERESPONSEBODYCOMMONVARIABLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETCARDTEMPLATERESPONSEBODYCOMMONVARIABLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCardTemplateResponseBodyCommonVariableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardTemplateResponseBodyCommonVariableList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IfPrivateFiled, ifPrivateFiled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardTemplateResponseBodyCommonVariableList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IfPrivateFiled, ifPrivateFiled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCardTemplateResponseBodyCommonVariableList() = default ;
    GetCardTemplateResponseBodyCommonVariableList(const GetCardTemplateResponseBodyCommonVariableList &) = default ;
    GetCardTemplateResponseBodyCommonVariableList(GetCardTemplateResponseBodyCommonVariableList &&) = default ;
    GetCardTemplateResponseBodyCommonVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardTemplateResponseBodyCommonVariableList() = default ;
    GetCardTemplateResponseBodyCommonVariableList& operator=(const GetCardTemplateResponseBodyCommonVariableList &) = default ;
    GetCardTemplateResponseBodyCommonVariableList& operator=(GetCardTemplateResponseBodyCommonVariableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->ifPrivateFiled_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetCardTemplateResponseBodyCommonVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCardTemplateResponseBodyCommonVariableList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ifPrivateFiled Field Functions 
    bool hasIfPrivateFiled() const { return this->ifPrivateFiled_ != nullptr;};
    void deleteIfPrivateFiled() { this->ifPrivateFiled_ = nullptr;};
    inline bool ifPrivateFiled() const { DARABONBA_PTR_GET_DEFAULT(ifPrivateFiled_, false) };
    inline GetCardTemplateResponseBodyCommonVariableList& setIfPrivateFiled(bool ifPrivateFiled) { DARABONBA_PTR_SET_VALUE(ifPrivateFiled_, ifPrivateFiled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCardTemplateResponseBodyCommonVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCardTemplateResponseBodyCommonVariableList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // Id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> ifPrivateFiled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
