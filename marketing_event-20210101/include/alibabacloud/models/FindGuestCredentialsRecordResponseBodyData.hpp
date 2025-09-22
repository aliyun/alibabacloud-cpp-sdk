// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDGUESTCREDENTIALSRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FINDGUESTCREDENTIALSRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class FindGuestCredentialsRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindGuestCredentialsRecordResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(Admin, admin_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelLevelInfo, channelLevelInfo_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CredentialsCode, credentialsCode_);
      DARABONBA_PTR_TO_JSON(CredentialsName, credentialsName_);
      DARABONBA_PTR_TO_JSON(IdNumber, idNumber_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FindGuestCredentialsRecordResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(Admin, admin_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelLevelInfo, channelLevelInfo_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CredentialsCode, credentialsCode_);
      DARABONBA_PTR_FROM_JSON(CredentialsName, credentialsName_);
      DARABONBA_PTR_FROM_JSON(IdNumber, idNumber_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    FindGuestCredentialsRecordResponseBodyData() = default ;
    FindGuestCredentialsRecordResponseBodyData(const FindGuestCredentialsRecordResponseBodyData &) = default ;
    FindGuestCredentialsRecordResponseBodyData(FindGuestCredentialsRecordResponseBodyData &&) = default ;
    FindGuestCredentialsRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindGuestCredentialsRecordResponseBodyData() = default ;
    FindGuestCredentialsRecordResponseBodyData& operator=(const FindGuestCredentialsRecordResponseBodyData &) = default ;
    FindGuestCredentialsRecordResponseBodyData& operator=(FindGuestCredentialsRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->admin_ != nullptr
        && this->channelId_ != nullptr && this->channelLevelInfo_ != nullptr && this->companyName_ != nullptr && this->credentialsCode_ != nullptr && this->credentialsName_ != nullptr
        && this->idNumber_ != nullptr && this->idType_ != nullptr && this->name_ != nullptr && this->status_ != nullptr; };
    // admin Field Functions 
    bool hasAdmin() const { return this->admin_ != nullptr;};
    void deleteAdmin() { this->admin_ = nullptr;};
    inline     const Darabonba::Json & admin() const { DARABONBA_GET(admin_) };
    Darabonba::Json & admin() { DARABONBA_GET(admin_) };
    inline FindGuestCredentialsRecordResponseBodyData& setAdmin(const Darabonba::Json & admin) { DARABONBA_SET_VALUE(admin_, admin) };
    inline FindGuestCredentialsRecordResponseBodyData& setAdmin(Darabonba::Json & admin) { DARABONBA_SET_RVALUE(admin_, admin) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int64_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
    inline FindGuestCredentialsRecordResponseBodyData& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelLevelInfo Field Functions 
    bool hasChannelLevelInfo() const { return this->channelLevelInfo_ != nullptr;};
    void deleteChannelLevelInfo() { this->channelLevelInfo_ = nullptr;};
    inline const Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo & channelLevelInfo() const { DARABONBA_PTR_GET_CONST(channelLevelInfo_, Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo) };
    inline Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo channelLevelInfo() { DARABONBA_PTR_GET(channelLevelInfo_, Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo) };
    inline FindGuestCredentialsRecordResponseBodyData& setChannelLevelInfo(const Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo & channelLevelInfo) { DARABONBA_PTR_SET_VALUE(channelLevelInfo_, channelLevelInfo) };
    inline FindGuestCredentialsRecordResponseBodyData& setChannelLevelInfo(Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo && channelLevelInfo) { DARABONBA_PTR_SET_RVALUE(channelLevelInfo_, channelLevelInfo) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline FindGuestCredentialsRecordResponseBodyData& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // credentialsCode Field Functions 
    bool hasCredentialsCode() const { return this->credentialsCode_ != nullptr;};
    void deleteCredentialsCode() { this->credentialsCode_ = nullptr;};
    inline string credentialsCode() const { DARABONBA_PTR_GET_DEFAULT(credentialsCode_, "") };
    inline FindGuestCredentialsRecordResponseBodyData& setCredentialsCode(string credentialsCode) { DARABONBA_PTR_SET_VALUE(credentialsCode_, credentialsCode) };


    // credentialsName Field Functions 
    bool hasCredentialsName() const { return this->credentialsName_ != nullptr;};
    void deleteCredentialsName() { this->credentialsName_ = nullptr;};
    inline string credentialsName() const { DARABONBA_PTR_GET_DEFAULT(credentialsName_, "") };
    inline FindGuestCredentialsRecordResponseBodyData& setCredentialsName(string credentialsName) { DARABONBA_PTR_SET_VALUE(credentialsName_, credentialsName) };


    // idNumber Field Functions 
    bool hasIdNumber() const { return this->idNumber_ != nullptr;};
    void deleteIdNumber() { this->idNumber_ = nullptr;};
    inline string idNumber() const { DARABONBA_PTR_GET_DEFAULT(idNumber_, "") };
    inline FindGuestCredentialsRecordResponseBodyData& setIdNumber(string idNumber) { DARABONBA_PTR_SET_VALUE(idNumber_, idNumber) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline FindGuestCredentialsRecordResponseBodyData& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FindGuestCredentialsRecordResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FindGuestCredentialsRecordResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    Darabonba::Json admin_ = nullptr;
    std::shared_ptr<int64_t> channelId_ = nullptr;
    std::shared_ptr<Models::FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo> channelLevelInfo_ = nullptr;
    std::shared_ptr<string> companyName_ = nullptr;
    std::shared_ptr<string> credentialsCode_ = nullptr;
    std::shared_ptr<string> credentialsName_ = nullptr;
    std::shared_ptr<string> idNumber_ = nullptr;
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
