// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRIALFIXCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRIALFIXCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CheckTrialFixCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTrialFixCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(VulNames, vulNames_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTrialFixCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(VulNames, vulNames_);
    };
    CheckTrialFixCountRequest() = default ;
    CheckTrialFixCountRequest(const CheckTrialFixCountRequest &) = default ;
    CheckTrialFixCountRequest(CheckTrialFixCountRequest &&) = default ;
    CheckTrialFixCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTrialFixCountRequest() = default ;
    CheckTrialFixCountRequest& operator=(const CheckTrialFixCountRequest &) = default ;
    CheckTrialFixCountRequest& operator=(CheckTrialFixCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->type_ != nullptr && this->uuids_ != nullptr && this->vulNames_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline CheckTrialFixCountRequest& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckTrialFixCountRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline CheckTrialFixCountRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline CheckTrialFixCountRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


    // vulNames Field Functions 
    bool hasVulNames() const { return this->vulNames_ != nullptr;};
    void deleteVulNames() { this->vulNames_ = nullptr;};
    inline const vector<string> & vulNames() const { DARABONBA_PTR_GET_CONST(vulNames_, vector<string>) };
    inline vector<string> vulNames() { DARABONBA_PTR_GET(vulNames_, vector<string>) };
    inline CheckTrialFixCountRequest& setVulNames(const vector<string> & vulNames) { DARABONBA_PTR_SET_VALUE(vulNames_, vulNames) };
    inline CheckTrialFixCountRequest& setVulNames(vector<string> && vulNames) { DARABONBA_PTR_SET_RVALUE(vulNames_, vulNames) };


  protected:
    // The information about the vulnerability. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **name**: the name of the vulnerability.
    // 
    // *   **uuid**: the UUID of the server on which the vulnerability is detected.
    // 
    // *   **tag**: the tag that is added to the vulnerability. Valid values:
    // 
    //     *   **oval**: Linux software vulnerability.
    //     *   **system**: Windows system vulnerability.
    //     *   **cms**: Web-CMS vulnerability.
    // 
    // >  You must specify a value for Info or values for VulNames and Uuids to identify a vulnerability.
    std::shared_ptr<string> info_ = nullptr;
    // The type of the vulnerability that you want to fix. Valid values:
    // 
    // *   **cve**: Linux software vulnerability.
    // *   **sys**: Windows system vulnerability.
    // *   **cms**: Web-CMS vulnerability.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The UUIDs of the servers.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
    // The names of the vulnerabilities.
    std::shared_ptr<vector<string>> vulNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
