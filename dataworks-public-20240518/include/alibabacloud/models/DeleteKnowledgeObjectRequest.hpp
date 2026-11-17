// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKNOWLEDGEOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKNOWLEDGEOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteKnowledgeObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKnowledgeObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeObjectId, knowledgeObjectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKnowledgeObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeObjectId, knowledgeObjectId_);
    };
    DeleteKnowledgeObjectRequest() = default ;
    DeleteKnowledgeObjectRequest(const DeleteKnowledgeObjectRequest &) = default ;
    DeleteKnowledgeObjectRequest(DeleteKnowledgeObjectRequest &&) = default ;
    DeleteKnowledgeObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKnowledgeObjectRequest() = default ;
    DeleteKnowledgeObjectRequest& operator=(const DeleteKnowledgeObjectRequest &) = default ;
    DeleteKnowledgeObjectRequest& operator=(DeleteKnowledgeObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->knowledgeObjectId_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline DeleteKnowledgeObjectRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeObjectId Field Functions 
    bool hasKnowledgeObjectId() const { return this->knowledgeObjectId_ != nullptr;};
    void deleteKnowledgeObjectId() { this->knowledgeObjectId_ = nullptr;};
    inline string getKnowledgeObjectId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeObjectId_, "") };
    inline DeleteKnowledgeObjectRequest& setKnowledgeObjectId(string knowledgeObjectId) { DARABONBA_PTR_SET_VALUE(knowledgeObjectId_, knowledgeObjectId) };


  protected:
    // The ID of the knowledge base to which the object belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The stable ID of the object to delete.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeObjectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
