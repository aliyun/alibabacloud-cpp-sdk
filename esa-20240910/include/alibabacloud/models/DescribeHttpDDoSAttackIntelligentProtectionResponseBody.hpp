// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHTTPDDOSATTACKINTELLIGENTPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHTTPDDOSATTACKINTELLIGENTPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeHttpDDoSAttackIntelligentProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHttpDDoSAttackIntelligentProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiMode, aiMode_);
      DARABONBA_PTR_TO_JSON(AiTemplate, aiTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHttpDDoSAttackIntelligentProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiMode, aiMode_);
      DARABONBA_PTR_FROM_JSON(AiTemplate, aiTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DescribeHttpDDoSAttackIntelligentProtectionResponseBody() = default ;
    DescribeHttpDDoSAttackIntelligentProtectionResponseBody(const DescribeHttpDDoSAttackIntelligentProtectionResponseBody &) = default ;
    DescribeHttpDDoSAttackIntelligentProtectionResponseBody(DescribeHttpDDoSAttackIntelligentProtectionResponseBody &&) = default ;
    DescribeHttpDDoSAttackIntelligentProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHttpDDoSAttackIntelligentProtectionResponseBody() = default ;
    DescribeHttpDDoSAttackIntelligentProtectionResponseBody& operator=(const DescribeHttpDDoSAttackIntelligentProtectionResponseBody &) = default ;
    DescribeHttpDDoSAttackIntelligentProtectionResponseBody& operator=(DescribeHttpDDoSAttackIntelligentProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiMode_ == nullptr
        && this->aiTemplate_ == nullptr && this->requestId_ == nullptr && this->siteId_ == nullptr; };
    // aiMode Field Functions 
    bool hasAiMode() const { return this->aiMode_ != nullptr;};
    void deleteAiMode() { this->aiMode_ = nullptr;};
    inline string getAiMode() const { DARABONBA_PTR_GET_DEFAULT(aiMode_, "") };
    inline DescribeHttpDDoSAttackIntelligentProtectionResponseBody& setAiMode(string aiMode) { DARABONBA_PTR_SET_VALUE(aiMode_, aiMode) };


    // aiTemplate Field Functions 
    bool hasAiTemplate() const { return this->aiTemplate_ != nullptr;};
    void deleteAiTemplate() { this->aiTemplate_ = nullptr;};
    inline string getAiTemplate() const { DARABONBA_PTR_GET_DEFAULT(aiTemplate_, "") };
    inline DescribeHttpDDoSAttackIntelligentProtectionResponseBody& setAiTemplate(string aiTemplate) { DARABONBA_PTR_SET_VALUE(aiTemplate_, aiTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHttpDDoSAttackIntelligentProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DescribeHttpDDoSAttackIntelligentProtectionResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The mode of smart HTTP DDoS protection. Valid values:
    // 
    // *   **observe**: alert.
    // *   **defense**: block.
    shared_ptr<string> aiMode_ {};
    // The level of smart HTTP DDoS protection. Valid values:
    // 
    // *   **level0**: very loose.
    // *   **level30**: loose.
    // *   **level60**: normal.
    // *   **level90**: strict.
    shared_ptr<string> aiTemplate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
