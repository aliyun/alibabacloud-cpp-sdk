// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODYMEDIAWORKFLOWEXECUTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODYMEDIAWORKFLOWEXECUTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowExecution, mediaWorkflowExecution_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowExecution, mediaWorkflowExecution_);
    };
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList() = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList(const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList &) = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList(ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList &&) = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList() = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList& operator=(const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList &) = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList& operator=(ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowExecution_ == nullptr; };
    // mediaWorkflowExecution Field Functions 
    bool hasMediaWorkflowExecution() const { return this->mediaWorkflowExecution_ != nullptr;};
    void deleteMediaWorkflowExecution() { this->mediaWorkflowExecution_ = nullptr;};
    inline const vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> & mediaWorkflowExecution() const { DARABONBA_PTR_GET_CONST(mediaWorkflowExecution_, vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution>) };
    inline vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> mediaWorkflowExecution() { DARABONBA_PTR_GET(mediaWorkflowExecution_, vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution>) };
    inline ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList& setMediaWorkflowExecution(const vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> & mediaWorkflowExecution) { DARABONBA_PTR_SET_VALUE(mediaWorkflowExecution_, mediaWorkflowExecution) };
    inline ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList& setMediaWorkflowExecution(vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> && mediaWorkflowExecution) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowExecution_, mediaWorkflowExecution) };


  protected:
    std::shared_ptr<vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution>> mediaWorkflowExecution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
