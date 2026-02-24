// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOMPLIANCEPACKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOMPLIANCEPACKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateCompliancePackReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCompliancePackReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCompliancePackReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
    };
    GenerateCompliancePackReportRequest() = default ;
    GenerateCompliancePackReportRequest(const GenerateCompliancePackReportRequest &) = default ;
    GenerateCompliancePackReportRequest(GenerateCompliancePackReportRequest &&) = default ;
    GenerateCompliancePackReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCompliancePackReportRequest() = default ;
    GenerateCompliancePackReportRequest& operator=(const GenerateCompliancePackReportRequest &) = default ;
    GenerateCompliancePackReportRequest& operator=(GenerateCompliancePackReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->compliancePackId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GenerateCompliancePackReportRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GenerateCompliancePackReportRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
