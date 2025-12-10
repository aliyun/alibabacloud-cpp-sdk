// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTFOLDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTFOLDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class MigrateExperimentFoldersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateExperimentFoldersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FolderIdMapping, folderIdMapping_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateExperimentFoldersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FolderIdMapping, folderIdMapping_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MigrateExperimentFoldersResponseBody() = default ;
    MigrateExperimentFoldersResponseBody(const MigrateExperimentFoldersResponseBody &) = default ;
    MigrateExperimentFoldersResponseBody(MigrateExperimentFoldersResponseBody &&) = default ;
    MigrateExperimentFoldersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateExperimentFoldersResponseBody() = default ;
    MigrateExperimentFoldersResponseBody& operator=(const MigrateExperimentFoldersResponseBody &) = default ;
    MigrateExperimentFoldersResponseBody& operator=(MigrateExperimentFoldersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->folderIdMapping_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MigrateExperimentFoldersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // folderIdMapping Field Functions 
    bool hasFolderIdMapping() const { return this->folderIdMapping_ != nullptr;};
    void deleteFolderIdMapping() { this->folderIdMapping_ = nullptr;};
    inline const map<string, Darabonba::Json> & folderIdMapping() const { DARABONBA_PTR_GET_CONST(folderIdMapping_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> folderIdMapping() { DARABONBA_PTR_GET(folderIdMapping_, map<string, Darabonba::Json>) };
    inline MigrateExperimentFoldersResponseBody& setFolderIdMapping(const map<string, Darabonba::Json> & folderIdMapping) { DARABONBA_PTR_SET_VALUE(folderIdMapping_, folderIdMapping) };
    inline MigrateExperimentFoldersResponseBody& setFolderIdMapping(map<string, Darabonba::Json> && folderIdMapping) { DARABONBA_PTR_SET_RVALUE(folderIdMapping_, folderIdMapping) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MigrateExperimentFoldersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MigrateExperimentFoldersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> folderIdMapping_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
