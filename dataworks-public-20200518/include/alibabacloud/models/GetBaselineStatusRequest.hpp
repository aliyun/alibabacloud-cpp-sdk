// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
    };
    GetBaselineStatusRequest() = default ;
    GetBaselineStatusRequest(const GetBaselineStatusRequest &) = default ;
    GetBaselineStatusRequest(GetBaselineStatusRequest &&) = default ;
    GetBaselineStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineStatusRequest() = default ;
    GetBaselineStatusRequest& operator=(const GetBaselineStatusRequest &) = default ;
    GetBaselineStatusRequest& operator=(GetBaselineStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->bizdate_ == nullptr && this->inGroupId_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetBaselineStatusRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline GetBaselineStatusRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t getInGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline GetBaselineStatusRequest& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


  protected:
    // The ID of the baseline.
    // 
    // This parameter is required.
    shared_ptr<int64_t> baselineId_ {};
    // The business date in UTC format (yyyy-MM-dd\\"T\\"HH:mm:ssZ).
    // 
    // This parameter is required.
    shared_ptr<string> bizdate_ {};
    // The cycle number of the baseline instance. The value is 1 for daily baselines. The value ranges from [1,24\\] for hourly baselines.
    // 
    // This parameter is required.
    shared_ptr<int32_t> inGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
