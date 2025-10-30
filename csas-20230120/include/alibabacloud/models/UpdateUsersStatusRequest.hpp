// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSSTATUSREQUEST_HPP_
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
  class UpdateUsersStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUsersStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SaseUserIds, saseUserIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUsersStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SaseUserIds, saseUserIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateUsersStatusRequest() = default ;
    UpdateUsersStatusRequest(const UpdateUsersStatusRequest &) = default ;
    UpdateUsersStatusRequest(UpdateUsersStatusRequest &&) = default ;
    UpdateUsersStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUsersStatusRequest() = default ;
    UpdateUsersStatusRequest& operator=(const UpdateUsersStatusRequest &) = default ;
    UpdateUsersStatusRequest& operator=(UpdateUsersStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->saseUserIds_ == nullptr
        && return this->status_ == nullptr; };
    // saseUserIds Field Functions 
    bool hasSaseUserIds() const { return this->saseUserIds_ != nullptr;};
    void deleteSaseUserIds() { this->saseUserIds_ = nullptr;};
    inline const vector<string> & saseUserIds() const { DARABONBA_PTR_GET_CONST(saseUserIds_, vector<string>) };
    inline vector<string> saseUserIds() { DARABONBA_PTR_GET(saseUserIds_, vector<string>) };
    inline UpdateUsersStatusRequest& setSaseUserIds(const vector<string> & saseUserIds) { DARABONBA_PTR_SET_VALUE(saseUserIds_, saseUserIds) };
    inline UpdateUsersStatusRequest& setSaseUserIds(vector<string> && saseUserIds) { DARABONBA_PTR_SET_RVALUE(saseUserIds_, saseUserIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateUsersStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> saseUserIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
