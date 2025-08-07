// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIGRAGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIGRAGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetPublishedAgentResponseBodyDataApplicationConfigRagConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enableCitation, enableCitation_);
      DARABONBA_PTR_TO_JSON(enableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enableCitation, enableCitation_);
      DARABONBA_PTR_FROM_JSON(enableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    GetPublishedAgentResponseBodyDataApplicationConfigRagConfig() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigRagConfig(const GetPublishedAgentResponseBodyDataApplicationConfigRagConfig &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigRagConfig(GetPublishedAgentResponseBodyDataApplicationConfigRagConfig &&) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigRagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishedAgentResponseBodyDataApplicationConfigRagConfig() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& operator=(const GetPublishedAgentResponseBodyDataApplicationConfigRagConfig &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& operator=(GetPublishedAgentResponseBodyDataApplicationConfigRagConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCitation_ != nullptr
        && this->enableSearch_ != nullptr && this->knowledgeBaseCodeList_ != nullptr && this->topK_ != nullptr; };
    // enableCitation Field Functions 
    bool hasEnableCitation() const { return this->enableCitation_ != nullptr;};
    void deleteEnableCitation() { this->enableCitation_ = nullptr;};
    inline bool enableCitation() const { DARABONBA_PTR_GET_DEFAULT(enableCitation_, false) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& setEnableCitation(bool enableCitation) { DARABONBA_PTR_SET_VALUE(enableCitation_, enableCitation) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // knowledgeBaseCodeList Field Functions 
    bool hasKnowledgeBaseCodeList() const { return this->knowledgeBaseCodeList_ != nullptr;};
    void deleteKnowledgeBaseCodeList() { this->knowledgeBaseCodeList_ = nullptr;};
    inline const vector<string> & knowledgeBaseCodeList() const { DARABONBA_PTR_GET_CONST(knowledgeBaseCodeList_, vector<string>) };
    inline vector<string> knowledgeBaseCodeList() { DARABONBA_PTR_GET(knowledgeBaseCodeList_, vector<string>) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& setKnowledgeBaseCodeList(const vector<string> & knowledgeBaseCodeList) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& setKnowledgeBaseCodeList(vector<string> && knowledgeBaseCodeList) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline GetPublishedAgentResponseBodyDataApplicationConfigRagConfig& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<bool> enableCitation_ = nullptr;
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeBaseCodeList_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
