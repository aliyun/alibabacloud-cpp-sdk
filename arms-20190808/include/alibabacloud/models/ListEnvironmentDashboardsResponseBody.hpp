// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEnvironmentDashboardsResponseBody() = default ;
    ListEnvironmentDashboardsResponseBody(const ListEnvironmentDashboardsResponseBody &) = default ;
    ListEnvironmentDashboardsResponseBody(ListEnvironmentDashboardsResponseBody &&) = default ;
    ListEnvironmentDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentDashboardsResponseBody() = default ;
    ListEnvironmentDashboardsResponseBody& operator=(const ListEnvironmentDashboardsResponseBody &) = default ;
    ListEnvironmentDashboardsResponseBody& operator=(ListEnvironmentDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Dashboards, dashboards_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Dashboards, dashboards_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dashboards : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dashboards& obj) { 
          DARABONBA_PTR_TO_JSON(FolderUid, folderUid_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Dashboards& obj) { 
          DARABONBA_PTR_FROM_JSON(FolderUid, folderUid_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Dashboards() = default ;
        Dashboards(const Dashboards &) = default ;
        Dashboards(Dashboards &&) = default ;
        Dashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dashboards() = default ;
        Dashboards& operator=(const Dashboards &) = default ;
        Dashboards& operator=(Dashboards &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->folderUid_ == nullptr
        && this->region_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->uid_ == nullptr && this->url_ == nullptr; };
        // folderUid Field Functions 
        bool hasFolderUid() const { return this->folderUid_ != nullptr;};
        void deleteFolderUid() { this->folderUid_ = nullptr;};
        inline string getFolderUid() const { DARABONBA_PTR_GET_DEFAULT(folderUid_, "") };
        inline Dashboards& setFolderUid(string folderUid) { DARABONBA_PTR_SET_VALUE(folderUid_, folderUid) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Dashboards& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Dashboards& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Dashboards& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Dashboards& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline Dashboards& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Dashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The UID of the folder.
        shared_ptr<string> folderUid_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The keyword.
        shared_ptr<vector<string>> tags_ {};
        // The title of the Grafana dashboard.
        shared_ptr<string> title_ {};
        // The unique identifier of the dashboard.
        shared_ptr<string> uid_ {};
        // The complete URL of the dashboard.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->dashboards_ == nullptr
        && this->total_ == nullptr; };
      // dashboards Field Functions 
      bool hasDashboards() const { return this->dashboards_ != nullptr;};
      void deleteDashboards() { this->dashboards_ = nullptr;};
      inline const vector<Data::Dashboards> & getDashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<Data::Dashboards>) };
      inline vector<Data::Dashboards> getDashboards() { DARABONBA_PTR_GET(dashboards_, vector<Data::Dashboards>) };
      inline Data& setDashboards(const vector<Data::Dashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
      inline Data& setDashboards(vector<Data::Dashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The dashboards.
      shared_ptr<vector<Data::Dashboards>> dashboards_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvironmentDashboardsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEnvironmentDashboardsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEnvironmentDashboardsResponseBody::Data) };
    inline ListEnvironmentDashboardsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEnvironmentDashboardsResponseBody::Data) };
    inline ListEnvironmentDashboardsResponseBody& setData(const ListEnvironmentDashboardsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvironmentDashboardsResponseBody& setData(ListEnvironmentDashboardsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvironmentDashboardsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnvironmentDashboardsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The result of the operation.
    shared_ptr<ListEnvironmentDashboardsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
