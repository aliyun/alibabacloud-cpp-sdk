// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelTopPubUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelTopPubUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopPubUserDetailList, topPubUserDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelTopPubUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopPubUserDetailList, topPubUserDetailList_);
    };
    DescribeChannelTopPubUserListResponseBody() = default ;
    DescribeChannelTopPubUserListResponseBody(const DescribeChannelTopPubUserListResponseBody &) = default ;
    DescribeChannelTopPubUserListResponseBody(DescribeChannelTopPubUserListResponseBody &&) = default ;
    DescribeChannelTopPubUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelTopPubUserListResponseBody() = default ;
    DescribeChannelTopPubUserListResponseBody& operator=(const DescribeChannelTopPubUserListResponseBody &) = default ;
    DescribeChannelTopPubUserListResponseBody& operator=(DescribeChannelTopPubUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->topPubUserDetailList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelTopPubUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topPubUserDetailList Field Functions 
    bool hasTopPubUserDetailList() const { return this->topPubUserDetailList_ != nullptr;};
    void deleteTopPubUserDetailList() { this->topPubUserDetailList_ = nullptr;};
    inline const vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList> & topPubUserDetailList() const { DARABONBA_PTR_GET_CONST(topPubUserDetailList_, vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>) };
    inline vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList> topPubUserDetailList() { DARABONBA_PTR_GET(topPubUserDetailList_, vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>) };
    inline DescribeChannelTopPubUserListResponseBody& setTopPubUserDetailList(const vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList> & topPubUserDetailList) { DARABONBA_PTR_SET_VALUE(topPubUserDetailList_, topPubUserDetailList) };
    inline DescribeChannelTopPubUserListResponseBody& setTopPubUserDetailList(vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList> && topPubUserDetailList) { DARABONBA_PTR_SET_RVALUE(topPubUserDetailList_, topPubUserDetailList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>> topPubUserDetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
