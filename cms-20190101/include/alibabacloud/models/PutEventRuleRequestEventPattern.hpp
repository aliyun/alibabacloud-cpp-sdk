// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULEREQUESTEVENTPATTERN_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULEREQUESTEVENTPATTERN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleRequestEventPattern : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleRequestEventPattern& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(LevelList, levelList_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(SQLFilter, SQLFilter_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleRequestEventPattern& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(SQLFilter, SQLFilter_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    PutEventRuleRequestEventPattern() = default ;
    PutEventRuleRequestEventPattern(const PutEventRuleRequestEventPattern &) = default ;
    PutEventRuleRequestEventPattern(PutEventRuleRequestEventPattern &&) = default ;
    PutEventRuleRequestEventPattern(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleRequestEventPattern() = default ;
    PutEventRuleRequestEventPattern& operator=(const PutEventRuleRequestEventPattern &) = default ;
    PutEventRuleRequestEventPattern& operator=(PutEventRuleRequestEventPattern &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFilters_ == nullptr
        && return this->eventTypeList_ == nullptr && return this->levelList_ == nullptr && return this->nameList_ == nullptr && return this->product_ == nullptr && return this->SQLFilter_ == nullptr
        && return this->statusList_ == nullptr; };
    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline string customFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
    inline PutEventRuleRequestEventPattern& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline const vector<string> & eventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, vector<string>) };
    inline vector<string> eventTypeList() { DARABONBA_PTR_GET(eventTypeList_, vector<string>) };
    inline PutEventRuleRequestEventPattern& setEventTypeList(const vector<string> & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
    inline PutEventRuleRequestEventPattern& setEventTypeList(vector<string> && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


    // levelList Field Functions 
    bool hasLevelList() const { return this->levelList_ != nullptr;};
    void deleteLevelList() { this->levelList_ = nullptr;};
    inline const vector<string> & levelList() const { DARABONBA_PTR_GET_CONST(levelList_, vector<string>) };
    inline vector<string> levelList() { DARABONBA_PTR_GET(levelList_, vector<string>) };
    inline PutEventRuleRequestEventPattern& setLevelList(const vector<string> & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
    inline PutEventRuleRequestEventPattern& setLevelList(vector<string> && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline PutEventRuleRequestEventPattern& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline PutEventRuleRequestEventPattern& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline PutEventRuleRequestEventPattern& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // SQLFilter Field Functions 
    bool hasSQLFilter() const { return this->SQLFilter_ != nullptr;};
    void deleteSQLFilter() { this->SQLFilter_ = nullptr;};
    inline string SQLFilter() const { DARABONBA_PTR_GET_DEFAULT(SQLFilter_, "") };
    inline PutEventRuleRequestEventPattern& setSQLFilter(string SQLFilter) { DARABONBA_PTR_SET_VALUE(SQLFilter_, SQLFilter) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline PutEventRuleRequestEventPattern& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline PutEventRuleRequestEventPattern& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The keyword that is used to filter events. If the content of an event contains the specified keyword, an alert is automatically triggered.
    std::shared_ptr<string> customFilters_ = nullptr;
    std::shared_ptr<vector<string>> eventTypeList_ = nullptr;
    std::shared_ptr<vector<string>> levelList_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    // The type of the cloud service. Valid values of N: 1 to 50.
    // 
    // >  You can call the DescribeSystemEventMetaList operation to query the cloud services that support event-triggered alerts. For more information, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    // The SQL condition that is used to filter events. If the content of an event meets the specified SQL condition, an alert is automatically triggered.
    // 
    // >  The syntax of SQL event filtering is consistent with the query syntax of Log Service.
    std::shared_ptr<string> SQLFilter_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
