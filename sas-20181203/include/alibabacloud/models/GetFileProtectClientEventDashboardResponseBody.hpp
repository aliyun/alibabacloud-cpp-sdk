// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTEVENTDASHBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTEVENTDASHBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectClientEventDashboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectClientEventDashboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectClientEventDashboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileProtectClientEventDashboardResponseBody() = default ;
    GetFileProtectClientEventDashboardResponseBody(const GetFileProtectClientEventDashboardResponseBody &) = default ;
    GetFileProtectClientEventDashboardResponseBody(GetFileProtectClientEventDashboardResponseBody &&) = default ;
    GetFileProtectClientEventDashboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectClientEventDashboardResponseBody() = default ;
    GetFileProtectClientEventDashboardResponseBody& operator=(const GetFileProtectClientEventDashboardResponseBody &) = default ;
    GetFileProtectClientEventDashboardResponseBody& operator=(GetFileProtectClientEventDashboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FilePathStats, filePathStats_);
        DARABONBA_PTR_TO_JSON(FileTypeStats, fileTypeStats_);
        DARABONBA_PTR_TO_JSON(OneDayFileChangeCount, oneDayFileChangeCount_);
        DARABONBA_PTR_TO_JSON(ProcessNameStats, processNameStats_);
        DARABONBA_PTR_TO_JSON(RecentFileChangeCount, recentFileChangeCount_);
        DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FilePathStats, filePathStats_);
        DARABONBA_PTR_FROM_JSON(FileTypeStats, fileTypeStats_);
        DARABONBA_PTR_FROM_JSON(OneDayFileChangeCount, oneDayFileChangeCount_);
        DARABONBA_PTR_FROM_JSON(ProcessNameStats, processNameStats_);
        DARABONBA_PTR_FROM_JSON(RecentFileChangeCount, recentFileChangeCount_);
        DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
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
      class ProcessNameStats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProcessNameStats& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Num, num_);
        };
        friend void from_json(const Darabonba::Json& j, ProcessNameStats& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Num, num_);
        };
        ProcessNameStats() = default ;
        ProcessNameStats(const ProcessNameStats &) = default ;
        ProcessNameStats(ProcessNameStats &&) = default ;
        ProcessNameStats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProcessNameStats() = default ;
        ProcessNameStats& operator=(const ProcessNameStats &) = default ;
        ProcessNameStats& operator=(ProcessNameStats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->num_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ProcessNameStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // num Field Functions 
        bool hasNum() const { return this->num_ != nullptr;};
        void deleteNum() { this->num_ = nullptr;};
        inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
        inline ProcessNameStats& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


      protected:
        // The process name.
        shared_ptr<string> key_ {};
        // The number of events.
        shared_ptr<int64_t> num_ {};
      };

      class FileTypeStats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileTypeStats& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Num, num_);
        };
        friend void from_json(const Darabonba::Json& j, FileTypeStats& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Num, num_);
        };
        FileTypeStats() = default ;
        FileTypeStats(const FileTypeStats &) = default ;
        FileTypeStats(FileTypeStats &&) = default ;
        FileTypeStats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileTypeStats() = default ;
        FileTypeStats& operator=(const FileTypeStats &) = default ;
        FileTypeStats& operator=(FileTypeStats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->num_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline FileTypeStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // num Field Functions 
        bool hasNum() const { return this->num_ != nullptr;};
        void deleteNum() { this->num_ = nullptr;};
        inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
        inline FileTypeStats& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


      protected:
        // The file type name.
        shared_ptr<string> key_ {};
        // The count.
        shared_ptr<int64_t> num_ {};
      };

      class FilePathStats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilePathStats& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Num, num_);
        };
        friend void from_json(const Darabonba::Json& j, FilePathStats& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Num, num_);
        };
        FilePathStats() = default ;
        FilePathStats(const FilePathStats &) = default ;
        FilePathStats(FilePathStats &&) = default ;
        FilePathStats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilePathStats() = default ;
        FilePathStats& operator=(const FilePathStats &) = default ;
        FilePathStats& operator=(FilePathStats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->num_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline FilePathStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // num Field Functions 
        bool hasNum() const { return this->num_ != nullptr;};
        void deleteNum() { this->num_ = nullptr;};
        inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
        inline FilePathStats& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


      protected:
        // The file path.
        shared_ptr<string> key_ {};
        // The total number of events.
        shared_ptr<int64_t> num_ {};
      };

      virtual bool empty() const override { return this->filePathStats_ == nullptr
        && this->fileTypeStats_ == nullptr && this->oneDayFileChangeCount_ == nullptr && this->processNameStats_ == nullptr && this->recentFileChangeCount_ == nullptr && this->serverCount_ == nullptr; };
      // filePathStats Field Functions 
      bool hasFilePathStats() const { return this->filePathStats_ != nullptr;};
      void deleteFilePathStats() { this->filePathStats_ = nullptr;};
      inline const vector<Data::FilePathStats> & getFilePathStats() const { DARABONBA_PTR_GET_CONST(filePathStats_, vector<Data::FilePathStats>) };
      inline vector<Data::FilePathStats> getFilePathStats() { DARABONBA_PTR_GET(filePathStats_, vector<Data::FilePathStats>) };
      inline Data& setFilePathStats(const vector<Data::FilePathStats> & filePathStats) { DARABONBA_PTR_SET_VALUE(filePathStats_, filePathStats) };
      inline Data& setFilePathStats(vector<Data::FilePathStats> && filePathStats) { DARABONBA_PTR_SET_RVALUE(filePathStats_, filePathStats) };


      // fileTypeStats Field Functions 
      bool hasFileTypeStats() const { return this->fileTypeStats_ != nullptr;};
      void deleteFileTypeStats() { this->fileTypeStats_ = nullptr;};
      inline const vector<Data::FileTypeStats> & getFileTypeStats() const { DARABONBA_PTR_GET_CONST(fileTypeStats_, vector<Data::FileTypeStats>) };
      inline vector<Data::FileTypeStats> getFileTypeStats() { DARABONBA_PTR_GET(fileTypeStats_, vector<Data::FileTypeStats>) };
      inline Data& setFileTypeStats(const vector<Data::FileTypeStats> & fileTypeStats) { DARABONBA_PTR_SET_VALUE(fileTypeStats_, fileTypeStats) };
      inline Data& setFileTypeStats(vector<Data::FileTypeStats> && fileTypeStats) { DARABONBA_PTR_SET_RVALUE(fileTypeStats_, fileTypeStats) };


      // oneDayFileChangeCount Field Functions 
      bool hasOneDayFileChangeCount() const { return this->oneDayFileChangeCount_ != nullptr;};
      void deleteOneDayFileChangeCount() { this->oneDayFileChangeCount_ = nullptr;};
      inline int32_t getOneDayFileChangeCount() const { DARABONBA_PTR_GET_DEFAULT(oneDayFileChangeCount_, 0) };
      inline Data& setOneDayFileChangeCount(int32_t oneDayFileChangeCount) { DARABONBA_PTR_SET_VALUE(oneDayFileChangeCount_, oneDayFileChangeCount) };


      // processNameStats Field Functions 
      bool hasProcessNameStats() const { return this->processNameStats_ != nullptr;};
      void deleteProcessNameStats() { this->processNameStats_ = nullptr;};
      inline const vector<Data::ProcessNameStats> & getProcessNameStats() const { DARABONBA_PTR_GET_CONST(processNameStats_, vector<Data::ProcessNameStats>) };
      inline vector<Data::ProcessNameStats> getProcessNameStats() { DARABONBA_PTR_GET(processNameStats_, vector<Data::ProcessNameStats>) };
      inline Data& setProcessNameStats(const vector<Data::ProcessNameStats> & processNameStats) { DARABONBA_PTR_SET_VALUE(processNameStats_, processNameStats) };
      inline Data& setProcessNameStats(vector<Data::ProcessNameStats> && processNameStats) { DARABONBA_PTR_SET_RVALUE(processNameStats_, processNameStats) };


      // recentFileChangeCount Field Functions 
      bool hasRecentFileChangeCount() const { return this->recentFileChangeCount_ != nullptr;};
      void deleteRecentFileChangeCount() { this->recentFileChangeCount_ = nullptr;};
      inline int32_t getRecentFileChangeCount() const { DARABONBA_PTR_GET_DEFAULT(recentFileChangeCount_, 0) };
      inline Data& setRecentFileChangeCount(int32_t recentFileChangeCount) { DARABONBA_PTR_SET_VALUE(recentFileChangeCount_, recentFileChangeCount) };


      // serverCount Field Functions 
      bool hasServerCount() const { return this->serverCount_ != nullptr;};
      void deleteServerCount() { this->serverCount_ = nullptr;};
      inline int32_t getServerCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0) };
      inline Data& setServerCount(int32_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


    protected:
      // The tamper-proofing event statistics grouped by file path.
      shared_ptr<vector<Data::FilePathStats>> filePathStats_ {};
      // The event statistics grouped by file type.
      shared_ptr<vector<Data::FileTypeStats>> fileTypeStats_ {};
      // The number of file tamper-proofing events for today.
      shared_ptr<int32_t> oneDayFileChangeCount_ {};
      // The event statistics grouped by process name.
      shared_ptr<vector<Data::ProcessNameStats>> processNameStats_ {};
      // The number of file tamper-proofing events in the last 15 days.
      shared_ptr<int32_t> recentFileChangeCount_ {};
      // The number of affected servers.
      shared_ptr<int32_t> serverCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileProtectClientEventDashboardResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileProtectClientEventDashboardResponseBody::Data) };
    inline GetFileProtectClientEventDashboardResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileProtectClientEventDashboardResponseBody::Data) };
    inline GetFileProtectClientEventDashboardResponseBody& setData(const GetFileProtectClientEventDashboardResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileProtectClientEventDashboardResponseBody& setData(GetFileProtectClientEventDashboardResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileProtectClientEventDashboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetFileProtectClientEventDashboardResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
