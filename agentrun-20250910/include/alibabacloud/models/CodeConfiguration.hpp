// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(checksum, checksum_);
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(zipFile, zipFile_);
    };
    friend void from_json(const Darabonba::Json& j, CodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(zipFile, zipFile_);
    };
    CodeConfiguration() = default ;
    CodeConfiguration(const CodeConfiguration &) = default ;
    CodeConfiguration(CodeConfiguration &&) = default ;
    CodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeConfiguration() = default ;
    CodeConfiguration& operator=(const CodeConfiguration &) = default ;
    CodeConfiguration& operator=(CodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checksum_ == nullptr
        && return this->command_ == nullptr && return this->language_ == nullptr && return this->zipFile_ == nullptr; };
    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline CodeConfiguration& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline CodeConfiguration& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline CodeConfiguration& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CodeConfiguration& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // zipFile Field Functions 
    bool hasZipFile() const { return this->zipFile_ != nullptr;};
    void deleteZipFile() { this->zipFile_ = nullptr;};
    inline string zipFile() const { DARABONBA_PTR_GET_DEFAULT(zipFile_, "") };
    inline CodeConfiguration& setZipFile(string zipFile) { DARABONBA_PTR_SET_VALUE(zipFile_, zipFile) };


  protected:
    // 代码包的CRC-64校验值。如果提供了checksum，则函数计算会校验代码包的checksum是否和提供的一致
    std::shared_ptr<string> checksum_ = nullptr;
    // 在运行时中运行的命令（例如：[\"python\"]）
    std::shared_ptr<vector<string>> command_ = nullptr;
    // 代码运行时的编程语言，如 python3、nodejs 等
    std::shared_ptr<string> language_ = nullptr;
    // 智能体代码ZIP包的Base64编码
    std::shared_ptr<string> zipFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
