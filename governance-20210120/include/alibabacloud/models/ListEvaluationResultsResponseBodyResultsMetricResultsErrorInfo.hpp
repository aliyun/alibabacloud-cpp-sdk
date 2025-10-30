// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTSERRORINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTSERRORINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo(const ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo(ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo &&) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo& operator=(const ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo& operator=(ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
