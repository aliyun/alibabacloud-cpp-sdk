// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksBloodRelationshipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksBloodRelationshipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksBloodRelationshipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryWorksBloodRelationshipResponseBody() = default ;
    QueryWorksBloodRelationshipResponseBody(const QueryWorksBloodRelationshipResponseBody &) = default ;
    QueryWorksBloodRelationshipResponseBody(QueryWorksBloodRelationshipResponseBody &&) = default ;
    QueryWorksBloodRelationshipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksBloodRelationshipResponseBody() = default ;
    QueryWorksBloodRelationshipResponseBody& operator=(const QueryWorksBloodRelationshipResponseBody &) = default ;
    QueryWorksBloodRelationshipResponseBody& operator=(QueryWorksBloodRelationshipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
        DARABONBA_PTR_TO_JSON(ComponentTypeCnName, componentTypeCnName_);
        DARABONBA_PTR_TO_JSON(ComponentTypeName, componentTypeName_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(QueryParams, queryParams_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
        DARABONBA_PTR_FROM_JSON(ComponentTypeCnName, componentTypeCnName_);
        DARABONBA_PTR_FROM_JSON(ComponentTypeName, componentTypeName_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(QueryParams, queryParams_);
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
      class QueryParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryParams& obj) { 
          DARABONBA_PTR_TO_JSON(AreaId, areaId_);
          DARABONBA_PTR_TO_JSON(AreaName, areaName_);
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(IsMeasure, isMeasure_);
          DARABONBA_PTR_TO_JSON(PathId, pathId_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, QueryParams& obj) { 
          DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
          DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(IsMeasure, isMeasure_);
          DARABONBA_PTR_FROM_JSON(PathId, pathId_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
        };
        QueryParams() = default ;
        QueryParams(const QueryParams &) = default ;
        QueryParams(QueryParams &&) = default ;
        QueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryParams() = default ;
        QueryParams& operator=(const QueryParams &) = default ;
        QueryParams& operator=(QueryParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->areaId_ == nullptr
        && this->areaName_ == nullptr && this->caption_ == nullptr && this->dataType_ == nullptr && this->expression_ == nullptr && this->isMeasure_ == nullptr
        && this->pathId_ == nullptr && this->uid_ == nullptr; };
        // areaId Field Functions 
        bool hasAreaId() const { return this->areaId_ != nullptr;};
        void deleteAreaId() { this->areaId_ = nullptr;};
        inline string getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
        inline QueryParams& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


        // areaName Field Functions 
        bool hasAreaName() const { return this->areaName_ != nullptr;};
        void deleteAreaName() { this->areaName_ = nullptr;};
        inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
        inline QueryParams& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline QueryParams& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline QueryParams& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline QueryParams& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // isMeasure Field Functions 
        bool hasIsMeasure() const { return this->isMeasure_ != nullptr;};
        void deleteIsMeasure() { this->isMeasure_ = nullptr;};
        inline bool getIsMeasure() const { DARABONBA_PTR_GET_DEFAULT(isMeasure_, false) };
        inline QueryParams& setIsMeasure(bool isMeasure) { DARABONBA_PTR_SET_VALUE(isMeasure_, isMeasure) };


        // pathId Field Functions 
        bool hasPathId() const { return this->pathId_ != nullptr;};
        void deletePathId() { this->pathId_ = nullptr;};
        inline string getPathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
        inline QueryParams& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline QueryParams& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        // The ID of the owning location.
        shared_ptr<string> areaId_ {};
        // The name of the owning location.
        shared_ptr<string> areaName_ {};
        // The display name of the field.
        shared_ptr<string> caption_ {};
        // The type of the field. Valid values:
        // 
        // *   string: string type
        // *   date: a date type that contains only the year, month, and day parts
        // *   datetime: a common date type
        // *   time: a date type that contains only hours, minutes, and seconds.
        // *   number: numeric
        // *   boolean: Boolean type
        // *   geographical: geographical location
        // *   url: string type
        // *   imageUrl: the type of the image link.
        // *   multivalue: a multi-value column
        shared_ptr<string> dataType_ {};
        // Calculate field expression.
        shared_ptr<string> expression_ {};
        // Indices whether the metric. Valid values:
        // 
        // true false
        shared_ptr<bool> isMeasure_ {};
        // The globally unique PathId.
        shared_ptr<string> pathId_ {};
        // The unique ID of the field.
        shared_ptr<string> uid_ {};
      };

      virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentName_ == nullptr && this->componentType_ == nullptr && this->componentTypeCnName_ == nullptr && this->componentTypeName_ == nullptr && this->datasetId_ == nullptr
        && this->queryParams_ == nullptr; };
      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
      inline Result& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Result& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline int32_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
      inline Result& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // componentTypeCnName Field Functions 
      bool hasComponentTypeCnName() const { return this->componentTypeCnName_ != nullptr;};
      void deleteComponentTypeCnName() { this->componentTypeCnName_ = nullptr;};
      inline string getComponentTypeCnName() const { DARABONBA_PTR_GET_DEFAULT(componentTypeCnName_, "") };
      inline Result& setComponentTypeCnName(string componentTypeCnName) { DARABONBA_PTR_SET_VALUE(componentTypeCnName_, componentTypeCnName) };


      // componentTypeName Field Functions 
      bool hasComponentTypeName() const { return this->componentTypeName_ != nullptr;};
      void deleteComponentTypeName() { this->componentTypeName_ = nullptr;};
      inline string getComponentTypeName() const { DARABONBA_PTR_GET_DEFAULT(componentTypeName_, "") };
      inline Result& setComponentTypeName(string componentTypeName) { DARABONBA_PTR_SET_VALUE(componentTypeName_, componentTypeName) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline Result& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // queryParams Field Functions 
      bool hasQueryParams() const { return this->queryParams_ != nullptr;};
      void deleteQueryParams() { this->queryParams_ = nullptr;};
      inline const vector<Result::QueryParams> & getQueryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, vector<Result::QueryParams>) };
      inline vector<Result::QueryParams> getQueryParams() { DARABONBA_PTR_GET(queryParams_, vector<Result::QueryParams>) };
      inline Result& setQueryParams(const vector<Result::QueryParams> & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
      inline Result& setQueryParams(vector<Result::QueryParams> && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


    protected:
      // The ID of the component that you want to modify.
      shared_ptr<string> componentId_ {};
      // The name of the component.
      shared_ptr<string> componentName_ {};
      // The type of the image component.
      shared_ptr<int32_t> componentType_ {};
      // Chinese name of the component type
      shared_ptr<string> componentTypeCnName_ {};
      // The name of the component type.
      shared_ptr<string> componentTypeName_ {};
      // The ID of the training dataset that you want to remove from the specified custom linguistic model.
      shared_ptr<string> datasetId_ {};
      // A list of query parameter reference columns.
      shared_ptr<vector<Result::QueryParams>> queryParams_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryWorksBloodRelationshipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryWorksBloodRelationshipResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryWorksBloodRelationshipResponseBody::Result>) };
    inline vector<QueryWorksBloodRelationshipResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryWorksBloodRelationshipResponseBody::Result>) };
    inline QueryWorksBloodRelationshipResponseBody& setResult(const vector<QueryWorksBloodRelationshipResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryWorksBloodRelationshipResponseBody& setResult(vector<QueryWorksBloodRelationshipResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryWorksBloodRelationshipResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // List of work blood information.
    shared_ptr<vector<QueryWorksBloodRelationshipResponseBody::Result>> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
