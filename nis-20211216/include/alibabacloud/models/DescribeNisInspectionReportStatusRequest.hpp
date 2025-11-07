// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
    };
    DescribeNisInspectionReportStatusRequest() = default ;
    DescribeNisInspectionReportStatusRequest(const DescribeNisInspectionReportStatusRequest &) = default ;
    DescribeNisInspectionReportStatusRequest(DescribeNisInspectionReportStatusRequest &&) = default ;
    DescribeNisInspectionReportStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportStatusRequest() = default ;
    DescribeNisInspectionReportStatusRequest& operator=(const DescribeNisInspectionReportStatusRequest &) = default ;
    DescribeNisInspectionReportStatusRequest& operator=(DescribeNisInspectionReportStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionReportId_ == nullptr; };
    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string inspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionReportStatusRequest& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inspectionReportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
