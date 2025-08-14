// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIAgentInstanceResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIAgentInstanceResponseBody() = default ;
    ListAIAgentInstanceResponseBody(const ListAIAgentInstanceResponseBody &) = default ;
    ListAIAgentInstanceResponseBody(ListAIAgentInstanceResponseBody &&) = default ;
    ListAIAgentInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentInstanceResponseBody() = default ;
    ListAIAgentInstanceResponseBody& operator=(const ListAIAgentInstanceResponseBody &) = default ;
    ListAIAgentInstanceResponseBody& operator=(ListAIAgentInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->requestId_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListAIAgentInstanceResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListAIAgentInstanceResponseBodyInstances>) };
    inline vector<ListAIAgentInstanceResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ListAIAgentInstanceResponseBodyInstances>) };
    inline ListAIAgentInstanceResponseBody& setInstances(const vector<ListAIAgentInstanceResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListAIAgentInstanceResponseBody& setInstances(vector<ListAIAgentInstanceResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the AI agents.
    std::shared_ptr<vector<ListAIAgentInstanceResponseBodyInstances>> instances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
