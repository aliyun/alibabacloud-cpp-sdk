// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXAMPLEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXAMPLEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetExampleQueryResponseBodyExampleQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetExampleQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExampleQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleQuery, exampleQuery_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExampleQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleQuery, exampleQuery_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExampleQueryResponseBody() = default ;
    GetExampleQueryResponseBody(const GetExampleQueryResponseBody &) = default ;
    GetExampleQueryResponseBody(GetExampleQueryResponseBody &&) = default ;
    GetExampleQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExampleQueryResponseBody() = default ;
    GetExampleQueryResponseBody& operator=(const GetExampleQueryResponseBody &) = default ;
    GetExampleQueryResponseBody& operator=(GetExampleQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exampleQuery_ != nullptr
        && this->requestId_ != nullptr; };
    // exampleQuery Field Functions 
    bool hasExampleQuery() const { return this->exampleQuery_ != nullptr;};
    void deleteExampleQuery() { this->exampleQuery_ = nullptr;};
    inline const GetExampleQueryResponseBodyExampleQuery & exampleQuery() const { DARABONBA_PTR_GET_CONST(exampleQuery_, GetExampleQueryResponseBodyExampleQuery) };
    inline GetExampleQueryResponseBodyExampleQuery exampleQuery() { DARABONBA_PTR_GET(exampleQuery_, GetExampleQueryResponseBodyExampleQuery) };
    inline GetExampleQueryResponseBody& setExampleQuery(const GetExampleQueryResponseBodyExampleQuery & exampleQuery) { DARABONBA_PTR_SET_VALUE(exampleQuery_, exampleQuery) };
    inline GetExampleQueryResponseBody& setExampleQuery(GetExampleQueryResponseBodyExampleQuery && exampleQuery) { DARABONBA_PTR_SET_RVALUE(exampleQuery_, exampleQuery) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExampleQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the sample query template.
    std::shared_ptr<GetExampleQueryResponseBodyExampleQuery> exampleQuery_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
