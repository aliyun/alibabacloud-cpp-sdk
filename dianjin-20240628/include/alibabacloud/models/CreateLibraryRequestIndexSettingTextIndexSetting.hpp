// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYREQUESTINDEXSETTINGTEXTINDEXSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYREQUESTINDEXSETTINGTEXTINDEXSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateLibraryRequestIndexSettingTextIndexSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryRequestIndexSettingTextIndexSetting& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(indexAnalyzer, indexAnalyzer_);
      DARABONBA_PTR_TO_JSON(rankThreshold, rankThreshold_);
      DARABONBA_PTR_TO_JSON(searchAnalyzer, searchAnalyzer_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryRequestIndexSettingTextIndexSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(indexAnalyzer, indexAnalyzer_);
      DARABONBA_PTR_FROM_JSON(rankThreshold, rankThreshold_);
      DARABONBA_PTR_FROM_JSON(searchAnalyzer, searchAnalyzer_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    CreateLibraryRequestIndexSettingTextIndexSetting() = default ;
    CreateLibraryRequestIndexSettingTextIndexSetting(const CreateLibraryRequestIndexSettingTextIndexSetting &) = default ;
    CreateLibraryRequestIndexSettingTextIndexSetting(CreateLibraryRequestIndexSettingTextIndexSetting &&) = default ;
    CreateLibraryRequestIndexSettingTextIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryRequestIndexSettingTextIndexSetting() = default ;
    CreateLibraryRequestIndexSettingTextIndexSetting& operator=(const CreateLibraryRequestIndexSettingTextIndexSetting &) = default ;
    CreateLibraryRequestIndexSettingTextIndexSetting& operator=(CreateLibraryRequestIndexSettingTextIndexSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->enable_ != nullptr && this->indexAnalyzer_ != nullptr && this->rankThreshold_ != nullptr && this->searchAnalyzer_ != nullptr && this->topK_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateLibraryRequestIndexSettingTextIndexSetting& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateLibraryRequestIndexSettingTextIndexSetting& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // indexAnalyzer Field Functions 
    bool hasIndexAnalyzer() const { return this->indexAnalyzer_ != nullptr;};
    void deleteIndexAnalyzer() { this->indexAnalyzer_ = nullptr;};
    inline string indexAnalyzer() const { DARABONBA_PTR_GET_DEFAULT(indexAnalyzer_, "") };
    inline CreateLibraryRequestIndexSettingTextIndexSetting& setIndexAnalyzer(string indexAnalyzer) { DARABONBA_PTR_SET_VALUE(indexAnalyzer_, indexAnalyzer) };


    // rankThreshold Field Functions 
    bool hasRankThreshold() const { return this->rankThreshold_ != nullptr;};
    void deleteRankThreshold() { this->rankThreshold_ = nullptr;};
    inline double rankThreshold() const { DARABONBA_PTR_GET_DEFAULT(rankThreshold_, 0.0) };
    inline CreateLibraryRequestIndexSettingTextIndexSetting& setRankThreshold(double rankThreshold) { DARABONBA_PTR_SET_VALUE(rankThreshold_, rankThreshold) };


    // searchAnalyzer Field Functions 
    bool hasSearchAnalyzer() const { return this->searchAnalyzer_ != nullptr;};
    void deleteSearchAnalyzer() { this->searchAnalyzer_ = nullptr;};
    inline string searchAnalyzer() const { DARABONBA_PTR_GET_DEFAULT(searchAnalyzer_, "") };
    inline CreateLibraryRequestIndexSettingTextIndexSetting& setSearchAnalyzer(string searchAnalyzer) { DARABONBA_PTR_SET_VALUE(searchAnalyzer_, searchAnalyzer) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline CreateLibraryRequestIndexSettingTextIndexSetting& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> indexAnalyzer_ = nullptr;
    std::shared_ptr<double> rankThreshold_ = nullptr;
    std::shared_ptr<string> searchAnalyzer_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
