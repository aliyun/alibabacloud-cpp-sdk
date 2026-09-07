// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAFANAWORKSPACEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAFANAWORKSPACEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListGrafanaWorkspaceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrafanaWorkspaceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrafanaWorkspaceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListGrafanaWorkspaceAccountRequest() = default ;
    ListGrafanaWorkspaceAccountRequest(const ListGrafanaWorkspaceAccountRequest &) = default ;
    ListGrafanaWorkspaceAccountRequest(ListGrafanaWorkspaceAccountRequest &&) = default ;
    ListGrafanaWorkspaceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrafanaWorkspaceAccountRequest() = default ;
    ListGrafanaWorkspaceAccountRequest& operator=(const ListGrafanaWorkspaceAccountRequest &) = default ;
    ListGrafanaWorkspaceAccountRequest& operator=(ListGrafanaWorkspaceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && this->grafanaWorkspaceId_ == nullptr && this->regionId_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline ListGrafanaWorkspaceAccountRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline ListGrafanaWorkspaceAccountRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListGrafanaWorkspaceAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> aliyunLang_ {};
    // This parameter is required.
    shared_ptr<string> grafanaWorkspaceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
