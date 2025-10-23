// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGwpBenchmarkListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGwpBenchmarkListResponseBody() = default ;
    GetGwpBenchmarkListResponseBody(const GetGwpBenchmarkListResponseBody &) = default ;
    GetGwpBenchmarkListResponseBody(GetGwpBenchmarkListResponseBody &&) = default ;
    GetGwpBenchmarkListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkListResponseBody() = default ;
    GetGwpBenchmarkListResponseBody& operator=(const GetGwpBenchmarkListResponseBody &) = default ;
    GetGwpBenchmarkListResponseBody& operator=(GetGwpBenchmarkListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGwpBenchmarkListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetGwpBenchmarkListResponseBodyData) };
    inline GetGwpBenchmarkListResponseBodyData data() { DARABONBA_PTR_GET(data_, GetGwpBenchmarkListResponseBodyData) };
    inline GetGwpBenchmarkListResponseBody& setData(const GetGwpBenchmarkListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGwpBenchmarkListResponseBody& setData(GetGwpBenchmarkListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGwpBenchmarkListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetGwpBenchmarkListResponseBodyData> data_ = nullptr;
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
