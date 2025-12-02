// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOssCheckStatResponseBodyBarChart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BarChart, barChart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BarChart, barChart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOssCheckStatResponseBody() = default ;
    GetOssCheckStatResponseBody(const GetOssCheckStatResponseBody &) = default ;
    GetOssCheckStatResponseBody(GetOssCheckStatResponseBody &&) = default ;
    GetOssCheckStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckStatResponseBody() = default ;
    GetOssCheckStatResponseBody& operator=(const GetOssCheckStatResponseBody &) = default ;
    GetOssCheckStatResponseBody& operator=(GetOssCheckStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->barChart_ == nullptr
        && return this->requestId_ == nullptr; };
    // barChart Field Functions 
    bool hasBarChart() const { return this->barChart_ != nullptr;};
    void deleteBarChart() { this->barChart_ = nullptr;};
    inline const GetOssCheckStatResponseBodyBarChart & barChart() const { DARABONBA_PTR_GET_CONST(barChart_, GetOssCheckStatResponseBodyBarChart) };
    inline GetOssCheckStatResponseBodyBarChart barChart() { DARABONBA_PTR_GET(barChart_, GetOssCheckStatResponseBodyBarChart) };
    inline GetOssCheckStatResponseBody& setBarChart(const GetOssCheckStatResponseBodyBarChart & barChart) { DARABONBA_PTR_SET_VALUE(barChart_, barChart) };
    inline GetOssCheckStatResponseBody& setBarChart(GetOssCheckStatResponseBodyBarChart && barChart) { DARABONBA_PTR_SET_RVALUE(barChart_, barChart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssCheckStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Bar chart
    std::shared_ptr<GetOssCheckStatResponseBodyBarChart> barChart_ = nullptr;
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
