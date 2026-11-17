// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEKNOWLEDGEBASEADMINISTRATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEKNOWLEDGEBASEADMINISTRATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RemoveKnowledgeBaseAdministratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveKnowledgeBaseAdministratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdministratorUserId, administratorUserId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveKnowledgeBaseAdministratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdministratorUserId, administratorUserId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
    };
    RemoveKnowledgeBaseAdministratorRequest() = default ;
    RemoveKnowledgeBaseAdministratorRequest(const RemoveKnowledgeBaseAdministratorRequest &) = default ;
    RemoveKnowledgeBaseAdministratorRequest(RemoveKnowledgeBaseAdministratorRequest &&) = default ;
    RemoveKnowledgeBaseAdministratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveKnowledgeBaseAdministratorRequest() = default ;
    RemoveKnowledgeBaseAdministratorRequest& operator=(const RemoveKnowledgeBaseAdministratorRequest &) = default ;
    RemoveKnowledgeBaseAdministratorRequest& operator=(RemoveKnowledgeBaseAdministratorRequest &&) = default ;
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
    inline RemoveKnowledgeBaseAdministratorRequest& setAdministratorUserId(string administratorUserId) { DARABONBA_PTR_SET_VALUE(administratorUserId_, administratorUserId) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline RemoveKnowledgeBaseAdministratorRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


  protected:
    // The DataWorks user ID of the administrator to be removed. This is not the identity of the caller.
    // 
    // This parameter is required.
    shared_ptr<string> administratorUserId_ {};
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
