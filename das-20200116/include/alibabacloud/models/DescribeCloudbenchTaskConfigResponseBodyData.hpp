// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudbenchTaskConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudbenchTaskConfigResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCloudbenchTaskConfigResponseBodyData& obj) { 
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
    DescribeCloudbenchTaskConfigResponseBodyData() = default ;
    DescribeCloudbenchTaskConfigResponseBodyData(const DescribeCloudbenchTaskConfigResponseBodyData &) = default ;
    DescribeCloudbenchTaskConfigResponseBodyData(DescribeCloudbenchTaskConfigResponseBodyData &&) = default ;
    DescribeCloudbenchTaskConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudbenchTaskConfigResponseBodyData() = default ;
    DescribeCloudbenchTaskConfigResponseBodyData& operator=(const DescribeCloudbenchTaskConfigResponseBodyData &) = default ;
    DescribeCloudbenchTaskConfigResponseBodyData& operator=(DescribeCloudbenchTaskConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveFolder_ == nullptr
        && return this->benchCmd_ == nullptr && return this->clientJarPath_ == nullptr && return this->jarOnOss_ == nullptr && return this->loadCmd_ == nullptr && return this->metaFileName_ == nullptr
        && return this->metaFileOnOss_ == nullptr && return this->metaFilePath_ == nullptr && return this->parseCmd_ == nullptr && return this->parseFilePath_ == nullptr && return this->rocksDbPath_ == nullptr
        && return this->sqlFileName_ == nullptr && return this->sqlFileOnOss_ == nullptr && return this->sqlFilePath_ == nullptr && return this->taskId_ == nullptr && return this->userId_ == nullptr
        && return this->workDir_ == nullptr; };
    // archiveFolder Field Functions 
    bool hasArchiveFolder() const { return this->archiveFolder_ != nullptr;};
    void deleteArchiveFolder() { this->archiveFolder_ = nullptr;};
    inline string archiveFolder() const { DARABONBA_PTR_GET_DEFAULT(archiveFolder_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setArchiveFolder(string archiveFolder) { DARABONBA_PTR_SET_VALUE(archiveFolder_, archiveFolder) };


    // benchCmd Field Functions 
    bool hasBenchCmd() const { return this->benchCmd_ != nullptr;};
    void deleteBenchCmd() { this->benchCmd_ = nullptr;};
    inline string benchCmd() const { DARABONBA_PTR_GET_DEFAULT(benchCmd_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setBenchCmd(string benchCmd) { DARABONBA_PTR_SET_VALUE(benchCmd_, benchCmd) };


    // clientJarPath Field Functions 
    bool hasClientJarPath() const { return this->clientJarPath_ != nullptr;};
    void deleteClientJarPath() { this->clientJarPath_ = nullptr;};
    inline string clientJarPath() const { DARABONBA_PTR_GET_DEFAULT(clientJarPath_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setClientJarPath(string clientJarPath) { DARABONBA_PTR_SET_VALUE(clientJarPath_, clientJarPath) };


    // jarOnOss Field Functions 
    bool hasJarOnOss() const { return this->jarOnOss_ != nullptr;};
    void deleteJarOnOss() { this->jarOnOss_ = nullptr;};
    inline string jarOnOss() const { DARABONBA_PTR_GET_DEFAULT(jarOnOss_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setJarOnOss(string jarOnOss) { DARABONBA_PTR_SET_VALUE(jarOnOss_, jarOnOss) };


    // loadCmd Field Functions 
    bool hasLoadCmd() const { return this->loadCmd_ != nullptr;};
    void deleteLoadCmd() { this->loadCmd_ = nullptr;};
    inline string loadCmd() const { DARABONBA_PTR_GET_DEFAULT(loadCmd_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setLoadCmd(string loadCmd) { DARABONBA_PTR_SET_VALUE(loadCmd_, loadCmd) };


    // metaFileName Field Functions 
    bool hasMetaFileName() const { return this->metaFileName_ != nullptr;};
    void deleteMetaFileName() { this->metaFileName_ = nullptr;};
    inline string metaFileName() const { DARABONBA_PTR_GET_DEFAULT(metaFileName_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setMetaFileName(string metaFileName) { DARABONBA_PTR_SET_VALUE(metaFileName_, metaFileName) };


    // metaFileOnOss Field Functions 
    bool hasMetaFileOnOss() const { return this->metaFileOnOss_ != nullptr;};
    void deleteMetaFileOnOss() { this->metaFileOnOss_ = nullptr;};
    inline string metaFileOnOss() const { DARABONBA_PTR_GET_DEFAULT(metaFileOnOss_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setMetaFileOnOss(string metaFileOnOss) { DARABONBA_PTR_SET_VALUE(metaFileOnOss_, metaFileOnOss) };


    // metaFilePath Field Functions 
    bool hasMetaFilePath() const { return this->metaFilePath_ != nullptr;};
    void deleteMetaFilePath() { this->metaFilePath_ = nullptr;};
    inline string metaFilePath() const { DARABONBA_PTR_GET_DEFAULT(metaFilePath_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setMetaFilePath(string metaFilePath) { DARABONBA_PTR_SET_VALUE(metaFilePath_, metaFilePath) };


    // parseCmd Field Functions 
    bool hasParseCmd() const { return this->parseCmd_ != nullptr;};
    void deleteParseCmd() { this->parseCmd_ = nullptr;};
    inline string parseCmd() const { DARABONBA_PTR_GET_DEFAULT(parseCmd_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setParseCmd(string parseCmd) { DARABONBA_PTR_SET_VALUE(parseCmd_, parseCmd) };


    // parseFilePath Field Functions 
    bool hasParseFilePath() const { return this->parseFilePath_ != nullptr;};
    void deleteParseFilePath() { this->parseFilePath_ = nullptr;};
    inline string parseFilePath() const { DARABONBA_PTR_GET_DEFAULT(parseFilePath_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setParseFilePath(string parseFilePath) { DARABONBA_PTR_SET_VALUE(parseFilePath_, parseFilePath) };


    // rocksDbPath Field Functions 
    bool hasRocksDbPath() const { return this->rocksDbPath_ != nullptr;};
    void deleteRocksDbPath() { this->rocksDbPath_ = nullptr;};
    inline string rocksDbPath() const { DARABONBA_PTR_GET_DEFAULT(rocksDbPath_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setRocksDbPath(string rocksDbPath) { DARABONBA_PTR_SET_VALUE(rocksDbPath_, rocksDbPath) };


    // sqlFileName Field Functions 
    bool hasSqlFileName() const { return this->sqlFileName_ != nullptr;};
    void deleteSqlFileName() { this->sqlFileName_ = nullptr;};
    inline string sqlFileName() const { DARABONBA_PTR_GET_DEFAULT(sqlFileName_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setSqlFileName(string sqlFileName) { DARABONBA_PTR_SET_VALUE(sqlFileName_, sqlFileName) };


    // sqlFileOnOss Field Functions 
    bool hasSqlFileOnOss() const { return this->sqlFileOnOss_ != nullptr;};
    void deleteSqlFileOnOss() { this->sqlFileOnOss_ = nullptr;};
    inline string sqlFileOnOss() const { DARABONBA_PTR_GET_DEFAULT(sqlFileOnOss_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setSqlFileOnOss(string sqlFileOnOss) { DARABONBA_PTR_SET_VALUE(sqlFileOnOss_, sqlFileOnOss) };


    // sqlFilePath Field Functions 
    bool hasSqlFilePath() const { return this->sqlFilePath_ != nullptr;};
    void deleteSqlFilePath() { this->sqlFilePath_ = nullptr;};
    inline string sqlFilePath() const { DARABONBA_PTR_GET_DEFAULT(sqlFilePath_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setSqlFilePath(string sqlFilePath) { DARABONBA_PTR_SET_VALUE(sqlFilePath_, sqlFilePath) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string workDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline DescribeCloudbenchTaskConfigResponseBodyData& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


  protected:
    // The path in which the files are archived.
    std::shared_ptr<string> archiveFolder_ = nullptr;
    // The command that was run to start the stress testing task.
    std::shared_ptr<string> benchCmd_ = nullptr;
    // The path to the JAR file that is used for stress testing.
    std::shared_ptr<string> clientJarPath_ = nullptr;
    // The path to the JAR file that is stored in OSS. The JAR file is used for stress testing.
    std::shared_ptr<string> jarOnOss_ = nullptr;
    // The command that was run to preload the file that stores the analysis result of full SQL statistics.
    std::shared_ptr<string> loadCmd_ = nullptr;
    // The name of the metadata file.
    std::shared_ptr<string> metaFileName_ = nullptr;
    // The name of the metadata file stored in Object Storage Service (OSS).
    std::shared_ptr<string> metaFileOnOss_ = nullptr;
    // The path to the metadata file.
    std::shared_ptr<string> metaFilePath_ = nullptr;
    // The command that was run to parse the file that stores the analysis result of full SQL statistics.
    std::shared_ptr<string> parseCmd_ = nullptr;
    // The path to the file that is parsed. The file stores the analysis result of full SQL statistics.
    std::shared_ptr<string> parseFilePath_ = nullptr;
    // The location where the RocksDB storage system is deployed in the stress testing client.
    std::shared_ptr<string> rocksDbPath_ = nullptr;
    // The name of the file that stores the analysis result of full SQL statistics.
    std::shared_ptr<string> sqlFileName_ = nullptr;
    // The name of the file that stores the analysis result of full SQL statistics and that is stored in OSS.
    std::shared_ptr<string> sqlFileOnOss_ = nullptr;
    // The path to the file that stores the analysis result of full SQL statistics.
    std::shared_ptr<string> sqlFilePath_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The Alibaba Cloud account ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The path of the temporary directory that is generated for stress testing.
    std::shared_ptr<string> workDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
