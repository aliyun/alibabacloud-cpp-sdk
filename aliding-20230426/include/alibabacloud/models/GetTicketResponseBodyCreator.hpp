// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYCREATOR_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYCREATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTicketResponseBodyCreator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBodyCreator& obj) { 
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBodyCreator& obj) { 
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    GetTicketResponseBodyCreator() = default ;
    GetTicketResponseBodyCreator(const GetTicketResponseBodyCreator &) = default ;
    GetTicketResponseBodyCreator(GetTicketResponseBodyCreator &&) = default ;
    GetTicketResponseBodyCreator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBodyCreator() = default ;
    GetTicketResponseBodyCreator& operator=(const GetTicketResponseBodyCreator &) = default ;
    GetTicketResponseBodyCreator& operator=(GetTicketResponseBodyCreator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nickName_ != nullptr
        && this->unionId_ != nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetTicketResponseBodyCreator& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline GetTicketResponseBodyCreator& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> unionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
