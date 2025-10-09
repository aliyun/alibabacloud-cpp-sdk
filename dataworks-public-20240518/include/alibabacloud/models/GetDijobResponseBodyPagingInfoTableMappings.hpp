// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOTABLEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOTABLEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoTableMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoTableMappings& obj) { 
      DARABONBA_PTR_TO_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoTableMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    GetDIJobResponseBodyPagingInfoTableMappings() = default ;
    GetDIJobResponseBodyPagingInfoTableMappings(const GetDIJobResponseBodyPagingInfoTableMappings &) = default ;
    GetDIJobResponseBodyPagingInfoTableMappings(GetDIJobResponseBodyPagingInfoTableMappings &&) = default ;
    GetDIJobResponseBodyPagingInfoTableMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoTableMappings() = default ;
    GetDIJobResponseBodyPagingInfoTableMappings& operator=(const GetDIJobResponseBodyPagingInfoTableMappings &) = default ;
    GetDIJobResponseBodyPagingInfoTableMappings& operator=(GetDIJobResponseBodyPagingInfoTableMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceObjectSelectionRules_ != nullptr
        && this->transformationRules_ != nullptr; };
    // sourceObjectSelectionRules Field Functions 
    bool hasSourceObjectSelectionRules() const { return this->sourceObjectSelectionRules_ != nullptr;};
    void deleteSourceObjectSelectionRules() { this->sourceObjectSelectionRules_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules> & sourceObjectSelectionRules() const { DARABONBA_PTR_GET_CONST(sourceObjectSelectionRules_, vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules> sourceObjectSelectionRules() { DARABONBA_PTR_GET(sourceObjectSelectionRules_, vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules>) };
    inline GetDIJobResponseBodyPagingInfoTableMappings& setSourceObjectSelectionRules(const vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules> & sourceObjectSelectionRules) { DARABONBA_PTR_SET_VALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };
    inline GetDIJobResponseBodyPagingInfoTableMappings& setSourceObjectSelectionRules(vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules> && sourceObjectSelectionRules) { DARABONBA_PTR_SET_RVALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules>) };
    inline GetDIJobResponseBodyPagingInfoTableMappings& setTransformationRules(const vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline GetDIJobResponseBodyPagingInfoTableMappings& setTransformationRules(vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    // The list of rules used to select synchronization objects in the source.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules>> sourceObjectSelectionRules_ = nullptr;
    // The list of transformation rules that are applied to the synchronization objects selected from the source. Each entry in the list defines a transformation rule.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
