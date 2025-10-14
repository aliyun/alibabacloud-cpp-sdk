// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINECODEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINECODEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineCodeVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoutineCode, routineCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoutineCode, routineCode_);
    };
    GetRoutineCodeVersionResponseBody() = default ;
    GetRoutineCodeVersionResponseBody(const GetRoutineCodeVersionResponseBody &) = default ;
    GetRoutineCodeVersionResponseBody(GetRoutineCodeVersionResponseBody &&) = default ;
    GetRoutineCodeVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineCodeVersionResponseBody() = default ;
    GetRoutineCodeVersionResponseBody& operator=(const GetRoutineCodeVersionResponseBody &) = default ;
    GetRoutineCodeVersionResponseBody& operator=(GetRoutineCodeVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeDescription_ == nullptr
        && return this->createTime_ == nullptr && return this->requestId_ == nullptr && return this->routineCode_ == nullptr; };
    // codeDescription Field Functions 
    bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
    void deleteCodeDescription() { this->codeDescription_ = nullptr;};
    inline string codeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
    inline GetRoutineCodeVersionResponseBody& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineCodeVersionResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineCodeVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routineCode Field Functions 
    bool hasRoutineCode() const { return this->routineCode_ != nullptr;};
    void deleteRoutineCode() { this->routineCode_ = nullptr;};
    inline string routineCode() const { DARABONBA_PTR_GET_DEFAULT(routineCode_, "") };
    inline GetRoutineCodeVersionResponseBody& setRoutineCode(string routineCode) { DARABONBA_PTR_SET_VALUE(routineCode_, routineCode) };


  protected:
    // The description of the code version.
    std::shared_ptr<string> codeDescription_ = nullptr;
    // The time when the version was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The code content.
    std::shared_ptr<string> routineCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
