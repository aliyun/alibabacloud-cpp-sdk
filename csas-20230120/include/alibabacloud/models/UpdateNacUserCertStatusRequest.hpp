// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACUSERCERTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACUSERCERTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateNacUserCertStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacUserCertStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacUserCertStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateNacUserCertStatusRequest() = default ;
    UpdateNacUserCertStatusRequest(const UpdateNacUserCertStatusRequest &) = default ;
    UpdateNacUserCertStatusRequest(UpdateNacUserCertStatusRequest &&) = default ;
    UpdateNacUserCertStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacUserCertStatusRequest() = default ;
    UpdateNacUserCertStatusRequest& operator=(const UpdateNacUserCertStatusRequest &) = default ;
    UpdateNacUserCertStatusRequest& operator=(UpdateNacUserCertStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdList& obj) { 
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, IdList& obj) { 
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      IdList() = default ;
      IdList(const IdList &) = default ;
      IdList(IdList &&) = default ;
      IdList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdList() = default ;
      IdList& operator=(const IdList &) = default ;
      IdList& operator=(IdList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->devTag_ == nullptr
        && this->userId_ == nullptr; };
      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline IdList& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline IdList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> devTag_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->idList_ == nullptr
        && this->status_ == nullptr; };
    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<UpdateNacUserCertStatusRequest::IdList> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<UpdateNacUserCertStatusRequest::IdList>) };
    inline vector<UpdateNacUserCertStatusRequest::IdList> getIdList() { DARABONBA_PTR_GET(idList_, vector<UpdateNacUserCertStatusRequest::IdList>) };
    inline UpdateNacUserCertStatusRequest& setIdList(const vector<UpdateNacUserCertStatusRequest::IdList> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline UpdateNacUserCertStatusRequest& setIdList(vector<UpdateNacUserCertStatusRequest::IdList> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateNacUserCertStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<UpdateNacUserCertStatusRequest::IdList>> idList_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
