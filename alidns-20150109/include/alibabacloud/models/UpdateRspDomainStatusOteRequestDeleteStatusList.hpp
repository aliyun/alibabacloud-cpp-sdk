// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTEREQUESTDELETESTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTEREQUESTDELETESTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainStatusOteRequestDeleteStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainStatusOteRequestDeleteStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainStatusOteRequestDeleteStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
    };
    UpdateRspDomainStatusOteRequestDeleteStatusList() = default ;
    UpdateRspDomainStatusOteRequestDeleteStatusList(const UpdateRspDomainStatusOteRequestDeleteStatusList &) = default ;
    UpdateRspDomainStatusOteRequestDeleteStatusList(UpdateRspDomainStatusOteRequestDeleteStatusList &&) = default ;
    UpdateRspDomainStatusOteRequestDeleteStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainStatusOteRequestDeleteStatusList() = default ;
    UpdateRspDomainStatusOteRequestDeleteStatusList& operator=(const UpdateRspDomainStatusOteRequestDeleteStatusList &) = default ;
    UpdateRspDomainStatusOteRequestDeleteStatusList& operator=(UpdateRspDomainStatusOteRequestDeleteStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->statusMsg_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateRspDomainStatusOteRequestDeleteStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string statusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline UpdateRspDomainStatusOteRequestDeleteStatusList& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
