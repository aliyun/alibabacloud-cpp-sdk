// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_FETCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class FetchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchResult& obj) { 
      DARABONBA_PTR_TO_JSON(resultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(resultType, resultType_);
      DARABONBA_PTR_TO_JSON(tableResults, tableResults_);
    };
    friend void from_json(const Darabonba::Json& j, FetchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(resultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(resultType, resultType_);
      DARABONBA_PTR_FROM_JSON(tableResults, tableResults_);
    };
    FetchResult() = default ;
    FetchResult(const FetchResult &) = default ;
    FetchResult(FetchResult &&) = default ;
    FetchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchResult() = default ;
    FetchResult& operator=(const FetchResult &) = default ;
    FetchResult& operator=(FetchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultMessage_ == nullptr
        && return this->resultType_ == nullptr && return this->tableResults_ == nullptr; };
    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline FetchResult& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline FetchResult& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // tableResults Field Functions 
    bool hasTableResults() const { return this->tableResults_ != nullptr;};
    void deleteTableResults() { this->tableResults_ = nullptr;};
    inline const vector<TableResult> & tableResults() const { DARABONBA_PTR_GET_CONST(tableResults_, vector<TableResult>) };
    inline vector<TableResult> tableResults() { DARABONBA_PTR_GET(tableResults_, vector<TableResult>) };
    inline FetchResult& setTableResults(const vector<TableResult> & tableResults) { DARABONBA_PTR_SET_VALUE(tableResults_, tableResults) };
    inline FetchResult& setTableResults(vector<TableResult> && tableResults) { DARABONBA_PTR_SET_RVALUE(tableResults_, tableResults) };


  protected:
    std::shared_ptr<string> resultMessage_ = nullptr;
    std::shared_ptr<string> resultType_ = nullptr;
    std::shared_ptr<vector<TableResult>> tableResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
