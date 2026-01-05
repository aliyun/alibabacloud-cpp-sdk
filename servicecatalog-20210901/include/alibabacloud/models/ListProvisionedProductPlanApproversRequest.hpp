// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANAPPROVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANAPPROVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListProvisionedProductPlanApproversRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvisionedProductPlanApproversRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLevelFilter, accessLevelFilter_);
      DARABONBA_PTR_TO_JSON(ApprovalFilter, approvalFilter_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvisionedProductPlanApproversRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLevelFilter, accessLevelFilter_);
      DARABONBA_PTR_FROM_JSON(ApprovalFilter, approvalFilter_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
    };
    ListProvisionedProductPlanApproversRequest() = default ;
    ListProvisionedProductPlanApproversRequest(const ListProvisionedProductPlanApproversRequest &) = default ;
    ListProvisionedProductPlanApproversRequest(ListProvisionedProductPlanApproversRequest &&) = default ;
    ListProvisionedProductPlanApproversRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvisionedProductPlanApproversRequest() = default ;
    ListProvisionedProductPlanApproversRequest& operator=(const ListProvisionedProductPlanApproversRequest &) = default ;
    ListProvisionedProductPlanApproversRequest& operator=(ListProvisionedProductPlanApproversRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the filter condition. Valid values:
      // 
      // *   ProvisionedProductPlanApproverName: performs fuzzy match by reviewer name.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accessLevelFilter_ == nullptr
        && this->approvalFilter_ == nullptr && this->filters_ == nullptr; };
    // accessLevelFilter Field Functions 
    bool hasAccessLevelFilter() const { return this->accessLevelFilter_ != nullptr;};
    void deleteAccessLevelFilter() { this->accessLevelFilter_ = nullptr;};
    inline string getAccessLevelFilter() const { DARABONBA_PTR_GET_DEFAULT(accessLevelFilter_, "") };
    inline ListProvisionedProductPlanApproversRequest& setAccessLevelFilter(string accessLevelFilter) { DARABONBA_PTR_SET_VALUE(accessLevelFilter_, accessLevelFilter) };


    // approvalFilter Field Functions 
    bool hasApprovalFilter() const { return this->approvalFilter_ != nullptr;};
    void deleteApprovalFilter() { this->approvalFilter_ = nullptr;};
    inline string getApprovalFilter() const { DARABONBA_PTR_GET_DEFAULT(approvalFilter_, "") };
    inline ListProvisionedProductPlanApproversRequest& setApprovalFilter(string approvalFilter) { DARABONBA_PTR_SET_VALUE(approvalFilter_, approvalFilter) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListProvisionedProductPlanApproversRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListProvisionedProductPlanApproversRequest::Filters>) };
    inline vector<ListProvisionedProductPlanApproversRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListProvisionedProductPlanApproversRequest::Filters>) };
    inline ListProvisionedProductPlanApproversRequest& setFilters(const vector<ListProvisionedProductPlanApproversRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListProvisionedProductPlanApproversRequest& setFilters(vector<ListProvisionedProductPlanApproversRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


  protected:
    // The access filter. Valid values:
    // 
    // *   User (default): queries the plans that are created by the current requester.
    // *   Account: queries the plans that belong to the current Alibaba Cloud account.
    // *   ResourceDirectory: queries the plans that belong to the current resource directory.
    // 
    // >  You must specify one of the `ApprovalFilter` and `AccessLevelFilter` parameters, but not both.
    shared_ptr<string> accessLevelFilter_ {};
    // The access filter of the review dimension. Valid values:
    // 
    // *   AccountRequests: queries all reviewed plans that belong to the current Alibaba Cloud account.
    // *   ResourceDirectoryRequests: queries all plans that belong to the current resource directory.
    // 
    // >  You must specify one of the `ApprovalFilter` and `AccessLevelFilter` parameters, but not both.
    shared_ptr<string> approvalFilter_ {};
    // An array that consists of filter conditions.
    shared_ptr<vector<ListProvisionedProductPlanApproversRequest::Filters>> filters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
