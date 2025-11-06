// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINTODOMAINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINTODOMAINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class UpdateDomainToDomainGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainToDomainGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FileToUpload, fileToUpload_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Replace, replace_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainToDomainGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FileToUpload, fileToUpload_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Replace, replace_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    UpdateDomainToDomainGroupRequest() = default ;
    UpdateDomainToDomainGroupRequest(const UpdateDomainToDomainGroupRequest &) = default ;
    UpdateDomainToDomainGroupRequest(UpdateDomainToDomainGroupRequest &&) = default ;
    UpdateDomainToDomainGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainToDomainGroupRequest() = default ;
    UpdateDomainToDomainGroupRequest& operator=(const UpdateDomainToDomainGroupRequest &) = default ;
    UpdateDomainToDomainGroupRequest& operator=(UpdateDomainToDomainGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSource_ == nullptr
        && return this->domainGroupId_ == nullptr && return this->domainName_ == nullptr && return this->fileToUpload_ == nullptr && return this->lang_ == nullptr && return this->replace_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline int32_t dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, 0) };
    inline UpdateDomainToDomainGroupRequest& setDataSource(int32_t dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline int64_t domainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, 0L) };
    inline UpdateDomainToDomainGroupRequest& setDomainGroupId(int64_t domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & domainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> domainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline UpdateDomainToDomainGroupRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline UpdateDomainToDomainGroupRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // fileToUpload Field Functions 
    bool hasFileToUpload() const { return this->fileToUpload_ != nullptr;};
    void deleteFileToUpload() { this->fileToUpload_ = nullptr;};
    inline string fileToUpload() const { DARABONBA_PTR_GET_DEFAULT(fileToUpload_, "") };
    inline UpdateDomainToDomainGroupRequest& setFileToUpload(string fileToUpload) { DARABONBA_PTR_SET_VALUE(fileToUpload_, fileToUpload) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDomainToDomainGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // replace Field Functions 
    bool hasReplace() const { return this->replace_ != nullptr;};
    void deleteReplace() { this->replace_ = nullptr;};
    inline bool replace() const { DARABONBA_PTR_GET_DEFAULT(replace_, false) };
    inline UpdateDomainToDomainGroupRequest& setReplace(bool replace) { DARABONBA_PTR_SET_VALUE(replace_, replace) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline UpdateDomainToDomainGroupRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> dataSource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> domainGroupId_ = nullptr;
    std::shared_ptr<vector<string>> domainName_ = nullptr;
    std::shared_ptr<string> fileToUpload_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> replace_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
