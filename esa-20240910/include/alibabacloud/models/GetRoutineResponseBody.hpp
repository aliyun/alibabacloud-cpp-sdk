// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRoutineResponseBodyEnvs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRoutineResponseBody() = default ;
    GetRoutineResponseBody(const GetRoutineResponseBody &) = default ;
    GetRoutineResponseBody(GetRoutineResponseBody &&) = default ;
    GetRoutineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineResponseBody() = default ;
    GetRoutineResponseBody& operator=(const GetRoutineResponseBody &) = default ;
    GetRoutineResponseBody& operator=(GetRoutineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->defaultRelatedRecord_ == nullptr && return this->description_ == nullptr && return this->envs_ == nullptr && return this->hasAssets_ == nullptr && return this->requestId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultRelatedRecord Field Functions 
    bool hasDefaultRelatedRecord() const { return this->defaultRelatedRecord_ != nullptr;};
    void deleteDefaultRelatedRecord() { this->defaultRelatedRecord_ = nullptr;};
    inline string defaultRelatedRecord() const { DARABONBA_PTR_GET_DEFAULT(defaultRelatedRecord_, "") };
    inline GetRoutineResponseBody& setDefaultRelatedRecord(string defaultRelatedRecord) { DARABONBA_PTR_SET_VALUE(defaultRelatedRecord_, defaultRelatedRecord) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRoutineResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<GetRoutineResponseBodyEnvs> & envs() const { DARABONBA_PTR_GET_CONST(envs_, vector<GetRoutineResponseBodyEnvs>) };
    inline vector<GetRoutineResponseBodyEnvs> envs() { DARABONBA_PTR_GET(envs_, vector<GetRoutineResponseBodyEnvs>) };
    inline GetRoutineResponseBody& setEnvs(const vector<GetRoutineResponseBodyEnvs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline GetRoutineResponseBody& setEnvs(vector<GetRoutineResponseBodyEnvs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // hasAssets Field Functions 
    bool hasHasAssets() const { return this->hasAssets_ != nullptr;};
    void deleteHasAssets() { this->hasAssets_ = nullptr;};
    inline bool hasAssets() const { DARABONBA_PTR_GET_DEFAULT(hasAssets_, false) };
    inline GetRoutineResponseBody& setHasAssets(bool hasAssets) { DARABONBA_PTR_SET_VALUE(hasAssets_, hasAssets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the routine was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The default record name to access.
    std::shared_ptr<string> defaultRelatedRecord_ = nullptr;
    // The description of the routine.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the environments.
    std::shared_ptr<vector<GetRoutineResponseBodyEnvs>> envs_ = nullptr;
    std::shared_ptr<bool> hasAssets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
