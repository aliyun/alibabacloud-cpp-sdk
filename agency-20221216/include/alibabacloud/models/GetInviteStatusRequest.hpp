// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVITESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINVITESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetInviteStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInviteStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InviteStatusList, inviteStatusList_);
    };
    friend void from_json(const Darabonba::Json& j, GetInviteStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteStatusList, inviteStatusList_);
    };
    GetInviteStatusRequest() = default ;
    GetInviteStatusRequest(const GetInviteStatusRequest &) = default ;
    GetInviteStatusRequest(GetInviteStatusRequest &&) = default ;
    GetInviteStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInviteStatusRequest() = default ;
    GetInviteStatusRequest& operator=(const GetInviteStatusRequest &) = default ;
    GetInviteStatusRequest& operator=(GetInviteStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InviteStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InviteStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(InviteId, inviteId_);
      };
      friend void from_json(const Darabonba::Json& j, InviteStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(InviteId, inviteId_);
      };
      InviteStatusList() = default ;
      InviteStatusList(const InviteStatusList &) = default ;
      InviteStatusList(InviteStatusList &&) = default ;
      InviteStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InviteStatusList() = default ;
      InviteStatusList& operator=(const InviteStatusList &) = default ;
      InviteStatusList& operator=(InviteStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inviteId_ == nullptr; };
      // inviteId Field Functions 
      bool hasInviteId() const { return this->inviteId_ != nullptr;};
      void deleteInviteId() { this->inviteId_ = nullptr;};
      inline int64_t getInviteId() const { DARABONBA_PTR_GET_DEFAULT(inviteId_, 0L) };
      inline InviteStatusList& setInviteId(int64_t inviteId) { DARABONBA_PTR_SET_VALUE(inviteId_, inviteId) };


    protected:
      // Invitation ID, From interface InviteSubAccount
      shared_ptr<int64_t> inviteId_ {};
    };

    virtual bool empty() const override { return this->inviteStatusList_ == nullptr; };
    // inviteStatusList Field Functions 
    bool hasInviteStatusList() const { return this->inviteStatusList_ != nullptr;};
    void deleteInviteStatusList() { this->inviteStatusList_ = nullptr;};
    inline const vector<GetInviteStatusRequest::InviteStatusList> & getInviteStatusList() const { DARABONBA_PTR_GET_CONST(inviteStatusList_, vector<GetInviteStatusRequest::InviteStatusList>) };
    inline vector<GetInviteStatusRequest::InviteStatusList> getInviteStatusList() { DARABONBA_PTR_GET(inviteStatusList_, vector<GetInviteStatusRequest::InviteStatusList>) };
    inline GetInviteStatusRequest& setInviteStatusList(const vector<GetInviteStatusRequest::InviteStatusList> & inviteStatusList) { DARABONBA_PTR_SET_VALUE(inviteStatusList_, inviteStatusList) };
    inline GetInviteStatusRequest& setInviteStatusList(vector<GetInviteStatusRequest::InviteStatusList> && inviteStatusList) { DARABONBA_PTR_SET_RVALUE(inviteStatusList_, inviteStatusList) };


  protected:
    // inviteId list</br>
    // `Sub-levels <= 5`
    // 
    // This parameter is required.
    shared_ptr<vector<GetInviteStatusRequest::InviteStatusList>> inviteStatusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
