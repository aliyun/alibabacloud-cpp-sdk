// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTRESPONSEBODYMEDIAWORKFLOWEXECUTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTRESPONSEBODYMEDIAWORKFLOWEXECUTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowExecution, mediaWorkflowExecution_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowExecution, mediaWorkflowExecution_);
    };
    QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList() = default ;
    QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList(const QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList &) = default ;
    QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList(QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList &&) = default ;
    QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList() = default ;
    QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList& operator=(const QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList &) = default ;
    QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList& operator=(QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowExecution_ == nullptr; };
    // mediaWorkflowExecution Field Functions 
    bool hasMediaWorkflowExecution() const { return this->mediaWorkflowExecution_ != nullptr;};
    void deleteMediaWorkflowExecution() { this->mediaWorkflowExecution_ = nullptr;};
    inline const vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> & mediaWorkflowExecution() const { DARABONBA_PTR_GET_CONST(mediaWorkflowExecution_, vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution>) };
    inline vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> mediaWorkflowExecution() { DARABONBA_PTR_GET(mediaWorkflowExecution_, vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution>) };
    inline QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList& setMediaWorkflowExecution(const vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> & mediaWorkflowExecution) { DARABONBA_PTR_SET_VALUE(mediaWorkflowExecution_, mediaWorkflowExecution) };
    inline QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList& setMediaWorkflowExecution(vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution> && mediaWorkflowExecution) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowExecution_, mediaWorkflowExecution) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionListMediaWorkflowExecution>> mediaWorkflowExecution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
