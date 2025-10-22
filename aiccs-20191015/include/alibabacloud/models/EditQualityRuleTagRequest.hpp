// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITQUALITYRULETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITQUALITYRULETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditQualityRuleTagRequestAnalysisTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class EditQualityRuleTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditQualityRuleTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisTypes, analysisTypes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EditQualityRuleTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisTypes, analysisTypes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EditQualityRuleTagRequest() = default ;
    EditQualityRuleTagRequest(const EditQualityRuleTagRequest &) = default ;
    EditQualityRuleTagRequest(EditQualityRuleTagRequest &&) = default ;
    EditQualityRuleTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditQualityRuleTagRequest() = default ;
    EditQualityRuleTagRequest& operator=(const EditQualityRuleTagRequest &) = default ;
    EditQualityRuleTagRequest& operator=(EditQualityRuleTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisTypes_ == nullptr
        && return this->instanceId_ == nullptr; };
    // analysisTypes Field Functions 
    bool hasAnalysisTypes() const { return this->analysisTypes_ != nullptr;};
    void deleteAnalysisTypes() { this->analysisTypes_ = nullptr;};
    inline const vector<EditQualityRuleTagRequestAnalysisTypes> & analysisTypes() const { DARABONBA_PTR_GET_CONST(analysisTypes_, vector<EditQualityRuleTagRequestAnalysisTypes>) };
    inline vector<EditQualityRuleTagRequestAnalysisTypes> analysisTypes() { DARABONBA_PTR_GET(analysisTypes_, vector<EditQualityRuleTagRequestAnalysisTypes>) };
    inline EditQualityRuleTagRequest& setAnalysisTypes(const vector<EditQualityRuleTagRequestAnalysisTypes> & analysisTypes) { DARABONBA_PTR_SET_VALUE(analysisTypes_, analysisTypes) };
    inline EditQualityRuleTagRequest& setAnalysisTypes(vector<EditQualityRuleTagRequestAnalysisTypes> && analysisTypes) { DARABONBA_PTR_SET_RVALUE(analysisTypes_, analysisTypes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EditQualityRuleTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<EditQualityRuleTagRequestAnalysisTypes>> analysisTypes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
