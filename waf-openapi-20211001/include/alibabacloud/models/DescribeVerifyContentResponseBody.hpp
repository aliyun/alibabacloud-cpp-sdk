// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifyContentResponseBodyDnsContent.hpp>
#include <alibabacloud/models/DescribeVerifyContentResponseBodyFileContent.hpp>
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
    virtual bool empty() const override { return this->dnsContent_ == nullptr
        && return this->fileContent_ == nullptr && return this->requestId_ == nullptr && return this->verifyResult_ == nullptr; };
    // dnsContent Field Functions 
    bool hasDnsContent() const { return this->dnsContent_ != nullptr;};
    void deleteDnsContent() { this->dnsContent_ = nullptr;};
    inline const DescribeVerifyContentResponseBodyDnsContent & dnsContent() const { DARABONBA_PTR_GET_CONST(dnsContent_, DescribeVerifyContentResponseBodyDnsContent) };
    inline DescribeVerifyContentResponseBodyDnsContent dnsContent() { DARABONBA_PTR_GET(dnsContent_, DescribeVerifyContentResponseBodyDnsContent) };
    inline DescribeVerifyContentResponseBody& setDnsContent(const DescribeVerifyContentResponseBodyDnsContent & dnsContent) { DARABONBA_PTR_SET_VALUE(dnsContent_, dnsContent) };
    inline DescribeVerifyContentResponseBody& setDnsContent(DescribeVerifyContentResponseBodyDnsContent && dnsContent) { DARABONBA_PTR_SET_RVALUE(dnsContent_, dnsContent) };


    // fileContent Field Functions 
    bool hasFileContent() const { return this->fileContent_ != nullptr;};
    void deleteFileContent() { this->fileContent_ = nullptr;};
    inline const DescribeVerifyContentResponseBodyFileContent & fileContent() const { DARABONBA_PTR_GET_CONST(fileContent_, DescribeVerifyContentResponseBodyFileContent) };
    inline DescribeVerifyContentResponseBodyFileContent fileContent() { DARABONBA_PTR_GET(fileContent_, DescribeVerifyContentResponseBodyFileContent) };
    inline DescribeVerifyContentResponseBody& setFileContent(const DescribeVerifyContentResponseBodyFileContent & fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };
    inline DescribeVerifyContentResponseBody& setFileContent(DescribeVerifyContentResponseBodyFileContent && fileContent) { DARABONBA_PTR_SET_RVALUE(fileContent_, fileContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline bool verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, false) };
    inline DescribeVerifyContentResponseBody& setVerifyResult(bool verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    std::shared_ptr<DescribeVerifyContentResponseBodyDnsContent> dnsContent_ = nullptr;
    std::shared_ptr<DescribeVerifyContentResponseBodyFileContent> fileContent_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
