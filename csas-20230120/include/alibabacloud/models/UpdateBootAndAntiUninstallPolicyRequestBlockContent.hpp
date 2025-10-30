// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUESTBLOCKCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUESTBLOCKCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn.hpp>
#include <alibabacloud/models/UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyRequestBlockContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyRequestBlockContent& obj) { 
      DARABONBA_PTR_TO_JSON(BlockTextEn, blockTextEn_);
      DARABONBA_PTR_TO_JSON(BlockTextZh, blockTextZh_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyRequestBlockContent& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockTextEn, blockTextEn_);
      DARABONBA_PTR_FROM_JSON(BlockTextZh, blockTextZh_);
    };
    UpdateBootAndAntiUninstallPolicyRequestBlockContent() = default ;
    UpdateBootAndAntiUninstallPolicyRequestBlockContent(const UpdateBootAndAntiUninstallPolicyRequestBlockContent &) = default ;
    UpdateBootAndAntiUninstallPolicyRequestBlockContent(UpdateBootAndAntiUninstallPolicyRequestBlockContent &&) = default ;
    UpdateBootAndAntiUninstallPolicyRequestBlockContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyRequestBlockContent() = default ;
    UpdateBootAndAntiUninstallPolicyRequestBlockContent& operator=(const UpdateBootAndAntiUninstallPolicyRequestBlockContent &) = default ;
    UpdateBootAndAntiUninstallPolicyRequestBlockContent& operator=(UpdateBootAndAntiUninstallPolicyRequestBlockContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockTextEn_ == nullptr
        && return this->blockTextZh_ == nullptr; };
    // blockTextEn Field Functions 
    bool hasBlockTextEn() const { return this->blockTextEn_ != nullptr;};
    void deleteBlockTextEn() { this->blockTextEn_ = nullptr;};
    inline const Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn & blockTextEn() const { DARABONBA_PTR_GET_CONST(blockTextEn_, Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn) };
    inline Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn blockTextEn() { DARABONBA_PTR_GET(blockTextEn_, Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn) };
    inline UpdateBootAndAntiUninstallPolicyRequestBlockContent& setBlockTextEn(const Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn & blockTextEn) { DARABONBA_PTR_SET_VALUE(blockTextEn_, blockTextEn) };
    inline UpdateBootAndAntiUninstallPolicyRequestBlockContent& setBlockTextEn(Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn && blockTextEn) { DARABONBA_PTR_SET_RVALUE(blockTextEn_, blockTextEn) };


    // blockTextZh Field Functions 
    bool hasBlockTextZh() const { return this->blockTextZh_ != nullptr;};
    void deleteBlockTextZh() { this->blockTextZh_ = nullptr;};
    inline const Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh & blockTextZh() const { DARABONBA_PTR_GET_CONST(blockTextZh_, Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh) };
    inline Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh blockTextZh() { DARABONBA_PTR_GET(blockTextZh_, Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh) };
    inline UpdateBootAndAntiUninstallPolicyRequestBlockContent& setBlockTextZh(const Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh & blockTextZh) { DARABONBA_PTR_SET_VALUE(blockTextZh_, blockTextZh) };
    inline UpdateBootAndAntiUninstallPolicyRequestBlockContent& setBlockTextZh(Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh && blockTextZh) { DARABONBA_PTR_SET_RVALUE(blockTextZh_, blockTextZh) };


  protected:
    std::shared_ptr<Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextEn> blockTextEn_ = nullptr;
    std::shared_ptr<Models::UpdateBootAndAntiUninstallPolicyRequestBlockContentBlockTextZh> blockTextZh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
