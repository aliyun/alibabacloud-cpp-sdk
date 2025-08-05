// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYSTRUCTUREINITIALIZATIONDETAILLISTSTRUCTUREINITIALIZATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYSTRUCTUREINITIALIZATIONDETAILLISTSTRUCTUREINITIALIZATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ConstraintList, constraintList_);
      DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ObjectDefinition, objectDefinition_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstraintList, constraintList_);
      DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ObjectDefinition, objectDefinition_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail &&) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& operator=(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& operator=(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->constraintList_ != nullptr
        && this->destinationOwnerDBName_ != nullptr && this->errorMessage_ != nullptr && this->objectDefinition_ != nullptr && this->objectName_ != nullptr && this->objectType_ != nullptr
        && this->sourceOwnerDBName_ != nullptr && this->status_ != nullptr; };
    // constraintList Field Functions 
    bool hasConstraintList() const { return this->constraintList_ != nullptr;};
    void deleteConstraintList() { this->constraintList_ = nullptr;};
    inline const Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList & constraintList() const { DARABONBA_PTR_GET_CONST(constraintList_, Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList) };
    inline Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList constraintList() { DARABONBA_PTR_GET(constraintList_, Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList) };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setConstraintList(const Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList & constraintList) { DARABONBA_PTR_SET_VALUE(constraintList_, constraintList) };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setConstraintList(Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList && constraintList) { DARABONBA_PTR_SET_RVALUE(constraintList_, constraintList) };


    // destinationOwnerDBName Field Functions 
    bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
    void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
    inline string destinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // objectDefinition Field Functions 
    bool hasObjectDefinition() const { return this->objectDefinition_ != nullptr;};
    void deleteObjectDefinition() { this->objectDefinition_ = nullptr;};
    inline string objectDefinition() const { DARABONBA_PTR_GET_DEFAULT(objectDefinition_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setObjectDefinition(string objectDefinition) { DARABONBA_PTR_SET_VALUE(objectDefinition_, objectDefinition) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // sourceOwnerDBName Field Functions 
    bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
    void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
    inline string sourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The schema of the migration object.
    std::shared_ptr<Models::DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList> constraintList_ = nullptr;
    // The status of schema migration. Valid values:
    // 
    // - **NotStarted**: Schema migration is not started.
    // - **Migrating**: Schema migration is in progress.
    // - **Failed**: Schema migration failed.
    // - **Finished**: Schema migration is completed.
    std::shared_ptr<string> destinationOwnerDBName_ = nullptr;
    // The details of schema migration.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The task has failed for too long and cannot be restored
    std::shared_ptr<string> objectDefinition_ = nullptr;
    // The name of the database to which the migration object in the source instance belongs.
    std::shared_ptr<string> objectName_ = nullptr;
    // The name of the database to which the migration object in the destination instance belongs.
    std::shared_ptr<string> objectType_ = nullptr;
    // The error message returned if incremental data migration failed.
    std::shared_ptr<string> sourceOwnerDBName_ = nullptr;
    // The table name.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
