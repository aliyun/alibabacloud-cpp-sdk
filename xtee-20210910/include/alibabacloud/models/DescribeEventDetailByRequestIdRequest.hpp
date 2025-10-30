// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILBYREQUESTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILBYREQUESTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventDetailByRequestIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailByRequestIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sRequestId, sRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailByRequestIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sRequestId, sRequestId_);
    };
    DescribeEventDetailByRequestIdRequest() = default ;
    DescribeEventDetailByRequestIdRequest(const DescribeEventDetailByRequestIdRequest &) = default ;
    DescribeEventDetailByRequestIdRequest(DescribeEventDetailByRequestIdRequest &&) = default ;
    DescribeEventDetailByRequestIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailByRequestIdRequest() = default ;
    DescribeEventDetailByRequestIdRequest& operator=(const DescribeEventDetailByRequestIdRequest &) = default ;
    DescribeEventDetailByRequestIdRequest& operator=(DescribeEventDetailByRequestIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->eventCode_ == nullptr && return this->eventTime_ == nullptr && return this->regId_ == nullptr && return this->sRequestId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventDetailByRequestIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeEventDetailByRequestIdRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline DescribeEventDetailByRequestIdRequest& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventDetailByRequestIdRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sRequestId Field Functions 
    bool hasSRequestId() const { return this->sRequestId_ != nullptr;};
    void deleteSRequestId() { this->sRequestId_ = nullptr;};
    inline string sRequestId() const { DARABONBA_PTR_GET_DEFAULT(sRequestId_, "") };
    inline DescribeEventDetailByRequestIdRequest& setSRequestId(string sRequestId) { DARABONBA_PTR_SET_VALUE(sRequestId_, sRequestId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event execution time
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
    // Request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
