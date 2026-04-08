// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISTATISTICSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISTATISTICSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AiStatisticsPathField.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiStatisticsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiStatisticsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(logRequestContent, logRequestContent_);
      DARABONBA_PTR_TO_JSON(logResponseContent, logResponseContent_);
      DARABONBA_PTR_TO_JSON(pathFieldConfigs, pathFieldConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, AiStatisticsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(logRequestContent, logRequestContent_);
      DARABONBA_PTR_FROM_JSON(logResponseContent, logResponseContent_);
      DARABONBA_PTR_FROM_JSON(pathFieldConfigs, pathFieldConfigs_);
    };
    AiStatisticsConfig() = default ;
    AiStatisticsConfig(const AiStatisticsConfig &) = default ;
    AiStatisticsConfig(AiStatisticsConfig &&) = default ;
    AiStatisticsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiStatisticsConfig() = default ;
    AiStatisticsConfig& operator=(const AiStatisticsConfig &) = default ;
    AiStatisticsConfig& operator=(AiStatisticsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PathFieldConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PathFieldConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(fieldPaths, fieldPaths_);
        DARABONBA_PTR_TO_JSON(path, path_);
      };
      friend void from_json(const Darabonba::Json& j, PathFieldConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldPaths, fieldPaths_);
        DARABONBA_PTR_FROM_JSON(path, path_);
      };
      PathFieldConfigs() = default ;
      PathFieldConfigs(const PathFieldConfigs &) = default ;
      PathFieldConfigs(PathFieldConfigs &&) = default ;
      PathFieldConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PathFieldConfigs() = default ;
      PathFieldConfigs& operator=(const PathFieldConfigs &) = default ;
      PathFieldConfigs& operator=(PathFieldConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldPaths_ == nullptr
        && this->path_ == nullptr; };
      // fieldPaths Field Functions 
      bool hasFieldPaths() const { return this->fieldPaths_ != nullptr;};
      void deleteFieldPaths() { this->fieldPaths_ = nullptr;};
      inline const map<string, AiStatisticsPathField> & getFieldPaths() const { DARABONBA_PTR_GET_CONST(fieldPaths_, map<string, AiStatisticsPathField>) };
      inline map<string, AiStatisticsPathField> getFieldPaths() { DARABONBA_PTR_GET(fieldPaths_, map<string, AiStatisticsPathField>) };
      inline PathFieldConfigs& setFieldPaths(const map<string, AiStatisticsPathField> & fieldPaths) { DARABONBA_PTR_SET_VALUE(fieldPaths_, fieldPaths) };
      inline PathFieldConfigs& setFieldPaths(map<string, AiStatisticsPathField> && fieldPaths) { DARABONBA_PTR_SET_RVALUE(fieldPaths_, fieldPaths) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline PathFieldConfigs& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<map<string, AiStatisticsPathField>> fieldPaths_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->logRequestContent_ == nullptr
        && this->logResponseContent_ == nullptr && this->pathFieldConfigs_ == nullptr; };
    // logRequestContent Field Functions 
    bool hasLogRequestContent() const { return this->logRequestContent_ != nullptr;};
    void deleteLogRequestContent() { this->logRequestContent_ = nullptr;};
    inline bool getLogRequestContent() const { DARABONBA_PTR_GET_DEFAULT(logRequestContent_, false) };
    inline AiStatisticsConfig& setLogRequestContent(bool logRequestContent) { DARABONBA_PTR_SET_VALUE(logRequestContent_, logRequestContent) };


    // logResponseContent Field Functions 
    bool hasLogResponseContent() const { return this->logResponseContent_ != nullptr;};
    void deleteLogResponseContent() { this->logResponseContent_ = nullptr;};
    inline bool getLogResponseContent() const { DARABONBA_PTR_GET_DEFAULT(logResponseContent_, false) };
    inline AiStatisticsConfig& setLogResponseContent(bool logResponseContent) { DARABONBA_PTR_SET_VALUE(logResponseContent_, logResponseContent) };


    // pathFieldConfigs Field Functions 
    bool hasPathFieldConfigs() const { return this->pathFieldConfigs_ != nullptr;};
    void deletePathFieldConfigs() { this->pathFieldConfigs_ = nullptr;};
    inline const vector<AiStatisticsConfig::PathFieldConfigs> & getPathFieldConfigs() const { DARABONBA_PTR_GET_CONST(pathFieldConfigs_, vector<AiStatisticsConfig::PathFieldConfigs>) };
    inline vector<AiStatisticsConfig::PathFieldConfigs> getPathFieldConfigs() { DARABONBA_PTR_GET(pathFieldConfigs_, vector<AiStatisticsConfig::PathFieldConfigs>) };
    inline AiStatisticsConfig& setPathFieldConfigs(const vector<AiStatisticsConfig::PathFieldConfigs> & pathFieldConfigs) { DARABONBA_PTR_SET_VALUE(pathFieldConfigs_, pathFieldConfigs) };
    inline AiStatisticsConfig& setPathFieldConfigs(vector<AiStatisticsConfig::PathFieldConfigs> && pathFieldConfigs) { DARABONBA_PTR_SET_RVALUE(pathFieldConfigs_, pathFieldConfigs) };


  protected:
    shared_ptr<bool> logRequestContent_ {};
    shared_ptr<bool> logResponseContent_ {};
    shared_ptr<vector<AiStatisticsConfig::PathFieldConfigs>> pathFieldConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
