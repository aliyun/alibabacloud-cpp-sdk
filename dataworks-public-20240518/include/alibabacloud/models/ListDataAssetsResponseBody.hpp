// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataAssetsResponseBody() = default ;
    ListDataAssetsResponseBody(const ListDataAssetsResponseBody &) = default ;
    ListDataAssetsResponseBody(ListDataAssetsResponseBody &&) = default ;
    ListDataAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetsResponseBody() = default ;
    ListDataAssetsResponseBody& operator=(const ListDataAssetsResponseBody &) = default ;
    ListDataAssetsResponseBody& operator=(ListDataAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataAssets, dataAssets_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataAssets, dataAssets_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataAssets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataAssets& obj) { 
          DARABONBA_PTR_TO_JSON(DataAssetTagMappings, dataAssetTagMappings_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataAssets& obj) { 
          DARABONBA_PTR_FROM_JSON(DataAssetTagMappings, dataAssetTagMappings_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DataAssets() = default ;
        DataAssets(const DataAssets &) = default ;
        DataAssets(DataAssets &&) = default ;
        DataAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataAssets() = default ;
        DataAssets& operator=(const DataAssets &) = default ;
        DataAssets& operator=(DataAssets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataAssetTagMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataAssetTagMappings& obj) { 
            DARABONBA_PTR_TO_JSON(AutoTraceEnabled, autoTraceEnabled_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(DataAssetId, dataAssetId_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(TagSource, tagSource_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DataAssetTagMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoTraceEnabled, autoTraceEnabled_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(DataAssetId, dataAssetId_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(TagSource, tagSource_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DataAssetTagMappings() = default ;
          DataAssetTagMappings(const DataAssetTagMappings &) = default ;
          DataAssetTagMappings(DataAssetTagMappings &&) = default ;
          DataAssetTagMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataAssetTagMappings() = default ;
          DataAssetTagMappings& operator=(const DataAssetTagMappings &) = default ;
          DataAssetTagMappings& operator=(DataAssetTagMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoTraceEnabled_ == nullptr
        && this->creator_ == nullptr && this->dataAssetId_ == nullptr && this->key_ == nullptr && this->tagSource_ == nullptr && this->value_ == nullptr; };
          // autoTraceEnabled Field Functions 
          bool hasAutoTraceEnabled() const { return this->autoTraceEnabled_ != nullptr;};
          void deleteAutoTraceEnabled() { this->autoTraceEnabled_ = nullptr;};
          inline bool getAutoTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoTraceEnabled_, false) };
          inline DataAssetTagMappings& setAutoTraceEnabled(bool autoTraceEnabled) { DARABONBA_PTR_SET_VALUE(autoTraceEnabled_, autoTraceEnabled) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
          inline DataAssetTagMappings& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // dataAssetId Field Functions 
          bool hasDataAssetId() const { return this->dataAssetId_ != nullptr;};
          void deleteDataAssetId() { this->dataAssetId_ = nullptr;};
          inline string getDataAssetId() const { DARABONBA_PTR_GET_DEFAULT(dataAssetId_, "") };
          inline DataAssetTagMappings& setDataAssetId(string dataAssetId) { DARABONBA_PTR_SET_VALUE(dataAssetId_, dataAssetId) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline DataAssetTagMappings& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // tagSource Field Functions 
          bool hasTagSource() const { return this->tagSource_ != nullptr;};
          void deleteTagSource() { this->tagSource_ = nullptr;};
          inline string getTagSource() const { DARABONBA_PTR_GET_DEFAULT(tagSource_, "") };
          inline DataAssetTagMappings& setTagSource(string tagSource) { DARABONBA_PTR_SET_VALUE(tagSource_, tagSource) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DataAssetTagMappings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Indicates whether the lineage-based automatic backtrack feature is enabled for the mapping.
          shared_ptr<bool> autoTraceEnabled_ {};
          // The creator of the mapping between the data asset and the tag.
          shared_ptr<string> creator_ {};
          // The data asset ID.
          shared_ptr<string> dataAssetId_ {};
          // The tag key.
          shared_ptr<string> key_ {};
          // The way in which the mapping between the data asset and the tag is created. Valid values:
          // 
          // *   System
          // *   UserDefined
          shared_ptr<string> tagSource_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->dataAssetTagMappings_ == nullptr
        && this->envType_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
        // dataAssetTagMappings Field Functions 
        bool hasDataAssetTagMappings() const { return this->dataAssetTagMappings_ != nullptr;};
        void deleteDataAssetTagMappings() { this->dataAssetTagMappings_ = nullptr;};
        inline const vector<DataAssets::DataAssetTagMappings> & getDataAssetTagMappings() const { DARABONBA_PTR_GET_CONST(dataAssetTagMappings_, vector<DataAssets::DataAssetTagMappings>) };
        inline vector<DataAssets::DataAssetTagMappings> getDataAssetTagMappings() { DARABONBA_PTR_GET(dataAssetTagMappings_, vector<DataAssets::DataAssetTagMappings>) };
        inline DataAssets& setDataAssetTagMappings(const vector<DataAssets::DataAssetTagMappings> & dataAssetTagMappings) { DARABONBA_PTR_SET_VALUE(dataAssetTagMappings_, dataAssetTagMappings) };
        inline DataAssets& setDataAssetTagMappings(vector<DataAssets::DataAssetTagMappings> && dataAssetTagMappings) { DARABONBA_PTR_SET_RVALUE(dataAssetTagMappings_, dataAssetTagMappings) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline DataAssets& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataAssets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataAssets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataAssets& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataAssets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The mappings between data assets and tags.
        shared_ptr<vector<DataAssets::DataAssetTagMappings>> dataAssetTagMappings_ {};
        // The environment of the workspace to which the data asset belongs. Valid values:
        // 
        // *   Dev: development environment
        // *   Prod: production environment
        shared_ptr<string> envType_ {};
        // The data asset ID.
        shared_ptr<string> id_ {};
        // The name of the data asset.
        shared_ptr<string> name_ {};
        // The DataWorks workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The type of the data asset. Valid values:
        // 
        // *   ACS::DataWorks::Table
        // *   ACS::DataWorks::Task
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataAssets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataAssets Field Functions 
      bool hasDataAssets() const { return this->dataAssets_ != nullptr;};
      void deleteDataAssets() { this->dataAssets_ = nullptr;};
      inline const vector<PagingInfo::DataAssets> & getDataAssets() const { DARABONBA_PTR_GET_CONST(dataAssets_, vector<PagingInfo::DataAssets>) };
      inline vector<PagingInfo::DataAssets> getDataAssets() { DARABONBA_PTR_GET(dataAssets_, vector<PagingInfo::DataAssets>) };
      inline PagingInfo& setDataAssets(const vector<PagingInfo::DataAssets> & dataAssets) { DARABONBA_PTR_SET_VALUE(dataAssets_, dataAssets) };
      inline PagingInfo& setDataAssets(vector<PagingInfo::DataAssets> && dataAssets) { DARABONBA_PTR_SET_RVALUE(dataAssets_, dataAssets) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data assets.
      shared_ptr<vector<PagingInfo::DataAssets>> dataAssets_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataAssetsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataAssetsResponseBody::PagingInfo) };
    inline ListDataAssetsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataAssetsResponseBody::PagingInfo) };
    inline ListDataAssetsResponseBody& setPagingInfo(const ListDataAssetsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataAssetsResponseBody& setPagingInfo(ListDataAssetsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDataAssetsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
