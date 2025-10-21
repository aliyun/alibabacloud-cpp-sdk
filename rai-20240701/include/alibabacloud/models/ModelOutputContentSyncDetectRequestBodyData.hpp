// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    ModelOutputContentSyncDetectRequestBodyData() = default ;
    ModelOutputContentSyncDetectRequestBodyData(const ModelOutputContentSyncDetectRequestBodyData &) = default ;
    ModelOutputContentSyncDetectRequestBodyData(ModelOutputContentSyncDetectRequestBodyData &&) = default ;
    ModelOutputContentSyncDetectRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectRequestBodyData() = default ;
    ModelOutputContentSyncDetectRequestBodyData& operator=(const ModelOutputContentSyncDetectRequestBodyData &) = default ;
    ModelOutputContentSyncDetectRequestBodyData& operator=(ModelOutputContentSyncDetectRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModelOutputContentSyncDetectRequestBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // 1. The text content to be reviewed, with a maximum limit of 10,000 characters (including English and Chinese).
    // 2. Or the URL address of the image to be reviewed.
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
