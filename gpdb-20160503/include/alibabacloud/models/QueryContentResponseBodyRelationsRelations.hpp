// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYRELATIONSRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYRELATIONSRELATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyRelationsRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyRelationsRelations& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SourceEntity, sourceEntity_);
      DARABONBA_PTR_TO_JSON(TargetEntity, targetEntity_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyRelationsRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SourceEntity, sourceEntity_);
      DARABONBA_PTR_FROM_JSON(TargetEntity, targetEntity_);
    };
    QueryContentResponseBodyRelationsRelations() = default ;
    QueryContentResponseBodyRelationsRelations(const QueryContentResponseBodyRelationsRelations &) = default ;
    QueryContentResponseBodyRelationsRelations(QueryContentResponseBodyRelationsRelations &&) = default ;
    QueryContentResponseBodyRelationsRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyRelationsRelations() = default ;
    QueryContentResponseBodyRelationsRelations& operator=(const QueryContentResponseBodyRelationsRelations &) = default ;
    QueryContentResponseBodyRelationsRelations& operator=(QueryContentResponseBodyRelationsRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fileName_ == nullptr && return this->id_ == nullptr && return this->sourceEntity_ == nullptr && return this->targetEntity_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryContentResponseBodyRelationsRelations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryContentResponseBodyRelationsRelations& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryContentResponseBodyRelationsRelations& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sourceEntity Field Functions 
    bool hasSourceEntity() const { return this->sourceEntity_ != nullptr;};
    void deleteSourceEntity() { this->sourceEntity_ = nullptr;};
    inline string sourceEntity() const { DARABONBA_PTR_GET_DEFAULT(sourceEntity_, "") };
    inline QueryContentResponseBodyRelationsRelations& setSourceEntity(string sourceEntity) { DARABONBA_PTR_SET_VALUE(sourceEntity_, sourceEntity) };


    // targetEntity Field Functions 
    bool hasTargetEntity() const { return this->targetEntity_ != nullptr;};
    void deleteTargetEntity() { this->targetEntity_ = nullptr;};
    inline string targetEntity() const { DARABONBA_PTR_GET_DEFAULT(targetEntity_, "") };
    inline QueryContentResponseBodyRelationsRelations& setTargetEntity(string targetEntity) { DARABONBA_PTR_SET_VALUE(targetEntity_, targetEntity) };


  protected:
    // The description of the relationship edge.
    std::shared_ptr<string> description_ = nullptr;
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The ID of the relationship edge.
    std::shared_ptr<string> id_ = nullptr;
    // The source entity.
    std::shared_ptr<string> sourceEntity_ = nullptr;
    // The destination entity.
    std::shared_ptr<string> targetEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
