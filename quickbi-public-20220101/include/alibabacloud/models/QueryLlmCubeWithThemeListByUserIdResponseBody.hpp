// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLLMCUBEWITHTHEMELISTBYUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLLMCUBEWITHTHEMELISTBYUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryLlmCubeWithThemeListByUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLlmCubeWithThemeListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLlmCubeWithThemeListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryLlmCubeWithThemeListByUserIdResponseBody() = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBody(const QueryLlmCubeWithThemeListByUserIdResponseBody &) = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBody(QueryLlmCubeWithThemeListByUserIdResponseBody &&) = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLlmCubeWithThemeListByUserIdResponseBody() = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBody& operator=(const QueryLlmCubeWithThemeListByUserIdResponseBody &) = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBody& operator=(QueryLlmCubeWithThemeListByUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CubeIds, cubeIds_);
        DARABONBA_PTR_TO_JSON(ThemeIds, themeIds_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CubeIds, cubeIds_);
        DARABONBA_PTR_FROM_JSON(ThemeIds, themeIds_);
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
      virtual bool empty() const override { return this->cubeIds_ == nullptr
        && this->themeIds_ == nullptr; };
      // cubeIds Field Functions 
      bool hasCubeIds() const { return this->cubeIds_ != nullptr;};
      void deleteCubeIds() { this->cubeIds_ = nullptr;};
      inline const map<string, string> & getCubeIds() const { DARABONBA_PTR_GET_CONST(cubeIds_, map<string, string>) };
      inline map<string, string> getCubeIds() { DARABONBA_PTR_GET(cubeIds_, map<string, string>) };
      inline Result& setCubeIds(const map<string, string> & cubeIds) { DARABONBA_PTR_SET_VALUE(cubeIds_, cubeIds) };
      inline Result& setCubeIds(map<string, string> && cubeIds) { DARABONBA_PTR_SET_RVALUE(cubeIds_, cubeIds) };


      // themeIds Field Functions 
      bool hasThemeIds() const { return this->themeIds_ != nullptr;};
      void deleteThemeIds() { this->themeIds_ = nullptr;};
      inline const map<string, string> & getThemeIds() const { DARABONBA_PTR_GET_CONST(themeIds_, map<string, string>) };
      inline map<string, string> getThemeIds() { DARABONBA_PTR_GET(themeIds_, map<string, string>) };
      inline Result& setThemeIds(const map<string, string> & themeIds) { DARABONBA_PTR_SET_VALUE(themeIds_, themeIds) };
      inline Result& setThemeIds(map<string, string> && themeIds) { DARABONBA_PTR_SET_RVALUE(themeIds_, themeIds) };


    protected:
      // Dataset map.
      // 
      // - key - Dataset ID
      // - value - Dataset name
      shared_ptr<map<string, string>> cubeIds_ {};
      // Analysis theme map.
      // - key - Analysis theme ID 
      // - value - Analysis theme name
      shared_ptr<map<string, string>> themeIds_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLlmCubeWithThemeListByUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryLlmCubeWithThemeListByUserIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryLlmCubeWithThemeListByUserIdResponseBody::Result) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryLlmCubeWithThemeListByUserIdResponseBody::Result) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBody& setResult(const QueryLlmCubeWithThemeListByUserIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBody& setResult(QueryLlmCubeWithThemeListByUserIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of datasets and analysis themes.
    shared_ptr<QueryLlmCubeWithThemeListByUserIdResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful
    // - false: The request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
