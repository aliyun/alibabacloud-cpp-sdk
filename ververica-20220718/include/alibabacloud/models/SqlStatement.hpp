// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLSTATEMENT_HPP_
#define ALIBABACLOUD_MODELS_SQLSTATEMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlStatement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlStatement& obj) { 
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(sqlScript, sqlScript_);
      DARABONBA_PTR_TO_JSON(statusState, statusState_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SqlStatement& obj) { 
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(sqlScript, sqlScript_);
      DARABONBA_PTR_FROM_JSON(statusState, statusState_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    SqlStatement() = default ;
    SqlStatement(const SqlStatement &) = default ;
    SqlStatement(SqlStatement &&) = default ;
    SqlStatement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlStatement() = default ;
    SqlStatement& operator=(const SqlStatement &) = default ;
    SqlStatement& operator=(SqlStatement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && this->message_ == nullptr && this->sqlScript_ == nullptr && this->statusState_ == nullptr && this->type_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SqlStatement& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SqlStatement& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // sqlScript Field Functions 
    bool hasSqlScript() const { return this->sqlScript_ != nullptr;};
    void deleteSqlScript() { this->sqlScript_ = nullptr;};
    inline string getSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sqlScript_, "") };
    inline SqlStatement& setSqlScript(string sqlScript) { DARABONBA_PTR_SET_VALUE(sqlScript_, sqlScript) };


    // statusState Field Functions 
    bool hasStatusState() const { return this->statusState_ != nullptr;};
    void deleteStatusState() { this->statusState_ = nullptr;};
    inline string getStatusState() const { DARABONBA_PTR_GET_DEFAULT(statusState_, "") };
    inline SqlStatement& setStatusState(string statusState) { DARABONBA_PTR_SET_VALUE(statusState_, statusState) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SqlStatement& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int32_t> index_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> sqlScript_ {};
    shared_ptr<string> statusState_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
