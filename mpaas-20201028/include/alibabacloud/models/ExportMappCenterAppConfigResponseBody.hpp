// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExportMappCenterAppConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportMappCenterAppConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportMappCenterAppConfigResult, exportMappCenterAppConfigResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ExportMappCenterAppConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportMappCenterAppConfigResult, exportMappCenterAppConfigResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ExportMappCenterAppConfigResponseBody() = default ;
    ExportMappCenterAppConfigResponseBody(const ExportMappCenterAppConfigResponseBody &) = default ;
    ExportMappCenterAppConfigResponseBody(ExportMappCenterAppConfigResponseBody &&) = default ;
    ExportMappCenterAppConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportMappCenterAppConfigResponseBody() = default ;
    ExportMappCenterAppConfigResponseBody& operator=(const ExportMappCenterAppConfigResponseBody &) = default ;
    ExportMappCenterAppConfigResponseBody& operator=(ExportMappCenterAppConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportMappCenterAppConfigResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // exportMappCenterAppConfigResult Field Functions 
    bool hasExportMappCenterAppConfigResult() const { return this->exportMappCenterAppConfigResult_ != nullptr;};
    void deleteExportMappCenterAppConfigResult() { this->exportMappCenterAppConfigResult_ = nullptr;};
    inline const ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult & exportMappCenterAppConfigResult() const { DARABONBA_PTR_GET_CONST(exportMappCenterAppConfigResult_, ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult) };
    inline ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult exportMappCenterAppConfigResult() { DARABONBA_PTR_GET(exportMappCenterAppConfigResult_, ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult) };
    inline ExportMappCenterAppConfigResponseBody& setExportMappCenterAppConfigResult(const ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult & exportMappCenterAppConfigResult) { DARABONBA_PTR_SET_VALUE(exportMappCenterAppConfigResult_, exportMappCenterAppConfigResult) };
    inline ExportMappCenterAppConfigResponseBody& setExportMappCenterAppConfigResult(ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult && exportMappCenterAppConfigResult) { DARABONBA_PTR_SET_RVALUE(exportMappCenterAppConfigResult_, exportMappCenterAppConfigResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportMappCenterAppConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ExportMappCenterAppConfigResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ExportMappCenterAppConfigResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult> exportMappCenterAppConfigResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
