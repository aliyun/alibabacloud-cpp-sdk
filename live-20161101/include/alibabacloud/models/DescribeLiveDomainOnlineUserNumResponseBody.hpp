// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainOnlineUserNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainOnlineUserNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineUserInfo, onlineUserInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainOnlineUserNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineUserInfo, onlineUserInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    DescribeLiveDomainOnlineUserNumResponseBody() = default ;
    DescribeLiveDomainOnlineUserNumResponseBody(const DescribeLiveDomainOnlineUserNumResponseBody &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBody(DescribeLiveDomainOnlineUserNumResponseBody &&) = default ;
    DescribeLiveDomainOnlineUserNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainOnlineUserNumResponseBody() = default ;
    DescribeLiveDomainOnlineUserNumResponseBody& operator=(const DescribeLiveDomainOnlineUserNumResponseBody &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBody& operator=(DescribeLiveDomainOnlineUserNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onlineUserInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->streamCount_ == nullptr && return this->userCount_ == nullptr; };
    // onlineUserInfo Field Functions 
    bool hasOnlineUserInfo() const { return this->onlineUserInfo_ != nullptr;};
    void deleteOnlineUserInfo() { this->onlineUserInfo_ = nullptr;};
    inline const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo & onlineUserInfo() const { DARABONBA_PTR_GET_CONST(onlineUserInfo_, DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo onlineUserInfo() { DARABONBA_PTR_GET(onlineUserInfo_, DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setOnlineUserInfo(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo & onlineUserInfo) { DARABONBA_PTR_SET_VALUE(onlineUserInfo_, onlineUserInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setOnlineUserInfo(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo && onlineUserInfo) { DARABONBA_PTR_SET_RVALUE(onlineUserInfo_, onlineUserInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamCount Field Functions 
    bool hasStreamCount() const { return this->streamCount_ != nullptr;};
    void deleteStreamCount() { this->streamCount_ = nullptr;};
    inline int32_t streamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setStreamCount(int32_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    // The information about the streams.
    std::shared_ptr<DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo> onlineUserInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of streams.
    std::shared_ptr<int32_t> streamCount_ = nullptr;
    // The total number of online users at the specified point in time for all the live streams under the main streaming domain.
    std::shared_ptr<int32_t> userCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
