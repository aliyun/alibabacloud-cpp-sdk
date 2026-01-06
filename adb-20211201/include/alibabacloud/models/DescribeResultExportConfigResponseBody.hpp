// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESULTEXPORTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESULTEXPORTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResultExportConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResultExportConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResultExportConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeResultExportConfigResponseBody() = default ;
    DescribeResultExportConfigResponseBody(const DescribeResultExportConfigResponseBody &) = default ;
    DescribeResultExportConfigResponseBody(DescribeResultExportConfigResponseBody &&) = default ;
    DescribeResultExportConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResultExportConfigResponseBody() = default ;
    DescribeResultExportConfigResponseBody& operator=(const DescribeResultExportConfigResponseBody &) = default ;
    DescribeResultExportConfigResponseBody& operator=(DescribeResultExportConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExportType, exportType_);
        DARABONBA_PTR_TO_JSON(OssInfo, ossInfo_);
        DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
        DARABONBA_PTR_FROM_JSON(OssInfo, ossInfo_);
        DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(LogstoreTtl, logstoreTtl_);
          DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
        };
        friend void from_json(const Darabonba::Json& j, SlsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(LogstoreTtl, logstoreTtl_);
          DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
        };
        SlsInfo() = default ;
        SlsInfo(const SlsInfo &) = default ;
        SlsInfo(SlsInfo &&) = default ;
        SlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsInfo() = default ;
        SlsInfo& operator=(const SlsInfo &) = default ;
        SlsInfo& operator=(SlsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logstoreTtl_ == nullptr
        && this->resourceGroup_ == nullptr && this->slsProject_ == nullptr; };
        // logstoreTtl Field Functions 
        bool hasLogstoreTtl() const { return this->logstoreTtl_ != nullptr;};
        void deleteLogstoreTtl() { this->logstoreTtl_ = nullptr;};
        inline int32_t getLogstoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logstoreTtl_, 0) };
        inline SlsInfo& setLogstoreTtl(int32_t logstoreTtl) { DARABONBA_PTR_SET_VALUE(logstoreTtl_, logstoreTtl) };


        // resourceGroup Field Functions 
        bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
        void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
        inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
        inline SlsInfo& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


        // slsProject Field Functions 
        bool hasSlsProject() const { return this->slsProject_ != nullptr;};
        void deleteSlsProject() { this->slsProject_ = nullptr;};
        inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
        inline SlsInfo& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      protected:
        // The expiration period (in days) for the temporary Logstore automatically created during result set export. The Logstore is automatically deleted after expiration. The returned value is between 1 and 30 days (inclusive).
        shared_ptr<int32_t> logstoreTtl_ {};
        // The name of the resource group that runs the export SQL.
        shared_ptr<string> resourceGroup_ {};
        // The name of the SLS project.
        shared_ptr<string> slsProject_ {};
      };

      class OssInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ExportBasePath, exportBasePath_);
          DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_TO_JSON(ResultFileTtl, resultFileTtl_);
        };
        friend void from_json(const Darabonba::Json& j, OssInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ExportBasePath, exportBasePath_);
          DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_FROM_JSON(ResultFileTtl, resultFileTtl_);
        };
        OssInfo() = default ;
        OssInfo(const OssInfo &) = default ;
        OssInfo(OssInfo &&) = default ;
        OssInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssInfo() = default ;
        OssInfo& operator=(const OssInfo &) = default ;
        OssInfo& operator=(OssInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->exportBasePath_ == nullptr
        && this->resourceGroup_ == nullptr && this->resultFileTtl_ == nullptr; };
        // exportBasePath Field Functions 
        bool hasExportBasePath() const { return this->exportBasePath_ != nullptr;};
        void deleteExportBasePath() { this->exportBasePath_ = nullptr;};
        inline string getExportBasePath() const { DARABONBA_PTR_GET_DEFAULT(exportBasePath_, "") };
        inline OssInfo& setExportBasePath(string exportBasePath) { DARABONBA_PTR_SET_VALUE(exportBasePath_, exportBasePath) };


        // resourceGroup Field Functions 
        bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
        void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
        inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
        inline OssInfo& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


        // resultFileTtl Field Functions 
        bool hasResultFileTtl() const { return this->resultFileTtl_ != nullptr;};
        void deleteResultFileTtl() { this->resultFileTtl_ = nullptr;};
        inline int32_t getResultFileTtl() const { DARABONBA_PTR_GET_DEFAULT(resultFileTtl_, 0) };
        inline OssInfo& setResultFileTtl(int32_t resultFileTtl) { DARABONBA_PTR_SET_VALUE(resultFileTtl_, resultFileTtl) };


      protected:
        // The path of the OSS bucket to which the result sets are exported.
        shared_ptr<string> exportBasePath_ {};
        // The name of the resource group that runs the export SQL.
        shared_ptr<string> resourceGroup_ {};
        // The expiration period (in days) for the OSS file. The returned value is between 1 and 30 days (inclusive).
        shared_ptr<int32_t> resultFileTtl_ {};
      };

      virtual bool empty() const override { return this->exportType_ == nullptr
        && this->ossInfo_ == nullptr && this->slsInfo_ == nullptr; };
      // exportType Field Functions 
      bool hasExportType() const { return this->exportType_ != nullptr;};
      void deleteExportType() { this->exportType_ = nullptr;};
      inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
      inline Data& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


      // ossInfo Field Functions 
      bool hasOssInfo() const { return this->ossInfo_ != nullptr;};
      void deleteOssInfo() { this->ossInfo_ = nullptr;};
      inline const Data::OssInfo & getOssInfo() const { DARABONBA_PTR_GET_CONST(ossInfo_, Data::OssInfo) };
      inline Data::OssInfo getOssInfo() { DARABONBA_PTR_GET(ossInfo_, Data::OssInfo) };
      inline Data& setOssInfo(const Data::OssInfo & ossInfo) { DARABONBA_PTR_SET_VALUE(ossInfo_, ossInfo) };
      inline Data& setOssInfo(Data::OssInfo && ossInfo) { DARABONBA_PTR_SET_RVALUE(ossInfo_, ossInfo) };


      // slsInfo Field Functions 
      bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
      void deleteSlsInfo() { this->slsInfo_ = nullptr;};
      inline const Data::SlsInfo & getSlsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, Data::SlsInfo) };
      inline Data::SlsInfo getSlsInfo() { DARABONBA_PTR_GET(slsInfo_, Data::SlsInfo) };
      inline Data& setSlsInfo(const Data::SlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
      inline Data& setSlsInfo(Data::SlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


    protected:
      // The export type. Valid values:
      // 
      // *   SLS: Indicates that the export destination is SLS.
      // *   OSS: Indicates that the export destination is OSS.
      shared_ptr<string> exportType_ {};
      // The configured OSS export settings, returned when the export destination is OSS.
      shared_ptr<Data::OssInfo> ossInfo_ {};
      // The configured SLS export settings, returned when the export destination is SLS.
      shared_ptr<Data::SlsInfo> slsInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeResultExportConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeResultExportConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeResultExportConfigResponseBody::Data) };
    inline DescribeResultExportConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeResultExportConfigResponseBody::Data) };
    inline DescribeResultExportConfigResponseBody& setData(const DescribeResultExportConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeResultExportConfigResponseBody& setData(DescribeResultExportConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeResultExportConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeResultExportConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResultExportConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeResultExportConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API status or POP error code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeResultExportConfigResponseBody::Data> data_ {};
    // The HTTP response status code. A value of 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message. Valid values:
    // 
    // *   The request succeeded, and the server returns **OK**.
    // *   The request failed, and the server returns an error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values: Valid values:
    // 
    // *   **True: Succeeded.**
    // *   **False: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
