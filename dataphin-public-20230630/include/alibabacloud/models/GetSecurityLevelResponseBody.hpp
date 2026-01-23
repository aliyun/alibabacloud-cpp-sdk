// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSecurityLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityLevelInfo, securityLevelInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityLevelInfo, securityLevelInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSecurityLevelResponseBody() = default ;
    GetSecurityLevelResponseBody(const GetSecurityLevelResponseBody &) = default ;
    GetSecurityLevelResponseBody(GetSecurityLevelResponseBody &&) = default ;
    GetSecurityLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityLevelResponseBody() = default ;
    GetSecurityLevelResponseBody& operator=(const GetSecurityLevelResponseBody &) = default ;
    GetSecurityLevelResponseBody& operator=(GetSecurityLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityLevelInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityLevelInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Abbreviation, abbreviation_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RelatedClassifyIdList, relatedClassifyIdList_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityLevelInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Abbreviation, abbreviation_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RelatedClassifyIdList, relatedClassifyIdList_);
      };
      SecurityLevelInfo() = default ;
      SecurityLevelInfo(const SecurityLevelInfo &) = default ;
      SecurityLevelInfo(SecurityLevelInfo &&) = default ;
      SecurityLevelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityLevelInfo() = default ;
      SecurityLevelInfo& operator=(const SecurityLevelInfo &) = default ;
      SecurityLevelInfo& operator=(SecurityLevelInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abbreviation_ == nullptr
        && this->description_ == nullptr && this->index_ == nullptr && this->name_ == nullptr && this->relatedClassifyIdList_ == nullptr; };
      // abbreviation Field Functions 
      bool hasAbbreviation() const { return this->abbreviation_ != nullptr;};
      void deleteAbbreviation() { this->abbreviation_ = nullptr;};
      inline string getAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(abbreviation_, "") };
      inline SecurityLevelInfo& setAbbreviation(string abbreviation) { DARABONBA_PTR_SET_VALUE(abbreviation_, abbreviation) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SecurityLevelInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline SecurityLevelInfo& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityLevelInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // relatedClassifyIdList Field Functions 
      bool hasRelatedClassifyIdList() const { return this->relatedClassifyIdList_ != nullptr;};
      void deleteRelatedClassifyIdList() { this->relatedClassifyIdList_ = nullptr;};
      inline const vector<int64_t> & getRelatedClassifyIdList() const { DARABONBA_PTR_GET_CONST(relatedClassifyIdList_, vector<int64_t>) };
      inline vector<int64_t> getRelatedClassifyIdList() { DARABONBA_PTR_GET(relatedClassifyIdList_, vector<int64_t>) };
      inline SecurityLevelInfo& setRelatedClassifyIdList(const vector<int64_t> & relatedClassifyIdList) { DARABONBA_PTR_SET_VALUE(relatedClassifyIdList_, relatedClassifyIdList) };
      inline SecurityLevelInfo& setRelatedClassifyIdList(vector<int64_t> && relatedClassifyIdList) { DARABONBA_PTR_SET_RVALUE(relatedClassifyIdList_, relatedClassifyIdList) };


    protected:
      shared_ptr<string> abbreviation_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> index_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<int64_t>> relatedClassifyIdList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->securityLevelInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecurityLevelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSecurityLevelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecurityLevelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityLevelInfo Field Functions 
    bool hasSecurityLevelInfo() const { return this->securityLevelInfo_ != nullptr;};
    void deleteSecurityLevelInfo() { this->securityLevelInfo_ = nullptr;};
    inline const GetSecurityLevelResponseBody::SecurityLevelInfo & getSecurityLevelInfo() const { DARABONBA_PTR_GET_CONST(securityLevelInfo_, GetSecurityLevelResponseBody::SecurityLevelInfo) };
    inline GetSecurityLevelResponseBody::SecurityLevelInfo getSecurityLevelInfo() { DARABONBA_PTR_GET(securityLevelInfo_, GetSecurityLevelResponseBody::SecurityLevelInfo) };
    inline GetSecurityLevelResponseBody& setSecurityLevelInfo(const GetSecurityLevelResponseBody::SecurityLevelInfo & securityLevelInfo) { DARABONBA_PTR_SET_VALUE(securityLevelInfo_, securityLevelInfo) };
    inline GetSecurityLevelResponseBody& setSecurityLevelInfo(GetSecurityLevelResponseBody::SecurityLevelInfo && securityLevelInfo) { DARABONBA_PTR_SET_RVALUE(securityLevelInfo_, securityLevelInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSecurityLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSecurityLevelResponseBody::SecurityLevelInfo> securityLevelInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
