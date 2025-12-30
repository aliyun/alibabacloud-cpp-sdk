// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADMULTIMODALSEARCHTASKRESULTMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADMULTIMODALSEARCHTASKRESULTMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class DownloadMultimodalSearchTaskResultMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadMultimodalSearchTaskResultMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadMultimodalSearchTaskResultMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DownloadMultimodalSearchTaskResultMetadataRequest() = default ;
    DownloadMultimodalSearchTaskResultMetadataRequest(const DownloadMultimodalSearchTaskResultMetadataRequest &) = default ;
    DownloadMultimodalSearchTaskResultMetadataRequest(DownloadMultimodalSearchTaskResultMetadataRequest &&) = default ;
    DownloadMultimodalSearchTaskResultMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadMultimodalSearchTaskResultMetadataRequest() = default ;
    DownloadMultimodalSearchTaskResultMetadataRequest& operator=(const DownloadMultimodalSearchTaskResultMetadataRequest &) = default ;
    DownloadMultimodalSearchTaskResultMetadataRequest& operator=(DownloadMultimodalSearchTaskResultMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->taskId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DownloadMultimodalSearchTaskResultMetadataRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DownloadMultimodalSearchTaskResultMetadataRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
