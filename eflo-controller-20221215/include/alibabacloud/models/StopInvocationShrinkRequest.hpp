// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINVOCATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPINVOCATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class StopInvocationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInvocationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StopInvocationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdListShrink_);
    };
    StopInvocationShrinkRequest() = default ;
    StopInvocationShrinkRequest(const StopInvocationShrinkRequest &) = default ;
    StopInvocationShrinkRequest(StopInvocationShrinkRequest &&) = default ;
    StopInvocationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInvocationShrinkRequest() = default ;
    StopInvocationShrinkRequest& operator=(const StopInvocationShrinkRequest &) = default ;
    StopInvocationShrinkRequest& operator=(StopInvocationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeId_ == nullptr
        && return this->nodeIdListShrink_ == nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline StopInvocationShrinkRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // nodeIdListShrink Field Functions 
    bool hasNodeIdListShrink() const { return this->nodeIdListShrink_ != nullptr;};
    void deleteNodeIdListShrink() { this->nodeIdListShrink_ = nullptr;};
    inline string nodeIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeIdListShrink_, "") };
    inline StopInvocationShrinkRequest& setNodeIdListShrink(string nodeIdListShrink) { DARABONBA_PTR_SET_VALUE(nodeIdListShrink_, nodeIdListShrink) };


  protected:
    // The execution ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The nodes.
    std::shared_ptr<string> nodeIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
