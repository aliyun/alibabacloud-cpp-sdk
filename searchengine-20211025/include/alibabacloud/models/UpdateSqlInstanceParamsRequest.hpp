// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESQLINSTANCEPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESQLINSTANCEPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class UpdateSqlInstanceParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSqlInstanceParamsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(combineParam, combineParam_);
      DARABONBA_ANY_TO_JSON(dynamicParam, dynamicParam_);
      DARABONBA_ANY_TO_JSON(kvpair, kvpair_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_ANY_TO_JSON(staticParam, staticParam_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSqlInstanceParamsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(combineParam, combineParam_);
      DARABONBA_ANY_FROM_JSON(dynamicParam, dynamicParam_);
      DARABONBA_ANY_FROM_JSON(kvpair, kvpair_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_ANY_FROM_JSON(staticParam, staticParam_);
    };
    UpdateSqlInstanceParamsRequest() = default ;
    UpdateSqlInstanceParamsRequest(const UpdateSqlInstanceParamsRequest &) = default ;
    UpdateSqlInstanceParamsRequest(UpdateSqlInstanceParamsRequest &&) = default ;
    UpdateSqlInstanceParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSqlInstanceParamsRequest() = default ;
    UpdateSqlInstanceParamsRequest& operator=(const UpdateSqlInstanceParamsRequest &) = default ;
    UpdateSqlInstanceParamsRequest& operator=(UpdateSqlInstanceParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->combineParam_ != nullptr
        && this->dynamicParam_ != nullptr && this->kvpair_ != nullptr && this->params_ != nullptr && this->staticParam_ != nullptr; };
    // combineParam Field Functions 
    bool hasCombineParam() const { return this->combineParam_ != nullptr;};
    void deleteCombineParam() { this->combineParam_ = nullptr;};
    inline     const Darabonba::Json & combineParam() const { DARABONBA_GET(combineParam_) };
    Darabonba::Json & combineParam() { DARABONBA_GET(combineParam_) };
    inline UpdateSqlInstanceParamsRequest& setCombineParam(const Darabonba::Json & combineParam) { DARABONBA_SET_VALUE(combineParam_, combineParam) };
    inline UpdateSqlInstanceParamsRequest& setCombineParam(Darabonba::Json & combineParam) { DARABONBA_SET_RVALUE(combineParam_, combineParam) };


    // dynamicParam Field Functions 
    bool hasDynamicParam() const { return this->dynamicParam_ != nullptr;};
    void deleteDynamicParam() { this->dynamicParam_ = nullptr;};
    inline     const Darabonba::Json & dynamicParam() const { DARABONBA_GET(dynamicParam_) };
    Darabonba::Json & dynamicParam() { DARABONBA_GET(dynamicParam_) };
    inline UpdateSqlInstanceParamsRequest& setDynamicParam(const Darabonba::Json & dynamicParam) { DARABONBA_SET_VALUE(dynamicParam_, dynamicParam) };
    inline UpdateSqlInstanceParamsRequest& setDynamicParam(Darabonba::Json & dynamicParam) { DARABONBA_SET_RVALUE(dynamicParam_, dynamicParam) };


    // kvpair Field Functions 
    bool hasKvpair() const { return this->kvpair_ != nullptr;};
    void deleteKvpair() { this->kvpair_ = nullptr;};
    inline     const Darabonba::Json & kvpair() const { DARABONBA_GET(kvpair_) };
    Darabonba::Json & kvpair() { DARABONBA_GET(kvpair_) };
    inline UpdateSqlInstanceParamsRequest& setKvpair(const Darabonba::Json & kvpair) { DARABONBA_SET_VALUE(kvpair_, kvpair) };
    inline UpdateSqlInstanceParamsRequest& setKvpair(Darabonba::Json & kvpair) { DARABONBA_SET_RVALUE(kvpair_, kvpair) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline UpdateSqlInstanceParamsRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline UpdateSqlInstanceParamsRequest& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // staticParam Field Functions 
    bool hasStaticParam() const { return this->staticParam_ != nullptr;};
    void deleteStaticParam() { this->staticParam_ = nullptr;};
    inline     const Darabonba::Json & staticParam() const { DARABONBA_GET(staticParam_) };
    Darabonba::Json & staticParam() { DARABONBA_GET(staticParam_) };
    inline UpdateSqlInstanceParamsRequest& setStaticParam(const Darabonba::Json & staticParam) { DARABONBA_SET_VALUE(staticParam_, staticParam) };
    inline UpdateSqlInstanceParamsRequest& setStaticParam(Darabonba::Json & staticParam) { DARABONBA_SET_RVALUE(staticParam_, staticParam) };


  protected:
    Darabonba::Json combineParam_ = nullptr;
    Darabonba::Json dynamicParam_ = nullptr;
    Darabonba::Json kvpair_ = nullptr;
    Darabonba::Json params_ = nullptr;
    Darabonba::Json staticParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
