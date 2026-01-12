// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeConfigHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigHistoryItems, configHistoryItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigHistoryItems, configHistoryItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConfigHistoryResponseBody() = default ;
    DescribeConfigHistoryResponseBody(const DescribeConfigHistoryResponseBody &) = default ;
    DescribeConfigHistoryResponseBody(DescribeConfigHistoryResponseBody &&) = default ;
    DescribeConfigHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigHistoryResponseBody() = default ;
    DescribeConfigHistoryResponseBody& operator=(const DescribeConfigHistoryResponseBody &) = default ;
    DescribeConfigHistoryResponseBody& operator=(DescribeConfigHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigHistoryItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigHistoryItems& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeId, changeId_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigHistoryItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeId, changeId_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      ConfigHistoryItems() = default ;
      ConfigHistoryItems(const ConfigHistoryItems &) = default ;
      ConfigHistoryItems(ConfigHistoryItems &&) = default ;
      ConfigHistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigHistoryItems() = default ;
      ConfigHistoryItems& operator=(const ConfigHistoryItems &) = default ;
      ConfigHistoryItems& operator=(ConfigHistoryItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->changeId_ == nullptr
        && this->ownerId_ == nullptr && this->reason_ == nullptr && this->success_ == nullptr && this->time_ == nullptr; };
      // changeId Field Functions 
      bool hasChangeId() const { return this->changeId_ != nullptr;};
      void deleteChangeId() { this->changeId_ = nullptr;};
      inline string getChangeId() const { DARABONBA_PTR_GET_DEFAULT(changeId_, "") };
      inline ConfigHistoryItems& setChangeId(string changeId) { DARABONBA_PTR_SET_VALUE(changeId_, changeId) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline ConfigHistoryItems& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ConfigHistoryItems& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ConfigHistoryItems& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline ConfigHistoryItems& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The ID of the change record.
      shared_ptr<string> changeId_ {};
      // The user ID (UID) of the Alibaba Cloud account.
      shared_ptr<string> ownerId_ {};
      // The reason for the setting modification of the configuration parameters.
      shared_ptr<string> reason_ {};
      // Indicates whether the setting modification of the configuration parameters took effect. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> success_ {};
      // The time when the values of the configuration parameters were changed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->configHistoryItems_ == nullptr
        && this->requestId_ == nullptr; };
    // configHistoryItems Field Functions 
    bool hasConfigHistoryItems() const { return this->configHistoryItems_ != nullptr;};
    void deleteConfigHistoryItems() { this->configHistoryItems_ = nullptr;};
    inline const vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems> & getConfigHistoryItems() const { DARABONBA_PTR_GET_CONST(configHistoryItems_, vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems>) };
    inline vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems> getConfigHistoryItems() { DARABONBA_PTR_GET(configHistoryItems_, vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems>) };
    inline DescribeConfigHistoryResponseBody& setConfigHistoryItems(const vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems> & configHistoryItems) { DARABONBA_PTR_SET_VALUE(configHistoryItems_, configHistoryItems) };
    inline DescribeConfigHistoryResponseBody& setConfigHistoryItems(vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems> && configHistoryItems) { DARABONBA_PTR_SET_RVALUE(configHistoryItems_, configHistoryItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The change records of the configuration parameters.
    shared_ptr<vector<DescribeConfigHistoryResponseBody::ConfigHistoryItems>> configHistoryItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
