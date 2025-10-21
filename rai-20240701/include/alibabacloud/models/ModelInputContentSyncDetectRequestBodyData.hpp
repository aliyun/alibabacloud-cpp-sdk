// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    ModelInputContentSyncDetectRequestBodyData() = default ;
    ModelInputContentSyncDetectRequestBodyData(const ModelInputContentSyncDetectRequestBodyData &) = default ;
    ModelInputContentSyncDetectRequestBodyData(ModelInputContentSyncDetectRequestBodyData &&) = default ;
    ModelInputContentSyncDetectRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectRequestBodyData() = default ;
    ModelInputContentSyncDetectRequestBodyData& operator=(const ModelInputContentSyncDetectRequestBodyData &) = default ;
    ModelInputContentSyncDetectRequestBodyData& operator=(ModelInputContentSyncDetectRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModelInputContentSyncDetectRequestBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // 1. The text content to be checked, with a maximum limit of 10,000 characters (including English and Chinese).
    // 2. Or the URL address of the image to be checked.
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
