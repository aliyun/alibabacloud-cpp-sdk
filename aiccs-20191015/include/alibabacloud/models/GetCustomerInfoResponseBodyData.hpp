// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetCustomerInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerInfoResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(CustomizeFields, customizeFields_);
      DARABONBA_PTR_TO_JSON(Nick, nick_);
      DARABONBA_PTR_TO_JSON(OuterId, outerId_);
      DARABONBA_PTR_TO_JSON(Photo, photo_);
      DARABONBA_PTR_TO_JSON(RealName, realName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerInfoResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(CustomizeFields, customizeFields_);
      DARABONBA_PTR_FROM_JSON(Nick, nick_);
      DARABONBA_PTR_FROM_JSON(OuterId, outerId_);
      DARABONBA_PTR_FROM_JSON(Photo, photo_);
      DARABONBA_PTR_FROM_JSON(RealName, realName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetCustomerInfoResponseBodyData() = default ;
    GetCustomerInfoResponseBodyData(const GetCustomerInfoResponseBodyData &) = default ;
    GetCustomerInfoResponseBodyData(GetCustomerInfoResponseBodyData &&) = default ;
    GetCustomerInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerInfoResponseBodyData() = default ;
    GetCustomerInfoResponseBodyData& operator=(const GetCustomerInfoResponseBodyData &) = default ;
    GetCustomerInfoResponseBodyData& operator=(GetCustomerInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customizeFields_ != nullptr
        && this->nick_ != nullptr && this->outerId_ != nullptr && this->photo_ != nullptr && this->realName_ != nullptr && this->userId_ != nullptr; };
    // customizeFields Field Functions 
    bool hasCustomizeFields() const { return this->customizeFields_ != nullptr;};
    void deleteCustomizeFields() { this->customizeFields_ = nullptr;};
    inline     const Darabonba::Json & customizeFields() const { DARABONBA_GET(customizeFields_) };
    Darabonba::Json & customizeFields() { DARABONBA_GET(customizeFields_) };
    inline GetCustomerInfoResponseBodyData& setCustomizeFields(const Darabonba::Json & customizeFields) { DARABONBA_SET_VALUE(customizeFields_, customizeFields) };
    inline GetCustomerInfoResponseBodyData& setCustomizeFields(Darabonba::Json & customizeFields) { DARABONBA_SET_RVALUE(customizeFields_, customizeFields) };


    // nick Field Functions 
    bool hasNick() const { return this->nick_ != nullptr;};
    void deleteNick() { this->nick_ = nullptr;};
    inline string nick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
    inline GetCustomerInfoResponseBodyData& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


    // outerId Field Functions 
    bool hasOuterId() const { return this->outerId_ != nullptr;};
    void deleteOuterId() { this->outerId_ = nullptr;};
    inline string outerId() const { DARABONBA_PTR_GET_DEFAULT(outerId_, "") };
    inline GetCustomerInfoResponseBodyData& setOuterId(string outerId) { DARABONBA_PTR_SET_VALUE(outerId_, outerId) };


    // photo Field Functions 
    bool hasPhoto() const { return this->photo_ != nullptr;};
    void deletePhoto() { this->photo_ = nullptr;};
    inline string photo() const { DARABONBA_PTR_GET_DEFAULT(photo_, "") };
    inline GetCustomerInfoResponseBodyData& setPhoto(string photo) { DARABONBA_PTR_SET_VALUE(photo_, photo) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline GetCustomerInfoResponseBodyData& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetCustomerInfoResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    Darabonba::Json customizeFields_ = nullptr;
    std::shared_ptr<string> nick_ = nullptr;
    std::shared_ptr<string> outerId_ = nullptr;
    std::shared_ptr<string> photo_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
