// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIESANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIESANALYSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(Blocked, blocked_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(Blocked, blocked_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis() = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis(const CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis &) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis(CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis &&) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis() = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis& operator=(const CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis &) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis& operator=(CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blocked_ != nullptr
        && this->enabled_ != nullptr; };
    // blocked Field Functions 
    bool hasBlocked() const { return this->blocked_ != nullptr;};
    void deleteBlocked() { this->blocked_ = nullptr;};
    inline bool blocked() const { DARABONBA_PTR_GET_DEFAULT(blocked_, false) };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis& setBlocked(bool blocked) { DARABONBA_PTR_SET_VALUE(blocked_, blocked) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // Specifies whether to block execution if the analysis fails. Required when Type is set to SupplementData.
    std::shared_ptr<bool> blocked_ = nullptr;
    // Specifies whether to enable the analysis feature. Required when Type is set to SupplementData.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
