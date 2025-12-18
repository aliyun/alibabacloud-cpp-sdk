// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATEREMEDIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATEREMEDIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregateRemediationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateRemediationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregateRemediationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAggregateRemediationResponseBody() = default ;
    UpdateAggregateRemediationResponseBody(const UpdateAggregateRemediationResponseBody &) = default ;
    UpdateAggregateRemediationResponseBody(UpdateAggregateRemediationResponseBody &&) = default ;
    UpdateAggregateRemediationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateRemediationResponseBody() = default ;
    UpdateAggregateRemediationResponseBody& operator=(const UpdateAggregateRemediationResponseBody &) = default ;
    UpdateAggregateRemediationResponseBody& operator=(UpdateAggregateRemediationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationId_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string remediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline UpdateAggregateRemediationResponseBody& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAggregateRemediationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the remediation setting.
    std::shared_ptr<string> remediationId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
