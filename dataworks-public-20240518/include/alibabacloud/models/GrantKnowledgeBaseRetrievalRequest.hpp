// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTKNOWLEDGEBASERETRIEVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTKNOWLEDGEBASERETRIEVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GrantKnowledgeBaseRetrievalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantKnowledgeBaseRetrievalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, GrantKnowledgeBaseRetrievalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
    };
    GrantKnowledgeBaseRetrievalRequest() = default ;
    GrantKnowledgeBaseRetrievalRequest(const GrantKnowledgeBaseRetrievalRequest &) = default ;
    GrantKnowledgeBaseRetrievalRequest(GrantKnowledgeBaseRetrievalRequest &&) = default ;
    GrantKnowledgeBaseRetrievalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantKnowledgeBaseRetrievalRequest() = default ;
    GrantKnowledgeBaseRetrievalRequest& operator=(const GrantKnowledgeBaseRetrievalRequest &) = default ;
    GrantKnowledgeBaseRetrievalRequest& operator=(GrantKnowledgeBaseRetrievalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->principalId_ == nullptr && this->principalType_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline GrantKnowledgeBaseRetrievalRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline GrantKnowledgeBaseRetrievalRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline GrantKnowledgeBaseRetrievalRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The DataWorks user ID of the target user. This is not the RAM UID or the caller identity.
    // 
    // This parameter is required.
    shared_ptr<string> principalId_ {};
    // The type of the principal that receives the share. This parameter is optional and defaults to USER. Currently, only USER is supported.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
