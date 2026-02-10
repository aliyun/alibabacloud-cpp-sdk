// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPRESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPRESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotPresetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotPresetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotPresetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneypotPresetResponseBody() = default ;
    GetHoneypotPresetResponseBody(const GetHoneypotPresetResponseBody &) = default ;
    GetHoneypotPresetResponseBody(GetHoneypotPresetResponseBody &&) = default ;
    GetHoneypotPresetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotPresetResponseBody() = default ;
    GetHoneypotPresetResponseBody& operator=(const GetHoneypotPresetResponseBody &) = default ;
    GetHoneypotPresetResponseBody& operator=(GetHoneypotPresetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_TO_JSON(HoneypotPresetId, honeypotPresetId_);
        DARABONBA_PTR_TO_JSON(Meta, meta_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PresetName, presetName_);
        DARABONBA_PTR_TO_JSON(PresetType, presetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_FROM_JSON(HoneypotPresetId, honeypotPresetId_);
        DARABONBA_PTR_FROM_JSON(Meta, meta_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PresetName, presetName_);
        DARABONBA_PTR_FROM_JSON(PresetType, presetType_);
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
      class FileInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
        };
        FileInfoList() = default ;
        FileInfoList(const FileInfoList &) = default ;
        FileInfoList(FileInfoList &&) = default ;
        FileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfoList() = default ;
        FileInfoList& operator=(const FileInfoList &) = default ;
        FileInfoList& operator=(FileInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->ossUrl_ == nullptr; };
        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline FileInfoList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileInfoList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // ossUrl Field Functions 
        bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
        void deleteOssUrl() { this->ossUrl_ = nullptr;};
        inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
        inline FileInfoList& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


      protected:
        // The ID of the uploaded file.
        shared_ptr<string> fileId_ {};
        // The name of the uploaded file.
        shared_ptr<string> fileName_ {};
        // The download URL.
        shared_ptr<string> ossUrl_ {};
      };

      virtual bool empty() const override { return this->controlNodeName_ == nullptr
        && this->fileInfoList_ == nullptr && this->honeypotImageDisplayName_ == nullptr && this->honeypotImageName_ == nullptr && this->honeypotPresetId_ == nullptr && this->meta_ == nullptr
        && this->nodeId_ == nullptr && this->presetName_ == nullptr && this->presetType_ == nullptr; };
      // controlNodeName Field Functions 
      bool hasControlNodeName() const { return this->controlNodeName_ != nullptr;};
      void deleteControlNodeName() { this->controlNodeName_ = nullptr;};
      inline string getControlNodeName() const { DARABONBA_PTR_GET_DEFAULT(controlNodeName_, "") };
      inline Data& setControlNodeName(string controlNodeName) { DARABONBA_PTR_SET_VALUE(controlNodeName_, controlNodeName) };


      // fileInfoList Field Functions 
      bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
      void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
      inline const vector<Data::FileInfoList> & getFileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Data::FileInfoList>) };
      inline vector<Data::FileInfoList> getFileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Data::FileInfoList>) };
      inline Data& setFileInfoList(const vector<Data::FileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
      inline Data& setFileInfoList(vector<Data::FileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


      // honeypotImageDisplayName Field Functions 
      bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
      void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
      inline string getHoneypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
      inline Data& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


      // honeypotImageName Field Functions 
      bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
      void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
      inline string getHoneypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
      inline Data& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


      // honeypotPresetId Field Functions 
      bool hasHoneypotPresetId() const { return this->honeypotPresetId_ != nullptr;};
      void deleteHoneypotPresetId() { this->honeypotPresetId_ = nullptr;};
      inline string getHoneypotPresetId() const { DARABONBA_PTR_GET_DEFAULT(honeypotPresetId_, "") };
      inline Data& setHoneypotPresetId(string honeypotPresetId) { DARABONBA_PTR_SET_VALUE(honeypotPresetId_, honeypotPresetId) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
      inline Data& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // presetName Field Functions 
      bool hasPresetName() const { return this->presetName_ != nullptr;};
      void deletePresetName() { this->presetName_ = nullptr;};
      inline string getPresetName() const { DARABONBA_PTR_GET_DEFAULT(presetName_, "") };
      inline Data& setPresetName(string presetName) { DARABONBA_PTR_SET_VALUE(presetName_, presetName) };


      // presetType Field Functions 
      bool hasPresetType() const { return this->presetType_ != nullptr;};
      void deletePresetType() { this->presetType_ = nullptr;};
      inline string getPresetType() const { DARABONBA_PTR_GET_DEFAULT(presetType_, "") };
      inline Data& setPresetType(string presetType) { DARABONBA_PTR_SET_VALUE(presetType_, presetType) };


    protected:
      // The name of the management node.
      shared_ptr<string> controlNodeName_ {};
      // An array that consists of the configurations of the uploaded file.
      shared_ptr<vector<Data::FileInfoList>> fileInfoList_ {};
      // The display name of the honeypot image.
      shared_ptr<string> honeypotImageDisplayName_ {};
      // The name of the honeypot image.
      shared_ptr<string> honeypotImageName_ {};
      // The ID of the honeypot template.
      shared_ptr<string> honeypotPresetId_ {};
      // The custom configuration of the honeypot template.
      shared_ptr<string> meta_ {};
      // The ID of the management node.
      shared_ptr<string> nodeId_ {};
      // The custom name of the honeypot template.
      shared_ptr<string> presetName_ {};
      // The type of the honeypot template. Valid values:
      // 
      // *   **TEMP**: automatically generated template
      // *   **CUSTOM**: custom template
      // *   **DEFAULT**: default template
      shared_ptr<string> presetType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneypotPresetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHoneypotPresetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHoneypotPresetResponseBody::Data) };
    inline GetHoneypotPresetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHoneypotPresetResponseBody::Data) };
    inline GetHoneypotPresetResponseBody& setData(const GetHoneypotPresetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHoneypotPresetResponseBody& setData(GetHoneypotPresetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneypotPresetResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneypotPresetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneypotPresetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneypotPresetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The information about the honeypot template.
    shared_ptr<GetHoneypotPresetResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
