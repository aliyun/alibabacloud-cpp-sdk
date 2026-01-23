// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDSTATISTICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDSTATISTICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStandardStatisticsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StatisticsQuery, statisticsQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StatisticsQuery, statisticsQueryShrink_);
    };
    GetStandardStatisticsShrinkRequest() = default ;
    GetStandardStatisticsShrinkRequest(const GetStandardStatisticsShrinkRequest &) = default ;
    GetStandardStatisticsShrinkRequest(GetStandardStatisticsShrinkRequest &&) = default ;
    GetStandardStatisticsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardStatisticsShrinkRequest() = default ;
    GetStandardStatisticsShrinkRequest& operator=(const GetStandardStatisticsShrinkRequest &) = default ;
    GetStandardStatisticsShrinkRequest& operator=(GetStandardStatisticsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->statisticsQueryShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStandardStatisticsShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // statisticsQueryShrink Field Functions 
    bool hasStatisticsQueryShrink() const { return this->statisticsQueryShrink_ != nullptr;};
    void deleteStatisticsQueryShrink() { this->statisticsQueryShrink_ = nullptr;};
    inline string getStatisticsQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(statisticsQueryShrink_, "") };
    inline GetStandardStatisticsShrinkRequest& setStatisticsQueryShrink(string statisticsQueryShrink) { DARABONBA_PTR_SET_VALUE(statisticsQueryShrink_, statisticsQueryShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> statisticsQueryShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
