// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODER_HPP_
#define ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpDubboTranscoder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpDubboTranscoder& obj) { 
      DARABONBA_PTR_TO_JSON(dubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_TO_JSON(dubboServiceName, dubboServiceName_);
      DARABONBA_PTR_TO_JSON(dubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_TO_JSON(methodMapList, methodMapList_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDubboTranscoder& obj) { 
      DARABONBA_PTR_FROM_JSON(dubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_FROM_JSON(dubboServiceName, dubboServiceName_);
      DARABONBA_PTR_FROM_JSON(dubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_FROM_JSON(methodMapList, methodMapList_);
    };
    HttpDubboTranscoder() = default ;
    HttpDubboTranscoder(const HttpDubboTranscoder &) = default ;
    HttpDubboTranscoder(HttpDubboTranscoder &&) = default ;
    HttpDubboTranscoder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpDubboTranscoder() = default ;
    HttpDubboTranscoder& operator=(const HttpDubboTranscoder &) = default ;
    HttpDubboTranscoder& operator=(HttpDubboTranscoder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MethodMapList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MethodMapList& obj) { 
        DARABONBA_PTR_TO_JSON(dubboMethodName, dubboMethodName_);
        DARABONBA_PTR_TO_JSON(httpMethod, httpMethod_);
        DARABONBA_PTR_TO_JSON(methodPath, methodPath_);
        DARABONBA_PTR_TO_JSON(paramMapsList, paramMapsList_);
        DARABONBA_PTR_TO_JSON(passThroughAllHeaders, passThroughAllHeaders_);
        DARABONBA_PTR_TO_JSON(passThroughList, passThroughList_);
      };
      friend void from_json(const Darabonba::Json& j, MethodMapList& obj) { 
        DARABONBA_PTR_FROM_JSON(dubboMethodName, dubboMethodName_);
        DARABONBA_PTR_FROM_JSON(httpMethod, httpMethod_);
        DARABONBA_PTR_FROM_JSON(methodPath, methodPath_);
        DARABONBA_PTR_FROM_JSON(paramMapsList, paramMapsList_);
        DARABONBA_PTR_FROM_JSON(passThroughAllHeaders, passThroughAllHeaders_);
        DARABONBA_PTR_FROM_JSON(passThroughList, passThroughList_);
      };
      MethodMapList() = default ;
      MethodMapList(const MethodMapList &) = default ;
      MethodMapList(MethodMapList &&) = default ;
      MethodMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MethodMapList() = default ;
      MethodMapList& operator=(const MethodMapList &) = default ;
      MethodMapList& operator=(MethodMapList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParamMapsList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamMapsList& obj) { 
          DARABONBA_PTR_TO_JSON(extractKey, extractKey_);
          DARABONBA_PTR_TO_JSON(extractKeySpec, extractKeySpec_);
          DARABONBA_PTR_TO_JSON(mappingType, mappingType_);
        };
        friend void from_json(const Darabonba::Json& j, ParamMapsList& obj) { 
          DARABONBA_PTR_FROM_JSON(extractKey, extractKey_);
          DARABONBA_PTR_FROM_JSON(extractKeySpec, extractKeySpec_);
          DARABONBA_PTR_FROM_JSON(mappingType, mappingType_);
        };
        ParamMapsList() = default ;
        ParamMapsList(const ParamMapsList &) = default ;
        ParamMapsList(ParamMapsList &&) = default ;
        ParamMapsList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamMapsList() = default ;
        ParamMapsList& operator=(const ParamMapsList &) = default ;
        ParamMapsList& operator=(ParamMapsList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extractKey_ == nullptr
        && this->extractKeySpec_ == nullptr && this->mappingType_ == nullptr; };
        // extractKey Field Functions 
        bool hasExtractKey() const { return this->extractKey_ != nullptr;};
        void deleteExtractKey() { this->extractKey_ = nullptr;};
        inline string getExtractKey() const { DARABONBA_PTR_GET_DEFAULT(extractKey_, "") };
        inline ParamMapsList& setExtractKey(string extractKey) { DARABONBA_PTR_SET_VALUE(extractKey_, extractKey) };


        // extractKeySpec Field Functions 
        bool hasExtractKeySpec() const { return this->extractKeySpec_ != nullptr;};
        void deleteExtractKeySpec() { this->extractKeySpec_ = nullptr;};
        inline string getExtractKeySpec() const { DARABONBA_PTR_GET_DEFAULT(extractKeySpec_, "") };
        inline ParamMapsList& setExtractKeySpec(string extractKeySpec) { DARABONBA_PTR_SET_VALUE(extractKeySpec_, extractKeySpec) };


        // mappingType Field Functions 
        bool hasMappingType() const { return this->mappingType_ != nullptr;};
        void deleteMappingType() { this->mappingType_ = nullptr;};
        inline string getMappingType() const { DARABONBA_PTR_GET_DEFAULT(mappingType_, "") };
        inline ParamMapsList& setMappingType(string mappingType) { DARABONBA_PTR_SET_VALUE(mappingType_, mappingType) };


      protected:
        // The key used to extract the input parameter.
        shared_ptr<string> extractKey_ {};
        // The input parameter location. Valid values: ALL_QUERY_PARAMETER: request parameter. ALL_HEADER: request header. ALL_PATH: URI of the request. ALL_BODY: request body.
        shared_ptr<string> extractKeySpec_ {};
        // The backend parameter type.
        shared_ptr<string> mappingType_ {};
      };

      virtual bool empty() const override { return this->dubboMethodName_ == nullptr
        && this->httpMethod_ == nullptr && this->methodPath_ == nullptr && this->paramMapsList_ == nullptr && this->passThroughAllHeaders_ == nullptr && this->passThroughList_ == nullptr; };
      // dubboMethodName Field Functions 
      bool hasDubboMethodName() const { return this->dubboMethodName_ != nullptr;};
      void deleteDubboMethodName() { this->dubboMethodName_ = nullptr;};
      inline string getDubboMethodName() const { DARABONBA_PTR_GET_DEFAULT(dubboMethodName_, "") };
      inline MethodMapList& setDubboMethodName(string dubboMethodName) { DARABONBA_PTR_SET_VALUE(dubboMethodName_, dubboMethodName) };


      // httpMethod Field Functions 
      bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
      void deleteHttpMethod() { this->httpMethod_ = nullptr;};
      inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
      inline MethodMapList& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


      // methodPath Field Functions 
      bool hasMethodPath() const { return this->methodPath_ != nullptr;};
      void deleteMethodPath() { this->methodPath_ = nullptr;};
      inline string getMethodPath() const { DARABONBA_PTR_GET_DEFAULT(methodPath_, "") };
      inline MethodMapList& setMethodPath(string methodPath) { DARABONBA_PTR_SET_VALUE(methodPath_, methodPath) };


      // paramMapsList Field Functions 
      bool hasParamMapsList() const { return this->paramMapsList_ != nullptr;};
      void deleteParamMapsList() { this->paramMapsList_ = nullptr;};
      inline const vector<MethodMapList::ParamMapsList> & getParamMapsList() const { DARABONBA_PTR_GET_CONST(paramMapsList_, vector<MethodMapList::ParamMapsList>) };
      inline vector<MethodMapList::ParamMapsList> getParamMapsList() { DARABONBA_PTR_GET(paramMapsList_, vector<MethodMapList::ParamMapsList>) };
      inline MethodMapList& setParamMapsList(const vector<MethodMapList::ParamMapsList> & paramMapsList) { DARABONBA_PTR_SET_VALUE(paramMapsList_, paramMapsList) };
      inline MethodMapList& setParamMapsList(vector<MethodMapList::ParamMapsList> && paramMapsList) { DARABONBA_PTR_SET_RVALUE(paramMapsList_, paramMapsList) };


      // passThroughAllHeaders Field Functions 
      bool hasPassThroughAllHeaders() const { return this->passThroughAllHeaders_ != nullptr;};
      void deletePassThroughAllHeaders() { this->passThroughAllHeaders_ = nullptr;};
      inline string getPassThroughAllHeaders() const { DARABONBA_PTR_GET_DEFAULT(passThroughAllHeaders_, "") };
      inline MethodMapList& setPassThroughAllHeaders(string passThroughAllHeaders) { DARABONBA_PTR_SET_VALUE(passThroughAllHeaders_, passThroughAllHeaders) };


      // passThroughList Field Functions 
      bool hasPassThroughList() const { return this->passThroughList_ != nullptr;};
      void deletePassThroughList() { this->passThroughList_ = nullptr;};
      inline const vector<string> & getPassThroughList() const { DARABONBA_PTR_GET_CONST(passThroughList_, vector<string>) };
      inline vector<string> getPassThroughList() { DARABONBA_PTR_GET(passThroughList_, vector<string>) };
      inline MethodMapList& setPassThroughList(const vector<string> & passThroughList) { DARABONBA_PTR_SET_VALUE(passThroughList_, passThroughList) };
      inline MethodMapList& setPassThroughList(vector<string> && passThroughList) { DARABONBA_PTR_SET_RVALUE(passThroughList_, passThroughList) };


    protected:
      // The Dubbo method name.
      shared_ptr<string> dubboMethodName_ {};
      // The HTTP method. Valid values: ALL_GET. ALL_POST. ALL_PUT. ALL_DELETE. ALL_PATCH.
      shared_ptr<string> httpMethod_ {};
      // The method matching path.
      shared_ptr<string> methodPath_ {};
      // The parameter mapping list.
      shared_ptr<vector<MethodMapList::ParamMapsList>> paramMapsList_ {};
      // The header pass-through type. Valid values: PASS_ALL: passes through all headers. PASS_NOT: does not pass through any headers. PASS_ASSIGN: passes through specified headers.
      shared_ptr<string> passThroughAllHeaders_ {};
      // The list of specified pass-through headers.
      shared_ptr<vector<string>> passThroughList_ {};
    };

    virtual bool empty() const override { return this->dubboServiceGroup_ == nullptr
        && this->dubboServiceName_ == nullptr && this->dubboServiceVersion_ == nullptr && this->methodMapList_ == nullptr; };
    // dubboServiceGroup Field Functions 
    bool hasDubboServiceGroup() const { return this->dubboServiceGroup_ != nullptr;};
    void deleteDubboServiceGroup() { this->dubboServiceGroup_ = nullptr;};
    inline string getDubboServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceGroup_, "") };
    inline HttpDubboTranscoder& setDubboServiceGroup(string dubboServiceGroup) { DARABONBA_PTR_SET_VALUE(dubboServiceGroup_, dubboServiceGroup) };


    // dubboServiceName Field Functions 
    bool hasDubboServiceName() const { return this->dubboServiceName_ != nullptr;};
    void deleteDubboServiceName() { this->dubboServiceName_ = nullptr;};
    inline string getDubboServiceName() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceName_, "") };
    inline HttpDubboTranscoder& setDubboServiceName(string dubboServiceName) { DARABONBA_PTR_SET_VALUE(dubboServiceName_, dubboServiceName) };


    // dubboServiceVersion Field Functions 
    bool hasDubboServiceVersion() const { return this->dubboServiceVersion_ != nullptr;};
    void deleteDubboServiceVersion() { this->dubboServiceVersion_ = nullptr;};
    inline string getDubboServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceVersion_, "") };
    inline HttpDubboTranscoder& setDubboServiceVersion(string dubboServiceVersion) { DARABONBA_PTR_SET_VALUE(dubboServiceVersion_, dubboServiceVersion) };


    // methodMapList Field Functions 
    bool hasMethodMapList() const { return this->methodMapList_ != nullptr;};
    void deleteMethodMapList() { this->methodMapList_ = nullptr;};
    inline const vector<HttpDubboTranscoder::MethodMapList> & getMethodMapList() const { DARABONBA_PTR_GET_CONST(methodMapList_, vector<HttpDubboTranscoder::MethodMapList>) };
    inline vector<HttpDubboTranscoder::MethodMapList> getMethodMapList() { DARABONBA_PTR_GET(methodMapList_, vector<HttpDubboTranscoder::MethodMapList>) };
    inline HttpDubboTranscoder& setMethodMapList(const vector<HttpDubboTranscoder::MethodMapList> & methodMapList) { DARABONBA_PTR_SET_VALUE(methodMapList_, methodMapList) };
    inline HttpDubboTranscoder& setMethodMapList(vector<HttpDubboTranscoder::MethodMapList> && methodMapList) { DARABONBA_PTR_SET_RVALUE(methodMapList_, methodMapList) };


  protected:
    // The Dubbo service group.
    shared_ptr<string> dubboServiceGroup_ {};
    // The Dubbo service name.
    shared_ptr<string> dubboServiceName_ {};
    // The Dubbo service version.
    shared_ptr<string> dubboServiceVersion_ {};
    // The method mapping list.
    shared_ptr<vector<HttpDubboTranscoder::MethodMapList>> methodMapList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
