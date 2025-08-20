// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICSRESPONSEBODYDIAGNOSTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICSRESPONSEBODYDIAGNOSTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListDiagnosticsResponseBodyDiagnostics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticsResponseBodyDiagnostics& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_TO_JSON(DiagnosticProduct, diagnosticProduct_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticsResponseBodyDiagnostics& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_FROM_JSON(DiagnosticProduct, diagnosticProduct_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDiagnosticsResponseBodyDiagnostics() = default ;
    ListDiagnosticsResponseBodyDiagnostics(const ListDiagnosticsResponseBodyDiagnostics &) = default ;
    ListDiagnosticsResponseBodyDiagnostics(ListDiagnosticsResponseBodyDiagnostics &&) = default ;
    ListDiagnosticsResponseBodyDiagnostics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticsResponseBodyDiagnostics() = default ;
    ListDiagnosticsResponseBodyDiagnostics& operator=(const ListDiagnosticsResponseBodyDiagnostics &) = default ;
    ListDiagnosticsResponseBodyDiagnostics& operator=(ListDiagnosticsResponseBodyDiagnostics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->diagnosticKey_ != nullptr && this->diagnosticProduct_ != nullptr && this->reportId_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDiagnosticsResponseBodyDiagnostics& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // diagnosticKey Field Functions 
    bool hasDiagnosticKey() const { return this->diagnosticKey_ != nullptr;};
    void deleteDiagnosticKey() { this->diagnosticKey_ = nullptr;};
    inline string diagnosticKey() const { DARABONBA_PTR_GET_DEFAULT(diagnosticKey_, "") };
    inline ListDiagnosticsResponseBodyDiagnostics& setDiagnosticKey(string diagnosticKey) { DARABONBA_PTR_SET_VALUE(diagnosticKey_, diagnosticKey) };


    // diagnosticProduct Field Functions 
    bool hasDiagnosticProduct() const { return this->diagnosticProduct_ != nullptr;};
    void deleteDiagnosticProduct() { this->diagnosticProduct_ = nullptr;};
    inline string diagnosticProduct() const { DARABONBA_PTR_GET_DEFAULT(diagnosticProduct_, "") };
    inline ListDiagnosticsResponseBodyDiagnostics& setDiagnosticProduct(string diagnosticProduct) { DARABONBA_PTR_SET_VALUE(diagnosticProduct_, diagnosticProduct) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ListDiagnosticsResponseBodyDiagnostics& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDiagnosticsResponseBodyDiagnostics& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the diagnostic report was generated.
    std::shared_ptr<string> createTime_ = nullptr;
    // The keyword in the diagnosis.
    std::shared_ptr<string> diagnosticKey_ = nullptr;
    // The product that is diagnosed.
    std::shared_ptr<string> diagnosticProduct_ = nullptr;
    // The ID of the diagnostic report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The diagnosis status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
