// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATANEWOWNER_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATANEWOWNER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTransferInfoResponseBodyDataNewOwner : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferInfoResponseBodyDataNewOwner& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferInfoResponseBodyDataNewOwner& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetTransferInfoResponseBodyDataNewOwner() = default ;
    GetTransferInfoResponseBodyDataNewOwner(const GetTransferInfoResponseBodyDataNewOwner &) = default ;
    GetTransferInfoResponseBodyDataNewOwner(GetTransferInfoResponseBodyDataNewOwner &&) = default ;
    GetTransferInfoResponseBodyDataNewOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferInfoResponseBodyDataNewOwner() = default ;
    GetTransferInfoResponseBodyDataNewOwner& operator=(const GetTransferInfoResponseBodyDataNewOwner &) = default ;
    GetTransferInfoResponseBodyDataNewOwner& operator=(GetTransferInfoResponseBodyDataNewOwner &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->userId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetTransferInfoResponseBodyDataNewOwner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetTransferInfoResponseBodyDataNewOwner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
