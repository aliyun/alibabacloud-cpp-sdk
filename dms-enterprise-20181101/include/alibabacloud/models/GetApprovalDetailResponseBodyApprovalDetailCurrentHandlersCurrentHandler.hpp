// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILCURRENTHANDLERSCURRENTHANDLER_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILCURRENTHANDLERSCURRENTHANDLER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
    };
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler() = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler(const GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler(GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler() = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler& operator=(const GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler& operator=(GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->nickName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


  protected:
    // The ID of the user.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> nickName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
