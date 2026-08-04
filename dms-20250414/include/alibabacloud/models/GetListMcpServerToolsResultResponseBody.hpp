// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTMCPSERVERTOOLSRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTMCPSERVERTOOLSRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetListMcpServerToolsResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListMcpServerToolsResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetListMcpServerToolsResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetListMcpServerToolsResultResponseBody() = default ;
    GetListMcpServerToolsResultResponseBody(const GetListMcpServerToolsResultResponseBody &) = default ;
    GetListMcpServerToolsResultResponseBody(GetListMcpServerToolsResultResponseBody &&) = default ;
    GetListMcpServerToolsResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListMcpServerToolsResultResponseBody() = default ;
    GetListMcpServerToolsResultResponseBody& operator=(const GetListMcpServerToolsResultResponseBody &) = default ;
    GetListMcpServerToolsResultResponseBody& operator=(GetListMcpServerToolsResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Accessible, accessible_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Accessible, accessible_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Tools, tools_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InputSchema, inputSchema_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InputSchema, inputSchema_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Tools() = default ;
        Tools(const Tools &) = default ;
        Tools(Tools &&) = default ;
        Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tools() = default ;
        Tools& operator=(const Tools &) = default ;
        Tools& operator=(Tools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->inputSchema_ == nullptr && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Tools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inputSchema Field Functions 
        bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
        void deleteInputSchema() { this->inputSchema_ = nullptr;};
        inline string getInputSchema() const { DARABONBA_PTR_GET_DEFAULT(inputSchema_, "") };
        inline Tools& setInputSchema(string inputSchema) { DARABONBA_PTR_SET_VALUE(inputSchema_, inputSchema) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The description of the MCP tool functionality.
        shared_ptr<string> description_ {};
        // The JSON Schema string of the tool input parameters.
        shared_ptr<string> inputSchema_ {};
        // The MCP tool name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->accessible_ == nullptr
        && this->state_ == nullptr && this->tools_ == nullptr; };
      // accessible Field Functions 
      bool hasAccessible() const { return this->accessible_ != nullptr;};
      void deleteAccessible() { this->accessible_ = nullptr;};
      inline bool getAccessible() const { DARABONBA_PTR_GET_DEFAULT(accessible_, false) };
      inline Data& setAccessible(bool accessible) { DARABONBA_PTR_SET_VALUE(accessible_, accessible) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Data::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Data::Tools>) };
      inline vector<Data::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Data::Tools>) };
      inline Data& setTools(const vector<Data::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Data& setTools(vector<Data::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    protected:
      // Indicates whether the MCP Server is accessible. The value is true only when State is success.
      shared_ptr<bool> accessible_ {};
      // The detection status. Valid values:
      // - pending: The detection is in progress.
      // - success: The detection succeeded.
      // - failed: The detection failed or timed out.
      // 
      // The top-level Success field can be true in all three business states.
      shared_ptr<string> state_ {};
      // The list of detected MCP tools. A non-empty list is returned only when State is success.
      shared_ptr<vector<Data::Tools>> tools_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetListMcpServerToolsResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetListMcpServerToolsResultResponseBody::Data) };
    inline GetListMcpServerToolsResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetListMcpServerToolsResultResponseBody::Data) };
    inline GetListMcpServerToolsResultResponseBody& setData(const GetListMcpServerToolsResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetListMcpServerToolsResultResponseBody& setData(GetListMcpServerToolsResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetListMcpServerToolsResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetListMcpServerToolsResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListMcpServerToolsResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetListMcpServerToolsResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The MCP Server connectivity detection result. The business status is distinguished by the State field.
    shared_ptr<GetListMcpServerToolsResultResponseBody::Data> data_ {};
    // The return code. The value success is returned if the request succeeds. An error code is returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned when a system-level request failure occurs.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
