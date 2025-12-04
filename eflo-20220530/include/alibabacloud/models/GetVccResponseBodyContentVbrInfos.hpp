// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTVBRINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTVBRINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVccResponseBodyContentVbrInfosVbrBgpPeers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContentVbrInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContentVbrInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VbrBgpPeers, vbrBgpPeers_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContentVbrInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VbrBgpPeers, vbrBgpPeers_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
    };
    GetVccResponseBodyContentVbrInfos() = default ;
    GetVccResponseBodyContentVbrInfos(const GetVccResponseBodyContentVbrInfos &) = default ;
    GetVccResponseBodyContentVbrInfos(GetVccResponseBodyContentVbrInfos &&) = default ;
    GetVccResponseBodyContentVbrInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContentVbrInfos() = default ;
    GetVccResponseBodyContentVbrInfos& operator=(const GetVccResponseBodyContentVbrInfos &) = default ;
    GetVccResponseBodyContentVbrInfos& operator=(GetVccResponseBodyContentVbrInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->status_ == nullptr && return this->vbrBgpPeers_ == nullptr && return this->vbrId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline GetVccResponseBodyContentVbrInfos& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetVccResponseBodyContentVbrInfos& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetVccResponseBodyContentVbrInfos& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVccResponseBodyContentVbrInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vbrBgpPeers Field Functions 
    bool hasVbrBgpPeers() const { return this->vbrBgpPeers_ != nullptr;};
    void deleteVbrBgpPeers() { this->vbrBgpPeers_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers> & vbrBgpPeers() const { DARABONBA_PTR_GET_CONST(vbrBgpPeers_, vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers>) };
    inline vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers> vbrBgpPeers() { DARABONBA_PTR_GET(vbrBgpPeers_, vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers>) };
    inline GetVccResponseBodyContentVbrInfos& setVbrBgpPeers(const vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers> & vbrBgpPeers) { DARABONBA_PTR_SET_VALUE(vbrBgpPeers_, vbrBgpPeers) };
    inline GetVccResponseBodyContentVbrInfos& setVbrBgpPeers(vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers> && vbrBgpPeers) { DARABONBA_PTR_SET_RVALUE(vbrBgpPeers_, vbrBgpPeers) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline GetVccResponseBodyContentVbrInfos& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


  protected:
    // CEN ID
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The status of the VBR. Valid values:
    // 
    // *   unconfirmed
    // *   active: The VPN gateway is in a normal state.
    // *   terminating: The connection is being terminated.
    // *   terminated: The connection is terminated.
    // *   recovering: The task is being recovered.
    // *   deleting: The GDN is being deleted.
    // *   Available: The service is available.
    std::shared_ptr<string> status_ = nullptr;
    // BGP neighbor information list
    std::shared_ptr<vector<Models::GetVccResponseBodyContentVbrInfosVbrBgpPeers>> vbrBgpPeers_ = nullptr;
    // The ID of the border router.
    std::shared_ptr<string> vbrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
