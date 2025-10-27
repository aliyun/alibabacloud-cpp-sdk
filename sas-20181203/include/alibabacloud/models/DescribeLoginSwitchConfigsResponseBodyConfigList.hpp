// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINSWITCHCONFIGSRESPONSEBODYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINSWITCHCONFIGSRESPONSEBODYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginSwitchConfigsResponseBodyConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginSwitchConfigsResponseBodyConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginSwitchConfigsResponseBodyConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLoginSwitchConfigsResponseBodyConfigList() = default ;
    DescribeLoginSwitchConfigsResponseBodyConfigList(const DescribeLoginSwitchConfigsResponseBodyConfigList &) = default ;
    DescribeLoginSwitchConfigsResponseBodyConfigList(DescribeLoginSwitchConfigsResponseBodyConfigList &&) = default ;
    DescribeLoginSwitchConfigsResponseBodyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginSwitchConfigsResponseBodyConfigList() = default ;
    DescribeLoginSwitchConfigsResponseBodyConfigList& operator=(const DescribeLoginSwitchConfigsResponseBodyConfigList &) = default ;
    DescribeLoginSwitchConfigsResponseBodyConfigList& operator=(DescribeLoginSwitchConfigsResponseBodyConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && return this->status_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribeLoginSwitchConfigsResponseBodyConfigList& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeLoginSwitchConfigsResponseBodyConfigList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the alert that you enabled or disabled. Valid values:
    // 
    // *   **login_common_ip**: alerts for unapproved logon IP addresses
    // *   **login_common_time**: alerts for unapproved logon time ranges
    // *   **login_common_account**: alerts for unapproved logon accounts
    std::shared_ptr<string> item_ = nullptr;
    // The status of the Log Service feature. Valid values:
    // 
    // *   **0**: The feature is disabled.
    // *   **1**: The feature is enabled.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
