// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentStructViewPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    InvokeAssistantRequestMessagesContentStructViewPartsReferencePart() = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsReferencePart(const InvokeAssistantRequestMessagesContentStructViewPartsReferencePart &) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsReferencePart(InvokeAssistantRequestMessagesContentStructViewPartsReferencePart &&) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentStructViewPartsReferencePart() = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsReferencePart& operator=(const InvokeAssistantRequestMessagesContentStructViewPartsReferencePart &) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsReferencePart& operator=(InvokeAssistantRequestMessagesContentStructViewPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->references_ == nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences>) };
    inline vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences>) };
    inline InvokeAssistantRequestMessagesContentStructViewPartsReferencePart& setReferences(const vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline InvokeAssistantRequestMessagesContentStructViewPartsReferencePart& setReferences(vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
