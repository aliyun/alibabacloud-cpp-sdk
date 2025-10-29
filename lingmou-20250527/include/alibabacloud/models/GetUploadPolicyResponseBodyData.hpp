// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPOLICYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPOLICYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUploadPolicyResponseBodyDataOssPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetUploadPolicyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadPolicyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
      DARABONBA_PTR_TO_JSON(ossPolicy, ossPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadPolicyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(ossPolicy, ossPolicy_);
    };
    GetUploadPolicyResponseBodyData() = default ;
    GetUploadPolicyResponseBodyData(const GetUploadPolicyResponseBodyData &) = default ;
    GetUploadPolicyResponseBodyData(GetUploadPolicyResponseBodyData &&) = default ;
    GetUploadPolicyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadPolicyResponseBodyData() = default ;
    GetUploadPolicyResponseBodyData& operator=(const GetUploadPolicyResponseBodyData &) = default ;
    GetUploadPolicyResponseBodyData& operator=(GetUploadPolicyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossKey_ == nullptr
        && return this->ossPolicy_ == nullptr; };
    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline GetUploadPolicyResponseBodyData& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // ossPolicy Field Functions 
    bool hasOssPolicy() const { return this->ossPolicy_ != nullptr;};
    void deleteOssPolicy() { this->ossPolicy_ = nullptr;};
    inline const Models::GetUploadPolicyResponseBodyDataOssPolicy & ossPolicy() const { DARABONBA_PTR_GET_CONST(ossPolicy_, Models::GetUploadPolicyResponseBodyDataOssPolicy) };
    inline Models::GetUploadPolicyResponseBodyDataOssPolicy ossPolicy() { DARABONBA_PTR_GET(ossPolicy_, Models::GetUploadPolicyResponseBodyDataOssPolicy) };
    inline GetUploadPolicyResponseBodyData& setOssPolicy(const Models::GetUploadPolicyResponseBodyDataOssPolicy & ossPolicy) { DARABONBA_PTR_SET_VALUE(ossPolicy_, ossPolicy) };
    inline GetUploadPolicyResponseBodyData& setOssPolicy(Models::GetUploadPolicyResponseBodyDataOssPolicy && ossPolicy) { DARABONBA_PTR_SET_RVALUE(ossPolicy_, ossPolicy) };


  protected:
    std::shared_ptr<string> ossKey_ = nullptr;
    std::shared_ptr<Models::GetUploadPolicyResponseBodyDataOssPolicy> ossPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
