// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTEREQUESTADDSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTEREQUESTADDSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainStatusOteRequestAddStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainStatusOteRequestAddStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainStatusOteRequestAddStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
    };
    UpdateRspDomainStatusOteRequestAddStatusList() = default ;
    UpdateRspDomainStatusOteRequestAddStatusList(const UpdateRspDomainStatusOteRequestAddStatusList &) = default ;
    UpdateRspDomainStatusOteRequestAddStatusList(UpdateRspDomainStatusOteRequestAddStatusList &&) = default ;
    UpdateRspDomainStatusOteRequestAddStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainStatusOteRequestAddStatusList() = default ;
    UpdateRspDomainStatusOteRequestAddStatusList& operator=(const UpdateRspDomainStatusOteRequestAddStatusList &) = default ;
    UpdateRspDomainStatusOteRequestAddStatusList& operator=(UpdateRspDomainStatusOteRequestAddStatusList &&) = default ;
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
    inline UpdateRspDomainStatusOteRequestAddStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string statusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline UpdateRspDomainStatusOteRequestAddStatusList& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
