// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCompliancePackResponseBodyCompliancePack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetCompliancePackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePack, compliancePack_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePack, compliancePack_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCompliancePackResponseBody() = default ;
    GetCompliancePackResponseBody(const GetCompliancePackResponseBody &) = default ;
    GetCompliancePackResponseBody(GetCompliancePackResponseBody &&) = default ;
    GetCompliancePackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackResponseBody() = default ;
    GetCompliancePackResponseBody& operator=(const GetCompliancePackResponseBody &) = default ;
    GetCompliancePackResponseBody& operator=(GetCompliancePackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePack_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePack Field Functions 
    bool hasCompliancePack() const { return this->compliancePack_ != nullptr;};
    void deleteCompliancePack() { this->compliancePack_ = nullptr;};
    inline const GetCompliancePackResponseBodyCompliancePack & compliancePack() const { DARABONBA_PTR_GET_CONST(compliancePack_, GetCompliancePackResponseBodyCompliancePack) };
    inline GetCompliancePackResponseBodyCompliancePack compliancePack() { DARABONBA_PTR_GET(compliancePack_, GetCompliancePackResponseBodyCompliancePack) };
    inline GetCompliancePackResponseBody& setCompliancePack(const GetCompliancePackResponseBodyCompliancePack & compliancePack) { DARABONBA_PTR_SET_VALUE(compliancePack_, compliancePack) };
    inline GetCompliancePackResponseBody& setCompliancePack(GetCompliancePackResponseBodyCompliancePack && compliancePack) { DARABONBA_PTR_SET_RVALUE(compliancePack_, compliancePack) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCompliancePackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the compliance package.
    std::shared_ptr<GetCompliancePackResponseBodyCompliancePack> compliancePack_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
