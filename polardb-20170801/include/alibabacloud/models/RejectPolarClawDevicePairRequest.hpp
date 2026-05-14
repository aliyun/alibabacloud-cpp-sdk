// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTPOLARCLAWDEVICEPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTPOLARCLAWDEVICEPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RejectPolarClawDevicePairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectPolarClawDevicePairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PairRequestId, pairRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectPolarClawDevicePairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PairRequestId, pairRequestId_);
    };
    RejectPolarClawDevicePairRequest() = default ;
    RejectPolarClawDevicePairRequest(const RejectPolarClawDevicePairRequest &) = default ;
    RejectPolarClawDevicePairRequest(RejectPolarClawDevicePairRequest &&) = default ;
    RejectPolarClawDevicePairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectPolarClawDevicePairRequest() = default ;
    RejectPolarClawDevicePairRequest& operator=(const RejectPolarClawDevicePairRequest &) = default ;
    RejectPolarClawDevicePairRequest& operator=(RejectPolarClawDevicePairRequest &&) = default ;
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
    inline RejectPolarClawDevicePairRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // pairRequestId Field Functions 
    bool hasPairRequestId() const { return this->pairRequestId_ != nullptr;};
    void deletePairRequestId() { this->pairRequestId_ = nullptr;};
    inline string getPairRequestId() const { DARABONBA_PTR_GET_DEFAULT(pairRequestId_, "") };
    inline RejectPolarClawDevicePairRequest& setPairRequestId(string pairRequestId) { DARABONBA_PTR_SET_VALUE(pairRequestId_, pairRequestId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> pairRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
