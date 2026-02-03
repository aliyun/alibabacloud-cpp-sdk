// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMA_HPP_
#define ALIBABACLOUD_MODELS_SCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataField.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Schema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Schema& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(partitionKeys, partitionKeys_);
      DARABONBA_PTR_TO_JSON(primaryKeys, primaryKeys_);
    };
    friend void from_json(const Darabonba::Json& j, Schema& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(partitionKeys, partitionKeys_);
      DARABONBA_PTR_FROM_JSON(primaryKeys, primaryKeys_);
    };
    Schema() = default ;
    Schema(const Schema &) = default ;
    Schema(Schema &&) = default ;
    Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Schema() = default ;
    Schema& operator=(const Schema &) = default ;
    Schema& operator=(Schema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->fields_ == nullptr && this->options_ == nullptr && this->partitionKeys_ == nullptr && this->primaryKeys_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Schema& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<DataField> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<DataField>) };
    inline vector<DataField> getFields() { DARABONBA_PTR_GET(fields_, vector<DataField>) };
    inline Schema& setFields(const vector<DataField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline Schema& setFields(vector<DataField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> getOptions() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline Schema& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline Schema& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline const vector<string> & getPartitionKeys() const { DARABONBA_PTR_GET_CONST(partitionKeys_, vector<string>) };
    inline vector<string> getPartitionKeys() { DARABONBA_PTR_GET(partitionKeys_, vector<string>) };
    inline Schema& setPartitionKeys(const vector<string> & partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };
    inline Schema& setPartitionKeys(vector<string> && partitionKeys) { DARABONBA_PTR_SET_RVALUE(partitionKeys_, partitionKeys) };


    // primaryKeys Field Functions 
    bool hasPrimaryKeys() const { return this->primaryKeys_ != nullptr;};
    void deletePrimaryKeys() { this->primaryKeys_ = nullptr;};
    inline const vector<string> & getPrimaryKeys() const { DARABONBA_PTR_GET_CONST(primaryKeys_, vector<string>) };
    inline vector<string> getPrimaryKeys() { DARABONBA_PTR_GET(primaryKeys_, vector<string>) };
    inline Schema& setPrimaryKeys(const vector<string> & primaryKeys) { DARABONBA_PTR_SET_VALUE(primaryKeys_, primaryKeys) };
    inline Schema& setPrimaryKeys(vector<string> && primaryKeys) { DARABONBA_PTR_SET_RVALUE(primaryKeys_, primaryKeys) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<vector<DataField>> fields_ {};
    shared_ptr<map<string, string>> options_ {};
    shared_ptr<vector<string>> partitionKeys_ {};
    shared_ptr<vector<string>> primaryKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
