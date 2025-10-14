// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTSAMPLEDIALOGUELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTSAMPLEDIALOGUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListSampleDialogueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListSampleDialogueList& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListSampleDialogueList& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    ListAICoachScriptPageResponseBodyListSampleDialogueList() = default ;
    ListAICoachScriptPageResponseBodyListSampleDialogueList(const ListAICoachScriptPageResponseBodyListSampleDialogueList &) = default ;
    ListAICoachScriptPageResponseBodyListSampleDialogueList(ListAICoachScriptPageResponseBodyListSampleDialogueList &&) = default ;
    ListAICoachScriptPageResponseBodyListSampleDialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListSampleDialogueList() = default ;
    ListAICoachScriptPageResponseBodyListSampleDialogueList& operator=(const ListAICoachScriptPageResponseBodyListSampleDialogueList &) = default ;
    ListAICoachScriptPageResponseBodyListSampleDialogueList& operator=(ListAICoachScriptPageResponseBodyListSampleDialogueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->role_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAICoachScriptPageResponseBodyListSampleDialogueList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListAICoachScriptPageResponseBodyListSampleDialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
