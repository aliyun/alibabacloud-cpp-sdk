// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusDashboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusDashboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusDashboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
    };
    ListPrometheusDashboardsRequest() = default ;
    ListPrometheusDashboardsRequest(const ListPrometheusDashboardsRequest &) = default ;
    ListPrometheusDashboardsRequest(ListPrometheusDashboardsRequest &&) = default ;
    ListPrometheusDashboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusDashboardsRequest() = default ;
    ListPrometheusDashboardsRequest& operator=(const ListPrometheusDashboardsRequest &) = default ;
    ListPrometheusDashboardsRequest& operator=(ListPrometheusDashboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline ListPrometheusDashboardsRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusDashboardsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> aliyunLang_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
