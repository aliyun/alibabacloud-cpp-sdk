// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(summaryTypeList, summaryTypeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(summaryTypeList, summaryTypeListShrink_);
    };
    QueryMinutesSummaryShrinkRequest() = default ;
    QueryMinutesSummaryShrinkRequest(const QueryMinutesSummaryShrinkRequest &) = default ;
    QueryMinutesSummaryShrinkRequest(QueryMinutesSummaryShrinkRequest &&) = default ;
    QueryMinutesSummaryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryShrinkRequest() = default ;
    QueryMinutesSummaryShrinkRequest& operator=(const QueryMinutesSummaryShrinkRequest &) = default ;
    QueryMinutesSummaryShrinkRequest& operator=(QueryMinutesSummaryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->conferenceId_ == nullptr && this->summaryTypeListShrink_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryMinutesSummaryShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryMinutesSummaryShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // summaryTypeListShrink Field Functions 
    bool hasSummaryTypeListShrink() const { return this->summaryTypeListShrink_ != nullptr;};
    void deleteSummaryTypeListShrink() { this->summaryTypeListShrink_ = nullptr;};
    inline string getSummaryTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(summaryTypeListShrink_, "") };
    inline QueryMinutesSummaryShrinkRequest& setSummaryTypeListShrink(string summaryTypeListShrink) { DARABONBA_PTR_SET_VALUE(summaryTypeListShrink_, summaryTypeListShrink) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<string> summaryTypeListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
