// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCJOBRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCJOBRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAsyncJobResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class GetAsyncJobResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncJobResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncJobResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAsyncJobResultResponseBody() = default ;
    GetAsyncJobResultResponseBody(const GetAsyncJobResultResponseBody &) = default ;
    GetAsyncJobResultResponseBody(GetAsyncJobResultResponseBody &&) = default ;
    GetAsyncJobResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncJobResultResponseBody() = default ;
    GetAsyncJobResultResponseBody& operator=(const GetAsyncJobResultResponseBody &) = default ;
    GetAsyncJobResultResponseBody& operator=(GetAsyncJobResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAsyncJobResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAsyncJobResultResponseBodyData) };
    inline GetAsyncJobResultResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAsyncJobResultResponseBodyData) };
    inline GetAsyncJobResultResponseBody& setData(const GetAsyncJobResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAsyncJobResultResponseBody& setData(GetAsyncJobResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAsyncJobResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAsyncJobResultResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
