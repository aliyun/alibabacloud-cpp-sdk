// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEPOLARCLAWDEVICEPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEPOLARCLAWDEVICEPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ApprovePolarClawDevicePairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApprovePolarClawDevicePairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PairRequestId, pairRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApprovePolarClawDevicePairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PairRequestId, pairRequestId_);
    };
    ApprovePolarClawDevicePairRequest() = default ;
    ApprovePolarClawDevicePairRequest(const ApprovePolarClawDevicePairRequest &) = default ;
    ApprovePolarClawDevicePairRequest(ApprovePolarClawDevicePairRequest &&) = default ;
    ApprovePolarClawDevicePairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApprovePolarClawDevicePairRequest() = default ;
    ApprovePolarClawDevicePairRequest& operator=(const ApprovePolarClawDevicePairRequest &) = default ;
    ApprovePolarClawDevicePairRequest& operator=(ApprovePolarClawDevicePairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->pairRequestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ApprovePolarClawDevicePairRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // pairRequestId Field Functions 
    bool hasPairRequestId() const { return this->pairRequestId_ != nullptr;};
    void deletePairRequestId() { this->pairRequestId_ = nullptr;};
    inline string getPairRequestId() const { DARABONBA_PTR_GET_DEFAULT(pairRequestId_, "") };
    inline ApprovePolarClawDevicePairRequest& setPairRequestId(string pairRequestId) { DARABONBA_PTR_SET_VALUE(pairRequestId_, pairRequestId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The pairing request ID.
    // 
    // This parameter is required.
    shared_ptr<string> pairRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
