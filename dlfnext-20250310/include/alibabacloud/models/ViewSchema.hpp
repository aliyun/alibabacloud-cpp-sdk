// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_VIEWSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DataField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ViewSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSchema& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(dialects, dialects_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(dialects, dialects_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(query, query_);
    };
    ViewSchema() = default ;
    ViewSchema(const ViewSchema &) = default ;
    ViewSchema(ViewSchema &&) = default ;
    ViewSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSchema() = default ;
    ViewSchema& operator=(const ViewSchema &) = default ;
    ViewSchema& operator=(ViewSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->dialects_ == nullptr && return this->fields_ == nullptr && return this->options_ == nullptr && return this->query_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ViewSchema& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dialects Field Functions 
    bool hasDialects() const { return this->dialects_ != nullptr;};
    void deleteDialects() { this->dialects_ = nullptr;};
    inline const map<string, string> & dialects() const { DARABONBA_PTR_GET_CONST(dialects_, map<string, string>) };
    inline map<string, string> dialects() { DARABONBA_PTR_GET(dialects_, map<string, string>) };
    inline ViewSchema& setDialects(const map<string, string> & dialects) { DARABONBA_PTR_SET_VALUE(dialects_, dialects) };
    inline ViewSchema& setDialects(map<string, string> && dialects) { DARABONBA_PTR_SET_RVALUE(dialects_, dialects) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<DataField> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<DataField>) };
    inline vector<DataField> fields() { DARABONBA_PTR_GET(fields_, vector<DataField>) };
    inline ViewSchema& setFields(const vector<DataField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline ViewSchema& setFields(vector<DataField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & options() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> options() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline ViewSchema& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ViewSchema& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ViewSchema& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<map<string, string>> dialects_ = nullptr;
    std::shared_ptr<vector<DataField>> fields_ = nullptr;
    std::shared_ptr<map<string, string>> options_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
