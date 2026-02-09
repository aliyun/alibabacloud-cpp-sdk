// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class ExportMappCenterAppConfigResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExportMappCenterAppConfigResult& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigDownloadUrl, configDownloadUrl_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ExportMappCenterAppConfigResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigDownloadUrl, configDownloadUrl_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ExportMappCenterAppConfigResult() = default ;
      ExportMappCenterAppConfigResult(const ExportMappCenterAppConfigResult &) = default ;
      ExportMappCenterAppConfigResult(ExportMappCenterAppConfigResult &&) = default ;
      ExportMappCenterAppConfigResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExportMappCenterAppConfigResult() = default ;
      ExportMappCenterAppConfigResult& operator=(const ExportMappCenterAppConfigResult &) = default ;
      ExportMappCenterAppConfigResult& operator=(ExportMappCenterAppConfigResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configDownloadUrl_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // configDownloadUrl Field Functions 
      bool hasConfigDownloadUrl() const { return this->configDownloadUrl_ != nullptr;};
      void deleteConfigDownloadUrl() { this->configDownloadUrl_ = nullptr;};
      inline string getConfigDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(configDownloadUrl_, "") };
      inline ExportMappCenterAppConfigResult& setConfigDownloadUrl(string configDownloadUrl) { DARABONBA_PTR_SET_VALUE(configDownloadUrl_, configDownloadUrl) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ExportMappCenterAppConfigResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ExportMappCenterAppConfigResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> configDownloadUrl_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->exportMappCenterAppConfigResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // exportMappCenterAppConfigResult Field Functions 
    bool hasExportMappCenterAppConfigResult() const { return this->exportMappCenterAppConfigResult_ != nullptr;};
    void deleteExportMappCenterAppConfigResult() { this->exportMappCenterAppConfigResult_ = nullptr;};
    inline const ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult & getExportMappCenterAppConfigResult() const { DARABONBA_PTR_GET_CONST(exportMappCenterAppConfigResult_, ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult) };
    inline ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult getExportMappCenterAppConfigResult() { DARABONBA_PTR_GET(exportMappCenterAppConfigResult_, ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult) };
    inline ExportMappCenterAppConfigResponseBody& setExportMappCenterAppConfigResult(const ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult & exportMappCenterAppConfigResult) { DARABONBA_PTR_SET_VALUE(exportMappCenterAppConfigResult_, exportMappCenterAppConfigResult) };
    inline ExportMappCenterAppConfigResponseBody& setExportMappCenterAppConfigResult(ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult && exportMappCenterAppConfigResult) { DARABONBA_PTR_SET_RVALUE(exportMappCenterAppConfigResult_, exportMappCenterAppConfigResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportMappCenterAppConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ExportMappCenterAppConfigResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ExportMappCenterAppConfigResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ExportMappCenterAppConfigResponseBody::ExportMappCenterAppConfigResult> exportMappCenterAppConfigResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
