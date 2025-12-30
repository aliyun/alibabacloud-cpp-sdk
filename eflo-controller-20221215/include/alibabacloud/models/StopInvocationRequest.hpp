// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINVOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPINVOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class StopInvocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInvocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
    };
    friend void from_json(const Darabonba::Json& j, StopInvocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
    };
    StopInvocationRequest() = default ;
    StopInvocationRequest(const StopInvocationRequest &) = default ;
    StopInvocationRequest(StopInvocationRequest &&) = default ;
    StopInvocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInvocationRequest() = default ;
    StopInvocationRequest& operator=(const StopInvocationRequest &) = default ;
    StopInvocationRequest& operator=(StopInvocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeId_ == nullptr
        && this->nodeIdList_ == nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline StopInvocationRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // nodeIdList Field Functions 
    bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
    void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
    inline const vector<string> & getNodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<string>) };
    inline vector<string> getNodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<string>) };
    inline StopInvocationRequest& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
    inline StopInvocationRequest& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


  protected:
    // The execution ID.
    // 
    // This parameter is required.
    shared_ptr<string> invokeId_ {};
    // The nodes.
    shared_ptr<vector<string>> nodeIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
