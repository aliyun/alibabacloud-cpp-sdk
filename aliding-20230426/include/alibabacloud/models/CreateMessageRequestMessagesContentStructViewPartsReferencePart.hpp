// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageRequestMessagesContentStructViewPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageRequestMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageRequestMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    CreateMessageRequestMessagesContentStructViewPartsReferencePart() = default ;
    CreateMessageRequestMessagesContentStructViewPartsReferencePart(const CreateMessageRequestMessagesContentStructViewPartsReferencePart &) = default ;
    CreateMessageRequestMessagesContentStructViewPartsReferencePart(CreateMessageRequestMessagesContentStructViewPartsReferencePart &&) = default ;
    CreateMessageRequestMessagesContentStructViewPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageRequestMessagesContentStructViewPartsReferencePart() = default ;
    CreateMessageRequestMessagesContentStructViewPartsReferencePart& operator=(const CreateMessageRequestMessagesContentStructViewPartsReferencePart &) = default ;
    CreateMessageRequestMessagesContentStructViewPartsReferencePart& operator=(CreateMessageRequestMessagesContentStructViewPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->references_ != nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences>) };
    inline vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences>) };
    inline CreateMessageRequestMessagesContentStructViewPartsReferencePart& setReferences(const vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline CreateMessageRequestMessagesContentStructViewPartsReferencePart& setReferences(vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::CreateMessageRequestMessagesContentStructViewPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
