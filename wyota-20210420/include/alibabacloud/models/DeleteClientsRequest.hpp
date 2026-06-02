// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class DeleteClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClientsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallerAliUid, callerAliUid_);
      DARABONBA_PTR_TO_JSON(InManage, inManage_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClientsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerAliUid, callerAliUid_);
      DARABONBA_PTR_FROM_JSON(InManage, inManage_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DeleteClientsRequest() = default ;
    DeleteClientsRequest(const DeleteClientsRequest &) = default ;
    DeleteClientsRequest(DeleteClientsRequest &&) = default ;
    DeleteClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClientsRequest() = default ;
    DeleteClientsRequest& operator=(const DeleteClientsRequest &) = default ;
    DeleteClientsRequest& operator=(DeleteClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerAliUid_ == nullptr
        && this->inManage_ == nullptr && this->uuids_ == nullptr; };
    // callerAliUid Field Functions 
    bool hasCallerAliUid() const { return this->callerAliUid_ != nullptr;};
    void deleteCallerAliUid() { this->callerAliUid_ = nullptr;};
    inline string getCallerAliUid() const { DARABONBA_PTR_GET_DEFAULT(callerAliUid_, "") };
    inline DeleteClientsRequest& setCallerAliUid(string callerAliUid) { DARABONBA_PTR_SET_VALUE(callerAliUid_, callerAliUid) };


    // inManage Field Functions 
    bool hasInManage() const { return this->inManage_ != nullptr;};
    void deleteInManage() { this->inManage_ = nullptr;};
    inline bool getInManage() const { DARABONBA_PTR_GET_DEFAULT(inManage_, false) };
    inline DeleteClientsRequest& setInManage(bool inManage) { DARABONBA_PTR_SET_VALUE(inManage_, inManage) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & getUuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> getUuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline DeleteClientsRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline DeleteClientsRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // aliuid
    shared_ptr<string> callerAliUid_ {};
    // This parameter is required.
    shared_ptr<bool> inManage_ {};
    // This parameter is required.
    shared_ptr<vector<string>> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
