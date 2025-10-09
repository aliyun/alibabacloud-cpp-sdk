// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTTABLEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTTABLEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDIJobRequestTableMappingsSourceObjectSelectionRules.hpp>
#include <alibabacloud/models/CreateDIJobRequestTableMappingsTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestTableMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestTableMappings& obj) { 
      DARABONBA_PTR_TO_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestTableMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    CreateDIJobRequestTableMappings() = default ;
    CreateDIJobRequestTableMappings(const CreateDIJobRequestTableMappings &) = default ;
    CreateDIJobRequestTableMappings(CreateDIJobRequestTableMappings &&) = default ;
    CreateDIJobRequestTableMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestTableMappings() = default ;
    CreateDIJobRequestTableMappings& operator=(const CreateDIJobRequestTableMappings &) = default ;
    CreateDIJobRequestTableMappings& operator=(CreateDIJobRequestTableMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceObjectSelectionRules_ != nullptr
        && this->transformationRules_ != nullptr; };
    // sourceObjectSelectionRules Field Functions 
    bool hasSourceObjectSelectionRules() const { return this->sourceObjectSelectionRules_ != nullptr;};
    void deleteSourceObjectSelectionRules() { this->sourceObjectSelectionRules_ = nullptr;};
    inline const vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules> & sourceObjectSelectionRules() const { DARABONBA_PTR_GET_CONST(sourceObjectSelectionRules_, vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules>) };
    inline vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules> sourceObjectSelectionRules() { DARABONBA_PTR_GET(sourceObjectSelectionRules_, vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules>) };
    inline CreateDIJobRequestTableMappings& setSourceObjectSelectionRules(const vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules> & sourceObjectSelectionRules) { DARABONBA_PTR_SET_VALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };
    inline CreateDIJobRequestTableMappings& setSourceObjectSelectionRules(vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules> && sourceObjectSelectionRules) { DARABONBA_PTR_SET_RVALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<Models::CreateDIJobRequestTableMappingsTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<Models::CreateDIJobRequestTableMappingsTransformationRules>) };
    inline vector<Models::CreateDIJobRequestTableMappingsTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<Models::CreateDIJobRequestTableMappingsTransformationRules>) };
    inline CreateDIJobRequestTableMappings& setTransformationRules(const vector<Models::CreateDIJobRequestTableMappingsTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline CreateDIJobRequestTableMappings& setTransformationRules(vector<Models::CreateDIJobRequestTableMappingsTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    std::shared_ptr<vector<Models::CreateDIJobRequestTableMappingsSourceObjectSelectionRules>> sourceObjectSelectionRules_ = nullptr;
    std::shared_ptr<vector<Models::CreateDIJobRequestTableMappingsTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
