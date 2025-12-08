// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEENTITIESRESPONSEBODYDATAENTITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEENTITIESRESPONSEBODYDATAENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ListFaceEntitiesResponseBodyDataEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaceEntitiesResponseBodyDataEntities& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaceEntitiesResponseBodyDataEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    ListFaceEntitiesResponseBodyDataEntities() = default ;
    ListFaceEntitiesResponseBodyDataEntities(const ListFaceEntitiesResponseBodyDataEntities &) = default ;
    ListFaceEntitiesResponseBodyDataEntities(ListFaceEntitiesResponseBodyDataEntities &&) = default ;
    ListFaceEntitiesResponseBodyDataEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaceEntitiesResponseBodyDataEntities() = default ;
    ListFaceEntitiesResponseBodyDataEntities& operator=(const ListFaceEntitiesResponseBodyDataEntities &) = default ;
    ListFaceEntitiesResponseBodyDataEntities& operator=(ListFaceEntitiesResponseBodyDataEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->dbName_ == nullptr && return this->entityId_ == nullptr && return this->faceCount_ == nullptr && return this->labels_ == nullptr && return this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ListFaceEntitiesResponseBodyDataEntities& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListFaceEntitiesResponseBodyDataEntities& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListFaceEntitiesResponseBodyDataEntities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // faceCount Field Functions 
    bool hasFaceCount() const { return this->faceCount_ != nullptr;};
    void deleteFaceCount() { this->faceCount_ = nullptr;};
    inline int32_t faceCount() const { DARABONBA_PTR_GET_DEFAULT(faceCount_, 0) };
    inline ListFaceEntitiesResponseBodyDataEntities& setFaceCount(int32_t faceCount) { DARABONBA_PTR_SET_VALUE(faceCount_, faceCount) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListFaceEntitiesResponseBodyDataEntities& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline ListFaceEntitiesResponseBodyDataEntities& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<int32_t> faceCount_ = nullptr;
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
