// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetCompliancePackReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
    };
    GetCompliancePackReportRequest() = default ;
    GetCompliancePackReportRequest(const GetCompliancePackReportRequest &) = default ;
    GetCompliancePackReportRequest(GetCompliancePackReportRequest &&) = default ;
    GetCompliancePackReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackReportRequest() = default ;
    GetCompliancePackReportRequest& operator=(const GetCompliancePackReportRequest &) = default ;
    GetCompliancePackReportRequest& operator=(GetCompliancePackReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetCompliancePackReportRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


  protected:
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
