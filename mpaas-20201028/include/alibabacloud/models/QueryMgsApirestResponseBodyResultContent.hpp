// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryMgsApirestResponseBodyResultContent() = default ;
    QueryMgsApirestResponseBodyResultContent(const QueryMgsApirestResponseBodyResultContent &) = default ;
    QueryMgsApirestResponseBodyResultContent(QueryMgsApirestResponseBodyResultContent &&) = default ;
    QueryMgsApirestResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContent() = default ;
    QueryMgsApirestResponseBodyResultContent& operator=(const QueryMgsApirestResponseBodyResultContent &) = default ;
    QueryMgsApirestResponseBodyResultContent& operator=(QueryMgsApirestResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->success_ != nullptr && this->value_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryMgsApirestResponseBodyResultContent& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMgsApirestResponseBodyResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::QueryMgsApirestResponseBodyResultContentValue) };
    inline Models::QueryMgsApirestResponseBodyResultContentValue value() { DARABONBA_PTR_GET(value_, Models::QueryMgsApirestResponseBodyResultContentValue) };
    inline QueryMgsApirestResponseBodyResultContent& setValue(const Models::QueryMgsApirestResponseBodyResultContentValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline QueryMgsApirestResponseBodyResultContent& setValue(Models::QueryMgsApirestResponseBodyResultContentValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
