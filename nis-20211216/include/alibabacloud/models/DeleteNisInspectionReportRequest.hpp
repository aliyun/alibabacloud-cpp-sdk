// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENISINSPECTIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENISINSPECTIONREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNisInspectionReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNisInspectionReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNisInspectionReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
    };
    DeleteNisInspectionReportRequest() = default ;
    DeleteNisInspectionReportRequest(const DeleteNisInspectionReportRequest &) = default ;
    DeleteNisInspectionReportRequest(DeleteNisInspectionReportRequest &&) = default ;
    DeleteNisInspectionReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNisInspectionReportRequest() = default ;
    DeleteNisInspectionReportRequest& operator=(const DeleteNisInspectionReportRequest &) = default ;
    DeleteNisInspectionReportRequest& operator=(DeleteNisInspectionReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionReportId_ == nullptr; };
    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DeleteNisInspectionReportRequest& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


  protected:
    // This parameter is required.
    shared_ptr<string> inspectionReportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
