// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GetUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    GetUserInfoResponseBody() = default ;
    GetUserInfoResponseBody(const GetUserInfoResponseBody &) = default ;
    GetUserInfoResponseBody(GetUserInfoResponseBody &&) = default ;
    GetUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInfoResponseBody() = default ;
    GetUserInfoResponseBody& operator=(const GetUserInfoResponseBody &) = default ;
    GetUserInfoResponseBody& operator=(GetUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunId_ == nullptr
        && return this->nickName_ == nullptr && return this->phone_ == nullptr && return this->requestId_ == nullptr && return this->unionId_ == nullptr; };
    // aliyunId Field Functions 
    bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
    void deleteAliyunId() { this->aliyunId_ = nullptr;};
    inline string aliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
    inline GetUserInfoResponseBody& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetUserInfoResponseBody& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetUserInfoResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline GetUserInfoResponseBody& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    std::shared_ptr<string> aliyunId_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> unionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
