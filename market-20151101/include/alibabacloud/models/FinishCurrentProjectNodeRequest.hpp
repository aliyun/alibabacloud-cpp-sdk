// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHCURRENTPROJECTNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINISHCURRENTPROJECTNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class FinishCurrentProjectNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishCurrentProjectNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TemplateForm, templateForm_);
    };
    friend void from_json(const Darabonba::Json& j, FinishCurrentProjectNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TemplateForm, templateForm_);
    };
    FinishCurrentProjectNodeRequest() = default ;
    FinishCurrentProjectNodeRequest(const FinishCurrentProjectNodeRequest &) = default ;
    FinishCurrentProjectNodeRequest(FinishCurrentProjectNodeRequest &&) = default ;
    FinishCurrentProjectNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishCurrentProjectNodeRequest() = default ;
    FinishCurrentProjectNodeRequest& operator=(const FinishCurrentProjectNodeRequest &) = default ;
    FinishCurrentProjectNodeRequest& operator=(FinishCurrentProjectNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->nodeId_ != nullptr && this->remark_ != nullptr && this->templateForm_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline FinishCurrentProjectNodeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline FinishCurrentProjectNodeRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline FinishCurrentProjectNodeRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // templateForm Field Functions 
    bool hasTemplateForm() const { return this->templateForm_ != nullptr;};
    void deleteTemplateForm() { this->templateForm_ = nullptr;};
    inline string templateForm() const { DARABONBA_PTR_GET_DEFAULT(templateForm_, "") };
    inline FinishCurrentProjectNodeRequest& setTemplateForm(string templateForm) { DARABONBA_PTR_SET_VALUE(templateForm_, templateForm) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> templateForm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
