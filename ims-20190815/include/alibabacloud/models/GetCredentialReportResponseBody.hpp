// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDENTIALREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREDENTIALREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetCredentialReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCredentialReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GeneratedTime, generatedTime_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCredentialReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GeneratedTime, generatedTime_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCredentialReportResponseBody() = default ;
    GetCredentialReportResponseBody(const GetCredentialReportResponseBody &) = default ;
    GetCredentialReportResponseBody(GetCredentialReportResponseBody &&) = default ;
    GetCredentialReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCredentialReportResponseBody() = default ;
    GetCredentialReportResponseBody& operator=(const GetCredentialReportResponseBody &) = default ;
    GetCredentialReportResponseBody& operator=(GetCredentialReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->generatedTime_ != nullptr && this->isTruncated_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetCredentialReportResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // generatedTime Field Functions 
    bool hasGeneratedTime() const { return this->generatedTime_ != nullptr;};
    void deleteGeneratedTime() { this->generatedTime_ = nullptr;};
    inline string generatedTime() const { DARABONBA_PTR_GET_DEFAULT(generatedTime_, "") };
    inline GetCredentialReportResponseBody& setGeneratedTime(string generatedTime) { DARABONBA_PTR_SET_VALUE(generatedTime_, generatedTime) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline string isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, "") };
    inline GetCredentialReportResponseBody& setIsTruncated(string isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetCredentialReportResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCredentialReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the user credential report.
    // 
    // The report is Base64-encoded. After you decode the report, the credential report is in the CSV format.
    std::shared_ptr<string> content_ = nullptr;
    // The time when the user credential report was generated.
    std::shared_ptr<string> generatedTime_ = nullptr;
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> isTruncated_ = nullptr;
    // The parameter that is used to obtain the truncated part. This parameter takes effect only when `IsTruncated` is set to true.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
