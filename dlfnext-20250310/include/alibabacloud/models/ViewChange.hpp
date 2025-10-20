// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWCHANGE_HPP_
#define ALIBABACLOUD_MODELS_VIEWCHANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ViewChange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewChange& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(dialect, dialect_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ViewChange& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(dialect, dialect_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ViewChange() = default ;
    ViewChange(const ViewChange &) = default ;
    ViewChange(ViewChange &&) = default ;
    ViewChange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewChange() = default ;
    ViewChange& operator=(const ViewChange &) = default ;
    ViewChange& operator=(ViewChange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->comment_ == nullptr && return this->dialect_ == nullptr && return this->key_ == nullptr && return this->query_ == nullptr && return this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ViewChange& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ViewChange& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dialect Field Functions 
    bool hasDialect() const { return this->dialect_ != nullptr;};
    void deleteDialect() { this->dialect_ = nullptr;};
    inline string dialect() const { DARABONBA_PTR_GET_DEFAULT(dialect_, "") };
    inline ViewChange& setDialect(string dialect) { DARABONBA_PTR_SET_VALUE(dialect_, dialect) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ViewChange& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ViewChange& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ViewChange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    // required in UpdateComment
    std::shared_ptr<string> comment_ = nullptr;
    // required in AddDialect/UpdateDialect/DropDialect
    std::shared_ptr<string> dialect_ = nullptr;
    // required in SetOption/RemoveOption
    std::shared_ptr<string> key_ = nullptr;
    // required in AddDialect/UpdateDialect
    std::shared_ptr<string> query_ = nullptr;
    // required in SetOption
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
