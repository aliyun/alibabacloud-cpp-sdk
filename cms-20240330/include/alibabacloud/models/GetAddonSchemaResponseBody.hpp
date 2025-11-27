// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonSchemaResponseBodyFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetAddonSchemaResponseBody() = default ;
    GetAddonSchemaResponseBody(const GetAddonSchemaResponseBody &) = default ;
    GetAddonSchemaResponseBody(GetAddonSchemaResponseBody &&) = default ;
    GetAddonSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonSchemaResponseBody() = default ;
    GetAddonSchemaResponseBody& operator=(const GetAddonSchemaResponseBody &) = default ;
    GetAddonSchemaResponseBody& operator=(GetAddonSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fields_ == nullptr
        && return this->requestId_ == nullptr && return this->type_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetAddonSchemaResponseBodyFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetAddonSchemaResponseBodyFields>) };
    inline vector<GetAddonSchemaResponseBodyFields> fields() { DARABONBA_PTR_GET(fields_, vector<GetAddonSchemaResponseBodyFields>) };
    inline GetAddonSchemaResponseBody& setFields(const vector<GetAddonSchemaResponseBodyFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetAddonSchemaResponseBody& setFields(vector<GetAddonSchemaResponseBodyFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAddonSchemaResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<GetAddonSchemaResponseBodyFields>> fields_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
