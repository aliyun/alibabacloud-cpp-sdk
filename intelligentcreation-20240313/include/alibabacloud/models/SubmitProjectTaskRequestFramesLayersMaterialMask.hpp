// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESLAYERSMATERIALMASK_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESLAYERSMATERIALMASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequestFramesLayersMaterialMask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequestFramesLayersMaterialMask& obj) { 
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequestFramesLayersMaterialMask& obj) { 
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    SubmitProjectTaskRequestFramesLayersMaterialMask() = default ;
    SubmitProjectTaskRequestFramesLayersMaterialMask(const SubmitProjectTaskRequestFramesLayersMaterialMask &) = default ;
    SubmitProjectTaskRequestFramesLayersMaterialMask(SubmitProjectTaskRequestFramesLayersMaterialMask &&) = default ;
    SubmitProjectTaskRequestFramesLayersMaterialMask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequestFramesLayersMaterialMask() = default ;
    SubmitProjectTaskRequestFramesLayersMaterialMask& operator=(const SubmitProjectTaskRequestFramesLayersMaterialMask &) = default ;
    SubmitProjectTaskRequestFramesLayersMaterialMask& operator=(SubmitProjectTaskRequestFramesLayersMaterialMask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->url_ == nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitProjectTaskRequestFramesLayersMaterialMask& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
