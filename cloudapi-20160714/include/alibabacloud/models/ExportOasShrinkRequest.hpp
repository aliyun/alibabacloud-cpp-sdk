// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTOASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTOASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ExportOASShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportOASShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIdList, apiIdListShrink_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OasVersion, oasVersion_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(WithXExtensions, withXExtensions_);
    };
    friend void from_json(const Darabonba::Json& j, ExportOASShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIdList, apiIdListShrink_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OasVersion, oasVersion_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(WithXExtensions, withXExtensions_);
    };
    ExportOASShrinkRequest() = default ;
    ExportOASShrinkRequest(const ExportOASShrinkRequest &) = default ;
    ExportOASShrinkRequest(ExportOASShrinkRequest &&) = default ;
    ExportOASShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportOASShrinkRequest() = default ;
    ExportOASShrinkRequest& operator=(const ExportOASShrinkRequest &) = default ;
    ExportOASShrinkRequest& operator=(ExportOASShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIdListShrink_ == nullptr
        && return this->dataFormat_ == nullptr && return this->groupId_ == nullptr && return this->oasVersion_ == nullptr && return this->pageNumber_ == nullptr && return this->securityToken_ == nullptr
        && return this->stageName_ == nullptr && return this->withXExtensions_ == nullptr; };
    // apiIdListShrink Field Functions 
    bool hasApiIdListShrink() const { return this->apiIdListShrink_ != nullptr;};
    void deleteApiIdListShrink() { this->apiIdListShrink_ = nullptr;};
    inline string apiIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(apiIdListShrink_, "") };
    inline ExportOASShrinkRequest& setApiIdListShrink(string apiIdListShrink) { DARABONBA_PTR_SET_VALUE(apiIdListShrink_, apiIdListShrink) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline string dataFormat() const { DARABONBA_PTR_GET_DEFAULT(dataFormat_, "") };
    inline ExportOASShrinkRequest& setDataFormat(string dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ExportOASShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // oasVersion Field Functions 
    bool hasOasVersion() const { return this->oasVersion_ != nullptr;};
    void deleteOasVersion() { this->oasVersion_ = nullptr;};
    inline string oasVersion() const { DARABONBA_PTR_GET_DEFAULT(oasVersion_, "") };
    inline ExportOASShrinkRequest& setOasVersion(string oasVersion) { DARABONBA_PTR_SET_VALUE(oasVersion_, oasVersion) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ExportOASShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ExportOASShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline ExportOASShrinkRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // withXExtensions Field Functions 
    bool hasWithXExtensions() const { return this->withXExtensions_ != nullptr;};
    void deleteWithXExtensions() { this->withXExtensions_ = nullptr;};
    inline bool withXExtensions() const { DARABONBA_PTR_GET_DEFAULT(withXExtensions_, false) };
    inline ExportOASShrinkRequest& setWithXExtensions(bool withXExtensions) { DARABONBA_PTR_SET_VALUE(withXExtensions_, withXExtensions) };


  protected:
    // The APIs that you want to export.
    std::shared_ptr<string> apiIdListShrink_ = nullptr;
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
