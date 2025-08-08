// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEHEADERRULES_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEHEADERRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueHeaderRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueHeaderRules& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueHeaderRules& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryMgsApirestResponseBodyResultContentValueHeaderRules() = default ;
    QueryMgsApirestResponseBodyResultContentValueHeaderRules(const QueryMgsApirestResponseBodyResultContentValueHeaderRules &) = default ;
    QueryMgsApirestResponseBodyResultContentValueHeaderRules(QueryMgsApirestResponseBodyResultContentValueHeaderRules &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueHeaderRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueHeaderRules() = default ;
    QueryMgsApirestResponseBodyResultContentValueHeaderRules& operator=(const QueryMgsApirestResponseBodyResultContentValueHeaderRules &) = default ;
    QueryMgsApirestResponseBodyResultContentValueHeaderRules& operator=(QueryMgsApirestResponseBodyResultContentValueHeaderRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerKey_ != nullptr
        && this->location_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // headerKey Field Functions 
    bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
    void deleteHeaderKey() { this->headerKey_ = nullptr;};
    inline string headerKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueHeaderRules& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueHeaderRules& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueHeaderRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueHeaderRules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> headerKey_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
