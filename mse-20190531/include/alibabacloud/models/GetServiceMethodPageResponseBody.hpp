// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceMethodPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceMethodPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceMethodPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceMethodPageResponseBody() = default ;
    GetServiceMethodPageResponseBody(const GetServiceMethodPageResponseBody &) = default ;
    GetServiceMethodPageResponseBody(GetServiceMethodPageResponseBody &&) = default ;
    GetServiceMethodPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceMethodPageResponseBody() = default ;
    GetServiceMethodPageResponseBody& operator=(const GetServiceMethodPageResponseBody &) = default ;
    GetServiceMethodPageResponseBody& operator=(GetServiceMethodPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(MethodController, methodController_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameDetail, nameDetail_);
          DARABONBA_PTR_TO_JSON(ParameterDefinitions, parameterDefinitions_);
          DARABONBA_PTR_TO_JSON(ParameterDetails, parameterDetails_);
          DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
          DARABONBA_PTR_TO_JSON(RequestMethods, requestMethods_);
          DARABONBA_PTR_TO_JSON(ReturnDetails, returnDetails_);
          DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(MethodController, methodController_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameDetail, nameDetail_);
          DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
          DARABONBA_PTR_FROM_JSON(ParameterDetails, parameterDetails_);
          DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
          DARABONBA_PTR_FROM_JSON(RequestMethods, requestMethods_);
          DARABONBA_PTR_FROM_JSON(ReturnDetails, returnDetails_);
          DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParameterDefinitions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParameterDefinitions& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ParameterDefinitions& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ParameterDefinitions() = default ;
          ParameterDefinitions(const ParameterDefinitions &) = default ;
          ParameterDefinitions(ParameterDefinitions &&) = default ;
          ParameterDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParameterDefinitions() = default ;
          ParameterDefinitions& operator=(const ParameterDefinitions &) = default ;
          ParameterDefinitions& operator=(ParameterDefinitions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ParameterDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ParameterDefinitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ParameterDefinitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->methodController_ == nullptr
        && this->name_ == nullptr && this->nameDetail_ == nullptr && this->parameterDefinitions_ == nullptr && this->parameterDetails_ == nullptr && this->parameterTypes_ == nullptr
        && this->paths_ == nullptr && this->requestMethods_ == nullptr && this->returnDetails_ == nullptr && this->returnType_ == nullptr; };
        // methodController Field Functions 
        bool hasMethodController() const { return this->methodController_ != nullptr;};
        void deleteMethodController() { this->methodController_ = nullptr;};
        inline string getMethodController() const { DARABONBA_PTR_GET_DEFAULT(methodController_, "") };
        inline Result& setMethodController(string methodController) { DARABONBA_PTR_SET_VALUE(methodController_, methodController) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameDetail Field Functions 
        bool hasNameDetail() const { return this->nameDetail_ != nullptr;};
        void deleteNameDetail() { this->nameDetail_ = nullptr;};
        inline string getNameDetail() const { DARABONBA_PTR_GET_DEFAULT(nameDetail_, "") };
        inline Result& setNameDetail(string nameDetail) { DARABONBA_PTR_SET_VALUE(nameDetail_, nameDetail) };


        // parameterDefinitions Field Functions 
        bool hasParameterDefinitions() const { return this->parameterDefinitions_ != nullptr;};
        void deleteParameterDefinitions() { this->parameterDefinitions_ = nullptr;};
        inline const vector<Result::ParameterDefinitions> & getParameterDefinitions() const { DARABONBA_PTR_GET_CONST(parameterDefinitions_, vector<Result::ParameterDefinitions>) };
        inline vector<Result::ParameterDefinitions> getParameterDefinitions() { DARABONBA_PTR_GET(parameterDefinitions_, vector<Result::ParameterDefinitions>) };
        inline Result& setParameterDefinitions(const vector<Result::ParameterDefinitions> & parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };
        inline Result& setParameterDefinitions(vector<Result::ParameterDefinitions> && parameterDefinitions) { DARABONBA_PTR_SET_RVALUE(parameterDefinitions_, parameterDefinitions) };


        // parameterDetails Field Functions 
        bool hasParameterDetails() const { return this->parameterDetails_ != nullptr;};
        void deleteParameterDetails() { this->parameterDetails_ = nullptr;};
        inline const vector<string> & getParameterDetails() const { DARABONBA_PTR_GET_CONST(parameterDetails_, vector<string>) };
        inline vector<string> getParameterDetails() { DARABONBA_PTR_GET(parameterDetails_, vector<string>) };
        inline Result& setParameterDetails(const vector<string> & parameterDetails) { DARABONBA_PTR_SET_VALUE(parameterDetails_, parameterDetails) };
        inline Result& setParameterDetails(vector<string> && parameterDetails) { DARABONBA_PTR_SET_RVALUE(parameterDetails_, parameterDetails) };


        // parameterTypes Field Functions 
        bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
        void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
        inline const vector<string> & getParameterTypes() const { DARABONBA_PTR_GET_CONST(parameterTypes_, vector<string>) };
        inline vector<string> getParameterTypes() { DARABONBA_PTR_GET(parameterTypes_, vector<string>) };
        inline Result& setParameterTypes(const vector<string> & parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };
        inline Result& setParameterTypes(vector<string> && parameterTypes) { DARABONBA_PTR_SET_RVALUE(parameterTypes_, parameterTypes) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline Result& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Result& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // requestMethods Field Functions 
        bool hasRequestMethods() const { return this->requestMethods_ != nullptr;};
        void deleteRequestMethods() { this->requestMethods_ = nullptr;};
        inline const vector<string> & getRequestMethods() const { DARABONBA_PTR_GET_CONST(requestMethods_, vector<string>) };
        inline vector<string> getRequestMethods() { DARABONBA_PTR_GET(requestMethods_, vector<string>) };
        inline Result& setRequestMethods(const vector<string> & requestMethods) { DARABONBA_PTR_SET_VALUE(requestMethods_, requestMethods) };
        inline Result& setRequestMethods(vector<string> && requestMethods) { DARABONBA_PTR_SET_RVALUE(requestMethods_, requestMethods) };


        // returnDetails Field Functions 
        bool hasReturnDetails() const { return this->returnDetails_ != nullptr;};
        void deleteReturnDetails() { this->returnDetails_ = nullptr;};
        inline string getReturnDetails() const { DARABONBA_PTR_GET_DEFAULT(returnDetails_, "") };
        inline Result& setReturnDetails(string returnDetails) { DARABONBA_PTR_SET_VALUE(returnDetails_, returnDetails) };


        // returnType Field Functions 
        bool hasReturnType() const { return this->returnType_ != nullptr;};
        void deleteReturnType() { this->returnType_ = nullptr;};
        inline string getReturnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
        inline Result& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


      protected:
        shared_ptr<string> methodController_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nameDetail_ {};
        shared_ptr<vector<Result::ParameterDefinitions>> parameterDefinitions_ {};
        shared_ptr<vector<string>> parameterDetails_ {};
        shared_ptr<vector<string>> parameterTypes_ {};
        shared_ptr<vector<string>> paths_ {};
        shared_ptr<vector<string>> requestMethods_ {};
        shared_ptr<string> returnDetails_ {};
        shared_ptr<string> returnType_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceMethodPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceMethodPageResponseBody::Data) };
    inline GetServiceMethodPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceMethodPageResponseBody::Data) };
    inline GetServiceMethodPageResponseBody& setData(const GetServiceMethodPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceMethodPageResponseBody& setData(GetServiceMethodPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceMethodPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceMethodPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceMethodPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetServiceMethodPageResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
