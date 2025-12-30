// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetCommonLogDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonLogDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(HiddenProcess, hiddenProcess_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonLogDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(HiddenProcess, hiddenProcess_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    GetCommonLogDetailRequest() = default ;
    GetCommonLogDetailRequest(const GetCommonLogDetailRequest &) = default ;
    GetCommonLogDetailRequest(GetCommonLogDetailRequest &&) = default ;
    GetCommonLogDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonLogDetailRequest() = default ;
    GetCommonLogDetailRequest& operator=(const GetCommonLogDetailRequest &) = default ;
    GetCommonLogDetailRequest& operator=(GetCommonLogDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->hiddenProcess_ == nullptr && this->logRequestId_ == nullptr && this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetCommonLogDetailRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // hiddenProcess Field Functions 
    bool hasHiddenProcess() const { return this->hiddenProcess_ != nullptr;};
    void deleteHiddenProcess() { this->hiddenProcess_ = nullptr;};
    inline bool getHiddenProcess() const { DARABONBA_PTR_GET_DEFAULT(hiddenProcess_, false) };
    inline GetCommonLogDetailRequest& setHiddenProcess(bool hiddenProcess) { DARABONBA_PTR_SET_VALUE(hiddenProcess_, hiddenProcess) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string getLogRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline GetCommonLogDetailRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetCommonLogDetailRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The start time of the time range within which the logs that you want to query were generated. The time is a timestamp. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> from_ {};
    // Specifies whether to hide the process of each step. Valid values:
    // 
    // *   true: hides the process and returns only the result log of each step.
    // *   false: does not hide the process and displays the start and result logs of each step.
    // 
    // Default value: true.
    shared_ptr<bool> hiddenProcess_ {};
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> logRequestId_ {};
    // The end time of the time range within which the logs that you want to query were generated. The time is a timestamp. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
