// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSUMERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSUMERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeConsumerGroupResponseBodyConsumerChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeConsumerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerChannels, consumerChannels_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerChannels, consumerChannels_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeConsumerGroupResponseBody() = default ;
    DescribeConsumerGroupResponseBody(const DescribeConsumerGroupResponseBody &) = default ;
    DescribeConsumerGroupResponseBody(DescribeConsumerGroupResponseBody &&) = default ;
    DescribeConsumerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsumerGroupResponseBody() = default ;
    DescribeConsumerGroupResponseBody& operator=(const DescribeConsumerGroupResponseBody &) = default ;
    DescribeConsumerGroupResponseBody& operator=(DescribeConsumerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerChannels_ == nullptr
        && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // consumerChannels Field Functions 
    bool hasConsumerChannels() const { return this->consumerChannels_ != nullptr;};
    void deleteConsumerChannels() { this->consumerChannels_ = nullptr;};
    inline const DescribeConsumerGroupResponseBodyConsumerChannels & consumerChannels() const { DARABONBA_PTR_GET_CONST(consumerChannels_, DescribeConsumerGroupResponseBodyConsumerChannels) };
    inline DescribeConsumerGroupResponseBodyConsumerChannels consumerChannels() { DARABONBA_PTR_GET(consumerChannels_, DescribeConsumerGroupResponseBodyConsumerChannels) };
    inline DescribeConsumerGroupResponseBody& setConsumerChannels(const DescribeConsumerGroupResponseBodyConsumerChannels & consumerChannels) { DARABONBA_PTR_SET_VALUE(consumerChannels_, consumerChannels) };
    inline DescribeConsumerGroupResponseBody& setConsumerChannels(DescribeConsumerGroupResponseBodyConsumerChannels && consumerChannels) { DARABONBA_PTR_SET_RVALUE(consumerChannels_, consumerChannels) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeConsumerGroupResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeConsumerGroupResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeConsumerGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeConsumerGroupResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConsumerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeConsumerGroupResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeConsumerGroupResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of consumer groups.
    std::shared_ptr<DescribeConsumerGroupResponseBodyConsumerChannels> consumerChannels_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The maximum number of consumer groups that can be displayed on one page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of consumer groups.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
