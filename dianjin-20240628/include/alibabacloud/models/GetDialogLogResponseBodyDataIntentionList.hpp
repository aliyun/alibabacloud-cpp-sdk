// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGLOGRESPONSEBODYDATAINTENTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGLOGRESPONSEBODYDATAINTENTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogLogResponseBodyDataIntentionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogLogResponseBodyDataIntentionList& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(intentionName, intentionName_);
      DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogLogResponseBodyDataIntentionList& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(intentionName, intentionName_);
      DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
    };
    GetDialogLogResponseBodyDataIntentionList() = default ;
    GetDialogLogResponseBodyDataIntentionList(const GetDialogLogResponseBodyDataIntentionList &) = default ;
    GetDialogLogResponseBodyDataIntentionList(GetDialogLogResponseBodyDataIntentionList &&) = default ;
    GetDialogLogResponseBodyDataIntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogLogResponseBodyDataIntentionList() = default ;
    GetDialogLogResponseBodyDataIntentionList& operator=(const GetDialogLogResponseBodyDataIntentionList &) = default ;
    GetDialogLogResponseBodyDataIntentionList& operator=(GetDialogLogResponseBodyDataIntentionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->intentionName_ == nullptr && return this->intentionScript_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDialogLogResponseBodyDataIntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // intentionName Field Functions 
    bool hasIntentionName() const { return this->intentionName_ != nullptr;};
    void deleteIntentionName() { this->intentionName_ = nullptr;};
    inline string intentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
    inline GetDialogLogResponseBodyDataIntentionList& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


    // intentionScript Field Functions 
    bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
    void deleteIntentionScript() { this->intentionScript_ = nullptr;};
    inline string intentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
    inline GetDialogLogResponseBodyDataIntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> intentionName_ = nullptr;
    std::shared_ptr<string> intentionScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
