// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINSWITCHCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINSWITCHCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginSwitchConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginSwitchConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginSwitchConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoginSwitchConfigsResponseBody() = default ;
    DescribeLoginSwitchConfigsResponseBody(const DescribeLoginSwitchConfigsResponseBody &) = default ;
    DescribeLoginSwitchConfigsResponseBody(DescribeLoginSwitchConfigsResponseBody &&) = default ;
    DescribeLoginSwitchConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginSwitchConfigsResponseBody() = default ;
    DescribeLoginSwitchConfigsResponseBody& operator=(const DescribeLoginSwitchConfigsResponseBody &) = default ;
    DescribeLoginSwitchConfigsResponseBody& operator=(DescribeLoginSwitchConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->item_ == nullptr
        && this->status_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline ConfigList& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ConfigList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The type of the alert that you enabled or disabled. Valid values:
      // 
      // *   **login_common_ip**: alerts for unapproved logon IP addresses
      // *   **login_common_time**: alerts for unapproved logon time ranges
      // *   **login_common_account**: alerts for unapproved logon accounts
      shared_ptr<string> item_ {};
      // The status of the Log Service feature. Valid values:
      // 
      // *   **0**: The feature is disabled.
      // *   **1**: The feature is enabled.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->configList_ == nullptr
        && this->count_ == nullptr && this->requestId_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeLoginSwitchConfigsResponseBody::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeLoginSwitchConfigsResponseBody::ConfigList>) };
    inline vector<DescribeLoginSwitchConfigsResponseBody::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<DescribeLoginSwitchConfigsResponseBody::ConfigList>) };
    inline DescribeLoginSwitchConfigsResponseBody& setConfigList(const vector<DescribeLoginSwitchConfigsResponseBody::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeLoginSwitchConfigsResponseBody& setConfigList(vector<DescribeLoginSwitchConfigsResponseBody::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeLoginSwitchConfigsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoginSwitchConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration item returned.
    shared_ptr<vector<DescribeLoginSwitchConfigsResponseBody::ConfigList>> configList_ {};
    // The number of returned configuration items.
    shared_ptr<int32_t> count_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
