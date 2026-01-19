// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeAppAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAppAttributesResponseBody() = default ;
    DescribeAppAttributesResponseBody(const DescribeAppAttributesResponseBody &) = default ;
    DescribeAppAttributesResponseBody(DescribeAppAttributesResponseBody &&) = default ;
    DescribeAppAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAttributesResponseBody() = default ;
    DescribeAppAttributesResponseBody& operator=(const DescribeAppAttributesResponseBody &) = default ;
    DescribeAppAttributesResponseBody& operator=(DescribeAppAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Apps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apps& obj) { 
        DARABONBA_PTR_TO_JSON(AppAttribute, appAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Apps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppAttribute, appAttribute_);
      };
      Apps() = default ;
      Apps(const Apps &) = default ;
      Apps(Apps &&) = default ;
      Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apps() = default ;
      Apps& operator=(const Apps &) = default ;
      Apps& operator=(Apps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(Extend, extend_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, AppAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(Extend, extend_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        AppAttribute() = default ;
        AppAttribute(const AppAttribute &) = default ;
        AppAttribute(AppAttribute &&) = default ;
        AppAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppAttribute() = default ;
        AppAttribute& operator=(const AppAttribute &) = default ;
        AppAttribute& operator=(AppAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagInfo() = default ;
            TagInfo(const TagInfo &) = default ;
            TagInfo(TagInfo &&) = default ;
            TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagInfo() = default ;
            TagInfo& operator=(const TagInfo &) = default ;
            TagInfo& operator=(TagInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of the tag.
            shared_ptr<string> key_ {};
            // The value of the tag.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagInfo_ == nullptr; };
          // tagInfo Field Functions 
          bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
          void deleteTagInfo() { this->tagInfo_ = nullptr;};
          inline const vector<Tags::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Tags::TagInfo>) };
          inline vector<Tags::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Tags::TagInfo>) };
          inline Tags& setTagInfo(const vector<Tags::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
          inline Tags& setTagInfo(vector<Tags::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


        protected:
          shared_ptr<vector<Tags::TagInfo>> tagInfo_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->disabled_ == nullptr && this->extend_ == nullptr
        && this->modifiedTime_ == nullptr && this->tags_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline AppAttribute& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppAttribute& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline AppAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AppAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline AppAttribute& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // extend Field Functions 
        bool hasExtend() const { return this->extend_ != nullptr;};
        void deleteExtend() { this->extend_ = nullptr;};
        inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
        inline AppAttribute& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline AppAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const AppAttribute::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, AppAttribute::Tags) };
        inline AppAttribute::Tags getTags() { DARABONBA_PTR_GET(tags_, AppAttribute::Tags) };
        inline AppAttribute& setTags(const AppAttribute::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline AppAttribute& setTags(AppAttribute::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The ID of the app.
        shared_ptr<int64_t> appId_ {};
        // The name of the app.
        shared_ptr<string> appName_ {};
        // The creation time (UTC) of the app.
        shared_ptr<string> createdTime_ {};
        // The description of the app.
        shared_ptr<string> description_ {};
        shared_ptr<bool> disabled_ {};
        // 扩展信息
        shared_ptr<string> extend_ {};
        // The modification time (UTC) of the app.
        shared_ptr<string> modifiedTime_ {};
        // The tags.
        shared_ptr<AppAttribute::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->appAttribute_ == nullptr; };
      // appAttribute Field Functions 
      bool hasAppAttribute() const { return this->appAttribute_ != nullptr;};
      void deleteAppAttribute() { this->appAttribute_ = nullptr;};
      inline const vector<Apps::AppAttribute> & getAppAttribute() const { DARABONBA_PTR_GET_CONST(appAttribute_, vector<Apps::AppAttribute>) };
      inline vector<Apps::AppAttribute> getAppAttribute() { DARABONBA_PTR_GET(appAttribute_, vector<Apps::AppAttribute>) };
      inline Apps& setAppAttribute(const vector<Apps::AppAttribute> & appAttribute) { DARABONBA_PTR_SET_VALUE(appAttribute_, appAttribute) };
      inline Apps& setAppAttribute(vector<Apps::AppAttribute> && appAttribute) { DARABONBA_PTR_SET_RVALUE(appAttribute_, appAttribute) };


    protected:
      shared_ptr<vector<Apps::AppAttribute>> appAttribute_ {};
    };

    virtual bool empty() const override { return this->apps_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const DescribeAppAttributesResponseBody::Apps & getApps() const { DARABONBA_PTR_GET_CONST(apps_, DescribeAppAttributesResponseBody::Apps) };
    inline DescribeAppAttributesResponseBody::Apps getApps() { DARABONBA_PTR_GET(apps_, DescribeAppAttributesResponseBody::Apps) };
    inline DescribeAppAttributesResponseBody& setApps(const DescribeAppAttributesResponseBody::Apps & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline DescribeAppAttributesResponseBody& setApps(DescribeAppAttributesResponseBody::Apps && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAppAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAppAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned app information. It is an array that consists of AppAttribute data.
    shared_ptr<DescribeAppAttributesResponseBody::Apps> apps_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
