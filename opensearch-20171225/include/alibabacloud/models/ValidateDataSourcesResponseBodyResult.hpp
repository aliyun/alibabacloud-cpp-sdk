// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ValidateDataSourcesResponseBodyResultDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ValidateDataSourcesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDataSourcesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDataSourcesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    ValidateDataSourcesResponseBodyResult() = default ;
    ValidateDataSourcesResponseBodyResult(const ValidateDataSourcesResponseBodyResult &) = default ;
    ValidateDataSourcesResponseBodyResult(ValidateDataSourcesResponseBodyResult &&) = default ;
    ValidateDataSourcesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDataSourcesResponseBodyResult() = default ;
    ValidateDataSourcesResponseBodyResult& operator=(const ValidateDataSourcesResponseBodyResult &) = default ;
    ValidateDataSourcesResponseBodyResult& operator=(ValidateDataSourcesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dataSource_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ValidateDataSourcesResponseBodyResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ValidateDataSourcesResponseBodyResultDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ValidateDataSourcesResponseBodyResultDataSource) };
    inline Models::ValidateDataSourcesResponseBodyResultDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ValidateDataSourcesResponseBodyResultDataSource) };
    inline ValidateDataSourcesResponseBodyResult& setDataSource(const Models::ValidateDataSourcesResponseBodyResultDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ValidateDataSourcesResponseBodyResult& setDataSource(Models::ValidateDataSourcesResponseBodyResultDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ValidateDataSourcesResponseBodyResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The code returned for the request.
    std::shared_ptr<string> code_ = nullptr;
    // The data source.
    std::shared_ptr<Models::ValidateDataSourcesResponseBodyResultDataSource> dataSource_ = nullptr;
    // The status of the execution.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
