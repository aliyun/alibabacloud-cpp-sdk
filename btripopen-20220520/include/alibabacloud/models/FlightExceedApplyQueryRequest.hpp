// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTEXCEEDAPPLYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTEXCEEDAPPLYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightExceedApplyQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightExceedApplyQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(business_instance_id, businessInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightExceedApplyQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(business_instance_id, businessInstanceId_);
    };
    FlightExceedApplyQueryRequest() = default ;
    FlightExceedApplyQueryRequest(const FlightExceedApplyQueryRequest &) = default ;
    FlightExceedApplyQueryRequest(FlightExceedApplyQueryRequest &&) = default ;
    FlightExceedApplyQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightExceedApplyQueryRequest() = default ;
    FlightExceedApplyQueryRequest& operator=(const FlightExceedApplyQueryRequest &) = default ;
    FlightExceedApplyQueryRequest& operator=(FlightExceedApplyQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->businessInstanceId_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline FlightExceedApplyQueryRequest& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // businessInstanceId Field Functions 
    bool hasBusinessInstanceId() const { return this->businessInstanceId_ != nullptr;};
    void deleteBusinessInstanceId() { this->businessInstanceId_ = nullptr;};
    inline string businessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(businessInstanceId_, "") };
    inline FlightExceedApplyQueryRequest& setBusinessInstanceId(string businessInstanceId) { DARABONBA_PTR_SET_VALUE(businessInstanceId_, businessInstanceId) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> businessInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
