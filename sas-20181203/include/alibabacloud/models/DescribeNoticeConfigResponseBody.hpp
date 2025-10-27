// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTICECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTICECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNoticeConfigResponseBodyNoticeConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeNoticeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNoticeConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NoticeConfigList, noticeConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNoticeConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NoticeConfigList, noticeConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNoticeConfigResponseBody() = default ;
    DescribeNoticeConfigResponseBody(const DescribeNoticeConfigResponseBody &) = default ;
    DescribeNoticeConfigResponseBody(DescribeNoticeConfigResponseBody &&) = default ;
    DescribeNoticeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNoticeConfigResponseBody() = default ;
    DescribeNoticeConfigResponseBody& operator=(const DescribeNoticeConfigResponseBody &) = default ;
    DescribeNoticeConfigResponseBody& operator=(DescribeNoticeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noticeConfigList_ == nullptr
        && return this->requestId_ == nullptr; };
    // noticeConfigList Field Functions 
    bool hasNoticeConfigList() const { return this->noticeConfigList_ != nullptr;};
    void deleteNoticeConfigList() { this->noticeConfigList_ = nullptr;};
    inline const vector<DescribeNoticeConfigResponseBodyNoticeConfigList> & noticeConfigList() const { DARABONBA_PTR_GET_CONST(noticeConfigList_, vector<DescribeNoticeConfigResponseBodyNoticeConfigList>) };
    inline vector<DescribeNoticeConfigResponseBodyNoticeConfigList> noticeConfigList() { DARABONBA_PTR_GET(noticeConfigList_, vector<DescribeNoticeConfigResponseBodyNoticeConfigList>) };
    inline DescribeNoticeConfigResponseBody& setNoticeConfigList(const vector<DescribeNoticeConfigResponseBodyNoticeConfigList> & noticeConfigList) { DARABONBA_PTR_SET_VALUE(noticeConfigList_, noticeConfigList) };
    inline DescribeNoticeConfigResponseBody& setNoticeConfigList(vector<DescribeNoticeConfigResponseBodyNoticeConfigList> && noticeConfigList) { DARABONBA_PTR_SET_RVALUE(noticeConfigList_, noticeConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNoticeConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the notification settings.
    std::shared_ptr<vector<DescribeNoticeConfigResponseBodyNoticeConfigList>> noticeConfigList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
