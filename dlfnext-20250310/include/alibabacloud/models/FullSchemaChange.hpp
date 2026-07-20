// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FULLSCHEMACHANGE_HPP_
#define ALIBABACLOUD_MODELS_FULLSCHEMACHANGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FullDataType.hpp>
#include <vector>
#include <alibabacloud/models/Move.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FullSchemaChange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FullSchemaChange& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(fieldNames, fieldNames_);
      DARABONBA_PTR_TO_JSON(keepNullability, keepNullability_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(move, move_);
      DARABONBA_PTR_TO_JSON(newComment, newComment_);
      DARABONBA_PTR_TO_JSON(newDataType, newDataType_);
      DARABONBA_PTR_TO_JSON(newName, newName_);
      DARABONBA_PTR_TO_JSON(newNullability, newNullability_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, FullSchemaChange& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(fieldNames, fieldNames_);
      DARABONBA_PTR_FROM_JSON(keepNullability, keepNullability_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(move, move_);
      DARABONBA_PTR_FROM_JSON(newComment, newComment_);
      DARABONBA_PTR_FROM_JSON(newDataType, newDataType_);
      DARABONBA_PTR_FROM_JSON(newName, newName_);
      DARABONBA_PTR_FROM_JSON(newNullability, newNullability_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    FullSchemaChange() = default ;
    FullSchemaChange(const FullSchemaChange &) = default ;
    FullSchemaChange(FullSchemaChange &&) = default ;
    FullSchemaChange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FullSchemaChange() = default ;
    FullSchemaChange& operator=(const FullSchemaChange &) = default ;
    FullSchemaChange& operator=(FullSchemaChange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->comment_ == nullptr && this->dataType_ == nullptr && this->fieldNames_ == nullptr && this->keepNullability_ == nullptr && this->key_ == nullptr
        && this->move_ == nullptr && this->newComment_ == nullptr && this->newDataType_ == nullptr && this->newName_ == nullptr && this->newNullability_ == nullptr
        && this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline FullSchemaChange& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline FullSchemaChange& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline const FullDataType & getDataType() const { DARABONBA_PTR_GET_CONST(dataType_, FullDataType) };
    inline FullDataType getDataType() { DARABONBA_PTR_GET(dataType_, FullDataType) };
    inline FullSchemaChange& setDataType(const FullDataType & dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };
    inline FullSchemaChange& setDataType(FullDataType && dataType) { DARABONBA_PTR_SET_RVALUE(dataType_, dataType) };


    // fieldNames Field Functions 
    bool hasFieldNames() const { return this->fieldNames_ != nullptr;};
    void deleteFieldNames() { this->fieldNames_ = nullptr;};
    inline const vector<string> & getFieldNames() const { DARABONBA_PTR_GET_CONST(fieldNames_, vector<string>) };
    inline vector<string> getFieldNames() { DARABONBA_PTR_GET(fieldNames_, vector<string>) };
    inline FullSchemaChange& setFieldNames(const vector<string> & fieldNames) { DARABONBA_PTR_SET_VALUE(fieldNames_, fieldNames) };
    inline FullSchemaChange& setFieldNames(vector<string> && fieldNames) { DARABONBA_PTR_SET_RVALUE(fieldNames_, fieldNames) };


    // keepNullability Field Functions 
    bool hasKeepNullability() const { return this->keepNullability_ != nullptr;};
    void deleteKeepNullability() { this->keepNullability_ = nullptr;};
    inline bool getKeepNullability() const { DARABONBA_PTR_GET_DEFAULT(keepNullability_, false) };
    inline FullSchemaChange& setKeepNullability(bool keepNullability) { DARABONBA_PTR_SET_VALUE(keepNullability_, keepNullability) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline FullSchemaChange& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // move Field Functions 
    bool hasMove() const { return this->move_ != nullptr;};
    void deleteMove() { this->move_ = nullptr;};
    inline const Move & getMove() const { DARABONBA_PTR_GET_CONST(move_, Move) };
    inline Move getMove() { DARABONBA_PTR_GET(move_, Move) };
    inline FullSchemaChange& setMove(const Move & move) { DARABONBA_PTR_SET_VALUE(move_, move) };
    inline FullSchemaChange& setMove(Move && move) { DARABONBA_PTR_SET_RVALUE(move_, move) };


    // newComment Field Functions 
    bool hasNewComment() const { return this->newComment_ != nullptr;};
    void deleteNewComment() { this->newComment_ = nullptr;};
    inline string getNewComment() const { DARABONBA_PTR_GET_DEFAULT(newComment_, "") };
    inline FullSchemaChange& setNewComment(string newComment) { DARABONBA_PTR_SET_VALUE(newComment_, newComment) };


    // newDataType Field Functions 
    bool hasNewDataType() const { return this->newDataType_ != nullptr;};
    void deleteNewDataType() { this->newDataType_ = nullptr;};
    inline const FullDataType & getNewDataType() const { DARABONBA_PTR_GET_CONST(newDataType_, FullDataType) };
    inline FullDataType getNewDataType() { DARABONBA_PTR_GET(newDataType_, FullDataType) };
    inline FullSchemaChange& setNewDataType(const FullDataType & newDataType) { DARABONBA_PTR_SET_VALUE(newDataType_, newDataType) };
    inline FullSchemaChange& setNewDataType(FullDataType && newDataType) { DARABONBA_PTR_SET_RVALUE(newDataType_, newDataType) };


    // newName Field Functions 
    bool hasNewName() const { return this->newName_ != nullptr;};
    void deleteNewName() { this->newName_ = nullptr;};
    inline string getNewName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
    inline FullSchemaChange& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


    // newNullability Field Functions 
    bool hasNewNullability() const { return this->newNullability_ != nullptr;};
    void deleteNewNullability() { this->newNullability_ = nullptr;};
    inline bool getNewNullability() const { DARABONBA_PTR_GET_DEFAULT(newNullability_, false) };
    inline FullSchemaChange& setNewNullability(bool newNullability) { DARABONBA_PTR_SET_VALUE(newNullability_, newNullability) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FullSchemaChange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> action_ {};
    // required in UpdateComment/AddColumn
    shared_ptr<string> comment_ {};
    shared_ptr<FullDataType> dataType_ {};
    // required in AddColumn/RenameColumn/DropColumn/UpdateColumnComment/UpdateColumnType/UpdateColumnNullability
    shared_ptr<vector<string>> fieldNames_ {};
    // required in UpdateColumnType
    shared_ptr<bool> keepNullability_ {};
    // required in SetOption/RemoveOption
    shared_ptr<string> key_ {};
    shared_ptr<Move> move_ {};
    // required in UpdateColumnComment
    shared_ptr<string> newComment_ {};
    shared_ptr<FullDataType> newDataType_ {};
    // required in RenameColumn
    shared_ptr<string> newName_ {};
    // required in UpdateColumnNullability
    shared_ptr<bool> newNullability_ {};
    // required in SetOption
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
