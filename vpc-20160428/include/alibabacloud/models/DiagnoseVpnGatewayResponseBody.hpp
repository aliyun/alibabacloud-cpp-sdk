// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEVPNGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEVPNGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DiagnoseVpnGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DiagnoseVpnGatewayResponseBody() = default ;
    DiagnoseVpnGatewayResponseBody(const DiagnoseVpnGatewayResponseBody &) = default ;
    DiagnoseVpnGatewayResponseBody(DiagnoseVpnGatewayResponseBody &&) = default ;
    DiagnoseVpnGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseVpnGatewayResponseBody() = default ;
    DiagnoseVpnGatewayResponseBody& operator=(const DiagnoseVpnGatewayResponseBody &) = default ;
    DiagnoseVpnGatewayResponseBody& operator=(DiagnoseVpnGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnoseId_ == nullptr
        && return this->requestId_ == nullptr; };
    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string diagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline DiagnoseVpnGatewayResponseBody& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiagnoseVpnGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic ID.
    // 
    // After a diagnostic ID is returned, you can call [GetVpnGatewayDiagnoseResult](https://help.aliyun.com/document_detail/2521963.html) to query the diagnostic report.
    std::shared_ptr<string> diagnoseId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
