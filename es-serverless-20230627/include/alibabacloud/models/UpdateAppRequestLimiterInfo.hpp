// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUESTLIMITERINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUESTLIMITERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAppRequestLimiterInfoLimiters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateAppRequestLimiterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequestLimiterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(limiters, limiters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequestLimiterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(limiters, limiters_);
    };
    UpdateAppRequestLimiterInfo() = default ;
    UpdateAppRequestLimiterInfo(const UpdateAppRequestLimiterInfo &) = default ;
    UpdateAppRequestLimiterInfo(UpdateAppRequestLimiterInfo &&) = default ;
    UpdateAppRequestLimiterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequestLimiterInfo() = default ;
    UpdateAppRequestLimiterInfo& operator=(const UpdateAppRequestLimiterInfo &) = default ;
    UpdateAppRequestLimiterInfo& operator=(UpdateAppRequestLimiterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limiters_ != nullptr; };
    // limiters Field Functions 
    bool hasLimiters() const { return this->limiters_ != nullptr;};
    void deleteLimiters() { this->limiters_ = nullptr;};
    inline const vector<Models::UpdateAppRequestLimiterInfoLimiters> & limiters() const { DARABONBA_PTR_GET_CONST(limiters_, vector<Models::UpdateAppRequestLimiterInfoLimiters>) };
    inline vector<Models::UpdateAppRequestLimiterInfoLimiters> limiters() { DARABONBA_PTR_GET(limiters_, vector<Models::UpdateAppRequestLimiterInfoLimiters>) };
    inline UpdateAppRequestLimiterInfo& setLimiters(const vector<Models::UpdateAppRequestLimiterInfoLimiters> & limiters) { DARABONBA_PTR_SET_VALUE(limiters_, limiters) };
    inline UpdateAppRequestLimiterInfo& setLimiters(vector<Models::UpdateAppRequestLimiterInfoLimiters> && limiters) { DARABONBA_PTR_SET_RVALUE(limiters_, limiters) };


  protected:
    std::shared_ptr<vector<Models::UpdateAppRequestLimiterInfoLimiters>> limiters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
