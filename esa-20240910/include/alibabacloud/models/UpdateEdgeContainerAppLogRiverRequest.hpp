// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPLOGRIVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPLOGRIVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEdgeContainerAppLogRiverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeContainerAppLogRiverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Stdout, stdout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeContainerAppLogRiverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Stdout, stdout_);
    };
    UpdateEdgeContainerAppLogRiverRequest() = default ;
    UpdateEdgeContainerAppLogRiverRequest(const UpdateEdgeContainerAppLogRiverRequest &) = default ;
    UpdateEdgeContainerAppLogRiverRequest(UpdateEdgeContainerAppLogRiverRequest &&) = default ;
    UpdateEdgeContainerAppLogRiverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeContainerAppLogRiverRequest() = default ;
    UpdateEdgeContainerAppLogRiverRequest& operator=(const UpdateEdgeContainerAppLogRiverRequest &) = default ;
    UpdateEdgeContainerAppLogRiverRequest& operator=(UpdateEdgeContainerAppLogRiverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->path_ == nullptr && this->stdout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEdgeContainerAppLogRiverRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateEdgeContainerAppLogRiverRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // stdout Field Functions 
    bool hasStdout() const { return this->stdout_ != nullptr;};
    void deleteStdout() { this->stdout_ = nullptr;};
    inline bool getStdout() const { DARABONBA_PTR_GET_DEFAULT(stdout_, false) };
    inline UpdateEdgeContainerAppLogRiverRequest& setStdout(bool stdout) { DARABONBA_PTR_SET_VALUE(stdout_, stdout) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](https://help.aliyun.com/document_detail/2852396.html) operation.
    shared_ptr<string> appId_ {};
    // The log path of the container.
    shared_ptr<string> path_ {};
    // Specifies whether to collect the standard output of the container.
    shared_ptr<bool> stdout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
