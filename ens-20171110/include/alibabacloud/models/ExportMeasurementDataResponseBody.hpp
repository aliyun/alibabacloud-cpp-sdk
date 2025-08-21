// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMEASUREMENTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMEASUREMENTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ExportMeasurementDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportMeasurementDataResponseBody() = default ;
    ExportMeasurementDataResponseBody(const ExportMeasurementDataResponseBody &) = default ;
    ExportMeasurementDataResponseBody(ExportMeasurementDataResponseBody &&) = default ;
    ExportMeasurementDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportMeasurementDataResponseBody() = default ;
    ExportMeasurementDataResponseBody& operator=(const ExportMeasurementDataResponseBody &) = default ;
    ExportMeasurementDataResponseBody& operator=(ExportMeasurementDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filePath_ != nullptr
        && this->requestId_ != nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ExportMeasurementDataResponseBody& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportMeasurementDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The download path of the exported file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
