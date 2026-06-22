// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYREQUEST_HPP_
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
  class GetCheckSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsItemStatistic, isItemStatistic_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsItemStatistic, isItemStatistic_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    GetCheckSummaryRequest() = default ;
    GetCheckSummaryRequest(const GetCheckSummaryRequest &) = default ;
    GetCheckSummaryRequest(GetCheckSummaryRequest &&) = default ;
    GetCheckSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryRequest() = default ;
    GetCheckSummaryRequest& operator=(const GetCheckSummaryRequest &) = default ;
    GetCheckSummaryRequest& operator=(GetCheckSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isItemStatistic_ == nullptr
        && this->lang_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->taskSources_ == nullptr && this->vendors_ == nullptr; };
    // isItemStatistic Field Functions 
    bool hasIsItemStatistic() const { return this->isItemStatistic_ != nullptr;};
    void deleteIsItemStatistic() { this->isItemStatistic_ = nullptr;};
    inline bool getIsItemStatistic() const { DARABONBA_PTR_GET_DEFAULT(isItemStatistic_, false) };
    inline GetCheckSummaryRequest& setIsItemStatistic(bool isItemStatistic) { DARABONBA_PTR_SET_VALUE(isItemStatistic_, isItemStatistic) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetCheckSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline string getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, "") };
    inline GetCheckSummaryRequest& setResourceDirectoryAccountId(string resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & getTaskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> getTaskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline GetCheckSummaryRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline GetCheckSummaryRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> getVendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline GetCheckSummaryRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline GetCheckSummaryRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // Specifies whether to return check item statistics information, including the number of check items published by the system and the number of check items currently owned by the user. Default value: **false**. Valid values:
    // - **true**: Returns the statistics information.
    // - **false**: Does not return the statistics information.
    shared_ptr<bool> isItemStatistic_ {};
    // The language type for requests and responses.
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The ID of the member accounts in the resource directory.
    // >Invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<string> resourceDirectoryAccountId_ {};
    // The list of task sources.
    shared_ptr<vector<string>> taskSources_ {};
    // The list of cloud service providers.
    shared_ptr<vector<string>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
