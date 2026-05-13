// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACECODEPUBLISHSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACECODEPUBLISHSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetWorkspaceCodePublishSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceCodePublishSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceCodePublishSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWorkspaceCodePublishSettingResponseBody() = default ;
    GetWorkspaceCodePublishSettingResponseBody(const GetWorkspaceCodePublishSettingResponseBody &) = default ;
    GetWorkspaceCodePublishSettingResponseBody(GetWorkspaceCodePublishSettingResponseBody &&) = default ;
    GetWorkspaceCodePublishSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceCodePublishSettingResponseBody() = default ;
    GetWorkspaceCodePublishSettingResponseBody& operator=(const GetWorkspaceCodePublishSettingResponseBody &) = default ;
    GetWorkspaceCodePublishSettingResponseBody& operator=(GetWorkspaceCodePublishSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Exclude, exclude_);
        DARABONBA_PTR_TO_JSON(LockRepoBranch, lockRepoBranch_);
        DARABONBA_PTR_TO_JSON(Repos, repos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
        DARABONBA_PTR_FROM_JSON(LockRepoBranch, lockRepoBranch_);
        DARABONBA_PTR_FROM_JSON(Repos, repos_);
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
      class Repos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Repos& obj) { 
          DARABONBA_PTR_TO_JSON(Branch, branch_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Repo, repo_);
        };
        friend void from_json(const Darabonba::Json& j, Repos& obj) { 
          DARABONBA_PTR_FROM_JSON(Branch, branch_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Repo, repo_);
        };
        Repos() = default ;
        Repos(const Repos &) = default ;
        Repos(Repos &&) = default ;
        Repos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Repos() = default ;
        Repos& operator=(const Repos &) = default ;
        Repos& operator=(Repos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->branch_ == nullptr
        && this->path_ == nullptr && this->repo_ == nullptr; };
        // branch Field Functions 
        bool hasBranch() const { return this->branch_ != nullptr;};
        void deleteBranch() { this->branch_ = nullptr;};
        inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
        inline Repos& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Repos& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // repo Field Functions 
        bool hasRepo() const { return this->repo_ != nullptr;};
        void deleteRepo() { this->repo_ = nullptr;};
        inline string getRepo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
        inline Repos& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


      protected:
        shared_ptr<string> branch_ {};
        shared_ptr<string> path_ {};
        shared_ptr<string> repo_ {};
      };

      virtual bool empty() const override { return this->exclude_ == nullptr
        && this->lockRepoBranch_ == nullptr && this->repos_ == nullptr; };
      // exclude Field Functions 
      bool hasExclude() const { return this->exclude_ != nullptr;};
      void deleteExclude() { this->exclude_ = nullptr;};
      inline const vector<string> & getExclude() const { DARABONBA_PTR_GET_CONST(exclude_, vector<string>) };
      inline vector<string> getExclude() { DARABONBA_PTR_GET(exclude_, vector<string>) };
      inline Data& setExclude(const vector<string> & exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };
      inline Data& setExclude(vector<string> && exclude) { DARABONBA_PTR_SET_RVALUE(exclude_, exclude) };


      // lockRepoBranch Field Functions 
      bool hasLockRepoBranch() const { return this->lockRepoBranch_ != nullptr;};
      void deleteLockRepoBranch() { this->lockRepoBranch_ = nullptr;};
      inline bool getLockRepoBranch() const { DARABONBA_PTR_GET_DEFAULT(lockRepoBranch_, false) };
      inline Data& setLockRepoBranch(bool lockRepoBranch) { DARABONBA_PTR_SET_VALUE(lockRepoBranch_, lockRepoBranch) };


      // repos Field Functions 
      bool hasRepos() const { return this->repos_ != nullptr;};
      void deleteRepos() { this->repos_ = nullptr;};
      inline const vector<Data::Repos> & getRepos() const { DARABONBA_PTR_GET_CONST(repos_, vector<Data::Repos>) };
      inline vector<Data::Repos> getRepos() { DARABONBA_PTR_GET(repos_, vector<Data::Repos>) };
      inline Data& setRepos(const vector<Data::Repos> & repos) { DARABONBA_PTR_SET_VALUE(repos_, repos) };
      inline Data& setRepos(vector<Data::Repos> && repos) { DARABONBA_PTR_SET_RVALUE(repos_, repos) };


    protected:
      shared_ptr<vector<string>> exclude_ {};
      shared_ptr<bool> lockRepoBranch_ {};
      shared_ptr<vector<Data::Repos>> repos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkspaceCodePublishSettingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkspaceCodePublishSettingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkspaceCodePublishSettingResponseBody::Data) };
    inline GetWorkspaceCodePublishSettingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkspaceCodePublishSettingResponseBody::Data) };
    inline GetWorkspaceCodePublishSettingResponseBody& setData(const GetWorkspaceCodePublishSettingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkspaceCodePublishSettingResponseBody& setData(GetWorkspaceCodePublishSettingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkspaceCodePublishSettingResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWorkspaceCodePublishSettingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkspaceCodePublishSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspaceCodePublishSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetWorkspaceCodePublishSettingResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
