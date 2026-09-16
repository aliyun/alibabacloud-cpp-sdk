// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DeleteSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogRevision, catalogRevision_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogRevision, catalogRevision_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
    };
    DeleteSkillResponseBody() = default ;
    DeleteSkillResponseBody(const DeleteSkillResponseBody &) = default ;
    DeleteSkillResponseBody(DeleteSkillResponseBody &&) = default ;
    DeleteSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSkillResponseBody() = default ;
    DeleteSkillResponseBody& operator=(const DeleteSkillResponseBody &) = default ;
    DeleteSkillResponseBody& operator=(DeleteSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogRevision_ == nullptr
        && this->deleted_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->skillId_ == nullptr; };
    // catalogRevision Field Functions 
    bool hasCatalogRevision() const { return this->catalogRevision_ != nullptr;};
    void deleteCatalogRevision() { this->catalogRevision_ = nullptr;};
    inline int64_t getCatalogRevision() const { DARABONBA_PTR_GET_DEFAULT(catalogRevision_, 0L) };
    inline DeleteSkillResponseBody& setCatalogRevision(int64_t catalogRevision) { DARABONBA_PTR_SET_VALUE(catalogRevision_, catalogRevision) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline DeleteSkillResponseBody& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DeleteSkillResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline DeleteSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


  protected:
    // The Skill catalog revision number.
    shared_ptr<int64_t> catalogRevision_ {};
    // Indicates whether the Skill is deleted.
    shared_ptr<bool> deleted_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<string> result_ {};
    // The ID of the deleted Skill.
    shared_ptr<string> skillId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
