// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELEMENT_HPP_
#define ALIBABACLOUD_MODELS_ELEMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ElementContent.hpp>
#include <alibabacloud/models/ElementRelation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Element : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Element& obj) { 
      DARABONBA_PTR_TO_JSON(ElementContents, elementContents_);
      DARABONBA_PTR_TO_JSON(ElementRelations, elementRelations_);
      DARABONBA_PTR_TO_JSON(ElementType, elementType_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(SemanticSimilarity, semanticSimilarity_);
    };
    friend void from_json(const Darabonba::Json& j, Element& obj) { 
      DARABONBA_PTR_FROM_JSON(ElementContents, elementContents_);
      DARABONBA_PTR_FROM_JSON(ElementRelations, elementRelations_);
      DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(SemanticSimilarity, semanticSimilarity_);
    };
    Element() = default ;
    Element(const Element &) = default ;
    Element(Element &&) = default ;
    Element(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Element() = default ;
    Element& operator=(const Element &) = default ;
    Element& operator=(Element &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elementContents_ != nullptr
        && this->elementRelations_ != nullptr && this->elementType_ != nullptr && this->objectId_ != nullptr && this->semanticSimilarity_ != nullptr; };
    // elementContents Field Functions 
    bool hasElementContents() const { return this->elementContents_ != nullptr;};
    void deleteElementContents() { this->elementContents_ = nullptr;};
    inline const vector<ElementContent> & elementContents() const { DARABONBA_PTR_GET_CONST(elementContents_, vector<ElementContent>) };
    inline vector<ElementContent> elementContents() { DARABONBA_PTR_GET(elementContents_, vector<ElementContent>) };
    inline Element& setElementContents(const vector<ElementContent> & elementContents) { DARABONBA_PTR_SET_VALUE(elementContents_, elementContents) };
    inline Element& setElementContents(vector<ElementContent> && elementContents) { DARABONBA_PTR_SET_RVALUE(elementContents_, elementContents) };


    // elementRelations Field Functions 
    bool hasElementRelations() const { return this->elementRelations_ != nullptr;};
    void deleteElementRelations() { this->elementRelations_ = nullptr;};
    inline const vector<ElementRelation> & elementRelations() const { DARABONBA_PTR_GET_CONST(elementRelations_, vector<ElementRelation>) };
    inline vector<ElementRelation> elementRelations() { DARABONBA_PTR_GET(elementRelations_, vector<ElementRelation>) };
    inline Element& setElementRelations(const vector<ElementRelation> & elementRelations) { DARABONBA_PTR_SET_VALUE(elementRelations_, elementRelations) };
    inline Element& setElementRelations(vector<ElementRelation> && elementRelations) { DARABONBA_PTR_SET_RVALUE(elementRelations_, elementRelations) };


    // elementType Field Functions 
    bool hasElementType() const { return this->elementType_ != nullptr;};
    void deleteElementType() { this->elementType_ = nullptr;};
    inline string elementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
    inline Element& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline Element& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // semanticSimilarity Field Functions 
    bool hasSemanticSimilarity() const { return this->semanticSimilarity_ != nullptr;};
    void deleteSemanticSimilarity() { this->semanticSimilarity_ = nullptr;};
    inline float semanticSimilarity() const { DARABONBA_PTR_GET_DEFAULT(semanticSimilarity_, 0.0) };
    inline Element& setSemanticSimilarity(float semanticSimilarity) { DARABONBA_PTR_SET_VALUE(semanticSimilarity_, semanticSimilarity) };


  protected:
    std::shared_ptr<vector<ElementContent>> elementContents_ = nullptr;
    std::shared_ptr<vector<ElementRelation>> elementRelations_ = nullptr;
    std::shared_ptr<string> elementType_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<float> semanticSimilarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
