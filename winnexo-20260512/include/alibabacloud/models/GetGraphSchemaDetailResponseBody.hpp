// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHSCHEMADETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHSCHEMADETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetGraphSchemaDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphSchemaDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(businessProfile, businessProfile_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(contentHash, contentHash_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(graphStatus, graphStatus_);
      DARABONBA_PTR_TO_JSON(hasDraft, hasDraft_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(yamlEdit, yamlEdit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphSchemaDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(businessProfile, businessProfile_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(contentHash, contentHash_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(graphStatus, graphStatus_);
      DARABONBA_PTR_FROM_JSON(hasDraft, hasDraft_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(yamlEdit, yamlEdit_);
    };
    GetGraphSchemaDetailResponseBody() = default ;
    GetGraphSchemaDetailResponseBody(const GetGraphSchemaDetailResponseBody &) = default ;
    GetGraphSchemaDetailResponseBody(GetGraphSchemaDetailResponseBody &&) = default ;
    GetGraphSchemaDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphSchemaDetailResponseBody() = default ;
    GetGraphSchemaDetailResponseBody& operator=(const GetGraphSchemaDetailResponseBody &) = default ;
    GetGraphSchemaDetailResponseBody& operator=(GetGraphSchemaDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessProfile_ == nullptr
        && this->code_ == nullptr && this->contentHash_ == nullptr && this->createdBy_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->graphName_ == nullptr && this->graphStatus_ == nullptr && this->hasDraft_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->schemaVersion_ == nullptr && this->yamlEdit_ == nullptr; };
    // businessProfile Field Functions 
    bool hasBusinessProfile() const { return this->businessProfile_ != nullptr;};
    void deleteBusinessProfile() { this->businessProfile_ = nullptr;};
    inline string getBusinessProfile() const { DARABONBA_PTR_GET_DEFAULT(businessProfile_, "") };
    inline GetGraphSchemaDetailResponseBody& setBusinessProfile(string businessProfile) { DARABONBA_PTR_SET_VALUE(businessProfile_, businessProfile) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGraphSchemaDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contentHash Field Functions 
    bool hasContentHash() const { return this->contentHash_ != nullptr;};
    void deleteContentHash() { this->contentHash_ = nullptr;};
    inline string getContentHash() const { DARABONBA_PTR_GET_DEFAULT(contentHash_, "") };
    inline GetGraphSchemaDetailResponseBody& setContentHash(string contentHash) { DARABONBA_PTR_SET_VALUE(contentHash_, contentHash) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline GetGraphSchemaDetailResponseBody& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetGraphSchemaDetailResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGraphSchemaDetailResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGraphSchemaDetailResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline GetGraphSchemaDetailResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // graphStatus Field Functions 
    bool hasGraphStatus() const { return this->graphStatus_ != nullptr;};
    void deleteGraphStatus() { this->graphStatus_ = nullptr;};
    inline string getGraphStatus() const { DARABONBA_PTR_GET_DEFAULT(graphStatus_, "") };
    inline GetGraphSchemaDetailResponseBody& setGraphStatus(string graphStatus) { DARABONBA_PTR_SET_VALUE(graphStatus_, graphStatus) };


    // hasDraft Field Functions 
    bool hasHasDraft() const { return this->hasDraft_ != nullptr;};
    void deleteHasDraft() { this->hasDraft_ = nullptr;};
    inline bool getHasDraft() const { DARABONBA_PTR_GET_DEFAULT(hasDraft_, false) };
    inline GetGraphSchemaDetailResponseBody& setHasDraft(bool hasDraft) { DARABONBA_PTR_SET_VALUE(hasDraft_, hasDraft) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGraphSchemaDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGraphSchemaDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline GetGraphSchemaDetailResponseBody& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // yamlEdit Field Functions 
    bool hasYamlEdit() const { return this->yamlEdit_ != nullptr;};
    void deleteYamlEdit() { this->yamlEdit_ = nullptr;};
    inline string getYamlEdit() const { DARABONBA_PTR_GET_DEFAULT(yamlEdit_, "") };
    inline GetGraphSchemaDetailResponseBody& setYamlEdit(string yamlEdit) { DARABONBA_PTR_SET_VALUE(yamlEdit_, yamlEdit) };


  protected:
    // The business description of the graph. An empty string is returned if this parameter is not configured.
    shared_ptr<string> businessProfile_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The hash fingerprint of the schema content.
    shared_ptr<string> contentHash_ {};
    // The creator.
    shared_ptr<string> createdBy_ {};
    // The display name.
    shared_ptr<string> displayName_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // The last update time.
    shared_ptr<string> gmtModified_ {};
    // The name of the graph.
    shared_ptr<string> graphName_ {};
    // The status of the semantic graph.
    shared_ptr<string> graphStatus_ {};
    // Indicates whether the graph contains a draft.
    shared_ptr<bool> hasDraft_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The version.
    shared_ptr<string> schemaVersion_ {};
    // The original YAML text of the graph schema trimmed by READ permission. The $ref references within the authorized subgraph are retained.
    shared_ptr<string> yamlEdit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
