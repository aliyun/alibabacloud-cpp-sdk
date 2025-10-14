// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContentStructViewPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    ListMessageResponseBodyMessagesContentStructViewPartsReferencePart() = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsReferencePart(const ListMessageResponseBodyMessagesContentStructViewPartsReferencePart &) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsReferencePart(ListMessageResponseBodyMessagesContentStructViewPartsReferencePart &&) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContentStructViewPartsReferencePart() = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsReferencePart& operator=(const ListMessageResponseBodyMessagesContentStructViewPartsReferencePart &) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsReferencePart& operator=(ListMessageResponseBodyMessagesContentStructViewPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->references_ == nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences>) };
    inline vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences>) };
    inline ListMessageResponseBodyMessagesContentStructViewPartsReferencePart& setReferences(const vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline ListMessageResponseBodyMessagesContentStructViewPartsReferencePart& setReferences(vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
