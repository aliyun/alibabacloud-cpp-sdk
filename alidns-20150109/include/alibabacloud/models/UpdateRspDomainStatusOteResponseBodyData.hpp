// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRspDomainStatusOteResponseBodyDataStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainStatusOteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainStatusOteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainStatusOteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    UpdateRspDomainStatusOteResponseBodyData() = default ;
    UpdateRspDomainStatusOteResponseBodyData(const UpdateRspDomainStatusOteResponseBodyData &) = default ;
    UpdateRspDomainStatusOteResponseBodyData(UpdateRspDomainStatusOteResponseBodyData &&) = default ;
    UpdateRspDomainStatusOteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainStatusOteResponseBodyData() = default ;
    UpdateRspDomainStatusOteResponseBodyData& operator=(const UpdateRspDomainStatusOteResponseBodyData &) = default ;
    UpdateRspDomainStatusOteResponseBodyData& operator=(UpdateRspDomainStatusOteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->statusList_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainStatusOteResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList>) };
    inline vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList> statusList() { DARABONBA_PTR_GET(statusList_, vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList>) };
    inline UpdateRspDomainStatusOteResponseBodyData& setStatusList(const vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline UpdateRspDomainStatusOteResponseBodyData& setStatusList(vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRspDomainStatusOteResponseBodyDataStatusList>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
