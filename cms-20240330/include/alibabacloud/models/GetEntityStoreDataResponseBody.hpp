// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEntityStoreDataResponseBodyResponseStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetEntityStoreDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntityStoreDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(responseStatus, responseStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntityStoreDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(responseStatus, responseStatus_);
    };
    GetEntityStoreDataResponseBody() = default ;
    GetEntityStoreDataResponseBody(const GetEntityStoreDataResponseBody &) = default ;
    GetEntityStoreDataResponseBody(GetEntityStoreDataResponseBody &&) = default ;
    GetEntityStoreDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntityStoreDataResponseBody() = default ;
    GetEntityStoreDataResponseBody& operator=(const GetEntityStoreDataResponseBody &) = default ;
    GetEntityStoreDataResponseBody& operator=(GetEntityStoreDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->header_ != nullptr && this->requestId_ != nullptr && this->responseStatus_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<vector<string>> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<vector<string>>) };
    inline vector<vector<string>> data() { DARABONBA_PTR_GET(data_, vector<vector<string>>) };
    inline GetEntityStoreDataResponseBody& setData(const vector<vector<string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEntityStoreDataResponseBody& setData(vector<vector<string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<string> & header() const { DARABONBA_PTR_GET_CONST(header_, vector<string>) };
    inline vector<string> header() { DARABONBA_PTR_GET(header_, vector<string>) };
    inline GetEntityStoreDataResponseBody& setHeader(const vector<string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetEntityStoreDataResponseBody& setHeader(vector<string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEntityStoreDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline const GetEntityStoreDataResponseBodyResponseStatus & responseStatus() const { DARABONBA_PTR_GET_CONST(responseStatus_, GetEntityStoreDataResponseBodyResponseStatus) };
    inline GetEntityStoreDataResponseBodyResponseStatus responseStatus() { DARABONBA_PTR_GET(responseStatus_, GetEntityStoreDataResponseBodyResponseStatus) };
    inline GetEntityStoreDataResponseBody& setResponseStatus(const GetEntityStoreDataResponseBodyResponseStatus & responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };
    inline GetEntityStoreDataResponseBody& setResponseStatus(GetEntityStoreDataResponseBodyResponseStatus && responseStatus) { DARABONBA_PTR_SET_RVALUE(responseStatus_, responseStatus) };


  protected:
    std::shared_ptr<vector<vector<string>>> data_ = nullptr;
    std::shared_ptr<vector<string>> header_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetEntityStoreDataResponseBodyResponseStatus> responseStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
