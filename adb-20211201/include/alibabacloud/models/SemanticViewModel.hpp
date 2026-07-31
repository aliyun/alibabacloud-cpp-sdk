// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEMANTICVIEWMODEL_HPP_
#define ALIBABACLOUD_MODELS_SEMANTICVIEWMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SemanticViewModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SemanticViewModel& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
      DARABONBA_PTR_TO_JSON(ViewSchema, viewSchema_);
    };
    friend void from_json(const Darabonba::Json& j, SemanticViewModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
      DARABONBA_PTR_FROM_JSON(ViewSchema, viewSchema_);
    };
    SemanticViewModel() = default ;
    SemanticViewModel(const SemanticViewModel &) = default ;
    SemanticViewModel(SemanticViewModel &&) = default ;
    SemanticViewModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SemanticViewModel() = default ;
    SemanticViewModel& operator=(const SemanticViewModel &) = default ;
    SemanticViewModel& operator=(SemanticViewModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->definition_ == nullptr && this->score_ == nullptr && this->viewName_ == nullptr && this->viewSchema_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline SemanticViewModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline SemanticViewModel& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SemanticViewModel& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline SemanticViewModel& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


    // viewSchema Field Functions 
    bool hasViewSchema() const { return this->viewSchema_ != nullptr;};
    void deleteViewSchema() { this->viewSchema_ = nullptr;};
    inline string getViewSchema() const { DARABONBA_PTR_GET_DEFAULT(viewSchema_, "") };
    inline SemanticViewModel& setViewSchema(string viewSchema) { DARABONBA_PTR_SET_VALUE(viewSchema_, viewSchema) };


  protected:
    // The annotation for the semantic view
    shared_ptr<string> comment_ {};
    // The YAML definition of the semantic view
    shared_ptr<string> definition_ {};
    // The vector retrieval match score (defaults to 1; during retrieval queries, it is a decimal between 0 and 1 representing vector similarity)
    shared_ptr<double> score_ {};
    // The name of the semantic view
    shared_ptr<string> viewName_ {};
    // The schema where the semantic view resides
    shared_ptr<string> viewSchema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
