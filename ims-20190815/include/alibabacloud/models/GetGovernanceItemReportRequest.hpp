// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceItemType, governanceItemType_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceItemType, governanceItemType_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
    };
    GetGovernanceItemReportRequest() = default ;
    GetGovernanceItemReportRequest(const GetGovernanceItemReportRequest &) = default ;
    GetGovernanceItemReportRequest(GetGovernanceItemReportRequest &&) = default ;
    GetGovernanceItemReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportRequest() = default ;
    GetGovernanceItemReportRequest& operator=(const GetGovernanceItemReportRequest &) = default ;
    GetGovernanceItemReportRequest& operator=(GetGovernanceItemReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->governanceItemType_ == nullptr
        && this->marker_ == nullptr && this->maxItems_ == nullptr; };
    // governanceItemType Field Functions 
    bool hasGovernanceItemType() const { return this->governanceItemType_ != nullptr;};
    void deleteGovernanceItemType() { this->governanceItemType_ = nullptr;};
    inline string getGovernanceItemType() const { DARABONBA_PTR_GET_DEFAULT(governanceItemType_, "") };
    inline GetGovernanceItemReportRequest& setGovernanceItemType(string governanceItemType) { DARABONBA_PTR_SET_VALUE(governanceItemType_, governanceItemType) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline GetGovernanceItemReportRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline string getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, "") };
    inline GetGovernanceItemReportRequest& setMaxItems(string maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


  protected:
    shared_ptr<string> governanceItemType_ {};
    shared_ptr<string> marker_ {};
    shared_ptr<string> maxItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
