// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPrometheusInstanceResponseBodyPrometheusInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusInstance, prometheusInstance_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusInstance, prometheusInstance_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPrometheusInstanceResponseBody() = default ;
    GetPrometheusInstanceResponseBody(const GetPrometheusInstanceResponseBody &) = default ;
    GetPrometheusInstanceResponseBody(GetPrometheusInstanceResponseBody &&) = default ;
    GetPrometheusInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusInstanceResponseBody() = default ;
    GetPrometheusInstanceResponseBody& operator=(const GetPrometheusInstanceResponseBody &) = default ;
    GetPrometheusInstanceResponseBody& operator=(GetPrometheusInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheusInstance_ == nullptr
        && return this->requestId_ == nullptr; };
    // prometheusInstance Field Functions 
    bool hasPrometheusInstance() const { return this->prometheusInstance_ != nullptr;};
    void deletePrometheusInstance() { this->prometheusInstance_ = nullptr;};
    inline const GetPrometheusInstanceResponseBodyPrometheusInstance & prometheusInstance() const { DARABONBA_PTR_GET_CONST(prometheusInstance_, GetPrometheusInstanceResponseBodyPrometheusInstance) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance prometheusInstance() { DARABONBA_PTR_GET(prometheusInstance_, GetPrometheusInstanceResponseBodyPrometheusInstance) };
    inline GetPrometheusInstanceResponseBody& setPrometheusInstance(const GetPrometheusInstanceResponseBodyPrometheusInstance & prometheusInstance) { DARABONBA_PTR_SET_VALUE(prometheusInstance_, prometheusInstance) };
    inline GetPrometheusInstanceResponseBody& setPrometheusInstance(GetPrometheusInstanceResponseBodyPrometheusInstance && prometheusInstance) { DARABONBA_PTR_SET_RVALUE(prometheusInstance_, prometheusInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the Prometheus instance.
    std::shared_ptr<GetPrometheusInstanceResponseBodyPrometheusInstance> prometheusInstance_ = nullptr;
    // Unique identifier for the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
