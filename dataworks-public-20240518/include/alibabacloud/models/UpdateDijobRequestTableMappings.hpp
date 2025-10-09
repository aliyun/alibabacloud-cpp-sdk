// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTABLEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTABLEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDIJobRequestTableMappingsSourceObjectSelectionRules.hpp>
#include <alibabacloud/models/UpdateDIJobRequestTableMappingsTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIJobRequestTableMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestTableMappings& obj) { 
      DARABONBA_PTR_TO_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestTableMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    UpdateDIJobRequestTableMappings() = default ;
    UpdateDIJobRequestTableMappings(const UpdateDIJobRequestTableMappings &) = default ;
    UpdateDIJobRequestTableMappings(UpdateDIJobRequestTableMappings &&) = default ;
    UpdateDIJobRequestTableMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestTableMappings() = default ;
    UpdateDIJobRequestTableMappings& operator=(const UpdateDIJobRequestTableMappings &) = default ;
    UpdateDIJobRequestTableMappings& operator=(UpdateDIJobRequestTableMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceObjectSelectionRules_ != nullptr
        && this->transformationRules_ != nullptr; };
    // sourceObjectSelectionRules Field Functions 
    bool hasSourceObjectSelectionRules() const { return this->sourceObjectSelectionRules_ != nullptr;};
    void deleteSourceObjectSelectionRules() { this->sourceObjectSelectionRules_ = nullptr;};
    inline const vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules> & sourceObjectSelectionRules() const { DARABONBA_PTR_GET_CONST(sourceObjectSelectionRules_, vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules>) };
    inline vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules> sourceObjectSelectionRules() { DARABONBA_PTR_GET(sourceObjectSelectionRules_, vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules>) };
    inline UpdateDIJobRequestTableMappings& setSourceObjectSelectionRules(const vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules> & sourceObjectSelectionRules) { DARABONBA_PTR_SET_VALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };
    inline UpdateDIJobRequestTableMappings& setSourceObjectSelectionRules(vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules> && sourceObjectSelectionRules) { DARABONBA_PTR_SET_RVALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<Models::UpdateDIJobRequestTableMappingsTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<Models::UpdateDIJobRequestTableMappingsTransformationRules>) };
    inline vector<Models::UpdateDIJobRequestTableMappingsTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<Models::UpdateDIJobRequestTableMappingsTransformationRules>) };
    inline UpdateDIJobRequestTableMappings& setTransformationRules(const vector<Models::UpdateDIJobRequestTableMappingsTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline UpdateDIJobRequestTableMappings& setTransformationRules(vector<Models::UpdateDIJobRequestTableMappingsTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    std::shared_ptr<vector<Models::UpdateDIJobRequestTableMappingsSourceObjectSelectionRules>> sourceObjectSelectionRules_ = nullptr;
    std::shared_ptr<vector<Models::UpdateDIJobRequestTableMappingsTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
