// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGreyTagRouteResponseBodyDataResultAlbRules.hpp>
#include <alibabacloud/models/ListGreyTagRouteResponseBodyDataResultDubboRules.hpp>
#include <alibabacloud/models/ListGreyTagRouteResponseBodyDataResultScRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlbRules, albRules_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScRules, scRules_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbRules, albRules_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScRules, scRules_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListGreyTagRouteResponseBodyDataResult() = default ;
    ListGreyTagRouteResponseBodyDataResult(const ListGreyTagRouteResponseBodyDataResult &) = default ;
    ListGreyTagRouteResponseBodyDataResult(ListGreyTagRouteResponseBodyDataResult &&) = default ;
    ListGreyTagRouteResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBodyDataResult() = default ;
    ListGreyTagRouteResponseBodyDataResult& operator=(const ListGreyTagRouteResponseBodyDataResult &) = default ;
    ListGreyTagRouteResponseBodyDataResult& operator=(ListGreyTagRouteResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albRules_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->dubboRules_ != nullptr && this->greyTagRouteId_ != nullptr && this->name_ != nullptr
        && this->scRules_ != nullptr && this->updateTime_ != nullptr; };
    // albRules Field Functions 
    bool hasAlbRules() const { return this->albRules_ != nullptr;};
    void deleteAlbRules() { this->albRules_ = nullptr;};
    inline const vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules> & albRules() const { DARABONBA_PTR_GET_CONST(albRules_, vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules>) };
    inline vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules> albRules() { DARABONBA_PTR_GET(albRules_, vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules>) };
    inline ListGreyTagRouteResponseBodyDataResult& setAlbRules(const vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules> & albRules) { DARABONBA_PTR_SET_VALUE(albRules_, albRules) };
    inline ListGreyTagRouteResponseBodyDataResult& setAlbRules(vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules> && albRules) { DARABONBA_PTR_SET_RVALUE(albRules_, albRules) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListGreyTagRouteResponseBodyDataResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGreyTagRouteResponseBodyDataResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dubboRules Field Functions 
    bool hasDubboRules() const { return this->dubboRules_ != nullptr;};
    void deleteDubboRules() { this->dubboRules_ = nullptr;};
    inline const vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules> & dubboRules() const { DARABONBA_PTR_GET_CONST(dubboRules_, vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules>) };
    inline vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules> dubboRules() { DARABONBA_PTR_GET(dubboRules_, vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules>) };
    inline ListGreyTagRouteResponseBodyDataResult& setDubboRules(const vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules> & dubboRules) { DARABONBA_PTR_SET_VALUE(dubboRules_, dubboRules) };
    inline ListGreyTagRouteResponseBodyDataResult& setDubboRules(vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules> && dubboRules) { DARABONBA_PTR_SET_RVALUE(dubboRules_, dubboRules) };


    // greyTagRouteId Field Functions 
    bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
    void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
    inline int64_t greyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
    inline ListGreyTagRouteResponseBodyDataResult& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGreyTagRouteResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scRules Field Functions 
    bool hasScRules() const { return this->scRules_ != nullptr;};
    void deleteScRules() { this->scRules_ = nullptr;};
    inline const vector<Models::ListGreyTagRouteResponseBodyDataResultScRules> & scRules() const { DARABONBA_PTR_GET_CONST(scRules_, vector<Models::ListGreyTagRouteResponseBodyDataResultScRules>) };
    inline vector<Models::ListGreyTagRouteResponseBodyDataResultScRules> scRules() { DARABONBA_PTR_GET(scRules_, vector<Models::ListGreyTagRouteResponseBodyDataResultScRules>) };
    inline ListGreyTagRouteResponseBodyDataResult& setScRules(const vector<Models::ListGreyTagRouteResponseBodyDataResultScRules> & scRules) { DARABONBA_PTR_SET_VALUE(scRules_, scRules) };
    inline ListGreyTagRouteResponseBodyDataResult& setScRules(vector<Models::ListGreyTagRouteResponseBodyDataResultScRules> && scRules) { DARABONBA_PTR_SET_RVALUE(scRules_, scRules) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListGreyTagRouteResponseBodyDataResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRules>> albRules_ = nullptr;
    // The timestamp when the canary release rule was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the canary release rule.
    std::shared_ptr<string> description_ = nullptr;
    // The canary release rule of the Dubbo service.
    std::shared_ptr<vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRules>> dubboRules_ = nullptr;
    // The ID of the canary release rule.
    std::shared_ptr<int64_t> greyTagRouteId_ = nullptr;
    // The name of the canary release rule.
    std::shared_ptr<string> name_ = nullptr;
    // The canary release rule of the Spring Cloud application.
    std::shared_ptr<vector<Models::ListGreyTagRouteResponseBodyDataResultScRules>> scRules_ = nullptr;
    // The timestamp when the canary release rule was updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
