// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONFRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONFRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule.hpp>
#include <alibabacloud/models/ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListServiceConfigsResponseBodyDataCustomServiceConfRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsResponseBodyDataCustomServiceConfRules& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScanRule, imageScanRule_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(TextScanRule, textScanRule_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsResponseBodyDataCustomServiceConfRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScanRule, imageScanRule_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(TextScanRule, textScanRule_);
    };
    ListServiceConfigsResponseBodyDataCustomServiceConfRules() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRules(const ListServiceConfigsResponseBodyDataCustomServiceConfRules &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRules(ListServiceConfigsResponseBodyDataCustomServiceConfRules &&) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsResponseBodyDataCustomServiceConfRules() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRules& operator=(const ListServiceConfigsResponseBodyDataCustomServiceConfRules &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRules& operator=(ListServiceConfigsResponseBodyDataCustomServiceConfRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageScanRule_ == nullptr
        && return this->index_ == nullptr && return this->textScanRule_ == nullptr; };
    // imageScanRule Field Functions 
    bool hasImageScanRule() const { return this->imageScanRule_ != nullptr;};
    void deleteImageScanRule() { this->imageScanRule_ = nullptr;};
    inline const Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule & imageScanRule() const { DARABONBA_PTR_GET_CONST(imageScanRule_, Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule) };
    inline Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule imageScanRule() { DARABONBA_PTR_GET(imageScanRule_, Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRules& setImageScanRule(const Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule & imageScanRule) { DARABONBA_PTR_SET_VALUE(imageScanRule_, imageScanRule) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRules& setImageScanRule(Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule && imageScanRule) { DARABONBA_PTR_SET_RVALUE(imageScanRule_, imageScanRule) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRules& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // textScanRule Field Functions 
    bool hasTextScanRule() const { return this->textScanRule_ != nullptr;};
    void deleteTextScanRule() { this->textScanRule_ = nullptr;};
    inline const Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule & textScanRule() const { DARABONBA_PTR_GET_CONST(textScanRule_, Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule) };
    inline Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule textScanRule() { DARABONBA_PTR_GET(textScanRule_, Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRules& setTextScanRule(const Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule & textScanRule) { DARABONBA_PTR_SET_VALUE(textScanRule_, textScanRule) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRules& setTextScanRule(Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule && textScanRule) { DARABONBA_PTR_SET_RVALUE(textScanRule_, textScanRule) };


  protected:
    // Image review rule.
    std::shared_ptr<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule> imageScanRule_ = nullptr;
    // Index.
    std::shared_ptr<int32_t> index_ = nullptr;
    // Text review rule.
    std::shared_ptr<Models::ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule> textScanRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
