// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGreyTagRouteResponseBodyDataAlbRules.hpp>
#include <alibabacloud/models/DescribeGreyTagRouteResponseBodyDataDubboRules.hpp>
#include <alibabacloud/models/DescribeGreyTagRouteResponseBodyDataScRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeGreyTagRouteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlbRules, albRules_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScRules, scRules_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbRules, albRules_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScRules, scRules_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeGreyTagRouteResponseBodyData() = default ;
    DescribeGreyTagRouteResponseBodyData(const DescribeGreyTagRouteResponseBodyData &) = default ;
    DescribeGreyTagRouteResponseBodyData(DescribeGreyTagRouteResponseBodyData &&) = default ;
    DescribeGreyTagRouteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteResponseBodyData() = default ;
    DescribeGreyTagRouteResponseBodyData& operator=(const DescribeGreyTagRouteResponseBodyData &) = default ;
    DescribeGreyTagRouteResponseBodyData& operator=(DescribeGreyTagRouteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albRules_ != nullptr
        && this->appId_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->dubboRules_ != nullptr && this->greyTagRouteId_ != nullptr
        && this->name_ != nullptr && this->scRules_ != nullptr && this->updateTime_ != nullptr; };
    // albRules Field Functions 
    bool hasAlbRules() const { return this->albRules_ != nullptr;};
    void deleteAlbRules() { this->albRules_ = nullptr;};
    inline const vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules> & albRules() const { DARABONBA_PTR_GET_CONST(albRules_, vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules>) };
    inline vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules> albRules() { DARABONBA_PTR_GET(albRules_, vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules>) };
    inline DescribeGreyTagRouteResponseBodyData& setAlbRules(const vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules> & albRules) { DARABONBA_PTR_SET_VALUE(albRules_, albRules) };
    inline DescribeGreyTagRouteResponseBodyData& setAlbRules(vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules> && albRules) { DARABONBA_PTR_SET_RVALUE(albRules_, albRules) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeGreyTagRouteResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeGreyTagRouteResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeGreyTagRouteResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dubboRules Field Functions 
    bool hasDubboRules() const { return this->dubboRules_ != nullptr;};
    void deleteDubboRules() { this->dubboRules_ = nullptr;};
    inline const vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules> & dubboRules() const { DARABONBA_PTR_GET_CONST(dubboRules_, vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules>) };
    inline vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules> dubboRules() { DARABONBA_PTR_GET(dubboRules_, vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules>) };
    inline DescribeGreyTagRouteResponseBodyData& setDubboRules(const vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules> & dubboRules) { DARABONBA_PTR_SET_VALUE(dubboRules_, dubboRules) };
    inline DescribeGreyTagRouteResponseBodyData& setDubboRules(vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules> && dubboRules) { DARABONBA_PTR_SET_RVALUE(dubboRules_, dubboRules) };


    // greyTagRouteId Field Functions 
    bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
    void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
    inline int64_t greyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
    inline DescribeGreyTagRouteResponseBodyData& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGreyTagRouteResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scRules Field Functions 
    bool hasScRules() const { return this->scRules_ != nullptr;};
    void deleteScRules() { this->scRules_ = nullptr;};
    inline const vector<Models::DescribeGreyTagRouteResponseBodyDataScRules> & scRules() const { DARABONBA_PTR_GET_CONST(scRules_, vector<Models::DescribeGreyTagRouteResponseBodyDataScRules>) };
    inline vector<Models::DescribeGreyTagRouteResponseBodyDataScRules> scRules() { DARABONBA_PTR_GET(scRules_, vector<Models::DescribeGreyTagRouteResponseBodyDataScRules>) };
    inline DescribeGreyTagRouteResponseBodyData& setScRules(const vector<Models::DescribeGreyTagRouteResponseBodyDataScRules> & scRules) { DARABONBA_PTR_SET_VALUE(scRules_, scRules) };
    inline DescribeGreyTagRouteResponseBodyData& setScRules(vector<Models::DescribeGreyTagRouteResponseBodyDataScRules> && scRules) { DARABONBA_PTR_SET_RVALUE(scRules_, scRules) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeGreyTagRouteResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRules>> albRules_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The timestamp when the canary release rule was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the canary release rule.
    std::shared_ptr<string> description_ = nullptr;
    // The canary release rule of the Dubbo service.
    std::shared_ptr<vector<Models::DescribeGreyTagRouteResponseBodyDataDubboRules>> dubboRules_ = nullptr;
    // The ID of the canary release rule. The ID is globally unique.
    std::shared_ptr<int64_t> greyTagRouteId_ = nullptr;
    // The name of the canary release rule.
    std::shared_ptr<string> name_ = nullptr;
    // The canary release rule of the Spring Cloud application.
    std::shared_ptr<vector<Models::DescribeGreyTagRouteResponseBodyDataScRules>> scRules_ = nullptr;
    // The timestamp when the canary release rule was updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
