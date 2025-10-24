// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListJobSnapshotInfosResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobSnapshotInfosResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSnapshotInfosResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobSnapshotInfosResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListJobSnapshotInfosResponse() = default ;
    ListJobSnapshotInfosResponse(const ListJobSnapshotInfosResponse &) = default ;
    ListJobSnapshotInfosResponse(ListJobSnapshotInfosResponse &&) = default ;
    ListJobSnapshotInfosResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSnapshotInfosResponse() = default ;
    ListJobSnapshotInfosResponse& operator=(const ListJobSnapshotInfosResponse &) = default ;
    ListJobSnapshotInfosResponse& operator=(ListJobSnapshotInfosResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListJobSnapshotInfosResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListJobSnapshotInfosResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListJobSnapshotInfosResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListJobSnapshotInfosResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListJobSnapshotInfosResponseBody) };
    inline ListJobSnapshotInfosResponseBody body() { DARABONBA_PTR_GET(body_, ListJobSnapshotInfosResponseBody) };
    inline ListJobSnapshotInfosResponse& setBody(const ListJobSnapshotInfosResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListJobSnapshotInfosResponse& setBody(ListJobSnapshotInfosResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListJobSnapshotInfosResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
