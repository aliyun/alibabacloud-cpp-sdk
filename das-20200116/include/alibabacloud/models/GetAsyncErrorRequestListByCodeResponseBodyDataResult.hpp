// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTLISTBYCODERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTLISTBYCODERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAsyncErrorRequestListByCodeResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncErrorRequestListByCodeResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(sqlId, sqlId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncErrorRequestListByCodeResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(sqlId, sqlId_);
    };
    GetAsyncErrorRequestListByCodeResponseBodyDataResult() = default ;
    GetAsyncErrorRequestListByCodeResponseBodyDataResult(const GetAsyncErrorRequestListByCodeResponseBodyDataResult &) = default ;
    GetAsyncErrorRequestListByCodeResponseBodyDataResult(GetAsyncErrorRequestListByCodeResponseBodyDataResult &&) = default ;
    GetAsyncErrorRequestListByCodeResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncErrorRequestListByCodeResponseBodyDataResult() = default ;
    GetAsyncErrorRequestListByCodeResponseBodyDataResult& operator=(const GetAsyncErrorRequestListByCodeResponseBodyDataResult &) = default ;
    GetAsyncErrorRequestListByCodeResponseBodyDataResult& operator=(GetAsyncErrorRequestListByCodeResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->sqlId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAsyncErrorRequestListByCodeResponseBodyDataResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetAsyncErrorRequestListByCodeResponseBodyDataResult& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


  protected:
    // The instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // SQL ID.
    std::shared_ptr<string> sqlId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
