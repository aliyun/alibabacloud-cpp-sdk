// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGYBLOCKCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGYBLOCKCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn.hpp>
#include <alibabacloud/models/GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& obj) { 
      DARABONBA_PTR_TO_JSON(BlockTextEn, blockTextEn_);
      DARABONBA_PTR_TO_JSON(BlockTextZh, blockTextZh_);
    };
    friend void from_json(const Darabonba::Json& j, GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockTextEn, blockTextEn_);
      DARABONBA_PTR_FROM_JSON(BlockTextZh, blockTextZh_);
    };
    GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent() = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent(const GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &) = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent(GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &&) = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent() = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& operator=(const GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &) = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& operator=(GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockTextEn_ != nullptr
        && this->blockTextZh_ != nullptr; };
    // blockTextEn Field Functions 
    bool hasBlockTextEn() const { return this->blockTextEn_ != nullptr;};
    void deleteBlockTextEn() { this->blockTextEn_ = nullptr;};
    inline const Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn & blockTextEn() const { DARABONBA_PTR_GET_CONST(blockTextEn_, Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn) };
    inline Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn blockTextEn() { DARABONBA_PTR_GET(blockTextEn_, Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextEn(const Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn & blockTextEn) { DARABONBA_PTR_SET_VALUE(blockTextEn_, blockTextEn) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextEn(Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn && blockTextEn) { DARABONBA_PTR_SET_RVALUE(blockTextEn_, blockTextEn) };


    // blockTextZh Field Functions 
    bool hasBlockTextZh() const { return this->blockTextZh_ != nullptr;};
    void deleteBlockTextZh() { this->blockTextZh_ = nullptr;};
    inline const Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh & blockTextZh() const { DARABONBA_PTR_GET_CONST(blockTextZh_, Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh) };
    inline Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh blockTextZh() { DARABONBA_PTR_GET(blockTextZh_, Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextZh(const Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh & blockTextZh) { DARABONBA_PTR_SET_VALUE(blockTextZh_, blockTextZh) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent& setBlockTextZh(Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh && blockTextZh) { DARABONBA_PTR_SET_RVALUE(blockTextZh_, blockTextZh) };


  protected:
    std::shared_ptr<Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextEn> blockTextEn_ = nullptr;
    std::shared_ptr<Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContentBlockTextZh> blockTextZh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
