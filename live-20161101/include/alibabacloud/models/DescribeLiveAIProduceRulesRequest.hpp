// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIProduceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
      DARABONBA_PTR_TO_JSON(SuffixName, suffixName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
      DARABONBA_PTR_FROM_JSON(SuffixName, suffixName_);
    };
    DescribeLiveAIProduceRulesRequest() = default ;
    DescribeLiveAIProduceRulesRequest(const DescribeLiveAIProduceRulesRequest &) = default ;
    DescribeLiveAIProduceRulesRequest(DescribeLiveAIProduceRulesRequest &&) = default ;
    DescribeLiveAIProduceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIProduceRulesRequest() = default ;
    DescribeLiveAIProduceRulesRequest& operator=(const DescribeLiveAIProduceRulesRequest &) = default ;
    DescribeLiveAIProduceRulesRequest& operator=(DescribeLiveAIProduceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->domain_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->rulesId_ == nullptr && this->suffixName_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveAIProduceRulesRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveAIProduceRulesRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveAIProduceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeLiveAIProduceRulesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeLiveAIProduceRulesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveAIProduceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rulesId Field Functions 
    bool hasRulesId() const { return this->rulesId_ != nullptr;};
    void deleteRulesId() { this->rulesId_ = nullptr;};
    inline string getRulesId() const { DARABONBA_PTR_GET_DEFAULT(rulesId_, "") };
    inline DescribeLiveAIProduceRulesRequest& setRulesId(string rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };


    // suffixName Field Functions 
    bool hasSuffixName() const { return this->suffixName_ != nullptr;};
    void deleteSuffixName() { this->suffixName_ = nullptr;};
    inline string getSuffixName() const { DARABONBA_PTR_GET_DEFAULT(suffixName_, "") };
    inline DescribeLiveAIProduceRulesRequest& setSuffixName(string suffixName) { DARABONBA_PTR_SET_VALUE(suffixName_, suffixName) };


  protected:
    // The name of the application to which the live stream belongs.
    shared_ptr<string> app_ {};
    // The main streaming domain.
    shared_ptr<string> domain_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Valid values: [1,100].
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Valid values: [1,100].
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the subtitle rule.
    shared_ptr<string> rulesId_ {};
    // The suffix of the subtitle rule.
    // 
    // > Set the value to the name of the subtitle template.
    shared_ptr<string> suffixName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
