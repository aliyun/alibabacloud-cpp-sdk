// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HighOpenEventCnt, highOpenEventCnt_);
      DARABONBA_PTR_TO_JSON(LowOpenEventCnt, lowOpenEventCnt_);
      DARABONBA_PTR_TO_JSON(MiddleOpenEventCnt, middleOpenEventCnt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalOpenEventCnt, totalOpenEventCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HighOpenEventCnt, highOpenEventCnt_);
      DARABONBA_PTR_FROM_JSON(LowOpenEventCnt, lowOpenEventCnt_);
      DARABONBA_PTR_FROM_JSON(MiddleOpenEventCnt, middleOpenEventCnt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalOpenEventCnt, totalOpenEventCnt_);
    };
    DescribeInvadeEventStatisticResponseBody() = default ;
    DescribeInvadeEventStatisticResponseBody(const DescribeInvadeEventStatisticResponseBody &) = default ;
    DescribeInvadeEventStatisticResponseBody(DescribeInvadeEventStatisticResponseBody &&) = default ;
    DescribeInvadeEventStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventStatisticResponseBody() = default ;
    DescribeInvadeEventStatisticResponseBody& operator=(const DescribeInvadeEventStatisticResponseBody &) = default ;
    DescribeInvadeEventStatisticResponseBody& operator=(DescribeInvadeEventStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highOpenEventCnt_ == nullptr
        && return this->lowOpenEventCnt_ == nullptr && return this->middleOpenEventCnt_ == nullptr && return this->requestId_ == nullptr && return this->totalOpenEventCnt_ == nullptr; };
    // highOpenEventCnt Field Functions 
    bool hasHighOpenEventCnt() const { return this->highOpenEventCnt_ != nullptr;};
    void deleteHighOpenEventCnt() { this->highOpenEventCnt_ = nullptr;};
    inline int32_t highOpenEventCnt() const { DARABONBA_PTR_GET_DEFAULT(highOpenEventCnt_, 0) };
    inline DescribeInvadeEventStatisticResponseBody& setHighOpenEventCnt(int32_t highOpenEventCnt) { DARABONBA_PTR_SET_VALUE(highOpenEventCnt_, highOpenEventCnt) };


    // lowOpenEventCnt Field Functions 
    bool hasLowOpenEventCnt() const { return this->lowOpenEventCnt_ != nullptr;};
    void deleteLowOpenEventCnt() { this->lowOpenEventCnt_ = nullptr;};
    inline int32_t lowOpenEventCnt() const { DARABONBA_PTR_GET_DEFAULT(lowOpenEventCnt_, 0) };
    inline DescribeInvadeEventStatisticResponseBody& setLowOpenEventCnt(int32_t lowOpenEventCnt) { DARABONBA_PTR_SET_VALUE(lowOpenEventCnt_, lowOpenEventCnt) };


    // middleOpenEventCnt Field Functions 
    bool hasMiddleOpenEventCnt() const { return this->middleOpenEventCnt_ != nullptr;};
    void deleteMiddleOpenEventCnt() { this->middleOpenEventCnt_ = nullptr;};
    inline int32_t middleOpenEventCnt() const { DARABONBA_PTR_GET_DEFAULT(middleOpenEventCnt_, 0) };
    inline DescribeInvadeEventStatisticResponseBody& setMiddleOpenEventCnt(int32_t middleOpenEventCnt) { DARABONBA_PTR_SET_VALUE(middleOpenEventCnt_, middleOpenEventCnt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalOpenEventCnt Field Functions 
    bool hasTotalOpenEventCnt() const { return this->totalOpenEventCnt_ != nullptr;};
    void deleteTotalOpenEventCnt() { this->totalOpenEventCnt_ = nullptr;};
    inline int32_t totalOpenEventCnt() const { DARABONBA_PTR_GET_DEFAULT(totalOpenEventCnt_, 0) };
    inline DescribeInvadeEventStatisticResponseBody& setTotalOpenEventCnt(int32_t totalOpenEventCnt) { DARABONBA_PTR_SET_VALUE(totalOpenEventCnt_, totalOpenEventCnt) };


  protected:
    std::shared_ptr<int32_t> highOpenEventCnt_ = nullptr;
    std::shared_ptr<int32_t> lowOpenEventCnt_ = nullptr;
    std::shared_ptr<int32_t> middleOpenEventCnt_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalOpenEventCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
