// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckScaleOutBalancedResponseBodyTableDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckScaleOutBalancedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckScaleOutBalancedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCode, checkCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_TO_JSON(TimeDuration, timeDuration_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CheckScaleOutBalancedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCode, checkCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_FROM_JSON(TimeDuration, timeDuration_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CheckScaleOutBalancedResponseBody() = default ;
    CheckScaleOutBalancedResponseBody(const CheckScaleOutBalancedResponseBody &) = default ;
    CheckScaleOutBalancedResponseBody(CheckScaleOutBalancedResponseBody &&) = default ;
    CheckScaleOutBalancedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckScaleOutBalancedResponseBody() = default ;
    CheckScaleOutBalancedResponseBody& operator=(const CheckScaleOutBalancedResponseBody &) = default ;
    CheckScaleOutBalancedResponseBody& operator=(CheckScaleOutBalancedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkCode_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->tableDetails_ == nullptr && return this->timeDuration_ == nullptr
        && return this->totalCount_ == nullptr; };
    // checkCode Field Functions 
    bool hasCheckCode() const { return this->checkCode_ != nullptr;};
    void deleteCheckCode() { this->checkCode_ = nullptr;};
    inline string checkCode() const { DARABONBA_PTR_GET_DEFAULT(checkCode_, "") };
    inline CheckScaleOutBalancedResponseBody& setCheckCode(string checkCode) { DARABONBA_PTR_SET_VALUE(checkCode_, checkCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline CheckScaleOutBalancedResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CheckScaleOutBalancedResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckScaleOutBalancedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableDetails Field Functions 
    bool hasTableDetails() const { return this->tableDetails_ != nullptr;};
    void deleteTableDetails() { this->tableDetails_ = nullptr;};
    inline const CheckScaleOutBalancedResponseBodyTableDetails & tableDetails() const { DARABONBA_PTR_GET_CONST(tableDetails_, CheckScaleOutBalancedResponseBodyTableDetails) };
    inline CheckScaleOutBalancedResponseBodyTableDetails tableDetails() { DARABONBA_PTR_GET(tableDetails_, CheckScaleOutBalancedResponseBodyTableDetails) };
    inline CheckScaleOutBalancedResponseBody& setTableDetails(const CheckScaleOutBalancedResponseBodyTableDetails & tableDetails) { DARABONBA_PTR_SET_VALUE(tableDetails_, tableDetails) };
    inline CheckScaleOutBalancedResponseBody& setTableDetails(CheckScaleOutBalancedResponseBodyTableDetails && tableDetails) { DARABONBA_PTR_SET_RVALUE(tableDetails_, tableDetails) };


    // timeDuration Field Functions 
    bool hasTimeDuration() const { return this->timeDuration_ != nullptr;};
    void deleteTimeDuration() { this->timeDuration_ = nullptr;};
    inline string timeDuration() const { DARABONBA_PTR_GET_DEFAULT(timeDuration_, "") };
    inline CheckScaleOutBalancedResponseBody& setTimeDuration(string timeDuration) { DARABONBA_PTR_SET_VALUE(timeDuration_, timeDuration) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CheckScaleOutBalancedResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The check result. Valid values:
    // 
    // *   **400**: The cluster failed the check.
    // *   **200**: The cluster passed the check.
    std::shared_ptr<string> checkCode_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The error information returned for a check failure.
    std::shared_ptr<CheckScaleOutBalancedResponseBodyTableDetails> tableDetails_ = nullptr;
    // The amount of time that is required for the migration and scale-out. Unit: minutes.
    std::shared_ptr<string> timeDuration_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
