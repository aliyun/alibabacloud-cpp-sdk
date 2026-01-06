// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dataList, dataList_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dataList, dataList_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListReportResponseBody() = default ;
    ListReportResponseBody(const ListReportResponseBody &) = default ;
    ListReportResponseBody(ListReportResponseBody &&) = default ;
    ListReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportResponseBody() = default ;
    ListReportResponseBody& operator=(const ListReportResponseBody &) = default ;
    ListReportResponseBody& operator=(ListReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(Contents, contents_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(DeptName, deptName_);
        DARABONBA_PTR_TO_JSON(Images, images_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(Contents, contents_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
        DARABONBA_PTR_FROM_JSON(Images, images_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Contents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contents& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Sort, sort_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Contents& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Sort, sort_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Contents() = default ;
        Contents(const Contents &) = default ;
        Contents(Contents &&) = default ;
        Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contents() = default ;
        Contents& operator=(const Contents &) = default ;
        Contents& operator=(Contents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->sort_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Contents& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // sort Field Functions 
        bool hasSort() const { return this->sort_ != nullptr;};
        void deleteSort() { this->sort_ = nullptr;};
        inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
        inline Contents& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Contents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Contents& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> sort_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->contents_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->creatorName_ == nullptr && this->deptName_ == nullptr && this->images_ == nullptr
        && this->latitude_ == nullptr && this->longitude_ == nullptr && this->modifiedTime_ == nullptr && this->remark_ == nullptr && this->reportId_ == nullptr
        && this->templateName_ == nullptr; };
      // contents Field Functions 
      bool hasContents() const { return this->contents_ != nullptr;};
      void deleteContents() { this->contents_ = nullptr;};
      inline const vector<DataList::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<DataList::Contents>) };
      inline vector<DataList::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<DataList::Contents>) };
      inline DataList& setContents(const vector<DataList::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
      inline DataList& setContents(vector<DataList::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline DataList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline DataList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline DataList& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
      inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
      inline DataList& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline DataList& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
      inline DataList& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
      inline DataList& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline DataList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline DataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline DataList& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline DataList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      shared_ptr<vector<DataList::Contents>> contents_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> deptName_ {};
      shared_ptr<vector<string>> images_ {};
      shared_ptr<string> latitude_ {};
      shared_ptr<string> longitude_ {};
      shared_ptr<int64_t> modifiedTime_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> reportId_ {};
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->hasMore_ == nullptr && this->nextCursor_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<ListReportResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<ListReportResponseBody::DataList>) };
    inline vector<ListReportResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<ListReportResponseBody::DataList>) };
    inline ListReportResponseBody& setDataList(const vector<ListReportResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListReportResponseBody& setDataList(vector<ListReportResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListReportResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline ListReportResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListReportResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<vector<ListReportResponseBody::DataList>> dataList_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<int64_t> nextCursor_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
