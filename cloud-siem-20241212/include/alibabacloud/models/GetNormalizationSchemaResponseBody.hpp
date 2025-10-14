// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNormalizationSchemaResponseBodyNormalizationSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationSchema, normalizationSchema_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationSchema, normalizationSchema_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNormalizationSchemaResponseBody() = default ;
    GetNormalizationSchemaResponseBody(const GetNormalizationSchemaResponseBody &) = default ;
    GetNormalizationSchemaResponseBody(GetNormalizationSchemaResponseBody &&) = default ;
    GetNormalizationSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationSchemaResponseBody() = default ;
    GetNormalizationSchemaResponseBody& operator=(const GetNormalizationSchemaResponseBody &) = default ;
    GetNormalizationSchemaResponseBody& operator=(GetNormalizationSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationSchema_ == nullptr
        && return this->requestId_ == nullptr; };
    // normalizationSchema Field Functions 
    bool hasNormalizationSchema() const { return this->normalizationSchema_ != nullptr;};
    void deleteNormalizationSchema() { this->normalizationSchema_ = nullptr;};
    inline const GetNormalizationSchemaResponseBodyNormalizationSchema & normalizationSchema() const { DARABONBA_PTR_GET_CONST(normalizationSchema_, GetNormalizationSchemaResponseBodyNormalizationSchema) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema normalizationSchema() { DARABONBA_PTR_GET(normalizationSchema_, GetNormalizationSchemaResponseBodyNormalizationSchema) };
    inline GetNormalizationSchemaResponseBody& setNormalizationSchema(const GetNormalizationSchemaResponseBodyNormalizationSchema & normalizationSchema) { DARABONBA_PTR_SET_VALUE(normalizationSchema_, normalizationSchema) };
    inline GetNormalizationSchemaResponseBody& setNormalizationSchema(GetNormalizationSchemaResponseBodyNormalizationSchema && normalizationSchema) { DARABONBA_PTR_SET_RVALUE(normalizationSchema_, normalizationSchema) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNormalizationSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNormalizationSchemaResponseBodyNormalizationSchema> normalizationSchema_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
