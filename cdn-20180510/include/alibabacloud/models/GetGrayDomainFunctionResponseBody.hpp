// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class GetGrayDomainFunctionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrayDomainFunctionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Progression, progression_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrayDomainFunctionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Progression, progression_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetGrayDomainFunctionResponseBody() = default ;
    GetGrayDomainFunctionResponseBody(const GetGrayDomainFunctionResponseBody &) = default ;
    GetGrayDomainFunctionResponseBody(GetGrayDomainFunctionResponseBody &&) = default ;
    GetGrayDomainFunctionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrayDomainFunctionResponseBody() = default ;
    GetGrayDomainFunctionResponseBody& operator=(const GetGrayDomainFunctionResponseBody &) = default ;
    GetGrayDomainFunctionResponseBody& operator=(GetGrayDomainFunctionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DomainConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DomainConfigList() = default ;
      DomainConfigList(const DomainConfigList &) = default ;
      DomainConfigList(DomainConfigList &&) = default ;
      DomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainConfigList() = default ;
      DomainConfigList& operator=(const DomainConfigList &) = default ;
      DomainConfigList& operator=(DomainConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FunctionArgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionArgs& obj) { 
          DARABONBA_PTR_TO_JSON(ArgName, argName_);
          DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionArgs& obj) { 
          DARABONBA_PTR_FROM_JSON(ArgName, argName_);
          DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
        };
        FunctionArgs() = default ;
        FunctionArgs(const FunctionArgs &) = default ;
        FunctionArgs(FunctionArgs &&) = default ;
        FunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionArgs() = default ;
        FunctionArgs& operator=(const FunctionArgs &) = default ;
        FunctionArgs& operator=(FunctionArgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->argName_ == nullptr
        && this->argValue_ == nullptr; };
        // argName Field Functions 
        bool hasArgName() const { return this->argName_ != nullptr;};
        void deleteArgName() { this->argName_ = nullptr;};
        inline string getArgName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
        inline FunctionArgs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


        // argValue Field Functions 
        bool hasArgValue() const { return this->argValue_ != nullptr;};
        void deleteArgValue() { this->argValue_ = nullptr;};
        inline string getArgValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
        inline FunctionArgs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


      protected:
        shared_ptr<string> argName_ {};
        shared_ptr<string> argValue_ {};
      };

      virtual bool empty() const override { return this->configId_ == nullptr
        && this->functionArgs_ == nullptr && this->functionName_ == nullptr && this->parentId_ == nullptr && this->status_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline DomainConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // functionArgs Field Functions 
      bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
      void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
      inline const vector<DomainConfigList::FunctionArgs> & getFunctionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, vector<DomainConfigList::FunctionArgs>) };
      inline vector<DomainConfigList::FunctionArgs> getFunctionArgs() { DARABONBA_PTR_GET(functionArgs_, vector<DomainConfigList::FunctionArgs>) };
      inline DomainConfigList& setFunctionArgs(const vector<DomainConfigList::FunctionArgs> & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
      inline DomainConfigList& setFunctionArgs(vector<DomainConfigList::FunctionArgs> && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline DomainConfigList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline DomainConfigList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DomainConfigList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> configId_ {};
      shared_ptr<vector<DomainConfigList::FunctionArgs>> functionArgs_ {};
      shared_ptr<string> functionName_ {};
      shared_ptr<string> parentId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->domainConfigList_ == nullptr
        && this->domainName_ == nullptr && this->progression_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const vector<GetGrayDomainFunctionResponseBody::DomainConfigList> & getDomainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, vector<GetGrayDomainFunctionResponseBody::DomainConfigList>) };
    inline vector<GetGrayDomainFunctionResponseBody::DomainConfigList> getDomainConfigList() { DARABONBA_PTR_GET(domainConfigList_, vector<GetGrayDomainFunctionResponseBody::DomainConfigList>) };
    inline GetGrayDomainFunctionResponseBody& setDomainConfigList(const vector<GetGrayDomainFunctionResponseBody::DomainConfigList> & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline GetGrayDomainFunctionResponseBody& setDomainConfigList(vector<GetGrayDomainFunctionResponseBody::DomainConfigList> && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetGrayDomainFunctionResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // progression Field Functions 
    bool hasProgression() const { return this->progression_ != nullptr;};
    void deleteProgression() { this->progression_ = nullptr;};
    inline string getProgression() const { DARABONBA_PTR_GET_DEFAULT(progression_, "") };
    inline GetGrayDomainFunctionResponseBody& setProgression(string progression) { DARABONBA_PTR_SET_VALUE(progression_, progression) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGrayDomainFunctionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGrayDomainFunctionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<GetGrayDomainFunctionResponseBody::DomainConfigList>> domainConfigList_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> progression_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
