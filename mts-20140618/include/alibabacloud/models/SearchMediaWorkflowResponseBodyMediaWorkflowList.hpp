// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIAWORKFLOWRESPONSEBODYMEDIAWORKFLOWLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIAWORKFLOWRESPONSEBODYMEDIAWORKFLOWLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchMediaWorkflowResponseBodyMediaWorkflowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaWorkflowResponseBodyMediaWorkflowList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflow, mediaWorkflow_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaWorkflowResponseBodyMediaWorkflowList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflow, mediaWorkflow_);
    };
    SearchMediaWorkflowResponseBodyMediaWorkflowList() = default ;
    SearchMediaWorkflowResponseBodyMediaWorkflowList(const SearchMediaWorkflowResponseBodyMediaWorkflowList &) = default ;
    SearchMediaWorkflowResponseBodyMediaWorkflowList(SearchMediaWorkflowResponseBodyMediaWorkflowList &&) = default ;
    SearchMediaWorkflowResponseBodyMediaWorkflowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaWorkflowResponseBodyMediaWorkflowList() = default ;
    SearchMediaWorkflowResponseBodyMediaWorkflowList& operator=(const SearchMediaWorkflowResponseBodyMediaWorkflowList &) = default ;
    SearchMediaWorkflowResponseBodyMediaWorkflowList& operator=(SearchMediaWorkflowResponseBodyMediaWorkflowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflow_ == nullptr; };
    // mediaWorkflow Field Functions 
    bool hasMediaWorkflow() const { return this->mediaWorkflow_ != nullptr;};
    void deleteMediaWorkflow() { this->mediaWorkflow_ = nullptr;};
    inline const vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow> & mediaWorkflow() const { DARABONBA_PTR_GET_CONST(mediaWorkflow_, vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow>) };
    inline vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow> mediaWorkflow() { DARABONBA_PTR_GET(mediaWorkflow_, vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow>) };
    inline SearchMediaWorkflowResponseBodyMediaWorkflowList& setMediaWorkflow(const vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow> & mediaWorkflow) { DARABONBA_PTR_SET_VALUE(mediaWorkflow_, mediaWorkflow) };
    inline SearchMediaWorkflowResponseBodyMediaWorkflowList& setMediaWorkflow(vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow> && mediaWorkflow) { DARABONBA_PTR_SET_RVALUE(mediaWorkflow_, mediaWorkflow) };


  protected:
    std::shared_ptr<vector<Models::SearchMediaWorkflowResponseBodyMediaWorkflowListMediaWorkflow>> mediaWorkflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
