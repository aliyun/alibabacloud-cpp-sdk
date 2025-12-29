// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetRequest() = default ;
    UpdateDatasetRequest(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest(UpdateDatasetRequest &&) = default ;
    UpdateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequest() = default ;
    UpdateDatasetRequest& operator=(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest& operator=(UpdateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatasetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SearchSourceConfigs, searchSourceConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SearchSourceConfigs, searchSourceConfigs_);
      };
      DatasetConfig() = default ;
      DatasetConfig(const DatasetConfig &) = default ;
      DatasetConfig(DatasetConfig &&) = default ;
      DatasetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetConfig() = default ;
      DatasetConfig& operator=(const DatasetConfig &) = default ;
      DatasetConfig& operator=(DatasetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchSourceConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchSourceConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(DemoQuery, demoQuery_);
          DARABONBA_PTR_TO_JSON(SearchSourceRequestConfig, searchSourceRequestConfig_);
          DARABONBA_PTR_TO_JSON(SearchSourceResponseConfig, searchSourceResponseConfig_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, SearchSourceConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(DemoQuery, demoQuery_);
          DARABONBA_PTR_FROM_JSON(SearchSourceRequestConfig, searchSourceRequestConfig_);
          DARABONBA_PTR_FROM_JSON(SearchSourceResponseConfig, searchSourceResponseConfig_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        SearchSourceConfigs() = default ;
        SearchSourceConfigs(const SearchSourceConfigs &) = default ;
        SearchSourceConfigs(SearchSourceConfigs &&) = default ;
        SearchSourceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchSourceConfigs() = default ;
        SearchSourceConfigs& operator=(const SearchSourceConfigs &) = default ;
        SearchSourceConfigs& operator=(SearchSourceConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SearchSourceResponseConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchSourceResponseConfig& obj) { 
            DARABONBA_PTR_TO_JSON(JqNodes, jqNodes_);
          };
          friend void from_json(const Darabonba::Json& j, SearchSourceResponseConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(JqNodes, jqNodes_);
          };
          SearchSourceResponseConfig() = default ;
          SearchSourceResponseConfig(const SearchSourceResponseConfig &) = default ;
          SearchSourceResponseConfig(SearchSourceResponseConfig &&) = default ;
          SearchSourceResponseConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchSourceResponseConfig() = default ;
          SearchSourceResponseConfig& operator=(const SearchSourceResponseConfig &) = default ;
          SearchSourceResponseConfig& operator=(SearchSourceResponseConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class JqNodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const JqNodes& obj) { 
              DARABONBA_PTR_TO_JSON(JqNodes, jqNodes_);
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Path, path_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, JqNodes& obj) { 
              DARABONBA_PTR_FROM_JSON(JqNodes, jqNodes_);
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Path, path_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            JqNodes() = default ;
            JqNodes(const JqNodes &) = default ;
            JqNodes(JqNodes &&) = default ;
            JqNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~JqNodes() = default ;
            JqNodes& operator=(const JqNodes &) = default ;
            JqNodes& operator=(JqNodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class JqNodesItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const JqNodesItem& obj) { 
                DARABONBA_PTR_TO_JSON(JqNodes, jqNodes_);
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Path, path_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, JqNodesItem& obj) { 
                DARABONBA_PTR_FROM_JSON(JqNodes, jqNodes_);
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Path, path_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              JqNodesItem() = default ;
              JqNodesItem(const JqNodesItem &) = default ;
              JqNodesItem(JqNodesItem &&) = default ;
              JqNodesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~JqNodesItem() = default ;
              JqNodesItem& operator=(const JqNodesItem &) = default ;
              JqNodesItem& operator=(JqNodesItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class JqNodes : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const JqNodes& obj) { 
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Path, path_);
                  DARABONBA_PTR_TO_JSON(Type, type_);
                };
                friend void from_json(const Darabonba::Json& j, JqNodes& obj) { 
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Path, path_);
                  DARABONBA_PTR_FROM_JSON(Type, type_);
                };
                JqNodes() = default ;
                JqNodes(const JqNodes &) = default ;
                JqNodes(JqNodes &&) = default ;
                JqNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~JqNodes() = default ;
                JqNodes& operator=(const JqNodes &) = default ;
                JqNodes& operator=(JqNodes &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->key_ == nullptr
        && this->path_ == nullptr && this->type_ == nullptr; };
                // key Field Functions 
                bool hasKey() const { return this->key_ != nullptr;};
                void deleteKey() { this->key_ = nullptr;};
                inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                inline JqNodes& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // path Field Functions 
                bool hasPath() const { return this->path_ != nullptr;};
                void deletePath() { this->path_ = nullptr;};
                inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
                inline JqNodes& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


                // type Field Functions 
                bool hasType() const { return this->type_ != nullptr;};
                void deleteType() { this->type_ = nullptr;};
                inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                inline JqNodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              protected:
                shared_ptr<string> key_ {};
                shared_ptr<string> path_ {};
                shared_ptr<string> type_ {};
              };

              virtual bool empty() const override { return this->jqNodes_ == nullptr
        && this->key_ == nullptr && this->path_ == nullptr && this->type_ == nullptr; };
              // jqNodes Field Functions 
              bool hasJqNodes() const { return this->jqNodes_ != nullptr;};
              void deleteJqNodes() { this->jqNodes_ = nullptr;};
              inline const vector<JqNodesItem::JqNodes> & getJqNodes() const { DARABONBA_PTR_GET_CONST(jqNodes_, vector<JqNodesItem::JqNodes>) };
              inline vector<JqNodesItem::JqNodes> getJqNodes() { DARABONBA_PTR_GET(jqNodes_, vector<JqNodesItem::JqNodes>) };
              inline JqNodesItem& setJqNodes(const vector<JqNodesItem::JqNodes> & jqNodes) { DARABONBA_PTR_SET_VALUE(jqNodes_, jqNodes) };
              inline JqNodesItem& setJqNodes(vector<JqNodesItem::JqNodes> && jqNodes) { DARABONBA_PTR_SET_RVALUE(jqNodes_, jqNodes) };


              // key Field Functions 
              bool hasKey() const { return this->key_ != nullptr;};
              void deleteKey() { this->key_ = nullptr;};
              inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
              inline JqNodesItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // path Field Functions 
              bool hasPath() const { return this->path_ != nullptr;};
              void deletePath() { this->path_ = nullptr;};
              inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
              inline JqNodesItem& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline JqNodesItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<JqNodesItem::JqNodes>> jqNodes_ {};
              shared_ptr<string> key_ {};
              shared_ptr<string> path_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->jqNodes_ == nullptr
        && this->key_ == nullptr && this->path_ == nullptr && this->type_ == nullptr; };
            // jqNodes Field Functions 
            bool hasJqNodes() const { return this->jqNodes_ != nullptr;};
            void deleteJqNodes() { this->jqNodes_ = nullptr;};
            inline const vector<JqNodes::JqNodesItem> & getJqNodes() const { DARABONBA_PTR_GET_CONST(jqNodes_, vector<JqNodes::JqNodesItem>) };
            inline vector<JqNodes::JqNodesItem> getJqNodes() { DARABONBA_PTR_GET(jqNodes_, vector<JqNodes::JqNodesItem>) };
            inline JqNodes& setJqNodes(const vector<JqNodes::JqNodesItem> & jqNodes) { DARABONBA_PTR_SET_VALUE(jqNodes_, jqNodes) };
            inline JqNodes& setJqNodes(vector<JqNodes::JqNodesItem> && jqNodes) { DARABONBA_PTR_SET_RVALUE(jqNodes_, jqNodes) };


            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline JqNodes& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // path Field Functions 
            bool hasPath() const { return this->path_ != nullptr;};
            void deletePath() { this->path_ = nullptr;};
            inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
            inline JqNodes& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline JqNodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<vector<JqNodes::JqNodesItem>> jqNodes_ {};
            shared_ptr<string> key_ {};
            shared_ptr<string> path_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->jqNodes_ == nullptr; };
          // jqNodes Field Functions 
          bool hasJqNodes() const { return this->jqNodes_ != nullptr;};
          void deleteJqNodes() { this->jqNodes_ = nullptr;};
          inline const vector<SearchSourceResponseConfig::JqNodes> & getJqNodes() const { DARABONBA_PTR_GET_CONST(jqNodes_, vector<SearchSourceResponseConfig::JqNodes>) };
          inline vector<SearchSourceResponseConfig::JqNodes> getJqNodes() { DARABONBA_PTR_GET(jqNodes_, vector<SearchSourceResponseConfig::JqNodes>) };
          inline SearchSourceResponseConfig& setJqNodes(const vector<SearchSourceResponseConfig::JqNodes> & jqNodes) { DARABONBA_PTR_SET_VALUE(jqNodes_, jqNodes) };
          inline SearchSourceResponseConfig& setJqNodes(vector<SearchSourceResponseConfig::JqNodes> && jqNodes) { DARABONBA_PTR_SET_RVALUE(jqNodes_, jqNodes) };


        protected:
          shared_ptr<vector<SearchSourceResponseConfig::JqNodes>> jqNodes_ {};
        };

        class SearchSourceRequestConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchSourceRequestConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Body, body_);
            DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
            DARABONBA_PTR_TO_JSON(Headers, headers_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(Params, params_);
            DARABONBA_PTR_TO_JSON(PathParamsEnable, pathParamsEnable_);
            DARABONBA_PTR_TO_JSON(SocketTimeout, socketTimeout_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, SearchSourceRequestConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Body, body_);
            DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
            DARABONBA_PTR_FROM_JSON(Headers, headers_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(Params, params_);
            DARABONBA_PTR_FROM_JSON(PathParamsEnable, pathParamsEnable_);
            DARABONBA_PTR_FROM_JSON(SocketTimeout, socketTimeout_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          SearchSourceRequestConfig() = default ;
          SearchSourceRequestConfig(const SearchSourceRequestConfig &) = default ;
          SearchSourceRequestConfig(SearchSourceRequestConfig &&) = default ;
          SearchSourceRequestConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchSourceRequestConfig() = default ;
          SearchSourceRequestConfig& operator=(const SearchSourceRequestConfig &) = default ;
          SearchSourceRequestConfig& operator=(SearchSourceRequestConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Params : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Params& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
              DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
              DARABONBA_PTR_TO_JSON(ValueType, valueType_);
            };
            friend void from_json(const Darabonba::Json& j, Params& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
              DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
              DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
            };
            Params() = default ;
            Params(const Params &) = default ;
            Params(Params &&) = default ;
            Params(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Params() = default ;
            Params& operator=(const Params &) = default ;
            Params& operator=(Params &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr && this->valueFormat_ == nullptr && this->valueType_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Params& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            // valueFormat Field Functions 
            bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
            void deleteValueFormat() { this->valueFormat_ = nullptr;};
            inline string getValueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
            inline Params& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


            // valueType Field Functions 
            bool hasValueType() const { return this->valueType_ != nullptr;};
            void deleteValueType() { this->valueType_ = nullptr;};
            inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
            inline Params& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> value_ {};
            shared_ptr<string> valueFormat_ {};
            shared_ptr<string> valueType_ {};
          };

          class Headers : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Headers& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
              DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
              DARABONBA_PTR_TO_JSON(ValueType, valueType_);
            };
            friend void from_json(const Darabonba::Json& j, Headers& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
              DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
              DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
            };
            Headers() = default ;
            Headers(const Headers &) = default ;
            Headers(Headers &&) = default ;
            Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Headers() = default ;
            Headers& operator=(const Headers &) = default ;
            Headers& operator=(Headers &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr && this->valueFormat_ == nullptr && this->valueType_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Headers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Headers& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            // valueFormat Field Functions 
            bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
            void deleteValueFormat() { this->valueFormat_ = nullptr;};
            inline string getValueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
            inline Headers& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


            // valueType Field Functions 
            bool hasValueType() const { return this->valueType_ != nullptr;};
            void deleteValueType() { this->valueType_ = nullptr;};
            inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
            inline Headers& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> value_ {};
            shared_ptr<string> valueFormat_ {};
            shared_ptr<string> valueType_ {};
          };

          virtual bool empty() const override { return this->body_ == nullptr
        && this->connectTimeout_ == nullptr && this->headers_ == nullptr && this->method_ == nullptr && this->params_ == nullptr && this->pathParamsEnable_ == nullptr
        && this->socketTimeout_ == nullptr && this->url_ == nullptr; };
          // body Field Functions 
          bool hasBody() const { return this->body_ != nullptr;};
          void deleteBody() { this->body_ = nullptr;};
          inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
          inline SearchSourceRequestConfig& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


          // connectTimeout Field Functions 
          bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
          void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
          inline int32_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
          inline SearchSourceRequestConfig& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


          // headers Field Functions 
          bool hasHeaders() const { return this->headers_ != nullptr;};
          void deleteHeaders() { this->headers_ = nullptr;};
          inline const vector<SearchSourceRequestConfig::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<SearchSourceRequestConfig::Headers>) };
          inline vector<SearchSourceRequestConfig::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<SearchSourceRequestConfig::Headers>) };
          inline SearchSourceRequestConfig& setHeaders(const vector<SearchSourceRequestConfig::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
          inline SearchSourceRequestConfig& setHeaders(vector<SearchSourceRequestConfig::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline SearchSourceRequestConfig& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // params Field Functions 
          bool hasParams() const { return this->params_ != nullptr;};
          void deleteParams() { this->params_ = nullptr;};
          inline const vector<SearchSourceRequestConfig::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<SearchSourceRequestConfig::Params>) };
          inline vector<SearchSourceRequestConfig::Params> getParams() { DARABONBA_PTR_GET(params_, vector<SearchSourceRequestConfig::Params>) };
          inline SearchSourceRequestConfig& setParams(const vector<SearchSourceRequestConfig::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
          inline SearchSourceRequestConfig& setParams(vector<SearchSourceRequestConfig::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


          // pathParamsEnable Field Functions 
          bool hasPathParamsEnable() const { return this->pathParamsEnable_ != nullptr;};
          void deletePathParamsEnable() { this->pathParamsEnable_ = nullptr;};
          inline bool getPathParamsEnable() const { DARABONBA_PTR_GET_DEFAULT(pathParamsEnable_, false) };
          inline SearchSourceRequestConfig& setPathParamsEnable(bool pathParamsEnable) { DARABONBA_PTR_SET_VALUE(pathParamsEnable_, pathParamsEnable) };


          // socketTimeout Field Functions 
          bool hasSocketTimeout() const { return this->socketTimeout_ != nullptr;};
          void deleteSocketTimeout() { this->socketTimeout_ = nullptr;};
          inline int32_t getSocketTimeout() const { DARABONBA_PTR_GET_DEFAULT(socketTimeout_, 0) };
          inline SearchSourceRequestConfig& setSocketTimeout(int32_t socketTimeout) { DARABONBA_PTR_SET_VALUE(socketTimeout_, socketTimeout) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline SearchSourceRequestConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> body_ {};
          shared_ptr<int32_t> connectTimeout_ {};
          shared_ptr<vector<SearchSourceRequestConfig::Headers>> headers_ {};
          shared_ptr<string> method_ {};
          shared_ptr<vector<SearchSourceRequestConfig::Params>> params_ {};
          shared_ptr<bool> pathParamsEnable_ {};
          shared_ptr<int32_t> socketTimeout_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->demoQuery_ == nullptr
        && this->searchSourceRequestConfig_ == nullptr && this->searchSourceResponseConfig_ == nullptr && this->size_ == nullptr; };
        // demoQuery Field Functions 
        bool hasDemoQuery() const { return this->demoQuery_ != nullptr;};
        void deleteDemoQuery() { this->demoQuery_ = nullptr;};
        inline string getDemoQuery() const { DARABONBA_PTR_GET_DEFAULT(demoQuery_, "") };
        inline SearchSourceConfigs& setDemoQuery(string demoQuery) { DARABONBA_PTR_SET_VALUE(demoQuery_, demoQuery) };


        // searchSourceRequestConfig Field Functions 
        bool hasSearchSourceRequestConfig() const { return this->searchSourceRequestConfig_ != nullptr;};
        void deleteSearchSourceRequestConfig() { this->searchSourceRequestConfig_ = nullptr;};
        inline const SearchSourceConfigs::SearchSourceRequestConfig & getSearchSourceRequestConfig() const { DARABONBA_PTR_GET_CONST(searchSourceRequestConfig_, SearchSourceConfigs::SearchSourceRequestConfig) };
        inline SearchSourceConfigs::SearchSourceRequestConfig getSearchSourceRequestConfig() { DARABONBA_PTR_GET(searchSourceRequestConfig_, SearchSourceConfigs::SearchSourceRequestConfig) };
        inline SearchSourceConfigs& setSearchSourceRequestConfig(const SearchSourceConfigs::SearchSourceRequestConfig & searchSourceRequestConfig) { DARABONBA_PTR_SET_VALUE(searchSourceRequestConfig_, searchSourceRequestConfig) };
        inline SearchSourceConfigs& setSearchSourceRequestConfig(SearchSourceConfigs::SearchSourceRequestConfig && searchSourceRequestConfig) { DARABONBA_PTR_SET_RVALUE(searchSourceRequestConfig_, searchSourceRequestConfig) };


        // searchSourceResponseConfig Field Functions 
        bool hasSearchSourceResponseConfig() const { return this->searchSourceResponseConfig_ != nullptr;};
        void deleteSearchSourceResponseConfig() { this->searchSourceResponseConfig_ = nullptr;};
        inline const SearchSourceConfigs::SearchSourceResponseConfig & getSearchSourceResponseConfig() const { DARABONBA_PTR_GET_CONST(searchSourceResponseConfig_, SearchSourceConfigs::SearchSourceResponseConfig) };
        inline SearchSourceConfigs::SearchSourceResponseConfig getSearchSourceResponseConfig() { DARABONBA_PTR_GET(searchSourceResponseConfig_, SearchSourceConfigs::SearchSourceResponseConfig) };
        inline SearchSourceConfigs& setSearchSourceResponseConfig(const SearchSourceConfigs::SearchSourceResponseConfig & searchSourceResponseConfig) { DARABONBA_PTR_SET_VALUE(searchSourceResponseConfig_, searchSourceResponseConfig) };
        inline SearchSourceConfigs& setSearchSourceResponseConfig(SearchSourceConfigs::SearchSourceResponseConfig && searchSourceResponseConfig) { DARABONBA_PTR_SET_RVALUE(searchSourceResponseConfig_, searchSourceResponseConfig) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline SearchSourceConfigs& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        shared_ptr<string> demoQuery_ {};
        shared_ptr<SearchSourceConfigs::SearchSourceRequestConfig> searchSourceRequestConfig_ {};
        shared_ptr<SearchSourceConfigs::SearchSourceResponseConfig> searchSourceResponseConfig_ {};
        shared_ptr<int32_t> size_ {};
      };

      virtual bool empty() const override { return this->searchSourceConfigs_ == nullptr; };
      // searchSourceConfigs Field Functions 
      bool hasSearchSourceConfigs() const { return this->searchSourceConfigs_ != nullptr;};
      void deleteSearchSourceConfigs() { this->searchSourceConfigs_ = nullptr;};
      inline const vector<DatasetConfig::SearchSourceConfigs> & getSearchSourceConfigs() const { DARABONBA_PTR_GET_CONST(searchSourceConfigs_, vector<DatasetConfig::SearchSourceConfigs>) };
      inline vector<DatasetConfig::SearchSourceConfigs> getSearchSourceConfigs() { DARABONBA_PTR_GET(searchSourceConfigs_, vector<DatasetConfig::SearchSourceConfigs>) };
      inline DatasetConfig& setSearchSourceConfigs(const vector<DatasetConfig::SearchSourceConfigs> & searchSourceConfigs) { DARABONBA_PTR_SET_VALUE(searchSourceConfigs_, searchSourceConfigs) };
      inline DatasetConfig& setSearchSourceConfigs(vector<DatasetConfig::SearchSourceConfigs> && searchSourceConfigs) { DARABONBA_PTR_SET_RVALUE(searchSourceConfigs_, searchSourceConfigs) };


    protected:
      shared_ptr<vector<DatasetConfig::SearchSourceConfigs>> searchSourceConfigs_ {};
    };

    virtual bool empty() const override { return this->datasetConfig_ == nullptr
        && this->datasetDescription_ == nullptr && this->datasetId_ == nullptr && this->searchDatasetEnable_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetConfig Field Functions 
    bool hasDatasetConfig() const { return this->datasetConfig_ != nullptr;};
    void deleteDatasetConfig() { this->datasetConfig_ = nullptr;};
    inline const UpdateDatasetRequest::DatasetConfig & getDatasetConfig() const { DARABONBA_PTR_GET_CONST(datasetConfig_, UpdateDatasetRequest::DatasetConfig) };
    inline UpdateDatasetRequest::DatasetConfig getDatasetConfig() { DARABONBA_PTR_GET(datasetConfig_, UpdateDatasetRequest::DatasetConfig) };
    inline UpdateDatasetRequest& setDatasetConfig(const UpdateDatasetRequest::DatasetConfig & datasetConfig) { DARABONBA_PTR_SET_VALUE(datasetConfig_, datasetConfig) };
    inline UpdateDatasetRequest& setDatasetConfig(UpdateDatasetRequest::DatasetConfig && datasetConfig) { DARABONBA_PTR_SET_RVALUE(datasetConfig_, datasetConfig) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline UpdateDatasetRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline UpdateDatasetRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t getSearchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline UpdateDatasetRequest& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<UpdateDatasetRequest::DatasetConfig> datasetConfig_ {};
    shared_ptr<string> datasetDescription_ {};
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<int32_t> searchDatasetEnable_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
