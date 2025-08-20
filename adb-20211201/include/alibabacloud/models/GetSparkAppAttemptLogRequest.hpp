// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppAttemptLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppAttemptLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_TO_JSON(LogLength, logLength_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppAttemptLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_FROM_JSON(LogLength, logLength_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetSparkAppAttemptLogRequest() = default ;
    GetSparkAppAttemptLogRequest(const GetSparkAppAttemptLogRequest &) = default ;
    GetSparkAppAttemptLogRequest(GetSparkAppAttemptLogRequest &&) = default ;
    GetSparkAppAttemptLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppAttemptLogRequest() = default ;
    GetSparkAppAttemptLogRequest& operator=(const GetSparkAppAttemptLogRequest &) = default ;
    GetSparkAppAttemptLogRequest& operator=(GetSparkAppAttemptLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attemptId_ != nullptr
        && this->logLength_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // attemptId Field Functions 
    bool hasAttemptId() const { return this->attemptId_ != nullptr;};
    void deleteAttemptId() { this->attemptId_ = nullptr;};
    inline string attemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
    inline GetSparkAppAttemptLogRequest& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


    // logLength Field Functions 
    bool hasLogLength() const { return this->logLength_ != nullptr;};
    void deleteLogLength() { this->logLength_ = nullptr;};
    inline int64_t logLength() const { DARABONBA_PTR_GET_DEFAULT(logLength_, 0L) };
    inline GetSparkAppAttemptLogRequest& setLogLength(int64_t logLength) { DARABONBA_PTR_SET_VALUE(logLength_, logLength) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetSparkAppAttemptLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetSparkAppAttemptLogRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the log.
    // 
    // > You can call the [ListSparkAppAttempts](https://help.aliyun.com/document_detail/455887.html) operation to query the information about the retry attempts of a Spark application, including the retry log IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> attemptId_ = nullptr;
    // The number of log entries to return. Valid values: 1 to 500. Default value: 300.
    std::shared_ptr<int64_t> logLength_ = nullptr;
    // The log offset.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
