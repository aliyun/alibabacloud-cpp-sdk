// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPrometheusViewResponseBodyPrometheusView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusView, prometheusView_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusView, prometheusView_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPrometheusViewResponseBody() = default ;
    GetPrometheusViewResponseBody(const GetPrometheusViewResponseBody &) = default ;
    GetPrometheusViewResponseBody(GetPrometheusViewResponseBody &&) = default ;
    GetPrometheusViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusViewResponseBody() = default ;
    GetPrometheusViewResponseBody& operator=(const GetPrometheusViewResponseBody &) = default ;
    GetPrometheusViewResponseBody& operator=(GetPrometheusViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheusView_ == nullptr
        && return this->requestId_ == nullptr; };
    // prometheusView Field Functions 
    bool hasPrometheusView() const { return this->prometheusView_ != nullptr;};
    void deletePrometheusView() { this->prometheusView_ = nullptr;};
    inline const GetPrometheusViewResponseBodyPrometheusView & prometheusView() const { DARABONBA_PTR_GET_CONST(prometheusView_, GetPrometheusViewResponseBodyPrometheusView) };
    inline GetPrometheusViewResponseBodyPrometheusView prometheusView() { DARABONBA_PTR_GET(prometheusView_, GetPrometheusViewResponseBodyPrometheusView) };
    inline GetPrometheusViewResponseBody& setPrometheusView(const GetPrometheusViewResponseBodyPrometheusView & prometheusView) { DARABONBA_PTR_SET_VALUE(prometheusView_, prometheusView) };
    inline GetPrometheusViewResponseBody& setPrometheusView(GetPrometheusViewResponseBodyPrometheusView && prometheusView) { DARABONBA_PTR_SET_RVALUE(prometheusView_, prometheusView) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetPrometheusViewResponseBodyPrometheusView> prometheusView_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
