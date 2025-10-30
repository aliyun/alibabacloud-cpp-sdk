// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACUSERCERTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACUSERCERTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateNacUserCertStatusRequestIdList.hpp>
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
    virtual bool empty() const override { return this->idList_ == nullptr
        && return this->status_ == nullptr; };
    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<UpdateNacUserCertStatusRequestIdList> & idList() const { DARABONBA_PTR_GET_CONST(idList_, vector<UpdateNacUserCertStatusRequestIdList>) };
    inline vector<UpdateNacUserCertStatusRequestIdList> idList() { DARABONBA_PTR_GET(idList_, vector<UpdateNacUserCertStatusRequestIdList>) };
    inline UpdateNacUserCertStatusRequest& setIdList(const vector<UpdateNacUserCertStatusRequestIdList> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline UpdateNacUserCertStatusRequest& setIdList(vector<UpdateNacUserCertStatusRequestIdList> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateNacUserCertStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<UpdateNacUserCertStatusRequestIdList>> idList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
