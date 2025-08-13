// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModelDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, ModelDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
    };
    ModelDeleteRequest() = default ;
    ModelDeleteRequest(const ModelDeleteRequest &) = default ;
    ModelDeleteRequest(ModelDeleteRequest &&) = default ;
    ModelDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelDeleteRequest() = default ;
    ModelDeleteRequest& operator=(const ModelDeleteRequest &) = default ;
    ModelDeleteRequest& operator=(ModelDeleteRequest &&) = default ;
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
    inline ModelDeleteRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModelDeleteRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


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
