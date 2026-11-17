// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKNOWLEDGEBASEADMINISTRATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDKNOWLEDGEBASEADMINISTRATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class AddKnowledgeBaseAdministratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKnowledgeBaseAdministratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdministratorUserId, administratorUserId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKnowledgeBaseAdministratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdministratorUserId, administratorUserId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
    };
    AddKnowledgeBaseAdministratorRequest() = default ;
    AddKnowledgeBaseAdministratorRequest(const AddKnowledgeBaseAdministratorRequest &) = default ;
    AddKnowledgeBaseAdministratorRequest(AddKnowledgeBaseAdministratorRequest &&) = default ;
    AddKnowledgeBaseAdministratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKnowledgeBaseAdministratorRequest() = default ;
    AddKnowledgeBaseAdministratorRequest& operator=(const AddKnowledgeBaseAdministratorRequest &) = default ;
    AddKnowledgeBaseAdministratorRequest& operator=(AddKnowledgeBaseAdministratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->administratorUserId_ == nullptr
        && this->knowledgeBaseId_ == nullptr; };
    // administratorUserId Field Functions 
    bool hasAdministratorUserId() const { return this->administratorUserId_ != nullptr;};
    void deleteAdministratorUserId() { this->administratorUserId_ = nullptr;};
    inline string getAdministratorUserId() const { DARABONBA_PTR_GET_DEFAULT(administratorUserId_, "") };
    inline AddKnowledgeBaseAdministratorRequest& setAdministratorUserId(string administratorUserId) { DARABONBA_PTR_SET_VALUE(administratorUserId_, administratorUserId) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline AddKnowledgeBaseAdministratorRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


  protected:
    // The DataWorks user ID of the administrator to be added. This is not the identity of the caller.
    // 
    // This parameter is required.
    shared_ptr<string> administratorUserId_ {};
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
