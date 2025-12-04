// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTCISROUTERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTCISROUTERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVccResponseBodyContentCisRouterInfoCcInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContentCisRouterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContentCisRouterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CcInfos, ccInfos_);
      DARABONBA_PTR_TO_JSON(CcrId, ccrId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContentCisRouterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CcInfos, ccInfos_);
      DARABONBA_PTR_FROM_JSON(CcrId, ccrId_);
    };
    GetVccResponseBodyContentCisRouterInfo() = default ;
    GetVccResponseBodyContentCisRouterInfo(const GetVccResponseBodyContentCisRouterInfo &) = default ;
    GetVccResponseBodyContentCisRouterInfo(GetVccResponseBodyContentCisRouterInfo &&) = default ;
    GetVccResponseBodyContentCisRouterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContentCisRouterInfo() = default ;
    GetVccResponseBodyContentCisRouterInfo& operator=(const GetVccResponseBodyContentCisRouterInfo &) = default ;
    GetVccResponseBodyContentCisRouterInfo& operator=(GetVccResponseBodyContentCisRouterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccInfos_ == nullptr
        && return this->ccrId_ == nullptr; };
    // ccInfos Field Functions 
    bool hasCcInfos() const { return this->ccInfos_ != nullptr;};
    void deleteCcInfos() { this->ccInfos_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos> & ccInfos() const { DARABONBA_PTR_GET_CONST(ccInfos_, vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos>) };
    inline vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos> ccInfos() { DARABONBA_PTR_GET(ccInfos_, vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos>) };
    inline GetVccResponseBodyContentCisRouterInfo& setCcInfos(const vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos> & ccInfos) { DARABONBA_PTR_SET_VALUE(ccInfos_, ccInfos) };
    inline GetVccResponseBodyContentCisRouterInfo& setCcInfos(vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos> && ccInfos) { DARABONBA_PTR_SET_RVALUE(ccInfos_, ccInfos) };


    // ccrId Field Functions 
    bool hasCcrId() const { return this->ccrId_ != nullptr;};
    void deleteCcrId() { this->ccrId_ = nullptr;};
    inline string ccrId() const { DARABONBA_PTR_GET_DEFAULT(ccrId_, "") };
    inline GetVccResponseBodyContentCisRouterInfo& setCcrId(string ccrId) { DARABONBA_PTR_SET_VALUE(ccrId_, ccrId) };


  protected:
    // Leased Line Information List
    std::shared_ptr<vector<Models::GetVccResponseBodyContentCisRouterInfoCcInfos>> ccInfos_ = nullptr;
    // The ID of the on-cloud router instance.
    std::shared_ptr<string> ccrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
