// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupResponseBodyJobGroupResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBodyJobGroupResult& obj) { 
      DARABONBA_PTR_TO_JSON(ClientHangupNum, clientHangupNum_);
      DARABONBA_PTR_TO_JSON(FinishedNum, finishedNum_);
      DARABONBA_PTR_TO_JSON(NoInteractNum, noInteractNum_);
      DARABONBA_PTR_TO_JSON(TimeoutHangupNum, timeoutHangupNum_);
      DARABONBA_PTR_TO_JSON(UnrecognizedNum, unrecognizedNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBodyJobGroupResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientHangupNum, clientHangupNum_);
      DARABONBA_PTR_FROM_JSON(FinishedNum, finishedNum_);
      DARABONBA_PTR_FROM_JSON(NoInteractNum, noInteractNum_);
      DARABONBA_PTR_FROM_JSON(TimeoutHangupNum, timeoutHangupNum_);
      DARABONBA_PTR_FROM_JSON(UnrecognizedNum, unrecognizedNum_);
    };
    DescribeJobGroupResponseBodyJobGroupResult() = default ;
    DescribeJobGroupResponseBodyJobGroupResult(const DescribeJobGroupResponseBodyJobGroupResult &) = default ;
    DescribeJobGroupResponseBodyJobGroupResult(DescribeJobGroupResponseBodyJobGroupResult &&) = default ;
    DescribeJobGroupResponseBodyJobGroupResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBodyJobGroupResult() = default ;
    DescribeJobGroupResponseBodyJobGroupResult& operator=(const DescribeJobGroupResponseBodyJobGroupResult &) = default ;
    DescribeJobGroupResponseBodyJobGroupResult& operator=(DescribeJobGroupResponseBodyJobGroupResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientHangupNum_ == nullptr
        && return this->finishedNum_ == nullptr && return this->noInteractNum_ == nullptr && return this->timeoutHangupNum_ == nullptr && return this->unrecognizedNum_ == nullptr; };
    // clientHangupNum Field Functions 
    bool hasClientHangupNum() const { return this->clientHangupNum_ != nullptr;};
    void deleteClientHangupNum() { this->clientHangupNum_ = nullptr;};
    inline int32_t clientHangupNum() const { DARABONBA_PTR_GET_DEFAULT(clientHangupNum_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupResult& setClientHangupNum(int32_t clientHangupNum) { DARABONBA_PTR_SET_VALUE(clientHangupNum_, clientHangupNum) };


    // finishedNum Field Functions 
    bool hasFinishedNum() const { return this->finishedNum_ != nullptr;};
    void deleteFinishedNum() { this->finishedNum_ = nullptr;};
    inline int32_t finishedNum() const { DARABONBA_PTR_GET_DEFAULT(finishedNum_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupResult& setFinishedNum(int32_t finishedNum) { DARABONBA_PTR_SET_VALUE(finishedNum_, finishedNum) };


    // noInteractNum Field Functions 
    bool hasNoInteractNum() const { return this->noInteractNum_ != nullptr;};
    void deleteNoInteractNum() { this->noInteractNum_ = nullptr;};
    inline int32_t noInteractNum() const { DARABONBA_PTR_GET_DEFAULT(noInteractNum_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupResult& setNoInteractNum(int32_t noInteractNum) { DARABONBA_PTR_SET_VALUE(noInteractNum_, noInteractNum) };


    // timeoutHangupNum Field Functions 
    bool hasTimeoutHangupNum() const { return this->timeoutHangupNum_ != nullptr;};
    void deleteTimeoutHangupNum() { this->timeoutHangupNum_ = nullptr;};
    inline int32_t timeoutHangupNum() const { DARABONBA_PTR_GET_DEFAULT(timeoutHangupNum_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupResult& setTimeoutHangupNum(int32_t timeoutHangupNum) { DARABONBA_PTR_SET_VALUE(timeoutHangupNum_, timeoutHangupNum) };


    // unrecognizedNum Field Functions 
    bool hasUnrecognizedNum() const { return this->unrecognizedNum_ != nullptr;};
    void deleteUnrecognizedNum() { this->unrecognizedNum_ = nullptr;};
    inline int32_t unrecognizedNum() const { DARABONBA_PTR_GET_DEFAULT(unrecognizedNum_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupResult& setUnrecognizedNum(int32_t unrecognizedNum) { DARABONBA_PTR_SET_VALUE(unrecognizedNum_, unrecognizedNum) };


  protected:
    std::shared_ptr<int32_t> clientHangupNum_ = nullptr;
    std::shared_ptr<int32_t> finishedNum_ = nullptr;
    std::shared_ptr<int32_t> noInteractNum_ = nullptr;
    std::shared_ptr<int32_t> timeoutHangupNum_ = nullptr;
    std::shared_ptr<int32_t> unrecognizedNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
