// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPredefinedScopesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPredefinedScopesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPredefinedScopesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
    };
    ListPredefinedScopesRequest() = default ;
    ListPredefinedScopesRequest(const ListPredefinedScopesRequest &) = default ;
    ListPredefinedScopesRequest(ListPredefinedScopesRequest &&) = default ;
    ListPredefinedScopesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPredefinedScopesRequest() = default ;
    ListPredefinedScopesRequest& operator=(const ListPredefinedScopesRequest &) = default ;
    ListPredefinedScopesRequest& operator=(ListPredefinedScopesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListPredefinedScopesRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


  protected:
    // The type of the application. Valid values:
    // 
    // *   WebApp
    // *   NativeApp
    // *   ServerApp
    // 
    // If this parameter is empty, the permissions on all types of applications are queried.
    std::shared_ptr<string> appType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
