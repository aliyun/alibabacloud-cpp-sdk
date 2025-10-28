// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATBYCODERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATBYCODERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAsyncErrorRequestStatByCodeResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncErrorRequestStatByCodeResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncErrorRequestStatByCodeResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    GetAsyncErrorRequestStatByCodeResponseBodyDataResult() = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyDataResult(const GetAsyncErrorRequestStatByCodeResponseBodyDataResult &) = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyDataResult(GetAsyncErrorRequestStatByCodeResponseBodyDataResult &&) = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncErrorRequestStatByCodeResponseBodyDataResult() = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyDataResult& operator=(const GetAsyncErrorRequestStatByCodeResponseBodyDataResult &) = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyDataResult& operator=(GetAsyncErrorRequestStatByCodeResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->errorCode_ == nullptr && return this->instanceId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyDataResult& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAsyncErrorRequestStatByCodeResponseBodyDataResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAsyncErrorRequestStatByCodeResponseBodyDataResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The number of SQL queries corresponding to the error code.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
