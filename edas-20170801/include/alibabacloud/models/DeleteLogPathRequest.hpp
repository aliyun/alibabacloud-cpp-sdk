// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteLogPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    DeleteLogPathRequest() = default ;
    DeleteLogPathRequest(const DeleteLogPathRequest &) = default ;
    DeleteLogPathRequest(DeleteLogPathRequest &&) = default ;
    DeleteLogPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogPathRequest() = default ;
    DeleteLogPathRequest& operator=(const DeleteLogPathRequest &) = default ;
    DeleteLogPathRequest& operator=(DeleteLogPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->path_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteLogPathRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DeleteLogPathRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The absolute path of the log directory that you want to remove. The value must start and end with a forward slash (`/`) and must contain `/log` or `/logs`. The following directories are the default log directories in Enterprise Distributed Application Service (EDAS):
    // 
    // *   /home/admin/edas-container/logs/
    // *   /home/admin/taobao-tomcat-7.0.59/logs/
    // *   /home/admin/taobao-tomcat-production-7.0.59.3/logs/
    // *   /home/admin/taobao-tomcat-production-7.0.70/logs/
    // *   /home/admin/edas-agent/logs/
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
