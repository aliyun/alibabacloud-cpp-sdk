// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENEADVANCESETTING_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENEADVANCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneAdvanceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneAdvanceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionTimeoutInSecond, connectionTimeoutInSecond_);
      DARABONBA_PTR_TO_JSON(DomainBindingList, domainBindingList_);
      DARABONBA_PTR_TO_JSON(LogRate, logRate_);
      DARABONBA_PTR_TO_JSON(SuccessCode, successCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneAdvanceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionTimeoutInSecond, connectionTimeoutInSecond_);
      DARABONBA_PTR_FROM_JSON(DomainBindingList, domainBindingList_);
      DARABONBA_PTR_FROM_JSON(LogRate, logRate_);
      DARABONBA_PTR_FROM_JSON(SuccessCode, successCode_);
    };
    GetPtsSceneResponseBodySceneAdvanceSetting() = default ;
    GetPtsSceneResponseBodySceneAdvanceSetting(const GetPtsSceneResponseBodySceneAdvanceSetting &) = default ;
    GetPtsSceneResponseBodySceneAdvanceSetting(GetPtsSceneResponseBodySceneAdvanceSetting &&) = default ;
    GetPtsSceneResponseBodySceneAdvanceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneAdvanceSetting() = default ;
    GetPtsSceneResponseBodySceneAdvanceSetting& operator=(const GetPtsSceneResponseBodySceneAdvanceSetting &) = default ;
    GetPtsSceneResponseBodySceneAdvanceSetting& operator=(GetPtsSceneResponseBodySceneAdvanceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionTimeoutInSecond_ == nullptr
        && return this->domainBindingList_ == nullptr && return this->logRate_ == nullptr && return this->successCode_ == nullptr; };
    // connectionTimeoutInSecond Field Functions 
    bool hasConnectionTimeoutInSecond() const { return this->connectionTimeoutInSecond_ != nullptr;};
    void deleteConnectionTimeoutInSecond() { this->connectionTimeoutInSecond_ = nullptr;};
    inline int32_t connectionTimeoutInSecond() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeoutInSecond_, 0) };
    inline GetPtsSceneResponseBodySceneAdvanceSetting& setConnectionTimeoutInSecond(int32_t connectionTimeoutInSecond) { DARABONBA_PTR_SET_VALUE(connectionTimeoutInSecond_, connectionTimeoutInSecond) };


    // domainBindingList Field Functions 
    bool hasDomainBindingList() const { return this->domainBindingList_ != nullptr;};
    void deleteDomainBindingList() { this->domainBindingList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList> & domainBindingList() const { DARABONBA_PTR_GET_CONST(domainBindingList_, vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList> domainBindingList() { DARABONBA_PTR_GET(domainBindingList_, vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList>) };
    inline GetPtsSceneResponseBodySceneAdvanceSetting& setDomainBindingList(const vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList> & domainBindingList) { DARABONBA_PTR_SET_VALUE(domainBindingList_, domainBindingList) };
    inline GetPtsSceneResponseBodySceneAdvanceSetting& setDomainBindingList(vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList> && domainBindingList) { DARABONBA_PTR_SET_RVALUE(domainBindingList_, domainBindingList) };


    // logRate Field Functions 
    bool hasLogRate() const { return this->logRate_ != nullptr;};
    void deleteLogRate() { this->logRate_ = nullptr;};
    inline int32_t logRate() const { DARABONBA_PTR_GET_DEFAULT(logRate_, 0) };
    inline GetPtsSceneResponseBodySceneAdvanceSetting& setLogRate(int32_t logRate) { DARABONBA_PTR_SET_VALUE(logRate_, logRate) };


    // successCode Field Functions 
    bool hasSuccessCode() const { return this->successCode_ != nullptr;};
    void deleteSuccessCode() { this->successCode_ = nullptr;};
    inline string successCode() const { DARABONBA_PTR_GET_DEFAULT(successCode_, "") };
    inline GetPtsSceneResponseBodySceneAdvanceSetting& setSuccessCode(string successCode) { DARABONBA_PTR_SET_VALUE(successCode_, successCode) };


  protected:
    // The timeout period of the scenario. Unit: seconds.
    std::shared_ptr<int32_t> connectionTimeoutInSecond_ = nullptr;
    // The IP-domain name bindings.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList>> domainBindingList_ = nullptr;
    // The log sampling rate.
    std::shared_ptr<int32_t> logRate_ = nullptr;
    // The custom success code.
    std::shared_ptr<string> successCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
