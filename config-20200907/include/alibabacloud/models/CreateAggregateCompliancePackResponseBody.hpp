// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATECOMPLIANCEPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATECOMPLIANCEPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregateCompliancePackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregateCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregateCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAggregateCompliancePackResponseBody() = default ;
    CreateAggregateCompliancePackResponseBody(const CreateAggregateCompliancePackResponseBody &) = default ;
    CreateAggregateCompliancePackResponseBody(CreateAggregateCompliancePackResponseBody &&) = default ;
    CreateAggregateCompliancePackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregateCompliancePackResponseBody() = default ;
    CreateAggregateCompliancePackResponseBody& operator=(const CreateAggregateCompliancePackResponseBody &) = default ;
    CreateAggregateCompliancePackResponseBody& operator=(CreateAggregateCompliancePackResponseBody &&) = default ;
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
    inline CreateAggregateCompliancePackResponseBody& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAggregateCompliancePackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


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
