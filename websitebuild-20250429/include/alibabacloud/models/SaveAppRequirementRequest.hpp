// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPPREQUIREMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPPREQUIREMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SaveAppRequirementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAppRequirementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Prd, prd_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAppRequirementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Prd, prd_);
    };
    SaveAppRequirementRequest() = default ;
    SaveAppRequirementRequest(const SaveAppRequirementRequest &) = default ;
    SaveAppRequirementRequest(SaveAppRequirementRequest &&) = default ;
    SaveAppRequirementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAppRequirementRequest() = default ;
    SaveAppRequirementRequest& operator=(const SaveAppRequirementRequest &) = default ;
    SaveAppRequirementRequest& operator=(SaveAppRequirementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->prd_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline SaveAppRequirementRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // prd Field Functions 
    bool hasPrd() const { return this->prd_ != nullptr;};
    void deletePrd() { this->prd_ = nullptr;};
    inline string getPrd() const { DARABONBA_PTR_GET_DEFAULT(prd_, "") };
    inline SaveAppRequirementRequest& setPrd(string prd) { DARABONBA_PTR_SET_VALUE(prd_, prd) };


  protected:
    // Conversation ID
    shared_ptr<string> conversationId_ {};
    // Requirement document content
    shared_ptr<string> prd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
