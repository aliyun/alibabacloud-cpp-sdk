// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKINTELLIGENTPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKINTELLIGENTPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetHttpDDoSAttackIntelligentProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetHttpDDoSAttackIntelligentProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiMode, aiMode_);
      DARABONBA_PTR_TO_JSON(AiTemplate, aiTemplate_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, SetHttpDDoSAttackIntelligentProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiMode, aiMode_);
      DARABONBA_PTR_FROM_JSON(AiTemplate, aiTemplate_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    SetHttpDDoSAttackIntelligentProtectionRequest() = default ;
    SetHttpDDoSAttackIntelligentProtectionRequest(const SetHttpDDoSAttackIntelligentProtectionRequest &) = default ;
    SetHttpDDoSAttackIntelligentProtectionRequest(SetHttpDDoSAttackIntelligentProtectionRequest &&) = default ;
    SetHttpDDoSAttackIntelligentProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetHttpDDoSAttackIntelligentProtectionRequest() = default ;
    SetHttpDDoSAttackIntelligentProtectionRequest& operator=(const SetHttpDDoSAttackIntelligentProtectionRequest &) = default ;
    SetHttpDDoSAttackIntelligentProtectionRequest& operator=(SetHttpDDoSAttackIntelligentProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiMode_ != nullptr
        && this->aiTemplate_ != nullptr && this->siteId_ != nullptr; };
    // aiMode Field Functions 
    bool hasAiMode() const { return this->aiMode_ != nullptr;};
    void deleteAiMode() { this->aiMode_ = nullptr;};
    inline string aiMode() const { DARABONBA_PTR_GET_DEFAULT(aiMode_, "") };
    inline SetHttpDDoSAttackIntelligentProtectionRequest& setAiMode(string aiMode) { DARABONBA_PTR_SET_VALUE(aiMode_, aiMode) };


    // aiTemplate Field Functions 
    bool hasAiTemplate() const { return this->aiTemplate_ != nullptr;};
    void deleteAiTemplate() { this->aiTemplate_ = nullptr;};
    inline string aiTemplate() const { DARABONBA_PTR_GET_DEFAULT(aiTemplate_, "") };
    inline SetHttpDDoSAttackIntelligentProtectionRequest& setAiTemplate(string aiTemplate) { DARABONBA_PTR_SET_VALUE(aiTemplate_, aiTemplate) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetHttpDDoSAttackIntelligentProtectionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The mode of smart HTTP DDoS protection. Valid values:
    // 
    // *   **observe**: alert.
    // *   **defense**: block.
    // 
    // This parameter is required.
    std::shared_ptr<string> aiMode_ = nullptr;
    // The level of smart HTTP DDoS protection. Valid values:
    // 
    // *   **level0**: very loose.
    // *   **level30**: loose.
    // *   **level60**: normal.
    // *   **level90**: strict.
    // 
    // This parameter is required.
    std::shared_ptr<string> aiTemplate_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
