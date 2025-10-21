// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTASYNCDETECTREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTASYNCDETECTREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentAsyncDetectRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentAsyncDetectRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentAsyncDetectRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    ModelInputContentAsyncDetectRequestBodyData() = default ;
    ModelInputContentAsyncDetectRequestBodyData(const ModelInputContentAsyncDetectRequestBodyData &) = default ;
    ModelInputContentAsyncDetectRequestBodyData(ModelInputContentAsyncDetectRequestBodyData &&) = default ;
    ModelInputContentAsyncDetectRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentAsyncDetectRequestBodyData() = default ;
    ModelInputContentAsyncDetectRequestBodyData& operator=(const ModelInputContentAsyncDetectRequestBodyData &) = default ;
    ModelInputContentAsyncDetectRequestBodyData& operator=(ModelInputContentAsyncDetectRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModelInputContentAsyncDetectRequestBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // 1. The text content to be reviewed, with a maximum limit of 10000 characters (including English and Chinese).
    // 2. Or the URL address of the image to be reviewed.
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
