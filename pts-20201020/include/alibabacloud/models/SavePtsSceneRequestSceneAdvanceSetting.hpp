// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENEADVANCESETTING_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENEADVANCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SavePtsSceneRequestSceneAdvanceSettingDomainBindingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneRequestSceneAdvanceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneRequestSceneAdvanceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionTimeoutInSecond, connectionTimeoutInSecond_);
      DARABONBA_PTR_TO_JSON(DomainBindingList, domainBindingList_);
      DARABONBA_PTR_TO_JSON(LogRate, logRate_);
      DARABONBA_PTR_TO_JSON(SuccessCode, successCode_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneRequestSceneAdvanceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionTimeoutInSecond, connectionTimeoutInSecond_);
      DARABONBA_PTR_FROM_JSON(DomainBindingList, domainBindingList_);
      DARABONBA_PTR_FROM_JSON(LogRate, logRate_);
      DARABONBA_PTR_FROM_JSON(SuccessCode, successCode_);
    };
    SavePtsSceneRequestSceneAdvanceSetting() = default ;
    SavePtsSceneRequestSceneAdvanceSetting(const SavePtsSceneRequestSceneAdvanceSetting &) = default ;
    SavePtsSceneRequestSceneAdvanceSetting(SavePtsSceneRequestSceneAdvanceSetting &&) = default ;
    SavePtsSceneRequestSceneAdvanceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneRequestSceneAdvanceSetting() = default ;
    SavePtsSceneRequestSceneAdvanceSetting& operator=(const SavePtsSceneRequestSceneAdvanceSetting &) = default ;
    SavePtsSceneRequestSceneAdvanceSetting& operator=(SavePtsSceneRequestSceneAdvanceSetting &&) = default ;
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
    inline SavePtsSceneRequestSceneAdvanceSetting& setConnectionTimeoutInSecond(int32_t connectionTimeoutInSecond) { DARABONBA_PTR_SET_VALUE(connectionTimeoutInSecond_, connectionTimeoutInSecond) };


    // domainBindingList Field Functions 
    bool hasDomainBindingList() const { return this->domainBindingList_ != nullptr;};
    void deleteDomainBindingList() { this->domainBindingList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList> & domainBindingList() const { DARABONBA_PTR_GET_CONST(domainBindingList_, vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList>) };
    inline vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList> domainBindingList() { DARABONBA_PTR_GET(domainBindingList_, vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList>) };
    inline SavePtsSceneRequestSceneAdvanceSetting& setDomainBindingList(const vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList> & domainBindingList) { DARABONBA_PTR_SET_VALUE(domainBindingList_, domainBindingList) };
    inline SavePtsSceneRequestSceneAdvanceSetting& setDomainBindingList(vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList> && domainBindingList) { DARABONBA_PTR_SET_RVALUE(domainBindingList_, domainBindingList) };


    // logRate Field Functions 
    bool hasLogRate() const { return this->logRate_ != nullptr;};
    void deleteLogRate() { this->logRate_ = nullptr;};
    inline int32_t logRate() const { DARABONBA_PTR_GET_DEFAULT(logRate_, 0) };
    inline SavePtsSceneRequestSceneAdvanceSetting& setLogRate(int32_t logRate) { DARABONBA_PTR_SET_VALUE(logRate_, logRate) };


    // successCode Field Functions 
    bool hasSuccessCode() const { return this->successCode_ != nullptr;};
    void deleteSuccessCode() { this->successCode_ = nullptr;};
    inline string successCode() const { DARABONBA_PTR_GET_DEFAULT(successCode_, "") };
    inline SavePtsSceneRequestSceneAdvanceSetting& setSuccessCode(string successCode) { DARABONBA_PTR_SET_VALUE(successCode_, successCode) };


  protected:
    // The timeout period. Unit: seconds.
    std::shared_ptr<int32_t> connectionTimeoutInSecond_ = nullptr;
    // The domain name-IP address binding relationships
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneAdvanceSettingDomainBindingList>> domainBindingList_ = nullptr;
    // The log sampling rate. Valid values: 1, 10, 20, 30, 40, and 50.
    std::shared_ptr<int32_t> logRate_ = nullptr;
    // The success status code. Separate multiple status codes with commas (,).
    std::shared_ptr<string> successCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
