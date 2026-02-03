// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREDICATE_HPP_
#define ALIBABACLOUD_MODELS_PREDICATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Predicate.hpp>
#include <alibabacloud/models/Transform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Predicate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Predicate& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(literals, literals_);
      DARABONBA_PTR_TO_JSON(transform, transform_);
    };
    friend void from_json(const Darabonba::Json& j, Predicate& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(literals, literals_);
      DARABONBA_PTR_FROM_JSON(transform, transform_);
    };
    Predicate() = default ;
    Predicate(const Predicate &) = default ;
    Predicate(Predicate &&) = default ;
    Predicate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Predicate() = default ;
    Predicate& operator=(const Predicate &) = default ;
    Predicate& operator=(Predicate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && this->function_ == nullptr && this->kind_ == nullptr && this->literals_ == nullptr && this->transform_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Predicate> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Predicate>) };
    inline vector<Predicate> getChildren() { DARABONBA_PTR_GET(children_, vector<Predicate>) };
    inline Predicate& setChildren(const vector<Predicate> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline Predicate& setChildren(vector<Predicate> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline Predicate& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline Predicate& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // literals Field Functions 
    bool hasLiterals() const { return this->literals_ != nullptr;};
    void deleteLiterals() { this->literals_ = nullptr;};
    inline const vector<Darabonba::Json> & getLiterals() const { DARABONBA_PTR_GET_CONST(literals_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getLiterals() { DARABONBA_PTR_GET(literals_, vector<Darabonba::Json>) };
    inline Predicate& setLiterals(const vector<Darabonba::Json> & literals) { DARABONBA_PTR_SET_VALUE(literals_, literals) };
    inline Predicate& setLiterals(vector<Darabonba::Json> && literals) { DARABONBA_PTR_SET_RVALUE(literals_, literals) };


    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline const Transform & getTransform() const { DARABONBA_PTR_GET_CONST(transform_, Transform) };
    inline Transform getTransform() { DARABONBA_PTR_GET(transform_, Transform) };
    inline Predicate& setTransform(const Transform & transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };
    inline Predicate& setTransform(Transform && transform) { DARABONBA_PTR_SET_RVALUE(transform_, transform) };


  protected:
    shared_ptr<vector<Predicate>> children_ {};
    shared_ptr<string> function_ {};
    shared_ptr<string> kind_ {};
    shared_ptr<vector<Darabonba::Json>> literals_ {};
    shared_ptr<Transform> transform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
