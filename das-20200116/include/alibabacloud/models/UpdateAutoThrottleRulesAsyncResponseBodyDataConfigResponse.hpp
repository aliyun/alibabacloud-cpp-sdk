// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOTHROTTLERULESASYNCRESPONSEBODYDATACONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOTHROTTLERULESASYNCRESPONSEBODYDATACONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList.hpp>
#include <alibabacloud/models/UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
      DARABONBA_PTR_TO_JSON(ConfigFailInstanceList, configFailInstanceList_);
      DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
      DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
      DARABONBA_PTR_TO_JSON(TotalInstanceCount, totalInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ConfigFailInstanceList, configFailInstanceList_);
      DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
      DARABONBA_PTR_FROM_JSON(TotalInstanceCount, totalInstanceCount_);
    };
    UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse() = default ;
    UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse(const UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse &) = default ;
    UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse(UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse &&) = default ;
    UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse() = default ;
    UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& operator=(const UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse &) = default ;
    UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& operator=(UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configFailInstanceCount_ == nullptr
        && return this->configFailInstanceList_ == nullptr && return this->configSuccessInstanceCount_ == nullptr && return this->configSuccessInstanceList_ == nullptr && return this->totalInstanceCount_ == nullptr; };
    // configFailInstanceCount Field Functions 
    bool hasConfigFailInstanceCount() const { return this->configFailInstanceCount_ != nullptr;};
    void deleteConfigFailInstanceCount() { this->configFailInstanceCount_ = nullptr;};
    inline int64_t configFailInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configFailInstanceCount_, 0L) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setConfigFailInstanceCount(int64_t configFailInstanceCount) { DARABONBA_PTR_SET_VALUE(configFailInstanceCount_, configFailInstanceCount) };


    // configFailInstanceList Field Functions 
    bool hasConfigFailInstanceList() const { return this->configFailInstanceList_ != nullptr;};
    void deleteConfigFailInstanceList() { this->configFailInstanceList_ = nullptr;};
    inline const vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList> & configFailInstanceList() const { DARABONBA_PTR_GET_CONST(configFailInstanceList_, vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList>) };
    inline vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList> configFailInstanceList() { DARABONBA_PTR_GET(configFailInstanceList_, vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList>) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setConfigFailInstanceList(const vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList> & configFailInstanceList) { DARABONBA_PTR_SET_VALUE(configFailInstanceList_, configFailInstanceList) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setConfigFailInstanceList(vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList> && configFailInstanceList) { DARABONBA_PTR_SET_RVALUE(configFailInstanceList_, configFailInstanceList) };


    // configSuccessInstanceCount Field Functions 
    bool hasConfigSuccessInstanceCount() const { return this->configSuccessInstanceCount_ != nullptr;};
    void deleteConfigSuccessInstanceCount() { this->configSuccessInstanceCount_ = nullptr;};
    inline int64_t configSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configSuccessInstanceCount_, 0L) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setConfigSuccessInstanceCount(int64_t configSuccessInstanceCount) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceCount_, configSuccessInstanceCount) };


    // configSuccessInstanceList Field Functions 
    bool hasConfigSuccessInstanceList() const { return this->configSuccessInstanceList_ != nullptr;};
    void deleteConfigSuccessInstanceList() { this->configSuccessInstanceList_ = nullptr;};
    inline const vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList> & configSuccessInstanceList() const { DARABONBA_PTR_GET_CONST(configSuccessInstanceList_, vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList>) };
    inline vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList> configSuccessInstanceList() { DARABONBA_PTR_GET(configSuccessInstanceList_, vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList>) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setConfigSuccessInstanceList(const vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList> & configSuccessInstanceList) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceList_, configSuccessInstanceList) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setConfigSuccessInstanceList(vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList> && configSuccessInstanceList) { DARABONBA_PTR_SET_RVALUE(configSuccessInstanceList_, configSuccessInstanceList) };


    // totalInstanceCount Field Functions 
    bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
    void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
    inline int64_t totalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0L) };
    inline UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponse& setTotalInstanceCount(int64_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


  protected:
    // The number of database instances for which the parameters failed to be configured.
    std::shared_ptr<int64_t> configFailInstanceCount_ = nullptr;
    // The database instances for which the parameters failed to be configured.
    std::shared_ptr<vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigFailInstanceList>> configFailInstanceList_ = nullptr;
    // The number of database instances for which the parameters are configured.
    std::shared_ptr<int64_t> configSuccessInstanceCount_ = nullptr;
    // The database instances for which the parameters are configured.
    std::shared_ptr<vector<Models::UpdateAutoThrottleRulesAsyncResponseBodyDataConfigResponseConfigSuccessInstanceList>> configSuccessInstanceList_ = nullptr;
    // The total number of database instances.
    std::shared_ptr<int64_t> totalInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
