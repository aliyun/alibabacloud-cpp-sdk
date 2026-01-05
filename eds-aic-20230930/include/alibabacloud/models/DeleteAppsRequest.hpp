// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdList, appIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdList, appIdList_);
    };
    DeleteAppsRequest() = default ;
    DeleteAppsRequest(const DeleteAppsRequest &) = default ;
    DeleteAppsRequest(DeleteAppsRequest &&) = default ;
    DeleteAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppsRequest() = default ;
    DeleteAppsRequest& operator=(const DeleteAppsRequest &) = default ;
    DeleteAppsRequest& operator=(DeleteAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIdList_ == nullptr; };
    // appIdList Field Functions 
    bool hasAppIdList() const { return this->appIdList_ != nullptr;};
    void deleteAppIdList() { this->appIdList_ = nullptr;};
    inline const vector<string> & getAppIdList() const { DARABONBA_PTR_GET_CONST(appIdList_, vector<string>) };
    inline vector<string> getAppIdList() { DARABONBA_PTR_GET(appIdList_, vector<string>) };
    inline DeleteAppsRequest& setAppIdList(const vector<string> & appIdList) { DARABONBA_PTR_SET_VALUE(appIdList_, appIdList) };
    inline DeleteAppsRequest& setAppIdList(vector<string> && appIdList) { DARABONBA_PTR_SET_RVALUE(appIdList_, appIdList) };


  protected:
    // The IDs of the applications.
    shared_ptr<vector<string>> appIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
