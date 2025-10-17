// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYSTRUCTUREINITIALIZATIONDETAILLISTSTRUCTUREINITIALIZATIONDETAILCONSTRAINTLISTSTRUCTUREINITIALIZATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYSTRUCTUREINITIALIZATIONDETAILLISTSTRUCTUREINITIALIZATIONDETAILCONSTRAINTLISTSTRUCTUREINITIALIZATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ObjectDefinition, objectDefinition_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ObjectDefinition, objectDefinition_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail &&) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& operator=(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& operator=(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && return this->errorMessage_ == nullptr && return this->objectDefinition_ == nullptr && return this->objectName_ == nullptr && return this->objectType_ == nullptr && return this->sourceOwnerDBName_ == nullptr
        && return this->status_ == nullptr; };
    // destinationOwnerDBName Field Functions 
    bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
    void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
    inline string destinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // objectDefinition Field Functions 
    bool hasObjectDefinition() const { return this->objectDefinition_ != nullptr;};
    void deleteObjectDefinition() { this->objectDefinition_ = nullptr;};
    inline string objectDefinition() const { DARABONBA_PTR_GET_DEFAULT(objectDefinition_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setObjectDefinition(string objectDefinition) { DARABONBA_PTR_SET_VALUE(objectDefinition_, objectDefinition) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // sourceOwnerDBName Field Functions 
    bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
    void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
    inline string sourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status of constraint creation. Valid values:
    // 
    // - **NotStarted**
    // - **Migrating**
    // - **Failed**
    // - **Finished**
    std::shared_ptr<string> destinationOwnerDBName_ = nullptr;
    // The constraints of the migration object, such as indexes and foreign keys. 
    // 
    // >  This parameter is returned only if the **ObjectType** parameter is set to **Table** and the migration object has constraints.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The name of the database to which the migration object in the destination instance belongs.
    std::shared_ptr<string> objectDefinition_ = nullptr;
    // The name of the database to which the migration object in the source instance belongs.
    std::shared_ptr<string> objectName_ = nullptr;
    // The name of migration object.
    std::shared_ptr<string> objectType_ = nullptr;
    // The error message returned if schema migration failed.
    std::shared_ptr<string> sourceOwnerDBName_ = nullptr;
    // The type of the migration object. Valid values: **Table**, **Constraint**, **Index**, **View**, **Materialize View**, **Type**, **Synonym**, **Trigger**, **Function**, **Procedure**, **Package**, **Default**, **Rule**, **PlanGuide**, and **Sequence**.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
