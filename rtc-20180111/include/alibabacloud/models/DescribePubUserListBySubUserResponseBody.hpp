// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePubUserListBySubUserResponseBodyPubUserDetailList.hpp>
#include <alibabacloud/models/DescribePubUserListBySubUserResponseBodySubUserDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribePubUserListBySubUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePubUserListBySubUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_TO_JSON(PubUserDetailList, pubUserDetailList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubUserDetail, subUserDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePubUserListBySubUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_FROM_JSON(PubUserDetailList, pubUserDetailList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubUserDetail, subUserDetail_);
    };
    DescribePubUserListBySubUserResponseBody() = default ;
    DescribePubUserListBySubUserResponseBody(const DescribePubUserListBySubUserResponseBody &) = default ;
    DescribePubUserListBySubUserResponseBody(DescribePubUserListBySubUserResponseBody &&) = default ;
    DescribePubUserListBySubUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePubUserListBySubUserResponseBody() = default ;
    DescribePubUserListBySubUserResponseBody& operator=(const DescribePubUserListBySubUserResponseBody &) = default ;
    DescribePubUserListBySubUserResponseBody& operator=(DescribePubUserListBySubUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callStatus_ == nullptr
        && return this->pubUserDetailList_ == nullptr && return this->requestId_ == nullptr && return this->subUserDetail_ == nullptr; };
    // callStatus Field Functions 
    bool hasCallStatus() const { return this->callStatus_ != nullptr;};
    void deleteCallStatus() { this->callStatus_ = nullptr;};
    inline string callStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
    inline DescribePubUserListBySubUserResponseBody& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


    // pubUserDetailList Field Functions 
    bool hasPubUserDetailList() const { return this->pubUserDetailList_ != nullptr;};
    void deletePubUserDetailList() { this->pubUserDetailList_ = nullptr;};
    inline const vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList> & pubUserDetailList() const { DARABONBA_PTR_GET_CONST(pubUserDetailList_, vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>) };
    inline vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList> pubUserDetailList() { DARABONBA_PTR_GET(pubUserDetailList_, vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>) };
    inline DescribePubUserListBySubUserResponseBody& setPubUserDetailList(const vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList> & pubUserDetailList) { DARABONBA_PTR_SET_VALUE(pubUserDetailList_, pubUserDetailList) };
    inline DescribePubUserListBySubUserResponseBody& setPubUserDetailList(vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList> && pubUserDetailList) { DARABONBA_PTR_SET_RVALUE(pubUserDetailList_, pubUserDetailList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePubUserListBySubUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subUserDetail Field Functions 
    bool hasSubUserDetail() const { return this->subUserDetail_ != nullptr;};
    void deleteSubUserDetail() { this->subUserDetail_ = nullptr;};
    inline const DescribePubUserListBySubUserResponseBodySubUserDetail & subUserDetail() const { DARABONBA_PTR_GET_CONST(subUserDetail_, DescribePubUserListBySubUserResponseBodySubUserDetail) };
    inline DescribePubUserListBySubUserResponseBodySubUserDetail subUserDetail() { DARABONBA_PTR_GET(subUserDetail_, DescribePubUserListBySubUserResponseBodySubUserDetail) };
    inline DescribePubUserListBySubUserResponseBody& setSubUserDetail(const DescribePubUserListBySubUserResponseBodySubUserDetail & subUserDetail) { DARABONBA_PTR_SET_VALUE(subUserDetail_, subUserDetail) };
    inline DescribePubUserListBySubUserResponseBody& setSubUserDetail(DescribePubUserListBySubUserResponseBodySubUserDetail && subUserDetail) { DARABONBA_PTR_SET_RVALUE(subUserDetail_, subUserDetail) };


  protected:
    std::shared_ptr<string> callStatus_ = nullptr;
    std::shared_ptr<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>> pubUserDetailList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribePubUserListBySubUserResponseBodySubUserDetail> subUserDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
