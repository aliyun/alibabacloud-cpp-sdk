// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYCLASSIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYCLASSIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSecurityClassifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityClassifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityClassifyInfo, securityClassifyInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityClassifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityClassifyInfo, securityClassifyInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSecurityClassifyResponseBody() = default ;
    GetSecurityClassifyResponseBody(const GetSecurityClassifyResponseBody &) = default ;
    GetSecurityClassifyResponseBody(GetSecurityClassifyResponseBody &&) = default ;
    GetSecurityClassifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityClassifyResponseBody() = default ;
    GetSecurityClassifyResponseBody& operator=(const GetSecurityClassifyResponseBody &) = default ;
    GetSecurityClassifyResponseBody& operator=(GetSecurityClassifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityClassifyInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityClassifyInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Abbreviation, abbreviation_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LevelAbbreviation, levelAbbreviation_);
        DARABONBA_PTR_TO_JSON(LevelIndex, levelIndex_);
        DARABONBA_PTR_TO_JSON(LevelName, levelName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityClassifyInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Abbreviation, abbreviation_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LevelAbbreviation, levelAbbreviation_);
        DARABONBA_PTR_FROM_JSON(LevelIndex, levelIndex_);
        DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      SecurityClassifyInfo() = default ;
      SecurityClassifyInfo(const SecurityClassifyInfo &) = default ;
      SecurityClassifyInfo(SecurityClassifyInfo &&) = default ;
      SecurityClassifyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityClassifyInfo() = default ;
      SecurityClassifyInfo& operator=(const SecurityClassifyInfo &) = default ;
      SecurityClassifyInfo& operator=(SecurityClassifyInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abbreviation_ == nullptr
        && this->id_ == nullptr && this->levelAbbreviation_ == nullptr && this->levelIndex_ == nullptr && this->levelName_ == nullptr && this->name_ == nullptr
        && this->path_ == nullptr; };
      // abbreviation Field Functions 
      bool hasAbbreviation() const { return this->abbreviation_ != nullptr;};
      void deleteAbbreviation() { this->abbreviation_ = nullptr;};
      inline string getAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(abbreviation_, "") };
      inline SecurityClassifyInfo& setAbbreviation(string abbreviation) { DARABONBA_PTR_SET_VALUE(abbreviation_, abbreviation) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SecurityClassifyInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // levelAbbreviation Field Functions 
      bool hasLevelAbbreviation() const { return this->levelAbbreviation_ != nullptr;};
      void deleteLevelAbbreviation() { this->levelAbbreviation_ = nullptr;};
      inline string getLevelAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(levelAbbreviation_, "") };
      inline SecurityClassifyInfo& setLevelAbbreviation(string levelAbbreviation) { DARABONBA_PTR_SET_VALUE(levelAbbreviation_, levelAbbreviation) };


      // levelIndex Field Functions 
      bool hasLevelIndex() const { return this->levelIndex_ != nullptr;};
      void deleteLevelIndex() { this->levelIndex_ = nullptr;};
      inline int64_t getLevelIndex() const { DARABONBA_PTR_GET_DEFAULT(levelIndex_, 0L) };
      inline SecurityClassifyInfo& setLevelIndex(int64_t levelIndex) { DARABONBA_PTR_SET_VALUE(levelIndex_, levelIndex) };


      // levelName Field Functions 
      bool hasLevelName() const { return this->levelName_ != nullptr;};
      void deleteLevelName() { this->levelName_ = nullptr;};
      inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
      inline SecurityClassifyInfo& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityClassifyInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline SecurityClassifyInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<string> abbreviation_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> levelAbbreviation_ {};
      shared_ptr<int64_t> levelIndex_ {};
      shared_ptr<string> levelName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->securityClassifyInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecurityClassifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSecurityClassifyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecurityClassifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityClassifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityClassifyInfo Field Functions 
    bool hasSecurityClassifyInfo() const { return this->securityClassifyInfo_ != nullptr;};
    void deleteSecurityClassifyInfo() { this->securityClassifyInfo_ = nullptr;};
    inline const GetSecurityClassifyResponseBody::SecurityClassifyInfo & getSecurityClassifyInfo() const { DARABONBA_PTR_GET_CONST(securityClassifyInfo_, GetSecurityClassifyResponseBody::SecurityClassifyInfo) };
    inline GetSecurityClassifyResponseBody::SecurityClassifyInfo getSecurityClassifyInfo() { DARABONBA_PTR_GET(securityClassifyInfo_, GetSecurityClassifyResponseBody::SecurityClassifyInfo) };
    inline GetSecurityClassifyResponseBody& setSecurityClassifyInfo(const GetSecurityClassifyResponseBody::SecurityClassifyInfo & securityClassifyInfo) { DARABONBA_PTR_SET_VALUE(securityClassifyInfo_, securityClassifyInfo) };
    inline GetSecurityClassifyResponseBody& setSecurityClassifyInfo(GetSecurityClassifyResponseBody::SecurityClassifyInfo && securityClassifyInfo) { DARABONBA_PTR_SET_RVALUE(securityClassifyInfo_, securityClassifyInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSecurityClassifyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSecurityClassifyResponseBody::SecurityClassifyInfo> securityClassifyInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
