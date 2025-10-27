// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFLOWVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFLOWVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DeleteFlowVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFlowVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFlowVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
    };
    DeleteFlowVersionRequest() = default ;
    DeleteFlowVersionRequest(const DeleteFlowVersionRequest &) = default ;
    DeleteFlowVersionRequest(DeleteFlowVersionRequest &&) = default ;
    DeleteFlowVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFlowVersionRequest() = default ;
    DeleteFlowVersionRequest& operator=(const DeleteFlowVersionRequest &) = default ;
    DeleteFlowVersionRequest& operator=(DeleteFlowVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowName_ == nullptr
        && return this->flowVersion_ == nullptr; };
    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline DeleteFlowVersionRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline string flowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
    inline DeleteFlowVersionRequest& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> flowVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
