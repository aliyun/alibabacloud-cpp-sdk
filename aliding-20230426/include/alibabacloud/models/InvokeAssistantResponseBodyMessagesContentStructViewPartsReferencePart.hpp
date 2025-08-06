// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart(const InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart(InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart &&) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart& operator=(const InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart& operator=(InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->references_ != nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences>) };
    inline vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences>) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart& setReferences(const vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePart& setReferences(vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
