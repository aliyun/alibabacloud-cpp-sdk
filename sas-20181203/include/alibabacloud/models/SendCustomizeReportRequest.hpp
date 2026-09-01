// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCUSTOMIZEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCUSTOMIZEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SendCustomizeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCustomizeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, SendCustomizeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    SendCustomizeReportRequest() = default ;
    SendCustomizeReportRequest(const SendCustomizeReportRequest &) = default ;
    SendCustomizeReportRequest(SendCustomizeReportRequest &&) = default ;
    SendCustomizeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCustomizeReportRequest() = default ;
    SendCustomizeReportRequest& operator=(const SendCustomizeReportRequest &) = default ;
    SendCustomizeReportRequest& operator=(SendCustomizeReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline SendCustomizeReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline SendCustomizeReportRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The report ID.
    // >Call [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reportId_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
