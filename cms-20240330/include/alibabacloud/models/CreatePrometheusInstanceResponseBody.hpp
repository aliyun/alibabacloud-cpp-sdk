// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePrometheusInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreatePrometheusInstanceResponseBody() = default ;
    CreatePrometheusInstanceResponseBody(const CreatePrometheusInstanceResponseBody &) = default ;
    CreatePrometheusInstanceResponseBody(CreatePrometheusInstanceResponseBody &&) = default ;
    CreatePrometheusInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusInstanceResponseBody() = default ;
    CreatePrometheusInstanceResponseBody& operator=(const CreatePrometheusInstanceResponseBody &) = default ;
    CreatePrometheusInstanceResponseBody& operator=(CreatePrometheusInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prometheusInstanceId_ != nullptr
        && this->requestId_ != nullptr; };
    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline CreatePrometheusInstanceResponseBody& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePrometheusInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
