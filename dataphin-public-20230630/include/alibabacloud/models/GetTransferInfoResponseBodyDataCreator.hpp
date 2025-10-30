// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATACREATOR_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATACREATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTransferInfoResponseBodyDataCreator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferInfoResponseBodyDataCreator& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferInfoResponseBodyDataCreator& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetTransferInfoResponseBodyDataCreator() = default ;
    GetTransferInfoResponseBodyDataCreator(const GetTransferInfoResponseBodyDataCreator &) = default ;
    GetTransferInfoResponseBodyDataCreator(GetTransferInfoResponseBodyDataCreator &&) = default ;
    GetTransferInfoResponseBodyDataCreator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferInfoResponseBodyDataCreator() = default ;
    GetTransferInfoResponseBodyDataCreator& operator=(const GetTransferInfoResponseBodyDataCreator &) = default ;
    GetTransferInfoResponseBodyDataCreator& operator=(GetTransferInfoResponseBodyDataCreator &&) = default ;
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
    inline GetTransferInfoResponseBodyDataCreator& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetTransferInfoResponseBodyDataCreator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
