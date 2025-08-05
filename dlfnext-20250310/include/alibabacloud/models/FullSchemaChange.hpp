// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FULLSCHEMACHANGE_HPP_
#define ALIBABACLOUD_MODELS_FULLSCHEMACHANGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    virtual bool empty() const override { this->action_ != nullptr
        && this->comment_ != nullptr && this->dataType_ != nullptr && this->fieldNames_ != nullptr && this->keepNullability_ != nullptr && this->key_ != nullptr
        && this->move_ != nullptr && this->newComment_ != nullptr && this->newDataType_ != nullptr && this->newName_ != nullptr && this->newNullability_ != nullptr
        && this->value_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline FullSchemaChange& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline FullSchemaChange& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline const FullDataType & dataType() const { DARABONBA_PTR_GET_CONST(dataType_, FullDataType) };
    inline FullDataType dataType() { DARABONBA_PTR_GET(dataType_, FullDataType) };
    inline FullSchemaChange& setDataType(const FullDataType & dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };
    inline FullSchemaChange& setDataType(FullDataType && dataType) { DARABONBA_PTR_SET_RVALUE(dataType_, dataType) };


    // fieldNames Field Functions 
    bool hasFieldNames() const { return this->fieldNames_ != nullptr;};
    void deleteFieldNames() { this->fieldNames_ = nullptr;};
    inline const vector<string> & fieldNames() const { DARABONBA_PTR_GET_CONST(fieldNames_, vector<string>) };
    inline vector<string> fieldNames() { DARABONBA_PTR_GET(fieldNames_, vector<string>) };
    inline FullSchemaChange& setFieldNames(const vector<string> & fieldNames) { DARABONBA_PTR_SET_VALUE(fieldNames_, fieldNames) };
    inline FullSchemaChange& setFieldNames(vector<string> && fieldNames) { DARABONBA_PTR_SET_RVALUE(fieldNames_, fieldNames) };


    // keepNullability Field Functions 
    bool hasKeepNullability() const { return this->keepNullability_ != nullptr;};
    void deleteKeepNullability() { this->keepNullability_ = nullptr;};
    inline bool keepNullability() const { DARABONBA_PTR_GET_DEFAULT(keepNullability_, false) };
    inline FullSchemaChange& setKeepNullability(bool keepNullability) { DARABONBA_PTR_SET_VALUE(keepNullability_, keepNullability) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline FullSchemaChange& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // move Field Functions 
    bool hasMove() const { return this->move_ != nullptr;};
    void deleteMove() { this->move_ = nullptr;};
    inline const Move & move() const { DARABONBA_PTR_GET_CONST(move_, Move) };
    inline Move move() { DARABONBA_PTR_GET(move_, Move) };
    inline FullSchemaChange& setMove(const Move & move) { DARABONBA_PTR_SET_VALUE(move_, move) };
    inline FullSchemaChange& setMove(Move && move) { DARABONBA_PTR_SET_RVALUE(move_, move) };


    // newComment Field Functions 
    bool hasNewComment() const { return this->newComment_ != nullptr;};
    void deleteNewComment() { this->newComment_ = nullptr;};
    inline string newComment() const { DARABONBA_PTR_GET_DEFAULT(newComment_, "") };
    inline FullSchemaChange& setNewComment(string newComment) { DARABONBA_PTR_SET_VALUE(newComment_, newComment) };


    // newDataType Field Functions 
    bool hasNewDataType() const { return this->newDataType_ != nullptr;};
    void deleteNewDataType() { this->newDataType_ = nullptr;};
    inline const FullDataType & newDataType() const { DARABONBA_PTR_GET_CONST(newDataType_, FullDataType) };
    inline FullDataType newDataType() { DARABONBA_PTR_GET(newDataType_, FullDataType) };
    inline FullSchemaChange& setNewDataType(const FullDataType & newDataType) { DARABONBA_PTR_SET_VALUE(newDataType_, newDataType) };
    inline FullSchemaChange& setNewDataType(FullDataType && newDataType) { DARABONBA_PTR_SET_RVALUE(newDataType_, newDataType) };


    // newName Field Functions 
    bool hasNewName() const { return this->newName_ != nullptr;};
    void deleteNewName() { this->newName_ = nullptr;};
    inline string newName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
    inline FullSchemaChange& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


    // newNullability Field Functions 
    bool hasNewNullability() const { return this->newNullability_ != nullptr;};
    void deleteNewNullability() { this->newNullability_ = nullptr;};
    inline bool newNullability() const { DARABONBA_PTR_GET_DEFAULT(newNullability_, false) };
    inline FullSchemaChange& setNewNullability(bool newNullability) { DARABONBA_PTR_SET_VALUE(newNullability_, newNullability) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FullSchemaChange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    // required in UpdateComment/AddColumn
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<FullDataType> dataType_ = nullptr;
    // required in AddColumn/RenameColumn/DropColumn/UpdateColumnComment/UpdateColumnType/UpdateColumnNullability
    std::shared_ptr<vector<string>> fieldNames_ = nullptr;
    // required in UpdateColumnType
    std::shared_ptr<bool> keepNullability_ = nullptr;
    // required in SetOption/RemoveOption
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<Move> move_ = nullptr;
    // required in UpdateColumnComment
    std::shared_ptr<string> newComment_ = nullptr;
    std::shared_ptr<FullDataType> newDataType_ = nullptr;
    // required in RenameColumn
    std::shared_ptr<string> newName_ = nullptr;
    // required in UpdateColumnNullability
    std::shared_ptr<bool> newNullability_ = nullptr;
    // required in SetOption
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
