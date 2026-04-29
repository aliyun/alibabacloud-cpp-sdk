// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETAREACODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETAREACODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetAreaCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetAreaCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Tel, tel_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetAreaCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Tel, tel_);
    };
    CloudGetAreaCodeRequest() = default ;
    CloudGetAreaCodeRequest(const CloudGetAreaCodeRequest &) = default ;
    CloudGetAreaCodeRequest(CloudGetAreaCodeRequest &&) = default ;
    CloudGetAreaCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetAreaCodeRequest() = default ;
    CloudGetAreaCodeRequest& operator=(const CloudGetAreaCodeRequest &) = default ;
    CloudGetAreaCodeRequest& operator=(CloudGetAreaCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->tel_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudGetAreaCodeRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // tel Field Functions 
    bool hasTel() const { return this->tel_ != nullptr;};
    void deleteTel() { this->tel_ = nullptr;};
    inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
    inline CloudGetAreaCodeRequest& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


  protected:
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 11位手机号；只能查询手机号
    // 
    // This parameter is required.
    shared_ptr<string> tel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
