// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHTTPDDOSINTELLIGENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHTTPDDOSINTELLIGENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteHttpDDoSIntelligentRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHttpDDoSIntelligentRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHttpDDoSIntelligentRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteHttpDDoSIntelligentRuleRequest() = default ;
    DeleteHttpDDoSIntelligentRuleRequest(const DeleteHttpDDoSIntelligentRuleRequest &) = default ;
    DeleteHttpDDoSIntelligentRuleRequest(DeleteHttpDDoSIntelligentRuleRequest &&) = default ;
    DeleteHttpDDoSIntelligentRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHttpDDoSIntelligentRuleRequest() = default ;
    DeleteHttpDDoSIntelligentRuleRequest& operator=(const DeleteHttpDDoSIntelligentRuleRequest &) = default ;
    DeleteHttpDDoSIntelligentRuleRequest& operator=(DeleteHttpDDoSIntelligentRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordName_ == nullptr
        && return this->ruleId_ == nullptr && return this->siteId_ == nullptr; };
    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline DeleteHttpDDoSIntelligentRuleRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DeleteHttpDDoSIntelligentRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteHttpDDoSIntelligentRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
