// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructViewPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    CreateRunResponseBodyMessagesContentStructViewPartsReferencePart() = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReferencePart(const CreateRunResponseBodyMessagesContentStructViewPartsReferencePart &) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReferencePart(CreateRunResponseBodyMessagesContentStructViewPartsReferencePart &&) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructViewPartsReferencePart() = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReferencePart& operator=(const CreateRunResponseBodyMessagesContentStructViewPartsReferencePart &) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReferencePart& operator=(CreateRunResponseBodyMessagesContentStructViewPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->references_ == nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences>) };
    inline vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences>) };
    inline CreateRunResponseBodyMessagesContentStructViewPartsReferencePart& setReferences(const vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline CreateRunResponseBodyMessagesContentStructViewPartsReferencePart& setReferences(vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
