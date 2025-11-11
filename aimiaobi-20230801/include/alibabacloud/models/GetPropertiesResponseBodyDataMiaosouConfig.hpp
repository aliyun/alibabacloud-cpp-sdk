// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAMIAOSOUCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAMIAOSOUCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPropertiesResponseBodyDataMiaosouConfigModelInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataMiaosouConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataMiaosouConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MaxDocSize, maxDocSize_);
      DARABONBA_PTR_TO_JSON(ModelInfos, modelInfos_);
      DARABONBA_PTR_TO_JSON(UseDocSize, useDocSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataMiaosouConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxDocSize, maxDocSize_);
      DARABONBA_PTR_FROM_JSON(ModelInfos, modelInfos_);
      DARABONBA_PTR_FROM_JSON(UseDocSize, useDocSize_);
    };
    GetPropertiesResponseBodyDataMiaosouConfig() = default ;
    GetPropertiesResponseBodyDataMiaosouConfig(const GetPropertiesResponseBodyDataMiaosouConfig &) = default ;
    GetPropertiesResponseBodyDataMiaosouConfig(GetPropertiesResponseBodyDataMiaosouConfig &&) = default ;
    GetPropertiesResponseBodyDataMiaosouConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataMiaosouConfig() = default ;
    GetPropertiesResponseBodyDataMiaosouConfig& operator=(const GetPropertiesResponseBodyDataMiaosouConfig &) = default ;
    GetPropertiesResponseBodyDataMiaosouConfig& operator=(GetPropertiesResponseBodyDataMiaosouConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxDocSize_ == nullptr
        && return this->modelInfos_ == nullptr && return this->useDocSize_ == nullptr; };
    // maxDocSize Field Functions 
    bool hasMaxDocSize() const { return this->maxDocSize_ != nullptr;};
    void deleteMaxDocSize() { this->maxDocSize_ = nullptr;};
    inline int64_t maxDocSize() const { DARABONBA_PTR_GET_DEFAULT(maxDocSize_, 0L) };
    inline GetPropertiesResponseBodyDataMiaosouConfig& setMaxDocSize(int64_t maxDocSize) { DARABONBA_PTR_SET_VALUE(maxDocSize_, maxDocSize) };


    // modelInfos Field Functions 
    bool hasModelInfos() const { return this->modelInfos_ != nullptr;};
    void deleteModelInfos() { this->modelInfos_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos> & modelInfos() const { DARABONBA_PTR_GET_CONST(modelInfos_, vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos>) };
    inline vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos> modelInfos() { DARABONBA_PTR_GET(modelInfos_, vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos>) };
    inline GetPropertiesResponseBodyDataMiaosouConfig& setModelInfos(const vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos> & modelInfos) { DARABONBA_PTR_SET_VALUE(modelInfos_, modelInfos) };
    inline GetPropertiesResponseBodyDataMiaosouConfig& setModelInfos(vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos> && modelInfos) { DARABONBA_PTR_SET_RVALUE(modelInfos_, modelInfos) };


    // useDocSize Field Functions 
    bool hasUseDocSize() const { return this->useDocSize_ != nullptr;};
    void deleteUseDocSize() { this->useDocSize_ = nullptr;};
    inline int64_t useDocSize() const { DARABONBA_PTR_GET_DEFAULT(useDocSize_, 0L) };
    inline GetPropertiesResponseBodyDataMiaosouConfig& setUseDocSize(int64_t useDocSize) { DARABONBA_PTR_SET_VALUE(useDocSize_, useDocSize) };


  protected:
    std::shared_ptr<int64_t> maxDocSize_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataMiaosouConfigModelInfos>> modelInfos_ = nullptr;
    std::shared_ptr<int64_t> useDocSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
