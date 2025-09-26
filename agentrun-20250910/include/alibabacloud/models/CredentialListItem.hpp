// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALLISTITEM_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALLISTITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RelatedWorkload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CredentialListItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialListItem& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(relatedWorloads, relatedWorloads_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialListItem& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(relatedWorloads, relatedWorloads_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    CredentialListItem() = default ;
    CredentialListItem(const CredentialListItem &) = default ;
    CredentialListItem(CredentialListItem &&) = default ;
    CredentialListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialListItem() = default ;
    CredentialListItem& operator=(const CredentialListItem &) = default ;
    CredentialListItem& operator=(CredentialListItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->relatedWorloads_ != nullptr && this->type_ != nullptr && this->updatedAt_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CredentialListItem& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CredentialListItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CredentialListItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // relatedWorloads Field Functions 
    bool hasRelatedWorloads() const { return this->relatedWorloads_ != nullptr;};
    void deleteRelatedWorloads() { this->relatedWorloads_ = nullptr;};
    inline const vector<RelatedWorkload> & relatedWorloads() const { DARABONBA_PTR_GET_CONST(relatedWorloads_, vector<RelatedWorkload>) };
    inline vector<RelatedWorkload> relatedWorloads() { DARABONBA_PTR_GET(relatedWorloads_, vector<RelatedWorkload>) };
    inline CredentialListItem& setRelatedWorloads(const vector<RelatedWorkload> & relatedWorloads) { DARABONBA_PTR_SET_VALUE(relatedWorloads_, relatedWorloads) };
    inline CredentialListItem& setRelatedWorloads(vector<RelatedWorkload> && relatedWorloads) { DARABONBA_PTR_SET_RVALUE(relatedWorloads_, relatedWorloads) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CredentialListItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CredentialListItem& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<RelatedWorkload>> relatedWorloads_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
