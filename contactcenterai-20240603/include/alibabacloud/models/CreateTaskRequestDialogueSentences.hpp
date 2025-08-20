// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTDIALOGUESENTENCES_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTDIALOGUESENTENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateTaskRequestDialogueSentences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestDialogueSentences& obj) { 
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestDialogueSentences& obj) { 
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    CreateTaskRequestDialogueSentences() = default ;
    CreateTaskRequestDialogueSentences(const CreateTaskRequestDialogueSentences &) = default ;
    CreateTaskRequestDialogueSentences(CreateTaskRequestDialogueSentences &&) = default ;
    CreateTaskRequestDialogueSentences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestDialogueSentences() = default ;
    CreateTaskRequestDialogueSentences& operator=(const CreateTaskRequestDialogueSentences &) = default ;
    CreateTaskRequestDialogueSentences& operator=(CreateTaskRequestDialogueSentences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->role_ != nullptr
        && this->text_ != nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateTaskRequestDialogueSentences& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline CreateTaskRequestDialogueSentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
