// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectActions.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectDeviceVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectExpressionVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectFavoriteVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectMiddleVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectModelVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectNameList.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectNativeVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectQueryVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectSelfVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectSysVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectVelocityVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(deviceVariables, deviceVariables_);
      DARABONBA_PTR_TO_JSON(expressionVariables, expressionVariables_);
      DARABONBA_PTR_TO_JSON(favoriteVariables, favoriteVariables_);
      DARABONBA_PTR_TO_JSON(middleVariables, middleVariables_);
      DARABONBA_PTR_TO_JSON(modelVariables, modelVariables_);
      DARABONBA_PTR_TO_JSON(nameList, nameList_);
      DARABONBA_PTR_TO_JSON(nativeVariableFunctions, nativeVariableFunctions_);
      DARABONBA_PTR_TO_JSON(nativeVariables, nativeVariables_);
      DARABONBA_PTR_TO_JSON(queryVariables, queryVariables_);
      DARABONBA_PTR_TO_JSON(selfVariables, selfVariables_);
      DARABONBA_PTR_TO_JSON(sysVariables, sysVariables_);
      DARABONBA_ANY_TO_JSON(thirdVariables, thirdVariables_);
      DARABONBA_PTR_TO_JSON(velocityVariables, velocityVariables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(deviceVariables, deviceVariables_);
      DARABONBA_PTR_FROM_JSON(expressionVariables, expressionVariables_);
      DARABONBA_PTR_FROM_JSON(favoriteVariables, favoriteVariables_);
      DARABONBA_PTR_FROM_JSON(middleVariables, middleVariables_);
      DARABONBA_PTR_FROM_JSON(modelVariables, modelVariables_);
      DARABONBA_PTR_FROM_JSON(nameList, nameList_);
      DARABONBA_PTR_FROM_JSON(nativeVariableFunctions, nativeVariableFunctions_);
      DARABONBA_PTR_FROM_JSON(nativeVariables, nativeVariables_);
      DARABONBA_PTR_FROM_JSON(queryVariables, queryVariables_);
      DARABONBA_PTR_FROM_JSON(selfVariables, selfVariables_);
      DARABONBA_PTR_FROM_JSON(sysVariables, sysVariables_);
      DARABONBA_ANY_FROM_JSON(thirdVariables, thirdVariables_);
      DARABONBA_PTR_FROM_JSON(velocityVariables, velocityVariables_);
    };
    DescribeEventVariableListResponseBodyResultObject() = default ;
    DescribeEventVariableListResponseBodyResultObject(const DescribeEventVariableListResponseBodyResultObject &) = default ;
    DescribeEventVariableListResponseBodyResultObject(DescribeEventVariableListResponseBodyResultObject &&) = default ;
    DescribeEventVariableListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObject() = default ;
    DescribeEventVariableListResponseBodyResultObject& operator=(const DescribeEventVariableListResponseBodyResultObject &) = default ;
    DescribeEventVariableListResponseBodyResultObject& operator=(DescribeEventVariableListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->deviceVariables_ == nullptr && return this->expressionVariables_ == nullptr && return this->favoriteVariables_ == nullptr && return this->middleVariables_ == nullptr && return this->modelVariables_ == nullptr
        && return this->nameList_ == nullptr && return this->nativeVariableFunctions_ == nullptr && return this->nativeVariables_ == nullptr && return this->queryVariables_ == nullptr && return this->selfVariables_ == nullptr
        && return this->sysVariables_ == nullptr && return this->thirdVariables_ == nullptr && return this->velocityVariables_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::DescribeEventVariableListResponseBodyResultObjectActions>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::DescribeEventVariableListResponseBodyResultObjectActions>) };
    inline DescribeEventVariableListResponseBodyResultObject& setActions(const vector<Models::DescribeEventVariableListResponseBodyResultObjectActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline DescribeEventVariableListResponseBodyResultObject& setActions(vector<Models::DescribeEventVariableListResponseBodyResultObjectActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // deviceVariables Field Functions 
    bool hasDeviceVariables() const { return this->deviceVariables_ != nullptr;};
    void deleteDeviceVariables() { this->deviceVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables> & deviceVariables() const { DARABONBA_PTR_GET_CONST(deviceVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables> deviceVariables() { DARABONBA_PTR_GET(deviceVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setDeviceVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables> & deviceVariables) { DARABONBA_PTR_SET_VALUE(deviceVariables_, deviceVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setDeviceVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables> && deviceVariables) { DARABONBA_PTR_SET_RVALUE(deviceVariables_, deviceVariables) };


    // expressionVariables Field Functions 
    bool hasExpressionVariables() const { return this->expressionVariables_ != nullptr;};
    void deleteExpressionVariables() { this->expressionVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables> & expressionVariables() const { DARABONBA_PTR_GET_CONST(expressionVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables> expressionVariables() { DARABONBA_PTR_GET(expressionVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setExpressionVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables> & expressionVariables) { DARABONBA_PTR_SET_VALUE(expressionVariables_, expressionVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setExpressionVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables> && expressionVariables) { DARABONBA_PTR_SET_RVALUE(expressionVariables_, expressionVariables) };


    // favoriteVariables Field Functions 
    bool hasFavoriteVariables() const { return this->favoriteVariables_ != nullptr;};
    void deleteFavoriteVariables() { this->favoriteVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables> & favoriteVariables() const { DARABONBA_PTR_GET_CONST(favoriteVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables> favoriteVariables() { DARABONBA_PTR_GET(favoriteVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setFavoriteVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables> & favoriteVariables) { DARABONBA_PTR_SET_VALUE(favoriteVariables_, favoriteVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setFavoriteVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables> && favoriteVariables) { DARABONBA_PTR_SET_RVALUE(favoriteVariables_, favoriteVariables) };


    // middleVariables Field Functions 
    bool hasMiddleVariables() const { return this->middleVariables_ != nullptr;};
    void deleteMiddleVariables() { this->middleVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables> & middleVariables() const { DARABONBA_PTR_GET_CONST(middleVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables> middleVariables() { DARABONBA_PTR_GET(middleVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setMiddleVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables> & middleVariables) { DARABONBA_PTR_SET_VALUE(middleVariables_, middleVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setMiddleVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables> && middleVariables) { DARABONBA_PTR_SET_RVALUE(middleVariables_, middleVariables) };


    // modelVariables Field Functions 
    bool hasModelVariables() const { return this->modelVariables_ != nullptr;};
    void deleteModelVariables() { this->modelVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables> & modelVariables() const { DARABONBA_PTR_GET_CONST(modelVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables> modelVariables() { DARABONBA_PTR_GET(modelVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setModelVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables> & modelVariables) { DARABONBA_PTR_SET_VALUE(modelVariables_, modelVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setModelVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables> && modelVariables) { DARABONBA_PTR_SET_RVALUE(modelVariables_, modelVariables) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList> nameList() { DARABONBA_PTR_GET(nameList_, vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList>) };
    inline DescribeEventVariableListResponseBodyResultObject& setNameList(const vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeEventVariableListResponseBodyResultObject& setNameList(vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // nativeVariableFunctions Field Functions 
    bool hasNativeVariableFunctions() const { return this->nativeVariableFunctions_ != nullptr;};
    void deleteNativeVariableFunctions() { this->nativeVariableFunctions_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions> & nativeVariableFunctions() const { DARABONBA_PTR_GET_CONST(nativeVariableFunctions_, vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions> nativeVariableFunctions() { DARABONBA_PTR_GET(nativeVariableFunctions_, vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions>) };
    inline DescribeEventVariableListResponseBodyResultObject& setNativeVariableFunctions(const vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions> & nativeVariableFunctions) { DARABONBA_PTR_SET_VALUE(nativeVariableFunctions_, nativeVariableFunctions) };
    inline DescribeEventVariableListResponseBodyResultObject& setNativeVariableFunctions(vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions> && nativeVariableFunctions) { DARABONBA_PTR_SET_RVALUE(nativeVariableFunctions_, nativeVariableFunctions) };


    // nativeVariables Field Functions 
    bool hasNativeVariables() const { return this->nativeVariables_ != nullptr;};
    void deleteNativeVariables() { this->nativeVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables> & nativeVariables() const { DARABONBA_PTR_GET_CONST(nativeVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables> nativeVariables() { DARABONBA_PTR_GET(nativeVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setNativeVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables> & nativeVariables) { DARABONBA_PTR_SET_VALUE(nativeVariables_, nativeVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setNativeVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables> && nativeVariables) { DARABONBA_PTR_SET_RVALUE(nativeVariables_, nativeVariables) };


    // queryVariables Field Functions 
    bool hasQueryVariables() const { return this->queryVariables_ != nullptr;};
    void deleteQueryVariables() { this->queryVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables> & queryVariables() const { DARABONBA_PTR_GET_CONST(queryVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables> queryVariables() { DARABONBA_PTR_GET(queryVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setQueryVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables> & queryVariables) { DARABONBA_PTR_SET_VALUE(queryVariables_, queryVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setQueryVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables> && queryVariables) { DARABONBA_PTR_SET_RVALUE(queryVariables_, queryVariables) };


    // selfVariables Field Functions 
    bool hasSelfVariables() const { return this->selfVariables_ != nullptr;};
    void deleteSelfVariables() { this->selfVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables> & selfVariables() const { DARABONBA_PTR_GET_CONST(selfVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables> selfVariables() { DARABONBA_PTR_GET(selfVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setSelfVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables> & selfVariables) { DARABONBA_PTR_SET_VALUE(selfVariables_, selfVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setSelfVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables> && selfVariables) { DARABONBA_PTR_SET_RVALUE(selfVariables_, selfVariables) };


    // sysVariables Field Functions 
    bool hasSysVariables() const { return this->sysVariables_ != nullptr;};
    void deleteSysVariables() { this->sysVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables> & sysVariables() const { DARABONBA_PTR_GET_CONST(sysVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables> sysVariables() { DARABONBA_PTR_GET(sysVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setSysVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables> & sysVariables) { DARABONBA_PTR_SET_VALUE(sysVariables_, sysVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setSysVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables> && sysVariables) { DARABONBA_PTR_SET_RVALUE(sysVariables_, sysVariables) };


    // thirdVariables Field Functions 
    bool hasThirdVariables() const { return this->thirdVariables_ != nullptr;};
    void deleteThirdVariables() { this->thirdVariables_ = nullptr;};
    inline     const Darabonba::Json & thirdVariables() const { DARABONBA_GET(thirdVariables_) };
    Darabonba::Json & thirdVariables() { DARABONBA_GET(thirdVariables_) };
    inline DescribeEventVariableListResponseBodyResultObject& setThirdVariables(const Darabonba::Json & thirdVariables) { DARABONBA_SET_VALUE(thirdVariables_, thirdVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setThirdVariables(Darabonba::Json & thirdVariables) { DARABONBA_SET_RVALUE(thirdVariables_, thirdVariables) };


    // velocityVariables Field Functions 
    bool hasVelocityVariables() const { return this->velocityVariables_ != nullptr;};
    void deleteVelocityVariables() { this->velocityVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables> & velocityVariables() const { DARABONBA_PTR_GET_CONST(velocityVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables>) };
    inline vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables> velocityVariables() { DARABONBA_PTR_GET(velocityVariables_, vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables>) };
    inline DescribeEventVariableListResponseBodyResultObject& setVelocityVariables(const vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables> & velocityVariables) { DARABONBA_PTR_SET_VALUE(velocityVariables_, velocityVariables) };
    inline DescribeEventVariableListResponseBodyResultObject& setVelocityVariables(vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables> && velocityVariables) { DARABONBA_PTR_SET_RVALUE(velocityVariables_, velocityVariables) };


  protected:
    // Action variable.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectActions>> actions_ = nullptr;
    // Device variable.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectDeviceVariables>> deviceVariables_ = nullptr;
    // Custom variable.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectExpressionVariables>> expressionVariables_ = nullptr;
    // Favorite variables.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectFavoriteVariables>> favoriteVariables_ = nullptr;
    // Intermediate variable return object.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectMiddleVariables>> middleVariables_ = nullptr;
    // An array of model variables.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectModelVariables>> modelVariables_ = nullptr;
    // List of name variables.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectNameList>> nameList_ = nullptr;
    // List of available functions for the original variable.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariableFunctions>> nativeVariableFunctions_ = nullptr;
    // List of event fields.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectNativeVariables>> nativeVariables_ = nullptr;
    // An array of custom query variables.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariables>> queryVariables_ = nullptr;
    // Custom variables (custom variables, cumulative variables, custom system variables).
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectSelfVariables>> selfVariables_ = nullptr;
    // System variables.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectSysVariables>> sysVariables_ = nullptr;
    // Other related variables.
    Darabonba::Json thirdVariables_ = nullptr;
    // An array of accumulated variables.
    std::shared_ptr<vector<Models::DescribeEventVariableListResponseBodyResultObjectVelocityVariables>> velocityVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
