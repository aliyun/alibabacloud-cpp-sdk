// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPYTHONMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPYTHONMODULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListPythonModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPythonModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPythonModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListPythonModulesResponseBody() = default ;
    ListPythonModulesResponseBody(const ListPythonModulesResponseBody &) = default ;
    ListPythonModulesResponseBody(ListPythonModulesResponseBody &&) = default ;
    ListPythonModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPythonModulesResponseBody() = default ;
    ListPythonModulesResponseBody& operator=(const ListPythonModulesResponseBody &) = default ;
    ListPythonModulesResponseBody& operator=(ListPythonModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PythonModuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PythonModuleList& obj) { 
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
          DARABONBA_PTR_TO_JSON(InstallType, installType_);
          DARABONBA_PTR_TO_JSON(Installer, installer_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PythonVersion, pythonVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, PythonModuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
          DARABONBA_PTR_FROM_JSON(InstallType, installType_);
          DARABONBA_PTR_FROM_JSON(Installer, installer_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PythonVersion, pythonVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        PythonModuleList() = default ;
        PythonModuleList(const PythonModuleList &) = default ;
        PythonModuleList(PythonModuleList &&) = default ;
        PythonModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PythonModuleList() = default ;
        PythonModuleList& operator=(const PythonModuleList &) = default ;
        PythonModuleList& operator=(PythonModuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->installTime_ == nullptr && this->installType_ == nullptr && this->installer_ == nullptr
        && this->name_ == nullptr && this->pythonVersion_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline PythonModuleList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline PythonModuleList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline PythonModuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // installTime Field Functions 
        bool hasInstallTime() const { return this->installTime_ != nullptr;};
        void deleteInstallTime() { this->installTime_ = nullptr;};
        inline string getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
        inline PythonModuleList& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


        // installType Field Functions 
        bool hasInstallType() const { return this->installType_ != nullptr;};
        void deleteInstallType() { this->installType_ = nullptr;};
        inline string getInstallType() const { DARABONBA_PTR_GET_DEFAULT(installType_, "") };
        inline PythonModuleList& setInstallType(string installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


        // installer Field Functions 
        bool hasInstaller() const { return this->installer_ != nullptr;};
        void deleteInstaller() { this->installer_ = nullptr;};
        inline string getInstaller() const { DARABONBA_PTR_GET_DEFAULT(installer_, "") };
        inline PythonModuleList& setInstaller(string installer) { DARABONBA_PTR_SET_VALUE(installer_, installer) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PythonModuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pythonVersion Field Functions 
        bool hasPythonVersion() const { return this->pythonVersion_ != nullptr;};
        void deletePythonVersion() { this->pythonVersion_ = nullptr;};
        inline string getPythonVersion() const { DARABONBA_PTR_GET_DEFAULT(pythonVersion_, "") };
        inline PythonModuleList& setPythonVersion(string pythonVersion) { DARABONBA_PTR_SET_VALUE(pythonVersion_, pythonVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PythonModuleList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline PythonModuleList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The creation time.
        shared_ptr<string> gmtCreated_ {};
        // The last update time.
        shared_ptr<string> gmtModified_ {};
        // The ID of the Python third-party package.
        shared_ptr<int64_t> id_ {};
        // The installation time.
        shared_ptr<string> installTime_ {};
        // The installation method. Valid values:
        // - UPLOAD_INSTALL: upload installation package
        // - ONLINE_INSTALL: online installation
        shared_ptr<string> installType_ {};
        // The installer.
        shared_ptr<string> installer_ {};
        // The name of the Python third-party package.
        shared_ptr<string> name_ {};
        // The Python version. Valid values: PYTHON_2_7, PYTHON_3_7, and PYTHON_3_11.
        shared_ptr<string> pythonVersion_ {};
        // The status of the third-party package. Valid values:
        // - INSTALL_SUCCESS: installation succeeded
        // - INSTALL_FAILED: installation failed
        // - INSTALLING: installing
        // - UPGRADE_SUCCESS: upgrade succeeded
        // - UPGRADE_FAILED: upgrade failed
        // - UPGRADING: upgrading
        shared_ptr<string> status_ {};
        // The version of the third-party package.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->pythonModuleList_ == nullptr
        && this->totalCount_ == nullptr; };
      // pythonModuleList Field Functions 
      bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
      void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
      inline const vector<PageResult::PythonModuleList> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<PageResult::PythonModuleList>) };
      inline vector<PageResult::PythonModuleList> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<PageResult::PythonModuleList>) };
      inline PageResult& setPythonModuleList(const vector<PageResult::PythonModuleList> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
      inline PageResult& setPythonModuleList(vector<PageResult::PythonModuleList> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The paginated list of Python third-party packages.
      shared_ptr<vector<PageResult::PythonModuleList>> pythonModuleList_ {};
      // The total number of entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPythonModulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPythonModulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPythonModulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListPythonModulesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListPythonModulesResponseBody::PageResult) };
    inline ListPythonModulesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListPythonModulesResponseBody::PageResult) };
    inline ListPythonModulesResponseBody& setPageResult(const ListPythonModulesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListPythonModulesResponseBody& setPageResult(ListPythonModulesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPythonModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPythonModulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The paged query result with paging details.
    shared_ptr<ListPythonModulesResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
