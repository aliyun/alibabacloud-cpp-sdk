// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTPLANFIELDPATH_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTPLANFIELDPATH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentPlanFieldPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentPlanFieldPath& obj) { 
      DARABONBA_PTR_TO_JSON(fieldAlias, fieldAlias_);
      DARABONBA_PTR_TO_JSON(fieldPath, fieldPath_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentPlanFieldPath& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldAlias, fieldAlias_);
      DARABONBA_PTR_FROM_JSON(fieldPath, fieldPath_);
    };
    IncidentPlanFieldPath() = default ;
    IncidentPlanFieldPath(const IncidentPlanFieldPath &) = default ;
    IncidentPlanFieldPath(IncidentPlanFieldPath &&) = default ;
    IncidentPlanFieldPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentPlanFieldPath() = default ;
    IncidentPlanFieldPath& operator=(const IncidentPlanFieldPath &) = default ;
    IncidentPlanFieldPath& operator=(IncidentPlanFieldPath &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldAlias_ == nullptr
        && return this->fieldPath_ == nullptr; };
    // fieldAlias Field Functions 
    bool hasFieldAlias() const { return this->fieldAlias_ != nullptr;};
    void deleteFieldAlias() { this->fieldAlias_ = nullptr;};
    inline string fieldAlias() const { DARABONBA_PTR_GET_DEFAULT(fieldAlias_, "") };
    inline IncidentPlanFieldPath& setFieldAlias(string fieldAlias) { DARABONBA_PTR_SET_VALUE(fieldAlias_, fieldAlias) };


    // fieldPath Field Functions 
    bool hasFieldPath() const { return this->fieldPath_ != nullptr;};
    void deleteFieldPath() { this->fieldPath_ = nullptr;};
    inline const vector<string> & fieldPath() const { DARABONBA_PTR_GET_CONST(fieldPath_, vector<string>) };
    inline vector<string> fieldPath() { DARABONBA_PTR_GET(fieldPath_, vector<string>) };
    inline IncidentPlanFieldPath& setFieldPath(const vector<string> & fieldPath) { DARABONBA_PTR_SET_VALUE(fieldPath_, fieldPath) };
    inline IncidentPlanFieldPath& setFieldPath(vector<string> && fieldPath) { DARABONBA_PTR_SET_RVALUE(fieldPath_, fieldPath) };


  protected:
    std::shared_ptr<string> fieldAlias_ = nullptr;
    std::shared_ptr<vector<string>> fieldPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
