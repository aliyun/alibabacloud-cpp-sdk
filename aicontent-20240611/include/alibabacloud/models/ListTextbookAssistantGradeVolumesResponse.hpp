// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTGRADEVOLUMESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTGRADEVOLUMESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListTextbookAssistantGradeVolumesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantGradeVolumesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantGradeVolumesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantGradeVolumesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListTextbookAssistantGradeVolumesResponse() = default ;
    ListTextbookAssistantGradeVolumesResponse(const ListTextbookAssistantGradeVolumesResponse &) = default ;
    ListTextbookAssistantGradeVolumesResponse(ListTextbookAssistantGradeVolumesResponse &&) = default ;
    ListTextbookAssistantGradeVolumesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantGradeVolumesResponse() = default ;
    ListTextbookAssistantGradeVolumesResponse& operator=(const ListTextbookAssistantGradeVolumesResponse &) = default ;
    ListTextbookAssistantGradeVolumesResponse& operator=(ListTextbookAssistantGradeVolumesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListTextbookAssistantGradeVolumesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTextbookAssistantGradeVolumesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTextbookAssistantGradeVolumesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListTextbookAssistantGradeVolumesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListTextbookAssistantGradeVolumesResponseBody) };
    inline ListTextbookAssistantGradeVolumesResponseBody getBody() { DARABONBA_PTR_GET(body_, ListTextbookAssistantGradeVolumesResponseBody) };
    inline ListTextbookAssistantGradeVolumesResponse& setBody(const ListTextbookAssistantGradeVolumesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListTextbookAssistantGradeVolumesResponse& setBody(ListTextbookAssistantGradeVolumesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListTextbookAssistantGradeVolumesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
