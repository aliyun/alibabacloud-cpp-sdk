// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODYTRAFFICCONTROLTARGETITEMREPORTDETAILITEMCONTROLTOPREPORTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODYTRAFFICCONTROLTARGETITEMREPORTDETAILITEMCONTROLTOPREPORTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& obj) { 
      DARABONBA_ANY_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(TargetProgress, targetProgress_);
      DARABONBA_PTR_TO_JSON(TargetTraffic, targetTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& obj) { 
      DARABONBA_ANY_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(TargetProgress, targetProgress_);
      DARABONBA_PTR_FROM_JSON(TargetTraffic, targetTraffic_);
    };
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails(const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails(QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails &&) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& operator=(const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& operator=(QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->features_ != nullptr
        && this->itemId_ != nullptr && this->targetProgress_ != nullptr && this->targetTraffic_ != nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline     const Darabonba::Json & features() const { DARABONBA_GET(features_) };
    Darabonba::Json & features() { DARABONBA_GET(features_) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& setFeatures(Darabonba::Json & features) { DARABONBA_SET_RVALUE(features_, features) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // targetProgress Field Functions 
    bool hasTargetProgress() const { return this->targetProgress_ != nullptr;};
    void deleteTargetProgress() { this->targetProgress_ = nullptr;};
    inline string targetProgress() const { DARABONBA_PTR_GET_DEFAULT(targetProgress_, "") };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& setTargetProgress(string targetProgress) { DARABONBA_PTR_SET_VALUE(targetProgress_, targetProgress) };


    // targetTraffic Field Functions 
    bool hasTargetTraffic() const { return this->targetTraffic_ != nullptr;};
    void deleteTargetTraffic() { this->targetTraffic_ = nullptr;};
    inline int64_t targetTraffic() const { DARABONBA_PTR_GET_DEFAULT(targetTraffic_, 0L) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails& setTargetTraffic(int64_t targetTraffic) { DARABONBA_PTR_SET_VALUE(targetTraffic_, targetTraffic) };


  protected:
    Darabonba::Json features_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> targetProgress_ = nullptr;
    std::shared_ptr<int64_t> targetTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
