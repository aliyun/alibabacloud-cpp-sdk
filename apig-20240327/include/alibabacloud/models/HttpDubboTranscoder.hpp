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
      DARABONBA_PTR_TO_JSON(mothedMapList, mothedMapList_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDubboTranscoder& obj) { 
      DARABONBA_PTR_FROM_JSON(dubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_FROM_JSON(dubboServiceName, dubboServiceName_);
      DARABONBA_PTR_FROM_JSON(dubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_FROM_JSON(mothedMapList, mothedMapList_);
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
    class MothedMapList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MothedMapList& obj) { 
        DARABONBA_PTR_TO_JSON(dubboMothedName, dubboMothedName_);
        DARABONBA_PTR_TO_JSON(httpMothed, httpMothed_);
        DARABONBA_PTR_TO_JSON(mothedpath, mothedpath_);
        DARABONBA_PTR_TO_JSON(paramMapsList, paramMapsList_);
        DARABONBA_PTR_TO_JSON(passThroughAllHeaders, passThroughAllHeaders_);
        DARABONBA_PTR_TO_JSON(passThroughList, passThroughList_);
      };
      friend void from_json(const Darabonba::Json& j, MothedMapList& obj) { 
        DARABONBA_PTR_FROM_JSON(dubboMothedName, dubboMothedName_);
        DARABONBA_PTR_FROM_JSON(httpMothed, httpMothed_);
        DARABONBA_PTR_FROM_JSON(mothedpath, mothedpath_);
        DARABONBA_PTR_FROM_JSON(paramMapsList, paramMapsList_);
        DARABONBA_PTR_FROM_JSON(passThroughAllHeaders, passThroughAllHeaders_);
        DARABONBA_PTR_FROM_JSON(passThroughList, passThroughList_);
      };
      MothedMapList() = default ;
      MothedMapList(const MothedMapList &) = default ;
      MothedMapList(MothedMapList &&) = default ;
      MothedMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MothedMapList() = default ;
      MothedMapList& operator=(const MothedMapList &) = default ;
      MothedMapList& operator=(MothedMapList &&) = default ;
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
        shared_ptr<string> extractKey_ {};
        shared_ptr<string> extractKeySpec_ {};
        shared_ptr<string> mappingType_ {};
      };

      virtual bool empty() const override { return this->dubboMothedName_ == nullptr
        && this->httpMothed_ == nullptr && this->mothedpath_ == nullptr && this->paramMapsList_ == nullptr && this->passThroughAllHeaders_ == nullptr && this->passThroughList_ == nullptr; };
      // dubboMothedName Field Functions 
      bool hasDubboMothedName() const { return this->dubboMothedName_ != nullptr;};
      void deleteDubboMothedName() { this->dubboMothedName_ = nullptr;};
      inline string getDubboMothedName() const { DARABONBA_PTR_GET_DEFAULT(dubboMothedName_, "") };
      inline MothedMapList& setDubboMothedName(string dubboMothedName) { DARABONBA_PTR_SET_VALUE(dubboMothedName_, dubboMothedName) };


      // httpMothed Field Functions 
      bool hasHttpMothed() const { return this->httpMothed_ != nullptr;};
      void deleteHttpMothed() { this->httpMothed_ = nullptr;};
      inline string getHttpMothed() const { DARABONBA_PTR_GET_DEFAULT(httpMothed_, "") };
      inline MothedMapList& setHttpMothed(string httpMothed) { DARABONBA_PTR_SET_VALUE(httpMothed_, httpMothed) };


      // mothedpath Field Functions 
      bool hasMothedpath() const { return this->mothedpath_ != nullptr;};
      void deleteMothedpath() { this->mothedpath_ = nullptr;};
      inline string getMothedpath() const { DARABONBA_PTR_GET_DEFAULT(mothedpath_, "") };
      inline MothedMapList& setMothedpath(string mothedpath) { DARABONBA_PTR_SET_VALUE(mothedpath_, mothedpath) };


      // paramMapsList Field Functions 
      bool hasParamMapsList() const { return this->paramMapsList_ != nullptr;};
      void deleteParamMapsList() { this->paramMapsList_ = nullptr;};
      inline const vector<MothedMapList::ParamMapsList> & getParamMapsList() const { DARABONBA_PTR_GET_CONST(paramMapsList_, vector<MothedMapList::ParamMapsList>) };
      inline vector<MothedMapList::ParamMapsList> getParamMapsList() { DARABONBA_PTR_GET(paramMapsList_, vector<MothedMapList::ParamMapsList>) };
      inline MothedMapList& setParamMapsList(const vector<MothedMapList::ParamMapsList> & paramMapsList) { DARABONBA_PTR_SET_VALUE(paramMapsList_, paramMapsList) };
      inline MothedMapList& setParamMapsList(vector<MothedMapList::ParamMapsList> && paramMapsList) { DARABONBA_PTR_SET_RVALUE(paramMapsList_, paramMapsList) };


      // passThroughAllHeaders Field Functions 
      bool hasPassThroughAllHeaders() const { return this->passThroughAllHeaders_ != nullptr;};
      void deletePassThroughAllHeaders() { this->passThroughAllHeaders_ = nullptr;};
      inline string getPassThroughAllHeaders() const { DARABONBA_PTR_GET_DEFAULT(passThroughAllHeaders_, "") };
      inline MothedMapList& setPassThroughAllHeaders(string passThroughAllHeaders) { DARABONBA_PTR_SET_VALUE(passThroughAllHeaders_, passThroughAllHeaders) };


      // passThroughList Field Functions 
      bool hasPassThroughList() const { return this->passThroughList_ != nullptr;};
      void deletePassThroughList() { this->passThroughList_ = nullptr;};
      inline const vector<string> & getPassThroughList() const { DARABONBA_PTR_GET_CONST(passThroughList_, vector<string>) };
      inline vector<string> getPassThroughList() { DARABONBA_PTR_GET(passThroughList_, vector<string>) };
      inline MothedMapList& setPassThroughList(const vector<string> & passThroughList) { DARABONBA_PTR_SET_VALUE(passThroughList_, passThroughList) };
      inline MothedMapList& setPassThroughList(vector<string> && passThroughList) { DARABONBA_PTR_SET_RVALUE(passThroughList_, passThroughList) };


    protected:
      shared_ptr<string> dubboMothedName_ {};
      shared_ptr<string> httpMothed_ {};
      shared_ptr<string> mothedpath_ {};
      shared_ptr<vector<MothedMapList::ParamMapsList>> paramMapsList_ {};
      shared_ptr<string> passThroughAllHeaders_ {};
      shared_ptr<vector<string>> passThroughList_ {};
    };

    virtual bool empty() const override { return this->dubboServiceGroup_ == nullptr
        && this->dubboServiceName_ == nullptr && this->dubboServiceVersion_ == nullptr && this->mothedMapList_ == nullptr; };
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


    // mothedMapList Field Functions 
    bool hasMothedMapList() const { return this->mothedMapList_ != nullptr;};
    void deleteMothedMapList() { this->mothedMapList_ = nullptr;};
    inline const vector<HttpDubboTranscoder::MothedMapList> & getMothedMapList() const { DARABONBA_PTR_GET_CONST(mothedMapList_, vector<HttpDubboTranscoder::MothedMapList>) };
    inline vector<HttpDubboTranscoder::MothedMapList> getMothedMapList() { DARABONBA_PTR_GET(mothedMapList_, vector<HttpDubboTranscoder::MothedMapList>) };
    inline HttpDubboTranscoder& setMothedMapList(const vector<HttpDubboTranscoder::MothedMapList> & mothedMapList) { DARABONBA_PTR_SET_VALUE(mothedMapList_, mothedMapList) };
    inline HttpDubboTranscoder& setMothedMapList(vector<HttpDubboTranscoder::MothedMapList> && mothedMapList) { DARABONBA_PTR_SET_RVALUE(mothedMapList_, mothedMapList) };


  protected:
    shared_ptr<string> dubboServiceGroup_ {};
    shared_ptr<string> dubboServiceName_ {};
    shared_ptr<string> dubboServiceVersion_ {};
    shared_ptr<vector<HttpDubboTranscoder::MothedMapList>> mothedMapList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
