// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANTARGETS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobPlanTargetsHttpRequestTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(HttpRequestTarget, httpRequestTarget_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(HttpRequestTarget, httpRequestTarget_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    MigrationJobPlanTargets() = default ;
    MigrationJobPlanTargets(const MigrationJobPlanTargets &) = default ;
    MigrationJobPlanTargets(MigrationJobPlanTargets &&) = default ;
    MigrationJobPlanTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanTargets() = default ;
    MigrationJobPlanTargets& operator=(const MigrationJobPlanTargets &) = default ;
    MigrationJobPlanTargets& operator=(MigrationJobPlanTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->httpRequestTarget_ != nullptr && this->name_ != nullptr && this->type_ != nullptr && this->uuid_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline MigrationJobPlanTargets& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // httpRequestTarget Field Functions 
    bool hasHttpRequestTarget() const { return this->httpRequestTarget_ != nullptr;};
    void deleteHttpRequestTarget() { this->httpRequestTarget_ = nullptr;};
    inline const Models::MigrationJobPlanTargetsHttpRequestTarget & httpRequestTarget() const { DARABONBA_PTR_GET_CONST(httpRequestTarget_, Models::MigrationJobPlanTargetsHttpRequestTarget) };
    inline Models::MigrationJobPlanTargetsHttpRequestTarget httpRequestTarget() { DARABONBA_PTR_GET(httpRequestTarget_, Models::MigrationJobPlanTargetsHttpRequestTarget) };
    inline MigrationJobPlanTargets& setHttpRequestTarget(const Models::MigrationJobPlanTargetsHttpRequestTarget & httpRequestTarget) { DARABONBA_PTR_SET_VALUE(httpRequestTarget_, httpRequestTarget) };
    inline MigrationJobPlanTargets& setHttpRequestTarget(Models::MigrationJobPlanTargetsHttpRequestTarget && httpRequestTarget) { DARABONBA_PTR_SET_RVALUE(httpRequestTarget_, httpRequestTarget) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobPlanTargets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MigrationJobPlanTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline MigrationJobPlanTargets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<Models::MigrationJobPlanTargetsHttpRequestTarget> httpRequestTarget_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
