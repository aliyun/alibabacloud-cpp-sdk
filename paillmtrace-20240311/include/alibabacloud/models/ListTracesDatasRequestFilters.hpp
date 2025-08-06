// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACESDATASREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACESDATASREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListTracesDatasRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTracesDatasRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTracesDatasRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTracesDatasRequestFilters() = default ;
    ListTracesDatasRequestFilters(const ListTracesDatasRequestFilters &) = default ;
    ListTracesDatasRequestFilters(ListTracesDatasRequestFilters &&) = default ;
    ListTracesDatasRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTracesDatasRequestFilters() = default ;
    ListTracesDatasRequestFilters& operator=(const ListTracesDatasRequestFilters &) = default ;
    ListTracesDatasRequestFilters& operator=(ListTracesDatasRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->operator_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTracesDatasRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListTracesDatasRequestFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTracesDatasRequestFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the filter parameter, case-insensitive. Supported parameters: \\"serviceid\\", \\"servicename\\", \\"input\\", \\"output\\", \\"status\\", \\"tracetype\\", and \\"tracename\\".
    // 
    // The otel span attributes corresponding to the parameters:
    // 
    // serviceid: resources.service.id
    // 
    // servicename: resources.service.name
    // 
    // input: attributes.input.value
    // 
    // output: attributes.output.value
    // 
    // status: statusCode
    // 
    // tracetype: the attributes.gen_ai.span.kind of span whose parentSpanId is 0
    // 
    // tracename: the spanName of span whose parentSpanId is 0
    // 
    // Valid values:
    // 
    // *   Status
    // *   SpanName
    // *   Input
    // *   TraceType
    // *   SpanType
    // *   ServiceName
    // *   Output
    // *   TraceName
    // *   ServiceId
    std::shared_ptr<string> key_ = nullptr;
    // The parameter operator. Case-insensitive. Supported operators: \\"=\\", \\"contains\\", and \\"startswith\\".
    // 
    // Valid values:
    // 
    // *   contains
    // *   \\=
    // *   startsWith
    std::shared_ptr<string> operator_ = nullptr;
    // The value of the filter parameter. For the contains operation, it is case-sensitive. For other operations, it is case-insensitive.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
