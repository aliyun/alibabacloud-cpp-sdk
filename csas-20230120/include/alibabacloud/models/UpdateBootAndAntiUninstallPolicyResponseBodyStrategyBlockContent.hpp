// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGYBLOCKCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGYBLOCKCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn.hpp>
#include <alibabacloud/models/UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& obj) { 
      DARABONBA_PTR_TO_JSON(BlockTextEn, blockTextEn_);
      DARABONBA_PTR_TO_JSON(BlockTextZh, blockTextZh_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockTextEn, blockTextEn_);
      DARABONBA_PTR_FROM_JSON(BlockTextZh, blockTextZh_);
    };
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent(const UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent(UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &&) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& operator=(const UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& operator=(UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockTextEn_ == nullptr
        && return this->blockTextZh_ == nullptr; };
    // blockTextEn Field Functions 
    bool hasBlockTextEn() const { return this->blockTextEn_ != nullptr;};
    void deleteBlockTextEn() { this->blockTextEn_ = nullptr;};
    inline const Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn & blockTextEn() const { DARABONBA_PTR_GET_CONST(blockTextEn_, Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn) };
    inline Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn blockTextEn() { DARABONBA_PTR_GET(blockTextEn_, Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn) };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextEn(const Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn & blockTextEn) { DARABONBA_PTR_SET_VALUE(blockTextEn_, blockTextEn) };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextEn(Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn && blockTextEn) { DARABONBA_PTR_SET_RVALUE(blockTextEn_, blockTextEn) };


    // blockTextZh Field Functions 
    bool hasBlockTextZh() const { return this->blockTextZh_ != nullptr;};
    void deleteBlockTextZh() { this->blockTextZh_ = nullptr;};
    inline const Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh & blockTextZh() const { DARABONBA_PTR_GET_CONST(blockTextZh_, Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh) };
    inline Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh blockTextZh() { DARABONBA_PTR_GET(blockTextZh_, Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh) };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextZh(const Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh & blockTextZh) { DARABONBA_PTR_SET_VALUE(blockTextZh_, blockTextZh) };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextZh(Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh && blockTextZh) { DARABONBA_PTR_SET_RVALUE(blockTextZh_, blockTextZh) };


  protected:
    std::shared_ptr<Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn> blockTextEn_ = nullptr;
    std::shared_ptr<Models::UpdateBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh> blockTextZh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
