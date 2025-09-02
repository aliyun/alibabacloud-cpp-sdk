// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSuccessInstanceTrendResponseBodyInstanceStatusTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetSuccessInstanceTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuccessInstanceTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatusTrend, instanceStatusTrend_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuccessInstanceTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatusTrend, instanceStatusTrend_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSuccessInstanceTrendResponseBody() = default ;
    GetSuccessInstanceTrendResponseBody(const GetSuccessInstanceTrendResponseBody &) = default ;
    GetSuccessInstanceTrendResponseBody(GetSuccessInstanceTrendResponseBody &&) = default ;
    GetSuccessInstanceTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuccessInstanceTrendResponseBody() = default ;
    GetSuccessInstanceTrendResponseBody& operator=(const GetSuccessInstanceTrendResponseBody &) = default ;
    GetSuccessInstanceTrendResponseBody& operator=(GetSuccessInstanceTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceStatusTrend_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceStatusTrend Field Functions 
    bool hasInstanceStatusTrend() const { return this->instanceStatusTrend_ != nullptr;};
    void deleteInstanceStatusTrend() { this->instanceStatusTrend_ = nullptr;};
    inline const GetSuccessInstanceTrendResponseBodyInstanceStatusTrend & instanceStatusTrend() const { DARABONBA_PTR_GET_CONST(instanceStatusTrend_, GetSuccessInstanceTrendResponseBodyInstanceStatusTrend) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend instanceStatusTrend() { DARABONBA_PTR_GET(instanceStatusTrend_, GetSuccessInstanceTrendResponseBodyInstanceStatusTrend) };
    inline GetSuccessInstanceTrendResponseBody& setInstanceStatusTrend(const GetSuccessInstanceTrendResponseBodyInstanceStatusTrend & instanceStatusTrend) { DARABONBA_PTR_SET_VALUE(instanceStatusTrend_, instanceStatusTrend) };
    inline GetSuccessInstanceTrendResponseBody& setInstanceStatusTrend(GetSuccessInstanceTrendResponseBodyInstanceStatusTrend && instanceStatusTrend) { DARABONBA_PTR_SET_RVALUE(instanceStatusTrend_, instanceStatusTrend) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSuccessInstanceTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The trend of statistics on the instance status in different time periods.
    std::shared_ptr<GetSuccessInstanceTrendResponseBodyInstanceStatusTrend> instanceStatusTrend_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
