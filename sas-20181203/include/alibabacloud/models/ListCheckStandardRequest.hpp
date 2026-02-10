// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKSTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKSTANDARDREQUEST_HPP_
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
  class ListCheckStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceSubTypes, instanceSubTypes_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceSubTypes, instanceSubTypes_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ListCheckStandardRequest() = default ;
    ListCheckStandardRequest(const ListCheckStandardRequest &) = default ;
    ListCheckStandardRequest(ListCheckStandardRequest &&) = default ;
    ListCheckStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckStandardRequest() = default ;
    ListCheckStandardRequest& operator=(const ListCheckStandardRequest &) = default ;
    ListCheckStandardRequest& operator=(ListCheckStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->instanceSubTypes_ == nullptr && this->instanceTypes_ == nullptr && this->lang_ == nullptr && this->taskSources_ == nullptr && this->vendors_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListCheckStandardRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListCheckStandardRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceSubTypes Field Functions 
    bool hasInstanceSubTypes() const { return this->instanceSubTypes_ != nullptr;};
    void deleteInstanceSubTypes() { this->instanceSubTypes_ = nullptr;};
    inline const vector<string> & getInstanceSubTypes() const { DARABONBA_PTR_GET_CONST(instanceSubTypes_, vector<string>) };
    inline vector<string> getInstanceSubTypes() { DARABONBA_PTR_GET(instanceSubTypes_, vector<string>) };
    inline ListCheckStandardRequest& setInstanceSubTypes(const vector<string> & instanceSubTypes) { DARABONBA_PTR_SET_VALUE(instanceSubTypes_, instanceSubTypes) };
    inline ListCheckStandardRequest& setInstanceSubTypes(vector<string> && instanceSubTypes) { DARABONBA_PTR_SET_RVALUE(instanceSubTypes_, instanceSubTypes) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ListCheckStandardRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ListCheckStandardRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckStandardRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & getTaskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> getTaskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline ListCheckStandardRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline ListCheckStandardRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> getVendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline ListCheckStandardRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ListCheckStandardRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The instance IDs of the cloud services to which the check items belong.
    shared_ptr<vector<string>> instanceIds_ {};
    // The subtypes of cloud services.
    shared_ptr<vector<string>> instanceSubTypes_ {};
    // The asset types of cloud services.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // List of task sources.
    shared_ptr<vector<string>> taskSources_ {};
    // The cloud service providers. Valid values:
    // 
    // *   **ALIYUN**: Alibaba Cloud.
    // *   **TENCENT**: Tencent Cloud.
    // *   **HUAWEICLOUD**: Huawei Cloud.
    // *   **MICROSOFT**: Microsoft Azure.
    // *   **AWS**: Amazon Web Services (AWS).
    shared_ptr<vector<string>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
