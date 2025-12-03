// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTOASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTOASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ExportOASRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportOASRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIdList, apiIdList_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OasVersion, oasVersion_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(WithXExtensions, withXExtensions_);
    };
    friend void from_json(const Darabonba::Json& j, ExportOASRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIdList, apiIdList_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OasVersion, oasVersion_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(WithXExtensions, withXExtensions_);
    };
    ExportOASRequest() = default ;
    ExportOASRequest(const ExportOASRequest &) = default ;
    ExportOASRequest(ExportOASRequest &&) = default ;
    ExportOASRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportOASRequest() = default ;
    ExportOASRequest& operator=(const ExportOASRequest &) = default ;
    ExportOASRequest& operator=(ExportOASRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIdList_ == nullptr
        && return this->dataFormat_ == nullptr && return this->groupId_ == nullptr && return this->oasVersion_ == nullptr && return this->pageNumber_ == nullptr && return this->securityToken_ == nullptr
        && return this->stageName_ == nullptr && return this->withXExtensions_ == nullptr; };
    // apiIdList Field Functions 
    bool hasApiIdList() const { return this->apiIdList_ != nullptr;};
    void deleteApiIdList() { this->apiIdList_ = nullptr;};
    inline const vector<string> & apiIdList() const { DARABONBA_PTR_GET_CONST(apiIdList_, vector<string>) };
    inline vector<string> apiIdList() { DARABONBA_PTR_GET(apiIdList_, vector<string>) };
    inline ExportOASRequest& setApiIdList(const vector<string> & apiIdList) { DARABONBA_PTR_SET_VALUE(apiIdList_, apiIdList) };
    inline ExportOASRequest& setApiIdList(vector<string> && apiIdList) { DARABONBA_PTR_SET_RVALUE(apiIdList_, apiIdList) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline string dataFormat() const { DARABONBA_PTR_GET_DEFAULT(dataFormat_, "") };
    inline ExportOASRequest& setDataFormat(string dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ExportOASRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // oasVersion Field Functions 
    bool hasOasVersion() const { return this->oasVersion_ != nullptr;};
    void deleteOasVersion() { this->oasVersion_ = nullptr;};
    inline string oasVersion() const { DARABONBA_PTR_GET_DEFAULT(oasVersion_, "") };
    inline ExportOASRequest& setOasVersion(string oasVersion) { DARABONBA_PTR_SET_VALUE(oasVersion_, oasVersion) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ExportOASRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ExportOASRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline ExportOASRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // withXExtensions Field Functions 
    bool hasWithXExtensions() const { return this->withXExtensions_ != nullptr;};
    void deleteWithXExtensions() { this->withXExtensions_ = nullptr;};
    inline bool withXExtensions() const { DARABONBA_PTR_GET_DEFAULT(withXExtensions_, false) };
    inline ExportOASRequest& setWithXExtensions(bool withXExtensions) { DARABONBA_PTR_SET_VALUE(withXExtensions_, withXExtensions) };


  protected:
    // The APIs that you want to export.
    std::shared_ptr<vector<string>> apiIdList_ = nullptr;
    // The exported format:
    // 
    // *   json
    // *   yaml
    std::shared_ptr<string> dataFormat_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The OAS version. Valid values:
    // 
    // *   **oas2**
    // *   **oas3**
    std::shared_ptr<string> oasVersion_ = nullptr;
    // The number of pages in which you want to export the APIs.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The environment to which the API is published. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the pre-release environment
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
    // Specifies whether to export API Gateway extensions at the same time.
    std::shared_ptr<bool> withXExtensions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
