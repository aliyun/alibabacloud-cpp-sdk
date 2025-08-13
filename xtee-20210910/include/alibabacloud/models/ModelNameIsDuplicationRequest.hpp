// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELNAMEISDUPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELNAMEISDUPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModelNameIsDuplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelNameIsDuplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, ModelNameIsDuplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
    };
    ModelNameIsDuplicationRequest() = default ;
    ModelNameIsDuplicationRequest(const ModelNameIsDuplicationRequest &) = default ;
    ModelNameIsDuplicationRequest(ModelNameIsDuplicationRequest &&) = default ;
    ModelNameIsDuplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelNameIsDuplicationRequest() = default ;
    ModelNameIsDuplicationRequest& operator=(const ModelNameIsDuplicationRequest &) = default ;
    ModelNameIsDuplicationRequest& operator=(ModelNameIsDuplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelName_ != nullptr
        && this->regId_ != nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelNameIsDuplicationRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModelNameIsDuplicationRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Model name.
    // 
    // This parameter is required.
    std::shared_ptr<string> modelName_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
