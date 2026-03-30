// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDENTIALREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCREDENTIALREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetCredentialReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCredentialReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetCredentialReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetCredentialReportRequest() = default ;
    GetCredentialReportRequest(const GetCredentialReportRequest &) = default ;
    GetCredentialReportRequest(GetCredentialReportRequest &&) = default ;
    GetCredentialReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCredentialReportRequest() = default ;
    GetCredentialReportRequest& operator=(const GetCredentialReportRequest &) = default ;
    GetCredentialReportRequest& operator=(GetCredentialReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxItems_ == nullptr
        && this->nextToken_ == nullptr; };
    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline string getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, "") };
    inline GetCredentialReportRequest& setMaxItems(string maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetCredentialReportRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The number of entries per page. If a response is truncated because it reaches the value of `MaxItems`, the value of `IsTruncated` will be true.
    // 
    // Valid values: 1 to 3501. Default value: 3501.
    shared_ptr<string> maxItems_ {};
    // The token that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.``
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
