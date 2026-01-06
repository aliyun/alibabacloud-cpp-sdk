// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudbenchTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudbenchTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudbenchTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudbenchTaskConfigResponseBody() = default ;
    DescribeCloudbenchTaskConfigResponseBody(const DescribeCloudbenchTaskConfigResponseBody &) = default ;
    DescribeCloudbenchTaskConfigResponseBody(DescribeCloudbenchTaskConfigResponseBody &&) = default ;
    DescribeCloudbenchTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudbenchTaskConfigResponseBody() = default ;
    DescribeCloudbenchTaskConfigResponseBody& operator=(const DescribeCloudbenchTaskConfigResponseBody &) = default ;
    DescribeCloudbenchTaskConfigResponseBody& operator=(DescribeCloudbenchTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ArchiveFolder, archiveFolder_);
        DARABONBA_PTR_TO_JSON(BenchCmd, benchCmd_);
        DARABONBA_PTR_TO_JSON(ClientJarPath, clientJarPath_);
        DARABONBA_PTR_TO_JSON(JarOnOss, jarOnOss_);
        DARABONBA_PTR_TO_JSON(LoadCmd, loadCmd_);
        DARABONBA_PTR_TO_JSON(MetaFileName, metaFileName_);
        DARABONBA_PTR_TO_JSON(MetaFileOnOss, metaFileOnOss_);
        DARABONBA_PTR_TO_JSON(MetaFilePath, metaFilePath_);
        DARABONBA_PTR_TO_JSON(ParseCmd, parseCmd_);
        DARABONBA_PTR_TO_JSON(ParseFilePath, parseFilePath_);
        DARABONBA_PTR_TO_JSON(RocksDbPath, rocksDbPath_);
        DARABONBA_PTR_TO_JSON(SqlFileName, sqlFileName_);
        DARABONBA_PTR_TO_JSON(SqlFileOnOss, sqlFileOnOss_);
        DARABONBA_PTR_TO_JSON(SqlFilePath, sqlFilePath_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchiveFolder, archiveFolder_);
        DARABONBA_PTR_FROM_JSON(BenchCmd, benchCmd_);
        DARABONBA_PTR_FROM_JSON(ClientJarPath, clientJarPath_);
        DARABONBA_PTR_FROM_JSON(JarOnOss, jarOnOss_);
        DARABONBA_PTR_FROM_JSON(LoadCmd, loadCmd_);
        DARABONBA_PTR_FROM_JSON(MetaFileName, metaFileName_);
        DARABONBA_PTR_FROM_JSON(MetaFileOnOss, metaFileOnOss_);
        DARABONBA_PTR_FROM_JSON(MetaFilePath, metaFilePath_);
        DARABONBA_PTR_FROM_JSON(ParseCmd, parseCmd_);
        DARABONBA_PTR_FROM_JSON(ParseFilePath, parseFilePath_);
        DARABONBA_PTR_FROM_JSON(RocksDbPath, rocksDbPath_);
        DARABONBA_PTR_FROM_JSON(SqlFileName, sqlFileName_);
        DARABONBA_PTR_FROM_JSON(SqlFileOnOss, sqlFileOnOss_);
        DARABONBA_PTR_FROM_JSON(SqlFilePath, sqlFilePath_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
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
      virtual bool empty() const override { return this->archiveFolder_ == nullptr
        && this->benchCmd_ == nullptr && this->clientJarPath_ == nullptr && this->jarOnOss_ == nullptr && this->loadCmd_ == nullptr && this->metaFileName_ == nullptr
        && this->metaFileOnOss_ == nullptr && this->metaFilePath_ == nullptr && this->parseCmd_ == nullptr && this->parseFilePath_ == nullptr && this->rocksDbPath_ == nullptr
        && this->sqlFileName_ == nullptr && this->sqlFileOnOss_ == nullptr && this->sqlFilePath_ == nullptr && this->taskId_ == nullptr && this->userId_ == nullptr
        && this->workDir_ == nullptr; };
      // archiveFolder Field Functions 
      bool hasArchiveFolder() const { return this->archiveFolder_ != nullptr;};
      void deleteArchiveFolder() { this->archiveFolder_ = nullptr;};
      inline string getArchiveFolder() const { DARABONBA_PTR_GET_DEFAULT(archiveFolder_, "") };
      inline Data& setArchiveFolder(string archiveFolder) { DARABONBA_PTR_SET_VALUE(archiveFolder_, archiveFolder) };


      // benchCmd Field Functions 
      bool hasBenchCmd() const { return this->benchCmd_ != nullptr;};
      void deleteBenchCmd() { this->benchCmd_ = nullptr;};
      inline string getBenchCmd() const { DARABONBA_PTR_GET_DEFAULT(benchCmd_, "") };
      inline Data& setBenchCmd(string benchCmd) { DARABONBA_PTR_SET_VALUE(benchCmd_, benchCmd) };


      // clientJarPath Field Functions 
      bool hasClientJarPath() const { return this->clientJarPath_ != nullptr;};
      void deleteClientJarPath() { this->clientJarPath_ = nullptr;};
      inline string getClientJarPath() const { DARABONBA_PTR_GET_DEFAULT(clientJarPath_, "") };
      inline Data& setClientJarPath(string clientJarPath) { DARABONBA_PTR_SET_VALUE(clientJarPath_, clientJarPath) };


      // jarOnOss Field Functions 
      bool hasJarOnOss() const { return this->jarOnOss_ != nullptr;};
      void deleteJarOnOss() { this->jarOnOss_ = nullptr;};
      inline string getJarOnOss() const { DARABONBA_PTR_GET_DEFAULT(jarOnOss_, "") };
      inline Data& setJarOnOss(string jarOnOss) { DARABONBA_PTR_SET_VALUE(jarOnOss_, jarOnOss) };


      // loadCmd Field Functions 
      bool hasLoadCmd() const { return this->loadCmd_ != nullptr;};
      void deleteLoadCmd() { this->loadCmd_ = nullptr;};
      inline string getLoadCmd() const { DARABONBA_PTR_GET_DEFAULT(loadCmd_, "") };
      inline Data& setLoadCmd(string loadCmd) { DARABONBA_PTR_SET_VALUE(loadCmd_, loadCmd) };


      // metaFileName Field Functions 
      bool hasMetaFileName() const { return this->metaFileName_ != nullptr;};
      void deleteMetaFileName() { this->metaFileName_ = nullptr;};
      inline string getMetaFileName() const { DARABONBA_PTR_GET_DEFAULT(metaFileName_, "") };
      inline Data& setMetaFileName(string metaFileName) { DARABONBA_PTR_SET_VALUE(metaFileName_, metaFileName) };


      // metaFileOnOss Field Functions 
      bool hasMetaFileOnOss() const { return this->metaFileOnOss_ != nullptr;};
      void deleteMetaFileOnOss() { this->metaFileOnOss_ = nullptr;};
      inline string getMetaFileOnOss() const { DARABONBA_PTR_GET_DEFAULT(metaFileOnOss_, "") };
      inline Data& setMetaFileOnOss(string metaFileOnOss) { DARABONBA_PTR_SET_VALUE(metaFileOnOss_, metaFileOnOss) };


      // metaFilePath Field Functions 
      bool hasMetaFilePath() const { return this->metaFilePath_ != nullptr;};
      void deleteMetaFilePath() { this->metaFilePath_ = nullptr;};
      inline string getMetaFilePath() const { DARABONBA_PTR_GET_DEFAULT(metaFilePath_, "") };
      inline Data& setMetaFilePath(string metaFilePath) { DARABONBA_PTR_SET_VALUE(metaFilePath_, metaFilePath) };


      // parseCmd Field Functions 
      bool hasParseCmd() const { return this->parseCmd_ != nullptr;};
      void deleteParseCmd() { this->parseCmd_ = nullptr;};
      inline string getParseCmd() const { DARABONBA_PTR_GET_DEFAULT(parseCmd_, "") };
      inline Data& setParseCmd(string parseCmd) { DARABONBA_PTR_SET_VALUE(parseCmd_, parseCmd) };


      // parseFilePath Field Functions 
      bool hasParseFilePath() const { return this->parseFilePath_ != nullptr;};
      void deleteParseFilePath() { this->parseFilePath_ = nullptr;};
      inline string getParseFilePath() const { DARABONBA_PTR_GET_DEFAULT(parseFilePath_, "") };
      inline Data& setParseFilePath(string parseFilePath) { DARABONBA_PTR_SET_VALUE(parseFilePath_, parseFilePath) };


      // rocksDbPath Field Functions 
      bool hasRocksDbPath() const { return this->rocksDbPath_ != nullptr;};
      void deleteRocksDbPath() { this->rocksDbPath_ = nullptr;};
      inline string getRocksDbPath() const { DARABONBA_PTR_GET_DEFAULT(rocksDbPath_, "") };
      inline Data& setRocksDbPath(string rocksDbPath) { DARABONBA_PTR_SET_VALUE(rocksDbPath_, rocksDbPath) };


      // sqlFileName Field Functions 
      bool hasSqlFileName() const { return this->sqlFileName_ != nullptr;};
      void deleteSqlFileName() { this->sqlFileName_ = nullptr;};
      inline string getSqlFileName() const { DARABONBA_PTR_GET_DEFAULT(sqlFileName_, "") };
      inline Data& setSqlFileName(string sqlFileName) { DARABONBA_PTR_SET_VALUE(sqlFileName_, sqlFileName) };


      // sqlFileOnOss Field Functions 
      bool hasSqlFileOnOss() const { return this->sqlFileOnOss_ != nullptr;};
      void deleteSqlFileOnOss() { this->sqlFileOnOss_ = nullptr;};
      inline string getSqlFileOnOss() const { DARABONBA_PTR_GET_DEFAULT(sqlFileOnOss_, "") };
      inline Data& setSqlFileOnOss(string sqlFileOnOss) { DARABONBA_PTR_SET_VALUE(sqlFileOnOss_, sqlFileOnOss) };


      // sqlFilePath Field Functions 
      bool hasSqlFilePath() const { return this->sqlFilePath_ != nullptr;};
      void deleteSqlFilePath() { this->sqlFilePath_ = nullptr;};
      inline string getSqlFilePath() const { DARABONBA_PTR_GET_DEFAULT(sqlFilePath_, "") };
      inline Data& setSqlFilePath(string sqlFilePath) { DARABONBA_PTR_SET_VALUE(sqlFilePath_, sqlFilePath) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workDir Field Functions 
      bool hasWorkDir() const { return this->workDir_ != nullptr;};
      void deleteWorkDir() { this->workDir_ = nullptr;};
      inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
      inline Data& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    protected:
      // The path in which the files are archived.
      shared_ptr<string> archiveFolder_ {};
      // The command that was run to start the stress testing task.
      shared_ptr<string> benchCmd_ {};
      // The path to the JAR file that is used for stress testing.
      shared_ptr<string> clientJarPath_ {};
      // The path to the JAR file that is stored in OSS. The JAR file is used for stress testing.
      shared_ptr<string> jarOnOss_ {};
      // The command that was run to preload the file that stores the analysis result of full SQL statistics.
      shared_ptr<string> loadCmd_ {};
      // The name of the metadata file.
      shared_ptr<string> metaFileName_ {};
      // The name of the metadata file stored in Object Storage Service (OSS).
      shared_ptr<string> metaFileOnOss_ {};
      // The path to the metadata file.
      shared_ptr<string> metaFilePath_ {};
      // The command that was run to parse the file that stores the analysis result of full SQL statistics.
      shared_ptr<string> parseCmd_ {};
      // The path to the file that is parsed. The file stores the analysis result of full SQL statistics.
      shared_ptr<string> parseFilePath_ {};
      // The location where the RocksDB storage system is deployed in the stress testing client.
      shared_ptr<string> rocksDbPath_ {};
      // The name of the file that stores the analysis result of full SQL statistics.
      shared_ptr<string> sqlFileName_ {};
      // The name of the file that stores the analysis result of full SQL statistics and that is stored in OSS.
      shared_ptr<string> sqlFileOnOss_ {};
      // The path to the file that stores the analysis result of full SQL statistics.
      shared_ptr<string> sqlFilePath_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The Alibaba Cloud account ID.
      shared_ptr<string> userId_ {};
      // The path of the temporary directory that is generated for stress testing.
      shared_ptr<string> workDir_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCloudbenchTaskConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCloudbenchTaskConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCloudbenchTaskConfigResponseBody::Data) };
    inline DescribeCloudbenchTaskConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCloudbenchTaskConfigResponseBody::Data) };
    inline DescribeCloudbenchTaskConfigResponseBody& setData(const DescribeCloudbenchTaskConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudbenchTaskConfigResponseBody& setData(DescribeCloudbenchTaskConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudbenchTaskConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudbenchTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCloudbenchTaskConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information, including the error codes and the number of entries that are returned.
    shared_ptr<DescribeCloudbenchTaskConfigResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
