// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobInfosResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListJobInfosResponseBody() = default ;
    ListJobInfosResponseBody(const ListJobInfosResponseBody &) = default ;
    ListJobInfosResponseBody(ListJobInfosResponseBody &&) = default ;
    ListJobInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfosResponseBody() = default ;
    ListJobInfosResponseBody& operator=(const ListJobInfosResponseBody &) = default ;
    ListJobInfosResponseBody& operator=(ListJobInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->httpCode_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobInfosResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListJobInfosResponseBodyData) };
    inline ListJobInfosResponseBodyData data() { DARABONBA_PTR_GET(data_, ListJobInfosResponseBodyData) };
    inline ListJobInfosResponseBody& setData(const ListJobInfosResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobInfosResponseBody& setData(ListJobInfosResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListJobInfosResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<ListJobInfosResponseBodyData> data_ = nullptr;
    // Indicates whether the request was successful. If this parameter was not empty and the value of this parameter was not 200, the request failed.
    std::shared_ptr<int32_t> httpCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
