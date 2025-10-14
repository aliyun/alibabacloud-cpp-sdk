// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    CreateRunResponseBodyMessagesContentStructPartsReferencePart() = default ;
    CreateRunResponseBodyMessagesContentStructPartsReferencePart(const CreateRunResponseBodyMessagesContentStructPartsReferencePart &) = default ;
    CreateRunResponseBodyMessagesContentStructPartsReferencePart(CreateRunResponseBodyMessagesContentStructPartsReferencePart &&) = default ;
    CreateRunResponseBodyMessagesContentStructPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructPartsReferencePart() = default ;
    CreateRunResponseBodyMessagesContentStructPartsReferencePart& operator=(const CreateRunResponseBodyMessagesContentStructPartsReferencePart &) = default ;
    CreateRunResponseBodyMessagesContentStructPartsReferencePart& operator=(CreateRunResponseBodyMessagesContentStructPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->references_ == nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences>) };
    inline vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences>) };
    inline CreateRunResponseBodyMessagesContentStructPartsReferencePart& setReferences(const vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline CreateRunResponseBodyMessagesContentStructPartsReferencePart& setReferences(vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::CreateRunResponseBodyMessagesContentStructPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
