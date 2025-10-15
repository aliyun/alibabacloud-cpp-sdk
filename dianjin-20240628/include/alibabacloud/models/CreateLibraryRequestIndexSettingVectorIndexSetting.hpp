// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYREQUESTINDEXSETTINGVECTORINDEXSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYREQUESTINDEXSETTINGVECTORINDEXSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateLibraryRequestIndexSettingVectorIndexSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryRequestIndexSettingVectorIndexSetting& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(embeddingType, embeddingType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(rankThreshold, rankThreshold_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryRequestIndexSettingVectorIndexSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(embeddingType, embeddingType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(rankThreshold, rankThreshold_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    CreateLibraryRequestIndexSettingVectorIndexSetting() = default ;
    CreateLibraryRequestIndexSettingVectorIndexSetting(const CreateLibraryRequestIndexSettingVectorIndexSetting &) = default ;
    CreateLibraryRequestIndexSettingVectorIndexSetting(CreateLibraryRequestIndexSettingVectorIndexSetting &&) = default ;
    CreateLibraryRequestIndexSettingVectorIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryRequestIndexSettingVectorIndexSetting() = default ;
    CreateLibraryRequestIndexSettingVectorIndexSetting& operator=(const CreateLibraryRequestIndexSettingVectorIndexSetting &) = default ;
    CreateLibraryRequestIndexSettingVectorIndexSetting& operator=(CreateLibraryRequestIndexSettingVectorIndexSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->embeddingType_ == nullptr && return this->enable_ == nullptr && return this->rankThreshold_ == nullptr && return this->topK_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateLibraryRequestIndexSettingVectorIndexSetting& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // embeddingType Field Functions 
    bool hasEmbeddingType() const { return this->embeddingType_ != nullptr;};
    void deleteEmbeddingType() { this->embeddingType_ = nullptr;};
    inline string embeddingType() const { DARABONBA_PTR_GET_DEFAULT(embeddingType_, "") };
    inline CreateLibraryRequestIndexSettingVectorIndexSetting& setEmbeddingType(string embeddingType) { DARABONBA_PTR_SET_VALUE(embeddingType_, embeddingType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateLibraryRequestIndexSettingVectorIndexSetting& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // rankThreshold Field Functions 
    bool hasRankThreshold() const { return this->rankThreshold_ != nullptr;};
    void deleteRankThreshold() { this->rankThreshold_ = nullptr;};
    inline double rankThreshold() const { DARABONBA_PTR_GET_DEFAULT(rankThreshold_, 0.0) };
    inline CreateLibraryRequestIndexSettingVectorIndexSetting& setRankThreshold(double rankThreshold) { DARABONBA_PTR_SET_VALUE(rankThreshold_, rankThreshold) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline CreateLibraryRequestIndexSettingVectorIndexSetting& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> embeddingType_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<double> rankThreshold_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
