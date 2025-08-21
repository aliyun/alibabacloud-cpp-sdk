// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIGENIEUSERINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETALIGENIEUSERINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAligenieUserInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAligenieUserInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AligenieNickname, aligenieNickname_);
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Deletable, deletable_);
    };
    friend void from_json(const Darabonba::Json& j, GetAligenieUserInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AligenieNickname, aligenieNickname_);
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
    };
    GetAligenieUserInfoResponseBodyResult() = default ;
    GetAligenieUserInfoResponseBodyResult(const GetAligenieUserInfoResponseBodyResult &) = default ;
    GetAligenieUserInfoResponseBodyResult(GetAligenieUserInfoResponseBodyResult &&) = default ;
    GetAligenieUserInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAligenieUserInfoResponseBodyResult() = default ;
    GetAligenieUserInfoResponseBodyResult& operator=(const GetAligenieUserInfoResponseBodyResult &) = default ;
    GetAligenieUserInfoResponseBodyResult& operator=(GetAligenieUserInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aligenieNickname_ != nullptr
        && this->avatar_ != nullptr && this->deletable_ != nullptr; };
    // aligenieNickname Field Functions 
    bool hasAligenieNickname() const { return this->aligenieNickname_ != nullptr;};
    void deleteAligenieNickname() { this->aligenieNickname_ = nullptr;};
    inline string aligenieNickname() const { DARABONBA_PTR_GET_DEFAULT(aligenieNickname_, "") };
    inline GetAligenieUserInfoResponseBodyResult& setAligenieNickname(string aligenieNickname) { DARABONBA_PTR_SET_VALUE(aligenieNickname_, aligenieNickname) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline GetAligenieUserInfoResponseBodyResult& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // deletable Field Functions 
    bool hasDeletable() const { return this->deletable_ != nullptr;};
    void deleteDeletable() { this->deletable_ = nullptr;};
    inline bool deletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
    inline GetAligenieUserInfoResponseBodyResult& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


  protected:
    std::shared_ptr<string> aligenieNickname_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<bool> deletable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
