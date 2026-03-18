// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYMODELTRAINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYMODELTRAINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgQueryModelTrainStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgQueryModelTrainStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgQueryModelTrainStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
    };
    Personalizedtxt2imgQueryModelTrainStatusRequest() = default ;
    Personalizedtxt2imgQueryModelTrainStatusRequest(const Personalizedtxt2imgQueryModelTrainStatusRequest &) = default ;
    Personalizedtxt2imgQueryModelTrainStatusRequest(Personalizedtxt2imgQueryModelTrainStatusRequest &&) = default ;
    Personalizedtxt2imgQueryModelTrainStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgQueryModelTrainStatusRequest() = default ;
    Personalizedtxt2imgQueryModelTrainStatusRequest& operator=(const Personalizedtxt2imgQueryModelTrainStatusRequest &) = default ;
    Personalizedtxt2imgQueryModelTrainStatusRequest& operator=(Personalizedtxt2imgQueryModelTrainStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline Personalizedtxt2imgQueryModelTrainStatusRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    // This parameter is required.
    shared_ptr<string> modelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
