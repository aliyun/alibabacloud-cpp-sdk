// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDINTERRUPTIVRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDINTERRUPTIVRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudInterruptIvrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudInterruptIvrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(CheckValue, checkValue_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_TO_JSON(UserField, userField_);
    };
    friend void from_json(const Darabonba::Json& j, CloudInterruptIvrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(CheckValue, checkValue_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_FROM_JSON(UserField, userField_);
    };
    CloudInterruptIvrRequest() = default ;
    CloudInterruptIvrRequest(const CloudInterruptIvrRequest &) = default ;
    CloudInterruptIvrRequest(CloudInterruptIvrRequest &&) = default ;
    CloudInterruptIvrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudInterruptIvrRequest() = default ;
    CloudInterruptIvrRequest& operator=(const CloudInterruptIvrRequest &) = default ;
    CloudInterruptIvrRequest& operator=(CloudInterruptIvrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkName_ == nullptr
        && this->checkValue_ == nullptr && this->enterpriseId_ == nullptr && this->uniqueId_ == nullptr && this->userField_ == nullptr; };
    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline CloudInterruptIvrRequest& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // checkValue Field Functions 
    bool hasCheckValue() const { return this->checkValue_ != nullptr;};
    void deleteCheckValue() { this->checkValue_ = nullptr;};
    inline string getCheckValue() const { DARABONBA_PTR_GET_DEFAULT(checkValue_, "") };
    inline CloudInterruptIvrRequest& setCheckValue(string checkValue) { DARABONBA_PTR_SET_VALUE(checkValue_, checkValue) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudInterruptIvrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudInterruptIvrRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    // userField Field Functions 
    bool hasUserField() const { return this->userField_ != nullptr;};
    void deleteUserField() { this->userField_ = nullptr;};
    inline string getUserField() const { DARABONBA_PTR_GET_DEFAULT(userField_, "") };
    inline CloudInterruptIvrRequest& setUserField(string userField) { DARABONBA_PTR_SET_VALUE(userField_, userField) };


  protected:
    // 根据变量名去通道变量中取对应的变量值
    shared_ptr<string> checkName_ {};
    // 当checkName代表的变量值与checkValue一致，才打断
    shared_ptr<string> checkValue_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 通话唯一标识；从通道唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> uniqueId_ {};
    // 自定义字段；json字符串
    shared_ptr<string> userField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
