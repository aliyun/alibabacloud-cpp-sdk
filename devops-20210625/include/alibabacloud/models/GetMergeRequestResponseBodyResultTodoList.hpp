// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMERGEREQUESTRESPONSEBODYRESULTTODOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMERGEREQUESTRESPONSEBODYRESULTTODOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMergeRequestResponseBodyResultTodoListRequirementCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetMergeRequestResponseBodyResultTodoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMergeRequestResponseBodyResultTodoList& obj) { 
      DARABONBA_PTR_TO_JSON(requirementCheckItems, requirementCheckItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetMergeRequestResponseBodyResultTodoList& obj) { 
      DARABONBA_PTR_FROM_JSON(requirementCheckItems, requirementCheckItems_);
    };
    GetMergeRequestResponseBodyResultTodoList() = default ;
    GetMergeRequestResponseBodyResultTodoList(const GetMergeRequestResponseBodyResultTodoList &) = default ;
    GetMergeRequestResponseBodyResultTodoList(GetMergeRequestResponseBodyResultTodoList &&) = default ;
    GetMergeRequestResponseBodyResultTodoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMergeRequestResponseBodyResultTodoList() = default ;
    GetMergeRequestResponseBodyResultTodoList& operator=(const GetMergeRequestResponseBodyResultTodoList &) = default ;
    GetMergeRequestResponseBodyResultTodoList& operator=(GetMergeRequestResponseBodyResultTodoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requirementCheckItems_ == nullptr; };
    // requirementCheckItems Field Functions 
    bool hasRequirementCheckItems() const { return this->requirementCheckItems_ != nullptr;};
    void deleteRequirementCheckItems() { this->requirementCheckItems_ = nullptr;};
    inline const vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems> & requirementCheckItems() const { DARABONBA_PTR_GET_CONST(requirementCheckItems_, vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems>) };
    inline vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems> requirementCheckItems() { DARABONBA_PTR_GET(requirementCheckItems_, vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems>) };
    inline GetMergeRequestResponseBodyResultTodoList& setRequirementCheckItems(const vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems> & requirementCheckItems) { DARABONBA_PTR_SET_VALUE(requirementCheckItems_, requirementCheckItems) };
    inline GetMergeRequestResponseBodyResultTodoList& setRequirementCheckItems(vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems> && requirementCheckItems) { DARABONBA_PTR_SET_RVALUE(requirementCheckItems_, requirementCheckItems) };


  protected:
    std::shared_ptr<vector<Models::GetMergeRequestResponseBodyResultTodoListRequirementCheckItems>> requirementCheckItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
