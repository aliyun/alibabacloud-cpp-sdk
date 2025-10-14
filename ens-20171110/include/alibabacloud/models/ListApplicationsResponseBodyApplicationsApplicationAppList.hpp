// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONAPPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsResponseBodyApplicationsApplicationAppListApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListApplicationsResponseBodyApplicationsApplicationAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplicationsApplicationAppList& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplicationsApplicationAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
    };
    ListApplicationsResponseBodyApplicationsApplicationAppList() = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppList(const ListApplicationsResponseBodyApplicationsApplicationAppList &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppList(ListApplicationsResponseBodyApplicationsApplicationAppList &&) = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplicationsApplicationAppList() = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppList& operator=(const ListApplicationsResponseBodyApplicationsApplicationAppList &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppList& operator=(ListApplicationsResponseBodyApplicationsApplicationAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp> & app() const { DARABONBA_PTR_GET_CONST(app_, vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp>) };
    inline vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp> app() { DARABONBA_PTR_GET(app_, vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp>) };
    inline ListApplicationsResponseBodyApplicationsApplicationAppList& setApp(const vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp> & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline ListApplicationsResponseBodyApplicationsApplicationAppList& setApp(vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp> && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationsResponseBodyApplicationsApplicationAppListApp>> app_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
