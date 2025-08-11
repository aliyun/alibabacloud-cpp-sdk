// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONRESPONSEBODYRESULTRECEIVERS_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONRESPONSEBODYRESULTRECEIVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListPortalMenuAuthorizationResponseBodyResultReceivers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalMenuAuthorizationResponseBodyResultReceivers& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPointsValue, authPointsValue_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalMenuAuthorizationResponseBodyResultReceivers& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPointsValue, authPointsValue_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
    };
    ListPortalMenuAuthorizationResponseBodyResultReceivers() = default ;
    ListPortalMenuAuthorizationResponseBodyResultReceivers(const ListPortalMenuAuthorizationResponseBodyResultReceivers &) = default ;
    ListPortalMenuAuthorizationResponseBodyResultReceivers(ListPortalMenuAuthorizationResponseBodyResultReceivers &&) = default ;
    ListPortalMenuAuthorizationResponseBodyResultReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalMenuAuthorizationResponseBodyResultReceivers() = default ;
    ListPortalMenuAuthorizationResponseBodyResultReceivers& operator=(const ListPortalMenuAuthorizationResponseBodyResultReceivers &) = default ;
    ListPortalMenuAuthorizationResponseBodyResultReceivers& operator=(ListPortalMenuAuthorizationResponseBodyResultReceivers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authPointsValue_ != nullptr
        && this->receiverId_ != nullptr && this->receiverType_ != nullptr; };
    // authPointsValue Field Functions 
    bool hasAuthPointsValue() const { return this->authPointsValue_ != nullptr;};
    void deleteAuthPointsValue() { this->authPointsValue_ = nullptr;};
    inline int32_t authPointsValue() const { DARABONBA_PTR_GET_DEFAULT(authPointsValue_, 0) };
    inline ListPortalMenuAuthorizationResponseBodyResultReceivers& setAuthPointsValue(int32_t authPointsValue) { DARABONBA_PTR_SET_VALUE(authPointsValue_, authPointsValue) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string receiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline ListPortalMenuAuthorizationResponseBodyResultReceivers& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    // receiverType Field Functions 
    bool hasReceiverType() const { return this->receiverType_ != nullptr;};
    void deleteReceiverType() { this->receiverType_ = nullptr;};
    inline int32_t receiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, 0) };
    inline ListPortalMenuAuthorizationResponseBodyResultReceivers& setReceiverType(int32_t receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


  protected:
    std::shared_ptr<int32_t> authPointsValue_ = nullptr;
    // The ID of the authorization object.
    std::shared_ptr<string> receiverId_ = nullptr;
    // The type of the authorization object. Valid values:
    // 
    // *   0: user
    // *   1: user group
    std::shared_ptr<int32_t> receiverType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
