// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobScoreReportsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobScoreReportsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeRequestIds, excludeRequestIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobScoreReportsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeRequestIds, excludeRequestIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListFeatureConsistencyCheckJobScoreReportsShrinkRequest() = default ;
    ListFeatureConsistencyCheckJobScoreReportsShrinkRequest(const ListFeatureConsistencyCheckJobScoreReportsShrinkRequest &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsShrinkRequest(ListFeatureConsistencyCheckJobScoreReportsShrinkRequest &&) = default ;
    ListFeatureConsistencyCheckJobScoreReportsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobScoreReportsShrinkRequest() = default ;
    ListFeatureConsistencyCheckJobScoreReportsShrinkRequest& operator=(const ListFeatureConsistencyCheckJobScoreReportsShrinkRequest &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsShrinkRequest& operator=(ListFeatureConsistencyCheckJobScoreReportsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeRequestIdsShrink_ != nullptr
        && this->instanceId_ != nullptr; };
    // excludeRequestIdsShrink Field Functions 
    bool hasExcludeRequestIdsShrink() const { return this->excludeRequestIdsShrink_ != nullptr;};
    void deleteExcludeRequestIdsShrink() { this->excludeRequestIdsShrink_ = nullptr;};
    inline string excludeRequestIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeRequestIdsShrink_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsShrinkRequest& setExcludeRequestIdsShrink(string excludeRequestIdsShrink) { DARABONBA_PTR_SET_VALUE(excludeRequestIdsShrink_, excludeRequestIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> excludeRequestIdsShrink_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
