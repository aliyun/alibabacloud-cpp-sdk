// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METADATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_METADATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class MetadataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetadataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(HasPretendPermission, hasPretendPermission_);
      DARABONBA_PTR_TO_JSON(InternalEndpoint, internalEndpoint_);
      DARABONBA_PTR_TO_JSON(PretendUserId, pretendUserId_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, MetadataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(HasPretendPermission, hasPretendPermission_);
      DARABONBA_PTR_FROM_JSON(InternalEndpoint, internalEndpoint_);
      DARABONBA_PTR_FROM_JSON(PretendUserId, pretendUserId_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    MetadataResponseBodyData() = default ;
    MetadataResponseBodyData(const MetadataResponseBodyData &) = default ;
    MetadataResponseBodyData(MetadataResponseBodyData &&) = default ;
    MetadataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetadataResponseBodyData() = default ;
    MetadataResponseBodyData& operator=(const MetadataResponseBodyData &) = default ;
    MetadataResponseBodyData& operator=(MetadataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr
        && return this->hasPretendPermission_ == nullptr && return this->internalEndpoint_ == nullptr && return this->pretendUserId_ == nullptr && return this->userStatus_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline MetadataResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // hasPretendPermission Field Functions 
    bool hasHasPretendPermission() const { return this->hasPretendPermission_ != nullptr;};
    void deleteHasPretendPermission() { this->hasPretendPermission_ = nullptr;};
    inline bool hasPretendPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPretendPermission_, false) };
    inline MetadataResponseBodyData& setHasPretendPermission(bool hasPretendPermission) { DARABONBA_PTR_SET_VALUE(hasPretendPermission_, hasPretendPermission) };


    // internalEndpoint Field Functions 
    bool hasInternalEndpoint() const { return this->internalEndpoint_ != nullptr;};
    void deleteInternalEndpoint() { this->internalEndpoint_ = nullptr;};
    inline string internalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internalEndpoint_, "") };
    inline MetadataResponseBodyData& setInternalEndpoint(string internalEndpoint) { DARABONBA_PTR_SET_VALUE(internalEndpoint_, internalEndpoint) };


    // pretendUserId Field Functions 
    bool hasPretendUserId() const { return this->pretendUserId_ != nullptr;};
    void deletePretendUserId() { this->pretendUserId_ = nullptr;};
    inline string pretendUserId() const { DARABONBA_PTR_GET_DEFAULT(pretendUserId_, "") };
    inline MetadataResponseBodyData& setPretendUserId(string pretendUserId) { DARABONBA_PTR_SET_VALUE(pretendUserId_, pretendUserId) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline int32_t userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, 0) };
    inline MetadataResponseBodyData& setUserStatus(int32_t userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<bool> hasPretendPermission_ = nullptr;
    std::shared_ptr<string> internalEndpoint_ = nullptr;
    std::shared_ptr<string> pretendUserId_ = nullptr;
    std::shared_ptr<int32_t> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
