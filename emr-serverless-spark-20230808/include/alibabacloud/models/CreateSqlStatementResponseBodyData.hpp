// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLSTATEMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLSTATEMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateSqlStatementResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlStatementResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(statementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlStatementResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(statementId, statementId_);
    };
    CreateSqlStatementResponseBodyData() = default ;
    CreateSqlStatementResponseBodyData(const CreateSqlStatementResponseBodyData &) = default ;
    CreateSqlStatementResponseBodyData(CreateSqlStatementResponseBodyData &&) = default ;
    CreateSqlStatementResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlStatementResponseBodyData() = default ;
    CreateSqlStatementResponseBodyData& operator=(const CreateSqlStatementResponseBodyData &) = default ;
    CreateSqlStatementResponseBodyData& operator=(CreateSqlStatementResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statementId_ != nullptr; };
    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline string statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
    inline CreateSqlStatementResponseBodyData& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The interactive query ID.
    std::shared_ptr<string> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
