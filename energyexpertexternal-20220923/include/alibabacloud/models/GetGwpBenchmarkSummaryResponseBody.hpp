// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGwpBenchmarkSummaryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGwpBenchmarkSummaryResponseBody() = default ;
    GetGwpBenchmarkSummaryResponseBody(const GetGwpBenchmarkSummaryResponseBody &) = default ;
    GetGwpBenchmarkSummaryResponseBody(GetGwpBenchmarkSummaryResponseBody &&) = default ;
    GetGwpBenchmarkSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkSummaryResponseBody() = default ;
    GetGwpBenchmarkSummaryResponseBody& operator=(const GetGwpBenchmarkSummaryResponseBody &) = default ;
    GetGwpBenchmarkSummaryResponseBody& operator=(GetGwpBenchmarkSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGwpBenchmarkSummaryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetGwpBenchmarkSummaryResponseBodyData) };
    inline GetGwpBenchmarkSummaryResponseBodyData data() { DARABONBA_PTR_GET(data_, GetGwpBenchmarkSummaryResponseBodyData) };
    inline GetGwpBenchmarkSummaryResponseBody& setData(const GetGwpBenchmarkSummaryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGwpBenchmarkSummaryResponseBody& setData(GetGwpBenchmarkSummaryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGwpBenchmarkSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetGwpBenchmarkSummaryResponseBodyData> data_ = nullptr;
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
