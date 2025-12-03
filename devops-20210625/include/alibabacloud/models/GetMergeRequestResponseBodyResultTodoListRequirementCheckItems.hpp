// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMERGEREQUESTRESPONSEBODYRESULTTODOLISTREQUIREMENTCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETMERGEREQUESTRESPONSEBODYRESULTTODOLISTREQUIREMENTCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetMergeRequestResponseBodyResultTodoListRequirementCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMergeRequestResponseBodyResultTodoListRequirementCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(itemType, itemType_);
      DARABONBA_PTR_TO_JSON(pass, pass_);
    };
    friend void from_json(const Darabonba::Json& j, GetMergeRequestResponseBodyResultTodoListRequirementCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(itemType, itemType_);
      DARABONBA_PTR_FROM_JSON(pass, pass_);
    };
    GetMergeRequestResponseBodyResultTodoListRequirementCheckItems() = default ;
    GetMergeRequestResponseBodyResultTodoListRequirementCheckItems(const GetMergeRequestResponseBodyResultTodoListRequirementCheckItems &) = default ;
    GetMergeRequestResponseBodyResultTodoListRequirementCheckItems(GetMergeRequestResponseBodyResultTodoListRequirementCheckItems &&) = default ;
    GetMergeRequestResponseBodyResultTodoListRequirementCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMergeRequestResponseBodyResultTodoListRequirementCheckItems() = default ;
    GetMergeRequestResponseBodyResultTodoListRequirementCheckItems& operator=(const GetMergeRequestResponseBodyResultTodoListRequirementCheckItems &) = default ;
    GetMergeRequestResponseBodyResultTodoListRequirementCheckItems& operator=(GetMergeRequestResponseBodyResultTodoListRequirementCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemType_ == nullptr
        && return this->pass_ == nullptr; };
    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline GetMergeRequestResponseBodyResultTodoListRequirementCheckItems& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline GetMergeRequestResponseBodyResultTodoListRequirementCheckItems& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


  protected:
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<bool> pass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
