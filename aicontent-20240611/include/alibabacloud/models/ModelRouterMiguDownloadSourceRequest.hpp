// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERMIGUDOWNLOADSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERMIGUDOWNLOADSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterMiguDownloadSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterMiguDownloadSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterMiguDownloadSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    ModelRouterMiguDownloadSourceRequest() = default ;
    ModelRouterMiguDownloadSourceRequest(const ModelRouterMiguDownloadSourceRequest &) = default ;
    ModelRouterMiguDownloadSourceRequest(ModelRouterMiguDownloadSourceRequest &&) = default ;
    ModelRouterMiguDownloadSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterMiguDownloadSourceRequest() = default ;
    ModelRouterMiguDownloadSourceRequest& operator=(const ModelRouterMiguDownloadSourceRequest &) = default ;
    ModelRouterMiguDownloadSourceRequest& operator=(ModelRouterMiguDownloadSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceId_ == nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ModelRouterMiguDownloadSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The unique identifier of the source file. This is the sourceId returned by the upload operation.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
