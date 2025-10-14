// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetErServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetErServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetErServiceResponseBody() = default ;
    GetErServiceResponseBody(const GetErServiceResponseBody &) = default ;
    GetErServiceResponseBody(GetErServiceResponseBody &&) = default ;
    GetErServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErServiceResponseBody() = default ;
    GetErServiceResponseBody& operator=(const GetErServiceResponseBody &) = default ;
    GetErServiceResponseBody& operator=(GetErServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planName_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline GetErServiceResponseBody& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetErServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The billing mode. Valid values:
    // 
    // *   er_paymode: billed for customers on the China site.
    // *   er_freemode: free for customers on the China site.
    // *   er_paymodeintl: billed for customers on the International site.
    // *   err_freemodeintl: free for customers on the International site
    std::shared_ptr<string> planName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service status. Valid values:
    // 
    // *   Creating
    // *   Running
    // *   NotOpened
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
