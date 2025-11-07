// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTNISINSPECTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTNISINSPECTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class StartNisInspectionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartNisInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartNisInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartNisInspectionTaskResponseBody() = default ;
    StartNisInspectionTaskResponseBody(const StartNisInspectionTaskResponseBody &) = default ;
    StartNisInspectionTaskResponseBody(StartNisInspectionTaskResponseBody &&) = default ;
    StartNisInspectionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartNisInspectionTaskResponseBody() = default ;
    StartNisInspectionTaskResponseBody& operator=(const StartNisInspectionTaskResponseBody &) = default ;
    StartNisInspectionTaskResponseBody& operator=(StartNisInspectionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionReportId_ == nullptr
        && return this->requestId_ == nullptr; };
    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string inspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline StartNisInspectionTaskResponseBody& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartNisInspectionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> inspectionReportId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
