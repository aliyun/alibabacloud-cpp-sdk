// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUDFBYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUDFBYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetUdfByVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUdfByVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UdfInfo, udfInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUdfByVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UdfInfo, udfInfo_);
    };
    GetUdfByVersionResponseBody() = default ;
    GetUdfByVersionResponseBody(const GetUdfByVersionResponseBody &) = default ;
    GetUdfByVersionResponseBody(GetUdfByVersionResponseBody &&) = default ;
    GetUdfByVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUdfByVersionResponseBody() = default ;
    GetUdfByVersionResponseBody& operator=(const GetUdfByVersionResponseBody &) = default ;
    GetUdfByVersionResponseBody& operator=(GetUdfByVersionResponseBody &&) = default ;
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
      // The udf type. Valid values:
      // - 1: window function.
      // - 2: statistical function.
      // - 3: numerical function.
      // - 4: string function.
      // - 5: time function.
      // - 6: IP address utility function.
      // - 7: URL-related function.
      // - 8: encoding and decoding function.
      // - 9: business-related function.
      // - 10: other.
      shared_ptr<int32_t> category_ {};
      // The registered class name.
      shared_ptr<string> className_ {};
      // The command help.
      shared_ptr<string> commandHelp_ {};
      // The compute engine. Valid values: HADOOP, MAX_COMPUTE, and FLINK.
      shared_ptr<string> computeEngineType_ {};
      // The creator.
      shared_ptr<string> creator_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The directory where the function is stored.
      shared_ptr<string> directory_ {};
      // The creation time, in the yyyy-MM-d HH:mm:ss format.
      shared_ptr<string> gmtCreate_ {};
      // The update time, in the yyyy-MM-d HH:mm:ss format.
      shared_ptr<string> gmtModified_ {};
      // The ID of the user-defined function.
      shared_ptr<int64_t> id_ {};
      // The last modifier.
      shared_ptr<string> lastModifier_ {};
      // The function name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->udfInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUdfByVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUdfByVersionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUdfByVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUdfByVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUdfByVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // udfInfo Field Functions 
    bool hasUdfInfo() const { return this->udfInfo_ != nullptr;};
    void deleteUdfInfo() { this->udfInfo_ = nullptr;};
    inline const GetUdfByVersionResponseBody::UdfInfo & getUdfInfo() const { DARABONBA_PTR_GET_CONST(udfInfo_, GetUdfByVersionResponseBody::UdfInfo) };
    inline GetUdfByVersionResponseBody::UdfInfo getUdfInfo() { DARABONBA_PTR_GET(udfInfo_, GetUdfByVersionResponseBody::UdfInfo) };
    inline GetUdfByVersionResponseBody& setUdfInfo(const GetUdfByVersionResponseBody::UdfInfo & udfInfo) { DARABONBA_PTR_SET_VALUE(udfInfo_, udfInfo) };
    inline GetUdfByVersionResponseBody& setUdfInfo(GetUdfByVersionResponseBody::UdfInfo && udfInfo) { DARABONBA_PTR_SET_RVALUE(udfInfo_, udfInfo) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The details of the user-defined function.
    shared_ptr<GetUdfByVersionResponseBody::UdfInfo> udfInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
