// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAMIAOSOUCONFIGMODELINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAMIAOSOUCONFIGMODELINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataMiaosouConfigModelInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataMiaosouConfigModelInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataMiaosouConfigModelInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
    };
    GetPropertiesResponseBodyDataMiaosouConfigModelInfos() = default ;
    GetPropertiesResponseBodyDataMiaosouConfigModelInfos(const GetPropertiesResponseBodyDataMiaosouConfigModelInfos &) = default ;
    GetPropertiesResponseBodyDataMiaosouConfigModelInfos(GetPropertiesResponseBodyDataMiaosouConfigModelInfos &&) = default ;
    GetPropertiesResponseBodyDataMiaosouConfigModelInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataMiaosouConfigModelInfos() = default ;
    GetPropertiesResponseBodyDataMiaosouConfigModelInfos& operator=(const GetPropertiesResponseBodyDataMiaosouConfigModelInfos &) = default ;
    GetPropertiesResponseBodyDataMiaosouConfigModelInfos& operator=(GetPropertiesResponseBodyDataMiaosouConfigModelInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelId_ != nullptr
        && this->modelName_ != nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline GetPropertiesResponseBodyDataMiaosouConfigModelInfos& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetPropertiesResponseBodyDataMiaosouConfigModelInfos& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
