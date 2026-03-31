// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVerifyContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsContent, dnsContent_);
      DARABONBA_PTR_TO_JSON(FileContent, fileContent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsContent, dnsContent_);
      DARABONBA_PTR_FROM_JSON(FileContent, fileContent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    DescribeVerifyContentResponseBody() = default ;
    DescribeVerifyContentResponseBody(const DescribeVerifyContentResponseBody &) = default ;
    DescribeVerifyContentResponseBody(DescribeVerifyContentResponseBody &&) = default ;
    DescribeVerifyContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyContentResponseBody() = default ;
    DescribeVerifyContentResponseBody& operator=(const DescribeVerifyContentResponseBody &) = default ;
    DescribeVerifyContentResponseBody& operator=(DescribeVerifyContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileContent& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(VerifyPath, verifyPath_);
      };
      friend void from_json(const Darabonba::Json& j, FileContent& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(VerifyPath, verifyPath_);
      };
      FileContent() = default ;
      FileContent(const FileContent &) = default ;
      FileContent(FileContent &&) = default ;
      FileContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileContent() = default ;
      FileContent& operator=(const FileContent &) = default ;
      FileContent& operator=(FileContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->fileName_ == nullptr && this->topDomain_ == nullptr && this->value_ == nullptr && this->verifyPath_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline FileContent& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline FileContent& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // topDomain Field Functions 
      bool hasTopDomain() const { return this->topDomain_ != nullptr;};
      void deleteTopDomain() { this->topDomain_ = nullptr;};
      inline string getTopDomain() const { DARABONBA_PTR_GET_DEFAULT(topDomain_, "") };
      inline FileContent& setTopDomain(string topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline FileContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // verifyPath Field Functions 
      bool hasVerifyPath() const { return this->verifyPath_ != nullptr;};
      void deleteVerifyPath() { this->verifyPath_ = nullptr;};
      inline string getVerifyPath() const { DARABONBA_PTR_GET_DEFAULT(verifyPath_, "") };
      inline FileContent& setVerifyPath(string verifyPath) { DARABONBA_PTR_SET_VALUE(verifyPath_, verifyPath) };


    protected:
      shared_ptr<string> downloadUrl_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> topDomain_ {};
      shared_ptr<string> value_ {};
      shared_ptr<string> verifyPath_ {};
    };

    class DnsContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsContent& obj) { 
        DARABONBA_PTR_TO_JSON(RR, RR_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DnsContent& obj) { 
        DARABONBA_PTR_FROM_JSON(RR, RR_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DnsContent() = default ;
      DnsContent(const DnsContent &) = default ;
      DnsContent(DnsContent &&) = default ;
      DnsContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsContent() = default ;
      DnsContent& operator=(const DnsContent &) = default ;
      DnsContent& operator=(DnsContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->RR_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // RR Field Functions 
      bool hasRR() const { return this->RR_ != nullptr;};
      void deleteRR() { this->RR_ = nullptr;};
      inline string getRR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
      inline DnsContent& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DnsContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DnsContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> RR_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dnsContent_ == nullptr
        && this->fileContent_ == nullptr && this->requestId_ == nullptr && this->verifyResult_ == nullptr; };
    // dnsContent Field Functions 
    bool hasDnsContent() const { return this->dnsContent_ != nullptr;};
    void deleteDnsContent() { this->dnsContent_ = nullptr;};
    inline const DescribeVerifyContentResponseBody::DnsContent & getDnsContent() const { DARABONBA_PTR_GET_CONST(dnsContent_, DescribeVerifyContentResponseBody::DnsContent) };
    inline DescribeVerifyContentResponseBody::DnsContent getDnsContent() { DARABONBA_PTR_GET(dnsContent_, DescribeVerifyContentResponseBody::DnsContent) };
    inline DescribeVerifyContentResponseBody& setDnsContent(const DescribeVerifyContentResponseBody::DnsContent & dnsContent) { DARABONBA_PTR_SET_VALUE(dnsContent_, dnsContent) };
    inline DescribeVerifyContentResponseBody& setDnsContent(DescribeVerifyContentResponseBody::DnsContent && dnsContent) { DARABONBA_PTR_SET_RVALUE(dnsContent_, dnsContent) };


    // fileContent Field Functions 
    bool hasFileContent() const { return this->fileContent_ != nullptr;};
    void deleteFileContent() { this->fileContent_ = nullptr;};
    inline const DescribeVerifyContentResponseBody::FileContent & getFileContent() const { DARABONBA_PTR_GET_CONST(fileContent_, DescribeVerifyContentResponseBody::FileContent) };
    inline DescribeVerifyContentResponseBody::FileContent getFileContent() { DARABONBA_PTR_GET(fileContent_, DescribeVerifyContentResponseBody::FileContent) };
    inline DescribeVerifyContentResponseBody& setFileContent(const DescribeVerifyContentResponseBody::FileContent & fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };
    inline DescribeVerifyContentResponseBody& setFileContent(DescribeVerifyContentResponseBody::FileContent && fileContent) { DARABONBA_PTR_SET_RVALUE(fileContent_, fileContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline bool getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, false) };
    inline DescribeVerifyContentResponseBody& setVerifyResult(bool verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    shared_ptr<DescribeVerifyContentResponseBody::DnsContent> dnsContent_ {};
    shared_ptr<DescribeVerifyContentResponseBody::FileContent> fileContent_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> verifyResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
