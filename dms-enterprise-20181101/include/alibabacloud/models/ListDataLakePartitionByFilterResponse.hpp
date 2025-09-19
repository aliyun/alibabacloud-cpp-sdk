// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALAKEPARTITIONBYFILTERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALAKEPARTITIONBYFILTERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListDataLakePartitionByFilterResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataLakePartitionByFilterResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLakePartitionByFilterResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLakePartitionByFilterResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListDataLakePartitionByFilterResponse() = default ;
    ListDataLakePartitionByFilterResponse(const ListDataLakePartitionByFilterResponse &) = default ;
    ListDataLakePartitionByFilterResponse(ListDataLakePartitionByFilterResponse &&) = default ;
    ListDataLakePartitionByFilterResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLakePartitionByFilterResponse() = default ;
    ListDataLakePartitionByFilterResponse& operator=(const ListDataLakePartitionByFilterResponse &) = default ;
    ListDataLakePartitionByFilterResponse& operator=(ListDataLakePartitionByFilterResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListDataLakePartitionByFilterResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDataLakePartitionByFilterResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListDataLakePartitionByFilterResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListDataLakePartitionByFilterResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListDataLakePartitionByFilterResponseBody) };
    inline ListDataLakePartitionByFilterResponseBody body() { DARABONBA_PTR_GET(body_, ListDataLakePartitionByFilterResponseBody) };
    inline ListDataLakePartitionByFilterResponse& setBody(const ListDataLakePartitionByFilterResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListDataLakePartitionByFilterResponse& setBody(ListDataLakePartitionByFilterResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListDataLakePartitionByFilterResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
