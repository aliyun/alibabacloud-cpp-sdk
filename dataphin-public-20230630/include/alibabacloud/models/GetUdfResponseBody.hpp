// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUDFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUDFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetUdfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUdfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UdfInfo, udfInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUdfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UdfInfo, udfInfo_);
    };
    GetUdfResponseBody() = default ;
    GetUdfResponseBody(const GetUdfResponseBody &) = default ;
    GetUdfResponseBody(GetUdfResponseBody &&) = default ;
    GetUdfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUdfResponseBody() = default ;
    GetUdfResponseBody& operator=(const GetUdfResponseBody &) = default ;
    GetUdfResponseBody& operator=(GetUdfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UdfInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdfInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ClassName, className_);
        DARABONBA_PTR_TO_JSON(CommandHelp, commandHelp_);
        DARABONBA_PTR_TO_JSON(ComputeEngineType, computeEngineType_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, UdfInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ClassName, className_);
        DARABONBA_PTR_FROM_JSON(CommandHelp, commandHelp_);
        DARABONBA_PTR_FROM_JSON(ComputeEngineType, computeEngineType_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      UdfInfo() = default ;
      UdfInfo(const UdfInfo &) = default ;
      UdfInfo(UdfInfo &&) = default ;
      UdfInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdfInfo() = default ;
      UdfInfo& operator=(const UdfInfo &) = default ;
      UdfInfo& operator=(UdfInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->className_ == nullptr && this->commandHelp_ == nullptr && this->computeEngineType_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr
        && this->directory_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr
        && this->name_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline UdfInfo& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // className Field Functions 
      bool hasClassName() const { return this->className_ != nullptr;};
      void deleteClassName() { this->className_ = nullptr;};
      inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
      inline UdfInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


      // commandHelp Field Functions 
      bool hasCommandHelp() const { return this->commandHelp_ != nullptr;};
      void deleteCommandHelp() { this->commandHelp_ = nullptr;};
      inline string getCommandHelp() const { DARABONBA_PTR_GET_DEFAULT(commandHelp_, "") };
      inline UdfInfo& setCommandHelp(string commandHelp) { DARABONBA_PTR_SET_VALUE(commandHelp_, commandHelp) };


      // computeEngineType Field Functions 
      bool hasComputeEngineType() const { return this->computeEngineType_ != nullptr;};
      void deleteComputeEngineType() { this->computeEngineType_ = nullptr;};
      inline string getComputeEngineType() const { DARABONBA_PTR_GET_DEFAULT(computeEngineType_, "") };
      inline UdfInfo& setComputeEngineType(string computeEngineType) { DARABONBA_PTR_SET_VALUE(computeEngineType_, computeEngineType) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline UdfInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UdfInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline UdfInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline UdfInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline UdfInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UdfInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
      inline UdfInfo& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UdfInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<int32_t> category_ {};
      shared_ptr<string> className_ {};
      shared_ptr<string> commandHelp_ {};
      shared_ptr<string> computeEngineType_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> directory_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> lastModifier_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->udfInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUdfResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUdfResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUdfResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUdfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUdfResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // udfInfo Field Functions 
    bool hasUdfInfo() const { return this->udfInfo_ != nullptr;};
    void deleteUdfInfo() { this->udfInfo_ = nullptr;};
    inline const GetUdfResponseBody::UdfInfo & getUdfInfo() const { DARABONBA_PTR_GET_CONST(udfInfo_, GetUdfResponseBody::UdfInfo) };
    inline GetUdfResponseBody::UdfInfo getUdfInfo() { DARABONBA_PTR_GET(udfInfo_, GetUdfResponseBody::UdfInfo) };
    inline GetUdfResponseBody& setUdfInfo(const GetUdfResponseBody::UdfInfo & udfInfo) { DARABONBA_PTR_SET_VALUE(udfInfo_, udfInfo) };
    inline GetUdfResponseBody& setUdfInfo(GetUdfResponseBody::UdfInfo && udfInfo) { DARABONBA_PTR_SET_RVALUE(udfInfo_, udfInfo) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<GetUdfResponseBody::UdfInfo> udfInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
