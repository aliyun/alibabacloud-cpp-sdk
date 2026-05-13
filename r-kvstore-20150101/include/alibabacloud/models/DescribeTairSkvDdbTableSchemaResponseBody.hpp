// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRSKVDDBTABLESCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRSKVDDBTABLESCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairSkvDdbTableSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairSkvDdbTableSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TtlSpec, ttlSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairSkvDdbTableSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TtlSpec, ttlSpec_);
    };
    DescribeTairSkvDdbTableSchemaResponseBody() = default ;
    DescribeTairSkvDdbTableSchemaResponseBody(const DescribeTairSkvDdbTableSchemaResponseBody &) = default ;
    DescribeTairSkvDdbTableSchemaResponseBody(DescribeTairSkvDdbTableSchemaResponseBody &&) = default ;
    DescribeTairSkvDdbTableSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairSkvDdbTableSchemaResponseBody() = default ;
    DescribeTairSkvDdbTableSchemaResponseBody& operator=(const DescribeTairSkvDdbTableSchemaResponseBody &) = default ;
    DescribeTairSkvDdbTableSchemaResponseBody& operator=(DescribeTairSkvDdbTableSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schema_ == nullptr && this->ttlSpec_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairSkvDdbTableSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeTairSkvDdbTableSchemaResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // ttlSpec Field Functions 
    bool hasTtlSpec() const { return this->ttlSpec_ != nullptr;};
    void deleteTtlSpec() { this->ttlSpec_ = nullptr;};
    inline string getTtlSpec() const { DARABONBA_PTR_GET_DEFAULT(ttlSpec_, "") };
    inline DescribeTairSkvDdbTableSchemaResponseBody& setTtlSpec(string ttlSpec) { DARABONBA_PTR_SET_VALUE(ttlSpec_, ttlSpec) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> schema_ {};
    shared_ptr<string> ttlSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
