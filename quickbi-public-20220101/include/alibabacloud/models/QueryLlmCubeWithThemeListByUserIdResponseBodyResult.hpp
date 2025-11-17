// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLLMCUBEWITHTHEMELISTBYUSERIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYLLMCUBEWITHTHEMELISTBYUSERIDRESPONSEBODYRESULT_HPP_
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
  class QueryLlmCubeWithThemeListByUserIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLlmCubeWithThemeListByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CubeIds, cubeIds_);
      DARABONBA_PTR_TO_JSON(ThemeIds, themeIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLlmCubeWithThemeListByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeIds, cubeIds_);
      DARABONBA_PTR_FROM_JSON(ThemeIds, themeIds_);
    };
    QueryLlmCubeWithThemeListByUserIdResponseBodyResult() = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBodyResult(const QueryLlmCubeWithThemeListByUserIdResponseBodyResult &) = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBodyResult(QueryLlmCubeWithThemeListByUserIdResponseBodyResult &&) = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLlmCubeWithThemeListByUserIdResponseBodyResult() = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBodyResult& operator=(const QueryLlmCubeWithThemeListByUserIdResponseBodyResult &) = default ;
    QueryLlmCubeWithThemeListByUserIdResponseBodyResult& operator=(QueryLlmCubeWithThemeListByUserIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeIds_ == nullptr
        && return this->themeIds_ == nullptr; };
    // cubeIds Field Functions 
    bool hasCubeIds() const { return this->cubeIds_ != nullptr;};
    void deleteCubeIds() { this->cubeIds_ = nullptr;};
    inline const map<string, string> & cubeIds() const { DARABONBA_PTR_GET_CONST(cubeIds_, map<string, string>) };
    inline map<string, string> cubeIds() { DARABONBA_PTR_GET(cubeIds_, map<string, string>) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBodyResult& setCubeIds(const map<string, string> & cubeIds) { DARABONBA_PTR_SET_VALUE(cubeIds_, cubeIds) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBodyResult& setCubeIds(map<string, string> && cubeIds) { DARABONBA_PTR_SET_RVALUE(cubeIds_, cubeIds) };


    // themeIds Field Functions 
    bool hasThemeIds() const { return this->themeIds_ != nullptr;};
    void deleteThemeIds() { this->themeIds_ = nullptr;};
    inline const map<string, string> & themeIds() const { DARABONBA_PTR_GET_CONST(themeIds_, map<string, string>) };
    inline map<string, string> themeIds() { DARABONBA_PTR_GET(themeIds_, map<string, string>) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBodyResult& setThemeIds(const map<string, string> & themeIds) { DARABONBA_PTR_SET_VALUE(themeIds_, themeIds) };
    inline QueryLlmCubeWithThemeListByUserIdResponseBodyResult& setThemeIds(map<string, string> && themeIds) { DARABONBA_PTR_SET_RVALUE(themeIds_, themeIds) };


  protected:
    // Dataset map.
    // 
    // - key - Dataset ID
    // - value - Dataset name
    std::shared_ptr<map<string, string>> cubeIds_ = nullptr;
    // Analysis theme map.
    // - key - Analysis theme ID 
    // - value - Analysis theme name
    std::shared_ptr<map<string, string>> themeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
