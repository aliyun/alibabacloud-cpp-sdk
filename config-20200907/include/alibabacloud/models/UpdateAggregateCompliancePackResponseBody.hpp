// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregateCompliancePackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregateCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAggregateCompliancePackResponseBody() = default ;
    UpdateAggregateCompliancePackResponseBody(const UpdateAggregateCompliancePackResponseBody &) = default ;
    UpdateAggregateCompliancePackResponseBody(UpdateAggregateCompliancePackResponseBody &&) = default ;
    UpdateAggregateCompliancePackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateCompliancePackResponseBody() = default ;
    UpdateAggregateCompliancePackResponseBody& operator=(const UpdateAggregateCompliancePackResponseBody &) = default ;
    UpdateAggregateCompliancePackResponseBody& operator=(UpdateAggregateCompliancePackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline UpdateAggregateCompliancePackResponseBody& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAggregateCompliancePackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance package ID.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
