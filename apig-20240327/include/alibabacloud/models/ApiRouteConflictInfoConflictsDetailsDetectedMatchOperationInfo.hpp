// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSDETAILSDETECTEDMATCHOPERATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSDETAILSDETECTEDMATCHOPERATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
    };
    ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo() = default ;
    ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo(const ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo &) = default ;
    ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo(ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo &&) = default ;
    ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo() = default ;
    ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo& operator=(const ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo &) = default ;
    ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo& operator=(ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->operationId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
