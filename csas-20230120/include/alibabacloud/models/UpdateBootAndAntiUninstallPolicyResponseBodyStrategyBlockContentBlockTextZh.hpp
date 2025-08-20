// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGYBLOCKCONTENTBLOCKTEXTZH_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGYBLOCKCONTENTBLOCKTEXTZH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(MainButtonText, mainButtonText_);
      DARABONBA_PTR_TO_JSON(MinorButtonText, minorButtonText_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(MainButtonText, mainButtonText_);
      DARABONBA_PTR_FROM_JSON(MinorButtonText, minorButtonText_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh(const UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh(UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh &&) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& operator=(const UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& operator=(UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->mainButtonText_ != nullptr && this->minorButtonText_ != nullptr && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // mainButtonText Field Functions 
    bool hasMainButtonText() const { return this->mainButtonText_ != nullptr;};
    void deleteMainButtonText() { this->mainButtonText_ = nullptr;};
    inline string mainButtonText() const { DARABONBA_PTR_GET_DEFAULT(mainButtonText_, "") };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& setMainButtonText(string mainButtonText) { DARABONBA_PTR_SET_VALUE(mainButtonText_, mainButtonText) };


    // minorButtonText Field Functions 
    bool hasMinorButtonText() const { return this->minorButtonText_ != nullptr;};
    void deleteMinorButtonText() { this->minorButtonText_ = nullptr;};
    inline string minorButtonText() const { DARABONBA_PTR_GET_DEFAULT(minorButtonText_, "") };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& setMinorButtonText(string minorButtonText) { DARABONBA_PTR_SET_VALUE(minorButtonText_, minorButtonText) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> mainButtonText_ = nullptr;
    std::shared_ptr<string> minorButtonText_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
