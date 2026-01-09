// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITQUALITYRULETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITQUALITYRULETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AnalysisTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnalysisTypes& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, AnalysisTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      AnalysisTypes() = default ;
      AnalysisTypes(const AnalysisTypes &) = default ;
      AnalysisTypes(AnalysisTypes &&) = default ;
      AnalysisTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnalysisTypes() = default ;
      AnalysisTypes& operator=(const AnalysisTypes &) = default ;
      AnalysisTypes& operator=(AnalysisTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AnalysisTypes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AnalysisTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->analysisTypes_ == nullptr
        && this->instanceId_ == nullptr; };
    // analysisTypes Field Functions 
    bool hasAnalysisTypes() const { return this->analysisTypes_ != nullptr;};
    void deleteAnalysisTypes() { this->analysisTypes_ = nullptr;};
    inline const vector<EditQualityRuleTagRequest::AnalysisTypes> & getAnalysisTypes() const { DARABONBA_PTR_GET_CONST(analysisTypes_, vector<EditQualityRuleTagRequest::AnalysisTypes>) };
    inline vector<EditQualityRuleTagRequest::AnalysisTypes> getAnalysisTypes() { DARABONBA_PTR_GET(analysisTypes_, vector<EditQualityRuleTagRequest::AnalysisTypes>) };
    inline EditQualityRuleTagRequest& setAnalysisTypes(const vector<EditQualityRuleTagRequest::AnalysisTypes> & analysisTypes) { DARABONBA_PTR_SET_VALUE(analysisTypes_, analysisTypes) };
    inline EditQualityRuleTagRequest& setAnalysisTypes(vector<EditQualityRuleTagRequest::AnalysisTypes> && analysisTypes) { DARABONBA_PTR_SET_RVALUE(analysisTypes_, analysisTypes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EditQualityRuleTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<EditQualityRuleTagRequest::AnalysisTypes>> analysisTypes_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
