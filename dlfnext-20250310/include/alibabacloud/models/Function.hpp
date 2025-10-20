// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTION_HPP_
#define ALIBABACLOUD_MODELS_FUNCTION_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FunctionDefinition.hpp>
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
  class Function : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Function& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(definitions, definitions_);
      DARABONBA_PTR_TO_JSON(deterministic, deterministic_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(returnParams, returnParams_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, Function& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(definitions, definitions_);
      DARABONBA_PTR_FROM_JSON(deterministic, deterministic_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(returnParams, returnParams_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    Function() = default ;
    Function(const Function &) = default ;
    Function(Function &&) = default ;
    Function(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Function() = default ;
    Function& operator=(const Function &) = default ;
    Function& operator=(Function &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->createdAt_ == nullptr && return this->createdBy_ == nullptr && return this->definitions_ == nullptr && return this->deterministic_ == nullptr && return this->id_ == nullptr
        && return this->inputParams_ == nullptr && return this->name_ == nullptr && return this->options_ == nullptr && return this->owner_ == nullptr && return this->returnParams_ == nullptr
        && return this->updatedAt_ == nullptr && return this->updatedBy_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Function& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Function& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Function& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // definitions Field Functions 
    bool hasDefinitions() const { return this->definitions_ != nullptr;};
    void deleteDefinitions() { this->definitions_ = nullptr;};
    inline const map<string, FunctionDefinition> & definitions() const { DARABONBA_PTR_GET_CONST(definitions_, map<string, FunctionDefinition>) };
    inline map<string, FunctionDefinition> definitions() { DARABONBA_PTR_GET(definitions_, map<string, FunctionDefinition>) };
    inline Function& setDefinitions(const map<string, FunctionDefinition> & definitions) { DARABONBA_PTR_SET_VALUE(definitions_, definitions) };
    inline Function& setDefinitions(map<string, FunctionDefinition> && definitions) { DARABONBA_PTR_SET_RVALUE(definitions_, definitions) };


    // deterministic Field Functions 
    bool hasDeterministic() const { return this->deterministic_ != nullptr;};
    void deleteDeterministic() { this->deterministic_ = nullptr;};
    inline bool deterministic() const { DARABONBA_PTR_GET_DEFAULT(deterministic_, false) };
    inline Function& setDeterministic(bool deterministic) { DARABONBA_PTR_SET_VALUE(deterministic_, deterministic) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Function& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline const vector<DataField> & inputParams() const { DARABONBA_PTR_GET_CONST(inputParams_, vector<DataField>) };
    inline vector<DataField> inputParams() { DARABONBA_PTR_GET(inputParams_, vector<DataField>) };
    inline Function& setInputParams(const vector<DataField> & inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };
    inline Function& setInputParams(vector<DataField> && inputParams) { DARABONBA_PTR_SET_RVALUE(inputParams_, inputParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & options() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> options() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline Function& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline Function& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline Function& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // returnParams Field Functions 
    bool hasReturnParams() const { return this->returnParams_ != nullptr;};
    void deleteReturnParams() { this->returnParams_ = nullptr;};
    inline const vector<DataField> & returnParams() const { DARABONBA_PTR_GET_CONST(returnParams_, vector<DataField>) };
    inline vector<DataField> returnParams() { DARABONBA_PTR_GET(returnParams_, vector<DataField>) };
    inline Function& setReturnParams(const vector<DataField> & returnParams) { DARABONBA_PTR_SET_VALUE(returnParams_, returnParams) };
    inline Function& setReturnParams(vector<DataField> && returnParams) { DARABONBA_PTR_SET_RVALUE(returnParams_, returnParams) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline Function& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline Function& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<map<string, FunctionDefinition>> definitions_ = nullptr;
    std::shared_ptr<bool> deterministic_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<DataField>> inputParams_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<map<string, string>> options_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<vector<DataField>> returnParams_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
    std::shared_ptr<string> updatedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
