// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRCSSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRCSSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetRCSSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRCSSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SignName, signName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRCSSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
    };
    GetRCSSignatureRequest() = default ;
    GetRCSSignatureRequest(const GetRCSSignatureRequest &) = default ;
    GetRCSSignatureRequest(GetRCSSignatureRequest &&) = default ;
    GetRCSSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRCSSignatureRequest() = default ;
    GetRCSSignatureRequest& operator=(const GetRCSSignatureRequest &) = default ;
    GetRCSSignatureRequest& operator=(GetRCSSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->signName_ == nullptr; };
    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline GetRCSSignatureRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


  protected:
    // 签名名称
    shared_ptr<string> signName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
