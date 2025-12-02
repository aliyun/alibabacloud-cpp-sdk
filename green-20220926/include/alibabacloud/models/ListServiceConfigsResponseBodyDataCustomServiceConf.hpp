// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONF_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceConfigsResponseBodyDataCustomServiceConfRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListServiceConfigsResponseBodyDataCustomServiceConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsResponseBodyDataCustomServiceConf& obj) { 
      DARABONBA_PTR_TO_JSON(AudioService, audioService_);
      DARABONBA_PTR_TO_JSON(ImageService, imageService_);
      DARABONBA_PTR_TO_JSON(KeywordFilterLibs, keywordFilterLibs_);
      DARABONBA_PTR_TO_JSON(KeywordHitLibs, keywordHitLibs_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SimilarTextHitLibs, similarTextHitLibs_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsResponseBodyDataCustomServiceConf& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioService, audioService_);
      DARABONBA_PTR_FROM_JSON(ImageService, imageService_);
      DARABONBA_PTR_FROM_JSON(KeywordFilterLibs, keywordFilterLibs_);
      DARABONBA_PTR_FROM_JSON(KeywordHitLibs, keywordHitLibs_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SimilarTextHitLibs, similarTextHitLibs_);
    };
    ListServiceConfigsResponseBodyDataCustomServiceConf() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConf(const ListServiceConfigsResponseBodyDataCustomServiceConf &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConf(ListServiceConfigsResponseBodyDataCustomServiceConf &&) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsResponseBodyDataCustomServiceConf() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConf& operator=(const ListServiceConfigsResponseBodyDataCustomServiceConf &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConf& operator=(ListServiceConfigsResponseBodyDataCustomServiceConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioService_ == nullptr
        && return this->imageService_ == nullptr && return this->keywordFilterLibs_ == nullptr && return this->keywordHitLibs_ == nullptr && return this->rules_ == nullptr && return this->similarTextHitLibs_ == nullptr; };
    // audioService Field Functions 
    bool hasAudioService() const { return this->audioService_ != nullptr;};
    void deleteAudioService() { this->audioService_ = nullptr;};
    inline string audioService() const { DARABONBA_PTR_GET_DEFAULT(audioService_, "") };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setAudioService(string audioService) { DARABONBA_PTR_SET_VALUE(audioService_, audioService) };


    // imageService Field Functions 
    bool hasImageService() const { return this->imageService_ != nullptr;};
    void deleteImageService() { this->imageService_ = nullptr;};
    inline const vector<string> & imageService() const { DARABONBA_PTR_GET_CONST(imageService_, vector<string>) };
    inline vector<string> imageService() { DARABONBA_PTR_GET(imageService_, vector<string>) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setImageService(const vector<string> & imageService) { DARABONBA_PTR_SET_VALUE(imageService_, imageService) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setImageService(vector<string> && imageService) { DARABONBA_PTR_SET_RVALUE(imageService_, imageService) };


    // keywordFilterLibs Field Functions 
    bool hasKeywordFilterLibs() const { return this->keywordFilterLibs_ != nullptr;};
    void deleteKeywordFilterLibs() { this->keywordFilterLibs_ = nullptr;};
    inline const vector<string> & keywordFilterLibs() const { DARABONBA_PTR_GET_CONST(keywordFilterLibs_, vector<string>) };
    inline vector<string> keywordFilterLibs() { DARABONBA_PTR_GET(keywordFilterLibs_, vector<string>) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setKeywordFilterLibs(const vector<string> & keywordFilterLibs) { DARABONBA_PTR_SET_VALUE(keywordFilterLibs_, keywordFilterLibs) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setKeywordFilterLibs(vector<string> && keywordFilterLibs) { DARABONBA_PTR_SET_RVALUE(keywordFilterLibs_, keywordFilterLibs) };


    // keywordHitLibs Field Functions 
    bool hasKeywordHitLibs() const { return this->keywordHitLibs_ != nullptr;};
    void deleteKeywordHitLibs() { this->keywordHitLibs_ = nullptr;};
    inline const vector<string> & keywordHitLibs() const { DARABONBA_PTR_GET_CONST(keywordHitLibs_, vector<string>) };
    inline vector<string> keywordHitLibs() { DARABONBA_PTR_GET(keywordHitLibs_, vector<string>) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setKeywordHitLibs(const vector<string> & keywordHitLibs) { DARABONBA_PTR_SET_VALUE(keywordHitLibs_, keywordHitLibs) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setKeywordHitLibs(vector<string> && keywordHitLibs) { DARABONBA_PTR_SET_RVALUE(keywordHitLibs_, keywordHitLibs) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules>) };
    inline vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules>) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setRules(const vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setRules(vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // similarTextHitLibs Field Functions 
    bool hasSimilarTextHitLibs() const { return this->similarTextHitLibs_ != nullptr;};
    void deleteSimilarTextHitLibs() { this->similarTextHitLibs_ = nullptr;};
    inline const vector<string> & similarTextHitLibs() const { DARABONBA_PTR_GET_CONST(similarTextHitLibs_, vector<string>) };
    inline vector<string> similarTextHitLibs() { DARABONBA_PTR_GET(similarTextHitLibs_, vector<string>) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setSimilarTextHitLibs(const vector<string> & similarTextHitLibs) { DARABONBA_PTR_SET_VALUE(similarTextHitLibs_, similarTextHitLibs) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConf& setSimilarTextHitLibs(vector<string> && similarTextHitLibs) { DARABONBA_PTR_SET_RVALUE(similarTextHitLibs_, similarTextHitLibs) };


  protected:
    // Audio service.
    std::shared_ptr<string> audioService_ = nullptr;
    // Image services.
    std::shared_ptr<vector<string>> imageService_ = nullptr;
    // Ignored word libraries.
    std::shared_ptr<vector<string>> keywordFilterLibs_ = nullptr;
    // Hit word libraries.
    std::shared_ptr<vector<string>> keywordHitLibs_ = nullptr;
    // Service rules
    std::shared_ptr<vector<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRules>> rules_ = nullptr;
    // Hit similar text libraries.
    std::shared_ptr<vector<string>> similarTextHitLibs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
