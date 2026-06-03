// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class ListDataSourceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbIds, dbIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbIds, dbIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListDataSourceAttributeRequest() = default ;
    ListDataSourceAttributeRequest(const ListDataSourceAttributeRequest &) = default ;
    ListDataSourceAttributeRequest(ListDataSourceAttributeRequest &&) = default ;
    ListDataSourceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceAttributeRequest() = default ;
    ListDataSourceAttributeRequest& operator=(const ListDataSourceAttributeRequest &) = default ;
    ListDataSourceAttributeRequest& operator=(ListDataSourceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbIds_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr; };
    // dbIds Field Functions 
    bool hasDbIds() const { return this->dbIds_ != nullptr;};
    void deleteDbIds() { this->dbIds_ = nullptr;};
    inline const vector<string> & getDbIds() const { DARABONBA_PTR_GET_CONST(dbIds_, vector<string>) };
    inline vector<string> getDbIds() { DARABONBA_PTR_GET(dbIds_, vector<string>) };
    inline ListDataSourceAttributeRequest& setDbIds(const vector<string> & dbIds) { DARABONBA_PTR_SET_VALUE(dbIds_, dbIds) };
    inline ListDataSourceAttributeRequest& setDbIds(vector<string> && dbIds) { DARABONBA_PTR_SET_RVALUE(dbIds_, dbIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataSourceAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataSourceAttributeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataSourceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<vector<string>> dbIds_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
