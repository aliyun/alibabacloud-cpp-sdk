// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnableServicesResponseBodyFailedServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class EnableServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedServices, failedServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedServices, failedServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableServicesResponseBody() = default ;
    EnableServicesResponseBody(const EnableServicesResponseBody &) = default ;
    EnableServicesResponseBody(EnableServicesResponseBody &&) = default ;
    EnableServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServicesResponseBody() = default ;
    EnableServicesResponseBody& operator=(const EnableServicesResponseBody &) = default ;
    EnableServicesResponseBody& operator=(EnableServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedServices_ == nullptr
        && return this->requestId_ == nullptr; };
    // failedServices Field Functions 
    bool hasFailedServices() const { return this->failedServices_ != nullptr;};
    void deleteFailedServices() { this->failedServices_ = nullptr;};
    inline const vector<EnableServicesResponseBodyFailedServices> & failedServices() const { DARABONBA_PTR_GET_CONST(failedServices_, vector<EnableServicesResponseBodyFailedServices>) };
    inline vector<EnableServicesResponseBodyFailedServices> failedServices() { DARABONBA_PTR_GET(failedServices_, vector<EnableServicesResponseBodyFailedServices>) };
    inline EnableServicesResponseBody& setFailedServices(const vector<EnableServicesResponseBodyFailedServices> & failedServices) { DARABONBA_PTR_SET_VALUE(failedServices_, failedServices) };
    inline EnableServicesResponseBody& setFailedServices(vector<EnableServicesResponseBodyFailedServices> && failedServices) { DARABONBA_PTR_SET_RVALUE(failedServices_, failedServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<EnableServicesResponseBodyFailedServices>> failedServices_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
