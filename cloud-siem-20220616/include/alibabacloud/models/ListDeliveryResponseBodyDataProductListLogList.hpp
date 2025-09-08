// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODYDATAPRODUCTLISTLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODYDATAPRODUCTLISTLOGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeliveryResponseBodyDataProductListLogListExtraParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDeliveryResponseBodyDataProductListLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryResponseBodyDataProductListLogList& obj) { 
      DARABONBA_PTR_TO_JSON(CanOperateOrNot, canOperateOrNot_);
      DARABONBA_PTR_TO_JSON(ExtraParameters, extraParameters_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogName, logName_);
      DARABONBA_PTR_TO_JSON(LogNameEn, logNameEn_);
      DARABONBA_PTR_TO_JSON(LogNameKey, logNameKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryResponseBodyDataProductListLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(CanOperateOrNot, canOperateOrNot_);
      DARABONBA_PTR_FROM_JSON(ExtraParameters, extraParameters_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogName, logName_);
      DARABONBA_PTR_FROM_JSON(LogNameEn, logNameEn_);
      DARABONBA_PTR_FROM_JSON(LogNameKey, logNameKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    ListDeliveryResponseBodyDataProductListLogList() = default ;
    ListDeliveryResponseBodyDataProductListLogList(const ListDeliveryResponseBodyDataProductListLogList &) = default ;
    ListDeliveryResponseBodyDataProductListLogList(ListDeliveryResponseBodyDataProductListLogList &&) = default ;
    ListDeliveryResponseBodyDataProductListLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryResponseBodyDataProductListLogList() = default ;
    ListDeliveryResponseBodyDataProductListLogList& operator=(const ListDeliveryResponseBodyDataProductListLogList &) = default ;
    ListDeliveryResponseBodyDataProductListLogList& operator=(ListDeliveryResponseBodyDataProductListLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canOperateOrNot_ != nullptr
        && this->extraParameters_ != nullptr && this->logCode_ != nullptr && this->logName_ != nullptr && this->logNameEn_ != nullptr && this->logNameKey_ != nullptr
        && this->status_ != nullptr && this->topic_ != nullptr; };
    // canOperateOrNot Field Functions 
    bool hasCanOperateOrNot() const { return this->canOperateOrNot_ != nullptr;};
    void deleteCanOperateOrNot() { this->canOperateOrNot_ = nullptr;};
    inline bool canOperateOrNot() const { DARABONBA_PTR_GET_DEFAULT(canOperateOrNot_, false) };
    inline ListDeliveryResponseBodyDataProductListLogList& setCanOperateOrNot(bool canOperateOrNot) { DARABONBA_PTR_SET_VALUE(canOperateOrNot_, canOperateOrNot) };


    // extraParameters Field Functions 
    bool hasExtraParameters() const { return this->extraParameters_ != nullptr;};
    void deleteExtraParameters() { this->extraParameters_ = nullptr;};
    inline const vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters> & extraParameters() const { DARABONBA_PTR_GET_CONST(extraParameters_, vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters>) };
    inline vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters> extraParameters() { DARABONBA_PTR_GET(extraParameters_, vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters>) };
    inline ListDeliveryResponseBodyDataProductListLogList& setExtraParameters(const vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters> & extraParameters) { DARABONBA_PTR_SET_VALUE(extraParameters_, extraParameters) };
    inline ListDeliveryResponseBodyDataProductListLogList& setExtraParameters(vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters> && extraParameters) { DARABONBA_PTR_SET_RVALUE(extraParameters_, extraParameters) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline ListDeliveryResponseBodyDataProductListLogList& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logName Field Functions 
    bool hasLogName() const { return this->logName_ != nullptr;};
    void deleteLogName() { this->logName_ = nullptr;};
    inline string logName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
    inline ListDeliveryResponseBodyDataProductListLogList& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


    // logNameEn Field Functions 
    bool hasLogNameEn() const { return this->logNameEn_ != nullptr;};
    void deleteLogNameEn() { this->logNameEn_ = nullptr;};
    inline string logNameEn() const { DARABONBA_PTR_GET_DEFAULT(logNameEn_, "") };
    inline ListDeliveryResponseBodyDataProductListLogList& setLogNameEn(string logNameEn) { DARABONBA_PTR_SET_VALUE(logNameEn_, logNameEn) };


    // logNameKey Field Functions 
    bool hasLogNameKey() const { return this->logNameKey_ != nullptr;};
    void deleteLogNameKey() { this->logNameKey_ = nullptr;};
    inline string logNameKey() const { DARABONBA_PTR_GET_DEFAULT(logNameKey_, "") };
    inline ListDeliveryResponseBodyDataProductListLogList& setLogNameKey(string logNameKey) { DARABONBA_PTR_SET_VALUE(logNameKey_, logNameKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ListDeliveryResponseBodyDataProductListLogList& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListDeliveryResponseBodyDataProductListLogList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // Indicates whether the log delivery feature can be enabled or disabled. The feature can be enabled or disabled only by the administrator of the threat analysis feature. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> canOperateOrNot_ = nullptr;
    // The extended parameter.
    std::shared_ptr<vector<Models::ListDeliveryResponseBodyDataProductListLogListExtraParameters>> extraParameters_ = nullptr;
    // The code of the log.
    std::shared_ptr<string> logCode_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> logName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> logNameEn_ = nullptr;
    // The language code of the log that is used to indicate the language in which the log is displayed.
    std::shared_ptr<string> logNameKey_ = nullptr;
    // The status of the log delivery. Valid values:
    // 
    // *   true: The logs are being delivered.
    // *   false: The log delivery feature is disabled.
    std::shared_ptr<bool> status_ = nullptr;
    // The topic of the log in the Logstore. The value is an index field in the Logstore that can be used to distinguish different logs.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
