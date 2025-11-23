// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAIL_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PreviewWorkflowResponseBodyWorkflowDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewWorkflowResponseBodyWorkflowDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(WfCateName, wfCateName_);
      DARABONBA_PTR_TO_JSON(WorkflowNodeList, workflowNodeList_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewWorkflowResponseBodyWorkflowDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(WfCateName, wfCateName_);
      DARABONBA_PTR_FROM_JSON(WorkflowNodeList, workflowNodeList_);
    };
    PreviewWorkflowResponseBodyWorkflowDetail() = default ;
    PreviewWorkflowResponseBodyWorkflowDetail(const PreviewWorkflowResponseBodyWorkflowDetail &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetail(PreviewWorkflowResponseBodyWorkflowDetail &&) = default ;
    PreviewWorkflowResponseBodyWorkflowDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewWorkflowResponseBodyWorkflowDetail() = default ;
    PreviewWorkflowResponseBodyWorkflowDetail& operator=(const PreviewWorkflowResponseBodyWorkflowDetail &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetail& operator=(PreviewWorkflowResponseBodyWorkflowDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->wfCateName_ == nullptr && return this->workflowNodeList_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetail& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // wfCateName Field Functions 
    bool hasWfCateName() const { return this->wfCateName_ != nullptr;};
    void deleteWfCateName() { this->wfCateName_ = nullptr;};
    inline string wfCateName() const { DARABONBA_PTR_GET_DEFAULT(wfCateName_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetail& setWfCateName(string wfCateName) { DARABONBA_PTR_SET_VALUE(wfCateName_, wfCateName) };


    // workflowNodeList Field Functions 
    bool hasWorkflowNodeList() const { return this->workflowNodeList_ != nullptr;};
    void deleteWorkflowNodeList() { this->workflowNodeList_ = nullptr;};
    inline const Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList & workflowNodeList() const { DARABONBA_PTR_GET_CONST(workflowNodeList_, Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList) };
    inline Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList workflowNodeList() { DARABONBA_PTR_GET(workflowNodeList_, Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList) };
    inline PreviewWorkflowResponseBodyWorkflowDetail& setWorkflowNodeList(const Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList & workflowNodeList) { DARABONBA_PTR_SET_VALUE(workflowNodeList_, workflowNodeList) };
    inline PreviewWorkflowResponseBodyWorkflowDetail& setWorkflowNodeList(Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList && workflowNodeList) { DARABONBA_PTR_SET_RVALUE(workflowNodeList_, workflowNodeList) };


  protected:
    // The remarks of the approval template.
    std::shared_ptr<string> comment_ = nullptr;
    // The name of the approval template.
    std::shared_ptr<string> wfCateName_ = nullptr;
    // The approval nodes.
    std::shared_ptr<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeList> workflowNodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
