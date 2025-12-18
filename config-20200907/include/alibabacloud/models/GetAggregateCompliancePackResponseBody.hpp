// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateCompliancePackResponseBodyCompliancePack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePack, compliancePack_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePack, compliancePack_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateCompliancePackResponseBody() = default ;
    GetAggregateCompliancePackResponseBody(const GetAggregateCompliancePackResponseBody &) = default ;
    GetAggregateCompliancePackResponseBody(GetAggregateCompliancePackResponseBody &&) = default ;
    GetAggregateCompliancePackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackResponseBody() = default ;
    GetAggregateCompliancePackResponseBody& operator=(const GetAggregateCompliancePackResponseBody &) = default ;
    GetAggregateCompliancePackResponseBody& operator=(GetAggregateCompliancePackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePack_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePack Field Functions 
    bool hasCompliancePack() const { return this->compliancePack_ != nullptr;};
    void deleteCompliancePack() { this->compliancePack_ = nullptr;};
    inline const GetAggregateCompliancePackResponseBodyCompliancePack & compliancePack() const { DARABONBA_PTR_GET_CONST(compliancePack_, GetAggregateCompliancePackResponseBodyCompliancePack) };
    inline GetAggregateCompliancePackResponseBodyCompliancePack compliancePack() { DARABONBA_PTR_GET(compliancePack_, GetAggregateCompliancePackResponseBodyCompliancePack) };
    inline GetAggregateCompliancePackResponseBody& setCompliancePack(const GetAggregateCompliancePackResponseBodyCompliancePack & compliancePack) { DARABONBA_PTR_SET_VALUE(compliancePack_, compliancePack) };
    inline GetAggregateCompliancePackResponseBody& setCompliancePack(GetAggregateCompliancePackResponseBodyCompliancePack && compliancePack) { DARABONBA_PTR_SET_RVALUE(compliancePack_, compliancePack) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateCompliancePackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the compliance package.
    std::shared_ptr<GetAggregateCompliancePackResponseBodyCompliancePack> compliancePack_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
