// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetAppConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(embeddingTypeList, embeddingTypeList_);
      DARABONBA_PTR_TO_JSON(frontendConfig, frontendConfig_);
      DARABONBA_PTR_TO_JSON(libraryDocumentStatusList, libraryDocumentStatusList_);
      DARABONBA_PTR_TO_JSON(llmHelperTypeList, llmHelperTypeList_);
      DARABONBA_PTR_TO_JSON(textIndexCategoryList, textIndexCategoryList_);
      DARABONBA_PTR_TO_JSON(vectorIndexCategoryList, vectorIndexCategoryList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(embeddingTypeList, embeddingTypeList_);
      DARABONBA_PTR_FROM_JSON(frontendConfig, frontendConfig_);
      DARABONBA_PTR_FROM_JSON(libraryDocumentStatusList, libraryDocumentStatusList_);
      DARABONBA_PTR_FROM_JSON(llmHelperTypeList, llmHelperTypeList_);
      DARABONBA_PTR_FROM_JSON(textIndexCategoryList, textIndexCategoryList_);
      DARABONBA_PTR_FROM_JSON(vectorIndexCategoryList, vectorIndexCategoryList_);
    };
    GetAppConfigResponseBodyData() = default ;
    GetAppConfigResponseBodyData(const GetAppConfigResponseBodyData &) = default ;
    GetAppConfigResponseBodyData(GetAppConfigResponseBodyData &&) = default ;
    GetAppConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppConfigResponseBodyData() = default ;
    GetAppConfigResponseBodyData& operator=(const GetAppConfigResponseBodyData &) = default ;
    GetAppConfigResponseBodyData& operator=(GetAppConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embeddingTypeList_ == nullptr
        && return this->frontendConfig_ == nullptr && return this->libraryDocumentStatusList_ == nullptr && return this->llmHelperTypeList_ == nullptr && return this->textIndexCategoryList_ == nullptr && return this->vectorIndexCategoryList_ == nullptr; };
    // embeddingTypeList Field Functions 
    bool hasEmbeddingTypeList() const { return this->embeddingTypeList_ != nullptr;};
    void deleteEmbeddingTypeList() { this->embeddingTypeList_ = nullptr;};
    inline const vector<map<string, string>> & embeddingTypeList() const { DARABONBA_PTR_GET_CONST(embeddingTypeList_, vector<map<string, string>>) };
    inline vector<map<string, string>> embeddingTypeList() { DARABONBA_PTR_GET(embeddingTypeList_, vector<map<string, string>>) };
    inline GetAppConfigResponseBodyData& setEmbeddingTypeList(const vector<map<string, string>> & embeddingTypeList) { DARABONBA_PTR_SET_VALUE(embeddingTypeList_, embeddingTypeList) };
    inline GetAppConfigResponseBodyData& setEmbeddingTypeList(vector<map<string, string>> && embeddingTypeList) { DARABONBA_PTR_SET_RVALUE(embeddingTypeList_, embeddingTypeList) };


    // frontendConfig Field Functions 
    bool hasFrontendConfig() const { return this->frontendConfig_ != nullptr;};
    void deleteFrontendConfig() { this->frontendConfig_ = nullptr;};
    inline const map<string, bool> & frontendConfig() const { DARABONBA_PTR_GET_CONST(frontendConfig_, map<string, bool>) };
    inline map<string, bool> frontendConfig() { DARABONBA_PTR_GET(frontendConfig_, map<string, bool>) };
    inline GetAppConfigResponseBodyData& setFrontendConfig(const map<string, bool> & frontendConfig) { DARABONBA_PTR_SET_VALUE(frontendConfig_, frontendConfig) };
    inline GetAppConfigResponseBodyData& setFrontendConfig(map<string, bool> && frontendConfig) { DARABONBA_PTR_SET_RVALUE(frontendConfig_, frontendConfig) };


    // libraryDocumentStatusList Field Functions 
    bool hasLibraryDocumentStatusList() const { return this->libraryDocumentStatusList_ != nullptr;};
    void deleteLibraryDocumentStatusList() { this->libraryDocumentStatusList_ = nullptr;};
    inline const vector<map<string, string>> & libraryDocumentStatusList() const { DARABONBA_PTR_GET_CONST(libraryDocumentStatusList_, vector<map<string, string>>) };
    inline vector<map<string, string>> libraryDocumentStatusList() { DARABONBA_PTR_GET(libraryDocumentStatusList_, vector<map<string, string>>) };
    inline GetAppConfigResponseBodyData& setLibraryDocumentStatusList(const vector<map<string, string>> & libraryDocumentStatusList) { DARABONBA_PTR_SET_VALUE(libraryDocumentStatusList_, libraryDocumentStatusList) };
    inline GetAppConfigResponseBodyData& setLibraryDocumentStatusList(vector<map<string, string>> && libraryDocumentStatusList) { DARABONBA_PTR_SET_RVALUE(libraryDocumentStatusList_, libraryDocumentStatusList) };


    // llmHelperTypeList Field Functions 
    bool hasLlmHelperTypeList() const { return this->llmHelperTypeList_ != nullptr;};
    void deleteLlmHelperTypeList() { this->llmHelperTypeList_ = nullptr;};
    inline const vector<map<string, string>> & llmHelperTypeList() const { DARABONBA_PTR_GET_CONST(llmHelperTypeList_, vector<map<string, string>>) };
    inline vector<map<string, string>> llmHelperTypeList() { DARABONBA_PTR_GET(llmHelperTypeList_, vector<map<string, string>>) };
    inline GetAppConfigResponseBodyData& setLlmHelperTypeList(const vector<map<string, string>> & llmHelperTypeList) { DARABONBA_PTR_SET_VALUE(llmHelperTypeList_, llmHelperTypeList) };
    inline GetAppConfigResponseBodyData& setLlmHelperTypeList(vector<map<string, string>> && llmHelperTypeList) { DARABONBA_PTR_SET_RVALUE(llmHelperTypeList_, llmHelperTypeList) };


    // textIndexCategoryList Field Functions 
    bool hasTextIndexCategoryList() const { return this->textIndexCategoryList_ != nullptr;};
    void deleteTextIndexCategoryList() { this->textIndexCategoryList_ = nullptr;};
    inline const vector<string> & textIndexCategoryList() const { DARABONBA_PTR_GET_CONST(textIndexCategoryList_, vector<string>) };
    inline vector<string> textIndexCategoryList() { DARABONBA_PTR_GET(textIndexCategoryList_, vector<string>) };
    inline GetAppConfigResponseBodyData& setTextIndexCategoryList(const vector<string> & textIndexCategoryList) { DARABONBA_PTR_SET_VALUE(textIndexCategoryList_, textIndexCategoryList) };
    inline GetAppConfigResponseBodyData& setTextIndexCategoryList(vector<string> && textIndexCategoryList) { DARABONBA_PTR_SET_RVALUE(textIndexCategoryList_, textIndexCategoryList) };


    // vectorIndexCategoryList Field Functions 
    bool hasVectorIndexCategoryList() const { return this->vectorIndexCategoryList_ != nullptr;};
    void deleteVectorIndexCategoryList() { this->vectorIndexCategoryList_ = nullptr;};
    inline const vector<string> & vectorIndexCategoryList() const { DARABONBA_PTR_GET_CONST(vectorIndexCategoryList_, vector<string>) };
    inline vector<string> vectorIndexCategoryList() { DARABONBA_PTR_GET(vectorIndexCategoryList_, vector<string>) };
    inline GetAppConfigResponseBodyData& setVectorIndexCategoryList(const vector<string> & vectorIndexCategoryList) { DARABONBA_PTR_SET_VALUE(vectorIndexCategoryList_, vectorIndexCategoryList) };
    inline GetAppConfigResponseBodyData& setVectorIndexCategoryList(vector<string> && vectorIndexCategoryList) { DARABONBA_PTR_SET_RVALUE(vectorIndexCategoryList_, vectorIndexCategoryList) };


  protected:
    std::shared_ptr<vector<map<string, string>>> embeddingTypeList_ = nullptr;
    std::shared_ptr<map<string, bool>> frontendConfig_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> libraryDocumentStatusList_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> llmHelperTypeList_ = nullptr;
    std::shared_ptr<vector<string>> textIndexCategoryList_ = nullptr;
    std::shared_ptr<vector<string>> vectorIndexCategoryList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
