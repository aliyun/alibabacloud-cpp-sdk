// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFileDetectReportResponseBody() = default ;
    GetFileDetectReportResponseBody(const GetFileDetectReportResponseBody &) = default ;
    GetFileDetectReportResponseBody(GetFileDetectReportResponseBody &&) = default ;
    GetFileDetectReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectReportResponseBody() = default ;
    GetFileDetectReportResponseBody& operator=(const GetFileDetectReportResponseBody &) = default ;
    GetFileDetectReportResponseBody& operator=(GetFileDetectReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Basic, basic_);
        DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
        DARABONBA_PTR_TO_JSON(Filename, filename_);
        DARABONBA_PTR_TO_JSON(HasData, hasData_);
        DARABONBA_PTR_TO_JSON(Intelligences, intelligences_);
        DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
        DARABONBA_PTR_TO_JSON(ShowTab, showTab_);
        DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_TO_JSON(ThreatTypes, threatTypes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Basic, basic_);
        DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
        DARABONBA_PTR_FROM_JSON(Filename, filename_);
        DARABONBA_PTR_FROM_JSON(HasData, hasData_);
        DARABONBA_PTR_FROM_JSON(Intelligences, intelligences_);
        DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
        DARABONBA_PTR_FROM_JSON(ShowTab, showTab_);
        DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_FROM_JSON(ThreatTypes, threatTypes_);
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
      virtual bool empty() const override { return this->basic_ == nullptr
        && this->fileHash_ == nullptr && this->filename_ == nullptr && this->hasData_ == nullptr && this->intelligences_ == nullptr && this->sandbox_ == nullptr
        && this->showTab_ == nullptr && this->threatLevel_ == nullptr && this->threatTypes_ == nullptr; };
      // basic Field Functions 
      bool hasBasic() const { return this->basic_ != nullptr;};
      void deleteBasic() { this->basic_ = nullptr;};
      inline string getBasic() const { DARABONBA_PTR_GET_DEFAULT(basic_, "") };
      inline Data& setBasic(string basic) { DARABONBA_PTR_SET_VALUE(basic_, basic) };


      // fileHash Field Functions 
      bool hasFileHash() const { return this->fileHash_ != nullptr;};
      void deleteFileHash() { this->fileHash_ = nullptr;};
      inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
      inline Data& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


      // filename Field Functions 
      bool hasFilename() const { return this->filename_ != nullptr;};
      void deleteFilename() { this->filename_ = nullptr;};
      inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
      inline Data& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


      // hasData Field Functions 
      bool hasHasData() const { return this->hasData_ != nullptr;};
      void deleteHasData() { this->hasData_ = nullptr;};
      inline bool getHasData() const { DARABONBA_PTR_GET_DEFAULT(hasData_, false) };
      inline Data& setHasData(bool hasData) { DARABONBA_PTR_SET_VALUE(hasData_, hasData) };


      // intelligences Field Functions 
      bool hasIntelligences() const { return this->intelligences_ != nullptr;};
      void deleteIntelligences() { this->intelligences_ = nullptr;};
      inline string getIntelligences() const { DARABONBA_PTR_GET_DEFAULT(intelligences_, "") };
      inline Data& setIntelligences(string intelligences) { DARABONBA_PTR_SET_VALUE(intelligences_, intelligences) };


      // sandbox Field Functions 
      bool hasSandbox() const { return this->sandbox_ != nullptr;};
      void deleteSandbox() { this->sandbox_ = nullptr;};
      inline string getSandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
      inline Data& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


      // showTab Field Functions 
      bool hasShowTab() const { return this->showTab_ != nullptr;};
      void deleteShowTab() { this->showTab_ = nullptr;};
      inline bool getShowTab() const { DARABONBA_PTR_GET_DEFAULT(showTab_, false) };
      inline Data& setShowTab(bool showTab) { DARABONBA_PTR_SET_VALUE(showTab_, showTab) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline int64_t getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, 0L) };
      inline Data& setThreatLevel(int64_t threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // threatTypes Field Functions 
      bool hasThreatTypes() const { return this->threatTypes_ != nullptr;};
      void deleteThreatTypes() { this->threatTypes_ = nullptr;};
      inline string getThreatTypes() const { DARABONBA_PTR_GET_DEFAULT(threatTypes_, "") };
      inline Data& setThreatTypes(string threatTypes) { DARABONBA_PTR_SET_VALUE(threatTypes_, threatTypes) };


    protected:
      // The basic information about the detected file.
      shared_ptr<string> basic_ {};
      // The hash value of the file.
      shared_ptr<string> fileHash_ {};
      // The name of the file.
      shared_ptr<string> filename_ {};
      // Indicates whether the file data exists in the cloud sandbox. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasData_ {};
      // The threat intelligence event, which is a JSON array.
      // 
      // Valid values:
      // 
      // *   The threat type. The value is an array. The elements in the array can be DDoS trojans, mining programs, network layer intrusions, network service scans, network sharing and discovery, mining pools, exploits, dark webs, malicious logons, malicious download sources, C\\&C servers, webshells, and web attacks.
      shared_ptr<string> intelligences_ {};
      // The details of the cloud sandbox check results.
      shared_ptr<string> sandbox_ {};
      // Indicates whether the check report is displayed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> showTab_ {};
      // The threat level. Valid values:
      // 
      // *   **0**: normal
      // *   **1**: suspicious
      // *   **2**: high
      shared_ptr<int64_t> threatLevel_ {};
      // The risk tags and server tags that are generated by analyzing threat intelligence and security events. The value is a string array. The array includes the following elements:
      // 
      // *   **threat_type_desc**: the threat type.
      // *   **last_find_time**: the last time the threat was detected.
      // *   **risk_type**: indicates whether the tag is malicious. The value 0 indicates that the tag is not malicious. The value 1 indicates that the tag is malicious. The value -1 indicates that whether the tag type is malicious is unknown.
      // *   **threat_type**: the threat type. The value is an array. The elements in the array can be network layer intrusion, network service scanning, network sharing and discovery, mining pool, exploits, darknet, malicious logon, malicious download source, central control, web shell, and web attack.
      shared_ptr<string> threatTypes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFileDetectReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileDetectReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileDetectReportResponseBody::Data) };
    inline GetFileDetectReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileDetectReportResponseBody::Data) };
    inline GetFileDetectReportResponseBody& setData(const GetFileDetectReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileDetectReportResponseBody& setData(GetFileDetectReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFileDetectReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFileDetectReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<GetFileDetectReportResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
