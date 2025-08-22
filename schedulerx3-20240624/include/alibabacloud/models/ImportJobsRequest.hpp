// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ImportJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateApp, autoCreateApp_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
    };
    friend void from_json(const Darabonba::Json& j, ImportJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateApp, autoCreateApp_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
    };
    ImportJobsRequest() = default ;
    ImportJobsRequest(const ImportJobsRequest &) = default ;
    ImportJobsRequest(ImportJobsRequest &&) = default ;
    ImportJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportJobsRequest() = default ;
    ImportJobsRequest& operator=(const ImportJobsRequest &) = default ;
    ImportJobsRequest& operator=(ImportJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCreateApp_ != nullptr
        && this->clusterId_ != nullptr && this->content_ != nullptr && this->overwrite_ != nullptr; };
    // autoCreateApp Field Functions 
    bool hasAutoCreateApp() const { return this->autoCreateApp_ != nullptr;};
    void deleteAutoCreateApp() { this->autoCreateApp_ = nullptr;};
    inline bool autoCreateApp() const { DARABONBA_PTR_GET_DEFAULT(autoCreateApp_, false) };
    inline ImportJobsRequest& setAutoCreateApp(bool autoCreateApp) { DARABONBA_PTR_SET_VALUE(autoCreateApp_, autoCreateApp) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ImportJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ImportJobsRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline ImportJobsRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


  protected:
    std::shared_ptr<bool> autoCreateApp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> overwrite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
