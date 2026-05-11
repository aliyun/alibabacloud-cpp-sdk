// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTSTATISTICALDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTSTATISTICALDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ExportStatisticalDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportStatisticalDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportStatisticalDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportStatisticalDataResponseBody() = default ;
    ExportStatisticalDataResponseBody(const ExportStatisticalDataResponseBody &) = default ;
    ExportStatisticalDataResponseBody(ExportStatisticalDataResponseBody &&) = default ;
    ExportStatisticalDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportStatisticalDataResponseBody() = default ;
    ExportStatisticalDataResponseBody& operator=(const ExportStatisticalDataResponseBody &) = default ;
    ExportStatisticalDataResponseBody& operator=(ExportStatisticalDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTaskId_ == nullptr
        && this->requestId_ == nullptr; };
    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline ExportStatisticalDataResponseBody& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportStatisticalDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> exportTaskId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
