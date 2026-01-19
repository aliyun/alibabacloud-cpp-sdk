// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsByApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsByApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Plugins, plugins_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsByApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePluginsByApiResponseBody() = default ;
    DescribePluginsByApiResponseBody(const DescribePluginsByApiResponseBody &) = default ;
    DescribePluginsByApiResponseBody(DescribePluginsByApiResponseBody &&) = default ;
    DescribePluginsByApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsByApiResponseBody() = default ;
    DescribePluginsByApiResponseBody& operator=(const DescribePluginsByApiResponseBody &) = default ;
    DescribePluginsByApiResponseBody& operator=(DescribePluginsByApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Plugins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plugins& obj) { 
        DARABONBA_PTR_TO_JSON(PluginAttribute, pluginAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Plugins& obj) { 
        DARABONBA_PTR_FROM_JSON(PluginAttribute, pluginAttribute_);
      };
      Plugins() = default ;
      Plugins(const Plugins &) = default ;
      Plugins(Plugins &&) = default ;
      Plugins(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Plugins() = default ;
      Plugins& operator=(const Plugins &) = default ;
      Plugins& operator=(Plugins &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PluginAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PluginAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(PluginData, pluginData_);
          DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
          DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
          DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, PluginAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(PluginData, pluginData_);
          DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
          DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
          DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        PluginAttribute() = default ;
        PluginAttribute(const PluginAttribute &) = default ;
        PluginAttribute(PluginAttribute &&) = default ;
        PluginAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PluginAttribute() = default ;
        PluginAttribute& operator=(const PluginAttribute &) = default ;
        PluginAttribute& operator=(PluginAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->modifiedTime_ == nullptr && this->pluginData_ == nullptr && this->pluginId_ == nullptr && this->pluginName_ == nullptr
        && this->pluginType_ == nullptr && this->regionId_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline PluginAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PluginAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline PluginAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // pluginData Field Functions 
        bool hasPluginData() const { return this->pluginData_ != nullptr;};
        void deletePluginData() { this->pluginData_ = nullptr;};
        inline string getPluginData() const { DARABONBA_PTR_GET_DEFAULT(pluginData_, "") };
        inline PluginAttribute& setPluginData(string pluginData) { DARABONBA_PTR_SET_VALUE(pluginData_, pluginData) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
        inline PluginAttribute& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


        // pluginName Field Functions 
        bool hasPluginName() const { return this->pluginName_ != nullptr;};
        void deletePluginName() { this->pluginName_ = nullptr;};
        inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
        inline PluginAttribute& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


        // pluginType Field Functions 
        bool hasPluginType() const { return this->pluginType_ != nullptr;};
        void deletePluginType() { this->pluginType_ = nullptr;};
        inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
        inline PluginAttribute& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PluginAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The time when the plug-in was created. The time is displayed in UTC.
        shared_ptr<string> createdTime_ {};
        // The plug-in description.
        shared_ptr<string> description_ {};
        // The time when the plug-in was last modified. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The definition statement of the plug-in.
        shared_ptr<string> pluginData_ {};
        // The plug-in ID.
        shared_ptr<string> pluginId_ {};
        // The plug-in name.
        shared_ptr<string> pluginName_ {};
        // The plug-in type.
        shared_ptr<string> pluginType_ {};
        // The region where the plug-in resides.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->pluginAttribute_ == nullptr; };
      // pluginAttribute Field Functions 
      bool hasPluginAttribute() const { return this->pluginAttribute_ != nullptr;};
      void deletePluginAttribute() { this->pluginAttribute_ = nullptr;};
      inline const vector<Plugins::PluginAttribute> & getPluginAttribute() const { DARABONBA_PTR_GET_CONST(pluginAttribute_, vector<Plugins::PluginAttribute>) };
      inline vector<Plugins::PluginAttribute> getPluginAttribute() { DARABONBA_PTR_GET(pluginAttribute_, vector<Plugins::PluginAttribute>) };
      inline Plugins& setPluginAttribute(const vector<Plugins::PluginAttribute> & pluginAttribute) { DARABONBA_PTR_SET_VALUE(pluginAttribute_, pluginAttribute) };
      inline Plugins& setPluginAttribute(vector<Plugins::PluginAttribute> && pluginAttribute) { DARABONBA_PTR_SET_RVALUE(pluginAttribute_, pluginAttribute) };


    protected:
      shared_ptr<vector<Plugins::PluginAttribute>> pluginAttribute_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->plugins_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePluginsByApiResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePluginsByApiResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline const DescribePluginsByApiResponseBody::Plugins & getPlugins() const { DARABONBA_PTR_GET_CONST(plugins_, DescribePluginsByApiResponseBody::Plugins) };
    inline DescribePluginsByApiResponseBody::Plugins getPlugins() { DARABONBA_PTR_GET(plugins_, DescribePluginsByApiResponseBody::Plugins) };
    inline DescribePluginsByApiResponseBody& setPlugins(const DescribePluginsByApiResponseBody::Plugins & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
    inline DescribePluginsByApiResponseBody& setPlugins(DescribePluginsByApiResponseBody::Plugins && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginsByApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePluginsByApiResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The plug-in information. The information is an array that consists of PluginAttribute data.
    shared_ptr<DescribePluginsByApiResponseBody::Plugins> plugins_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
