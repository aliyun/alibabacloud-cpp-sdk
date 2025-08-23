// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNOCRPARSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNOCRPARSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunOcrParseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunOcrParseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunOcrParseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    RunOcrParseRequest() = default ;
    RunOcrParseRequest(const RunOcrParseRequest &) = default ;
    RunOcrParseRequest(RunOcrParseRequest &&) = default ;
    RunOcrParseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunOcrParseRequest() = default ;
    RunOcrParseRequest& operator=(const RunOcrParseRequest &) = default ;
    RunOcrParseRequest& operator=(RunOcrParseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileKey_ != nullptr
        && this->modelId_ != nullptr && this->url_ != nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline RunOcrParseRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunOcrParseRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunOcrParseRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
