// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCCPROTECTSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCCPROTECTSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainCcProtectSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCcProtectSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProtectSwitchList, protectSwitchList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCcProtectSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtectSwitchList, protectSwitchList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainCcProtectSwitchResponseBody() = default ;
    DescribeDomainCcProtectSwitchResponseBody(const DescribeDomainCcProtectSwitchResponseBody &) = default ;
    DescribeDomainCcProtectSwitchResponseBody(DescribeDomainCcProtectSwitchResponseBody &&) = default ;
    DescribeDomainCcProtectSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCcProtectSwitchResponseBody() = default ;
    DescribeDomainCcProtectSwitchResponseBody& operator=(const DescribeDomainCcProtectSwitchResponseBody &) = default ;
    DescribeDomainCcProtectSwitchResponseBody& operator=(DescribeDomainCcProtectSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProtectSwitchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtectSwitchList& obj) { 
        DARABONBA_PTR_TO_JSON(AiMode, aiMode_);
        DARABONBA_PTR_TO_JSON(AiRuleEnable, aiRuleEnable_);
        DARABONBA_PTR_TO_JSON(AiTemplate, aiTemplate_);
        DARABONBA_PTR_TO_JSON(BlackWhiteListEnable, blackWhiteListEnable_);
        DARABONBA_PTR_TO_JSON(CcCustomRuleEnable, ccCustomRuleEnable_);
        DARABONBA_PTR_TO_JSON(CcEnable, ccEnable_);
        DARABONBA_PTR_TO_JSON(CcGlobalSwitch, ccGlobalSwitch_);
        DARABONBA_PTR_TO_JSON(CcTemplate, ccTemplate_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(PreciseRuleEnable, preciseRuleEnable_);
        DARABONBA_PTR_TO_JSON(RegionBlockEnable, regionBlockEnable_);
      };
      friend void from_json(const Darabonba::Json& j, ProtectSwitchList& obj) { 
        DARABONBA_PTR_FROM_JSON(AiMode, aiMode_);
        DARABONBA_PTR_FROM_JSON(AiRuleEnable, aiRuleEnable_);
        DARABONBA_PTR_FROM_JSON(AiTemplate, aiTemplate_);
        DARABONBA_PTR_FROM_JSON(BlackWhiteListEnable, blackWhiteListEnable_);
        DARABONBA_PTR_FROM_JSON(CcCustomRuleEnable, ccCustomRuleEnable_);
        DARABONBA_PTR_FROM_JSON(CcEnable, ccEnable_);
        DARABONBA_PTR_FROM_JSON(CcGlobalSwitch, ccGlobalSwitch_);
        DARABONBA_PTR_FROM_JSON(CcTemplate, ccTemplate_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(PreciseRuleEnable, preciseRuleEnable_);
        DARABONBA_PTR_FROM_JSON(RegionBlockEnable, regionBlockEnable_);
      };
      ProtectSwitchList() = default ;
      ProtectSwitchList(const ProtectSwitchList &) = default ;
      ProtectSwitchList(ProtectSwitchList &&) = default ;
      ProtectSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtectSwitchList() = default ;
      ProtectSwitchList& operator=(const ProtectSwitchList &) = default ;
      ProtectSwitchList& operator=(ProtectSwitchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aiMode_ == nullptr
        && this->aiRuleEnable_ == nullptr && this->aiTemplate_ == nullptr && this->blackWhiteListEnable_ == nullptr && this->ccCustomRuleEnable_ == nullptr && this->ccEnable_ == nullptr
        && this->ccGlobalSwitch_ == nullptr && this->ccTemplate_ == nullptr && this->domain_ == nullptr && this->preciseRuleEnable_ == nullptr && this->regionBlockEnable_ == nullptr; };
      // aiMode Field Functions 
      bool hasAiMode() const { return this->aiMode_ != nullptr;};
      void deleteAiMode() { this->aiMode_ = nullptr;};
      inline string getAiMode() const { DARABONBA_PTR_GET_DEFAULT(aiMode_, "") };
      inline ProtectSwitchList& setAiMode(string aiMode) { DARABONBA_PTR_SET_VALUE(aiMode_, aiMode) };


      // aiRuleEnable Field Functions 
      bool hasAiRuleEnable() const { return this->aiRuleEnable_ != nullptr;};
      void deleteAiRuleEnable() { this->aiRuleEnable_ = nullptr;};
      inline int32_t getAiRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(aiRuleEnable_, 0) };
      inline ProtectSwitchList& setAiRuleEnable(int32_t aiRuleEnable) { DARABONBA_PTR_SET_VALUE(aiRuleEnable_, aiRuleEnable) };


      // aiTemplate Field Functions 
      bool hasAiTemplate() const { return this->aiTemplate_ != nullptr;};
      void deleteAiTemplate() { this->aiTemplate_ = nullptr;};
      inline string getAiTemplate() const { DARABONBA_PTR_GET_DEFAULT(aiTemplate_, "") };
      inline ProtectSwitchList& setAiTemplate(string aiTemplate) { DARABONBA_PTR_SET_VALUE(aiTemplate_, aiTemplate) };


      // blackWhiteListEnable Field Functions 
      bool hasBlackWhiteListEnable() const { return this->blackWhiteListEnable_ != nullptr;};
      void deleteBlackWhiteListEnable() { this->blackWhiteListEnable_ = nullptr;};
      inline int32_t getBlackWhiteListEnable() const { DARABONBA_PTR_GET_DEFAULT(blackWhiteListEnable_, 0) };
      inline ProtectSwitchList& setBlackWhiteListEnable(int32_t blackWhiteListEnable) { DARABONBA_PTR_SET_VALUE(blackWhiteListEnable_, blackWhiteListEnable) };


      // ccCustomRuleEnable Field Functions 
      bool hasCcCustomRuleEnable() const { return this->ccCustomRuleEnable_ != nullptr;};
      void deleteCcCustomRuleEnable() { this->ccCustomRuleEnable_ = nullptr;};
      inline int32_t getCcCustomRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ccCustomRuleEnable_, 0) };
      inline ProtectSwitchList& setCcCustomRuleEnable(int32_t ccCustomRuleEnable) { DARABONBA_PTR_SET_VALUE(ccCustomRuleEnable_, ccCustomRuleEnable) };


      // ccEnable Field Functions 
      bool hasCcEnable() const { return this->ccEnable_ != nullptr;};
      void deleteCcEnable() { this->ccEnable_ = nullptr;};
      inline int32_t getCcEnable() const { DARABONBA_PTR_GET_DEFAULT(ccEnable_, 0) };
      inline ProtectSwitchList& setCcEnable(int32_t ccEnable) { DARABONBA_PTR_SET_VALUE(ccEnable_, ccEnable) };


      // ccGlobalSwitch Field Functions 
      bool hasCcGlobalSwitch() const { return this->ccGlobalSwitch_ != nullptr;};
      void deleteCcGlobalSwitch() { this->ccGlobalSwitch_ = nullptr;};
      inline string getCcGlobalSwitch() const { DARABONBA_PTR_GET_DEFAULT(ccGlobalSwitch_, "") };
      inline ProtectSwitchList& setCcGlobalSwitch(string ccGlobalSwitch) { DARABONBA_PTR_SET_VALUE(ccGlobalSwitch_, ccGlobalSwitch) };


      // ccTemplate Field Functions 
      bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
      void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
      inline string getCcTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
      inline ProtectSwitchList& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline ProtectSwitchList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // preciseRuleEnable Field Functions 
      bool hasPreciseRuleEnable() const { return this->preciseRuleEnable_ != nullptr;};
      void deletePreciseRuleEnable() { this->preciseRuleEnable_ = nullptr;};
      inline int32_t getPreciseRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(preciseRuleEnable_, 0) };
      inline ProtectSwitchList& setPreciseRuleEnable(int32_t preciseRuleEnable) { DARABONBA_PTR_SET_VALUE(preciseRuleEnable_, preciseRuleEnable) };


      // regionBlockEnable Field Functions 
      bool hasRegionBlockEnable() const { return this->regionBlockEnable_ != nullptr;};
      void deleteRegionBlockEnable() { this->regionBlockEnable_ = nullptr;};
      inline int32_t getRegionBlockEnable() const { DARABONBA_PTR_GET_DEFAULT(regionBlockEnable_, 0) };
      inline ProtectSwitchList& setRegionBlockEnable(int32_t regionBlockEnable) { DARABONBA_PTR_SET_VALUE(regionBlockEnable_, regionBlockEnable) };


    protected:
      shared_ptr<string> aiMode_ {};
      shared_ptr<int32_t> aiRuleEnable_ {};
      shared_ptr<string> aiTemplate_ {};
      shared_ptr<int32_t> blackWhiteListEnable_ {};
      shared_ptr<int32_t> ccCustomRuleEnable_ {};
      shared_ptr<int32_t> ccEnable_ {};
      shared_ptr<string> ccGlobalSwitch_ {};
      shared_ptr<string> ccTemplate_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<int32_t> preciseRuleEnable_ {};
      shared_ptr<int32_t> regionBlockEnable_ {};
    };

    virtual bool empty() const override { return this->protectSwitchList_ == nullptr
        && this->requestId_ == nullptr; };
    // protectSwitchList Field Functions 
    bool hasProtectSwitchList() const { return this->protectSwitchList_ != nullptr;};
    void deleteProtectSwitchList() { this->protectSwitchList_ = nullptr;};
    inline const vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList> & getProtectSwitchList() const { DARABONBA_PTR_GET_CONST(protectSwitchList_, vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList>) };
    inline vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList> getProtectSwitchList() { DARABONBA_PTR_GET(protectSwitchList_, vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList>) };
    inline DescribeDomainCcProtectSwitchResponseBody& setProtectSwitchList(const vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList> & protectSwitchList) { DARABONBA_PTR_SET_VALUE(protectSwitchList_, protectSwitchList) };
    inline DescribeDomainCcProtectSwitchResponseBody& setProtectSwitchList(vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList> && protectSwitchList) { DARABONBA_PTR_SET_RVALUE(protectSwitchList_, protectSwitchList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainCcProtectSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDomainCcProtectSwitchResponseBody::ProtectSwitchList>> protectSwitchList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
