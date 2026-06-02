// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class GetFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
    };
    GetFlowRequest() = default ;
    GetFlowRequest(const GetFlowRequest &) = default ;
    GetFlowRequest(GetFlowRequest &&) = default ;
    GetFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowRequest() = default ;
    GetFlowRequest& operator=(const GetFlowRequest &) = default ;
    GetFlowRequest& operator=(GetFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && this->flowVersion_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetFlowRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline string getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
    inline GetFlowRequest& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> flowId_ {};
    shared_ptr<string> flowVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
