// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETASRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETASRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetAsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetAsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetAsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
    };
    CloudGetAsrRequest() = default ;
    CloudGetAsrRequest(const CloudGetAsrRequest &) = default ;
    CloudGetAsrRequest(CloudGetAsrRequest &&) = default ;
    CloudGetAsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetAsrRequest() = default ;
    CloudGetAsrRequest& operator=(const CloudGetAsrRequest &) = default ;
    CloudGetAsrRequest& operator=(CloudGetAsrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && this->callType_ == nullptr && this->enterpriseId_ == nullptr && this->mainUniqueId_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline string getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, "") };
    inline CloudGetAsrRequest& setAll(string all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
    inline CloudGetAsrRequest& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudGetAsrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline CloudGetAsrRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


  protected:
    // 当all=true时按照beignTime的顺序返回两侧对话文本
    shared_ptr<string> all_ {};
    // 通话类型；1:呼入,2:webcall,4:预览外呼,5:预测外呼,6:主叫外呼,9:内部呼叫
    // 
    // This parameter is required.
    shared_ptr<int64_t> callType_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 主通道的唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> mainUniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
