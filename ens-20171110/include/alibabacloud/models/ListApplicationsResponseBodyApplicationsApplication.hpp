// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationsResponseBodyApplicationsApplicationAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListApplicationsResponseBodyApplicationsApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplicationsApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplicationsApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
    };
    ListApplicationsResponseBodyApplicationsApplication() = default ;
    ListApplicationsResponseBodyApplicationsApplication(const ListApplicationsResponseBodyApplicationsApplication &) = default ;
    ListApplicationsResponseBodyApplicationsApplication(ListApplicationsResponseBodyApplicationsApplication &&) = default ;
    ListApplicationsResponseBodyApplicationsApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplicationsApplication() = default ;
    ListApplicationsResponseBodyApplicationsApplication& operator=(const ListApplicationsResponseBodyApplicationsApplication &) = default ;
    ListApplicationsResponseBodyApplicationsApplication& operator=(ListApplicationsResponseBodyApplicationsApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appList_ != nullptr
        && this->clusterName_ != nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const Models::ListApplicationsResponseBodyApplicationsApplicationAppList & appList() const { DARABONBA_PTR_GET_CONST(appList_, Models::ListApplicationsResponseBodyApplicationsApplicationAppList) };
    inline Models::ListApplicationsResponseBodyApplicationsApplicationAppList appList() { DARABONBA_PTR_GET(appList_, Models::ListApplicationsResponseBodyApplicationsApplicationAppList) };
    inline ListApplicationsResponseBodyApplicationsApplication& setAppList(const Models::ListApplicationsResponseBodyApplicationsApplicationAppList & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline ListApplicationsResponseBodyApplicationsApplication& setAppList(Models::ListApplicationsResponseBodyApplicationsApplicationAppList && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListApplicationsResponseBodyApplicationsApplication& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


  protected:
    // Details about the application.
    std::shared_ptr<Models::ListApplicationsResponseBodyApplicationsApplicationAppList> appList_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
