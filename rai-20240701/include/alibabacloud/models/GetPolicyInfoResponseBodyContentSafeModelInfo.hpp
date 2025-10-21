// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYCONTENTSAFEMODELINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYCONTENTSAFEMODELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyInfoResponseBodyContentSafeModelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyInfoResponseBodyContentSafeModelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(ModelInstanceId, modelInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyInfoResponseBodyContentSafeModelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(ModelInstanceId, modelInstanceId_);
    };
    GetPolicyInfoResponseBodyContentSafeModelInfo() = default ;
    GetPolicyInfoResponseBodyContentSafeModelInfo(const GetPolicyInfoResponseBodyContentSafeModelInfo &) = default ;
    GetPolicyInfoResponseBodyContentSafeModelInfo(GetPolicyInfoResponseBodyContentSafeModelInfo &&) = default ;
    GetPolicyInfoResponseBodyContentSafeModelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyInfoResponseBodyContentSafeModelInfo() = default ;
    GetPolicyInfoResponseBodyContentSafeModelInfo& operator=(const GetPolicyInfoResponseBodyContentSafeModelInfo &) = default ;
    GetPolicyInfoResponseBodyContentSafeModelInfo& operator=(GetPolicyInfoResponseBodyContentSafeModelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->easServiceName_ == nullptr
        && return this->modelInstanceId_ == nullptr; };
    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline GetPolicyInfoResponseBodyContentSafeModelInfo& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // modelInstanceId Field Functions 
    bool hasModelInstanceId() const { return this->modelInstanceId_ != nullptr;};
    void deleteModelInstanceId() { this->modelInstanceId_ = nullptr;};
    inline int64_t modelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(modelInstanceId_, 0L) };
    inline GetPolicyInfoResponseBodyContentSafeModelInfo& setModelInstanceId(int64_t modelInstanceId) { DARABONBA_PTR_SET_VALUE(modelInstanceId_, modelInstanceId) };


  protected:
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<int64_t> modelInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
