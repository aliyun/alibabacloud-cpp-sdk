// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetFileResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(fullPathName, fullPathName_);
      DARABONBA_PTR_TO_JSON(isDir, isDir_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(fullPathName, fullPathName_);
      DARABONBA_PTR_FROM_JSON(isDir, isDir_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
    };
    GetFileResponseBodyResult() = default ;
    GetFileResponseBodyResult(const GetFileResponseBodyResult &) = default ;
    GetFileResponseBodyResult(GetFileResponseBodyResult &&) = default ;
    GetFileResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyResult() = default ;
    GetFileResponseBodyResult& operator=(const GetFileResponseBodyResult &) = default ;
    GetFileResponseBodyResult& operator=(GetFileResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->dataSource_ != nullptr && this->extend_ != nullptr && this->fullPathName_ != nullptr && this->isDir_ != nullptr && this->name_ != nullptr
        && this->partition_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetFileResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline GetFileResponseBodyResult& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const map<string, vector<string>> & extend() const { DARABONBA_PTR_GET_CONST(extend_, map<string, vector<string>>) };
    inline map<string, vector<string>> extend() { DARABONBA_PTR_GET(extend_, map<string, vector<string>>) };
    inline GetFileResponseBodyResult& setExtend(const map<string, vector<string>> & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline GetFileResponseBodyResult& setExtend(map<string, vector<string>> && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // fullPathName Field Functions 
    bool hasFullPathName() const { return this->fullPathName_ != nullptr;};
    void deleteFullPathName() { this->fullPathName_ = nullptr;};
    inline string fullPathName() const { DARABONBA_PTR_GET_DEFAULT(fullPathName_, "") };
    inline GetFileResponseBodyResult& setFullPathName(string fullPathName) { DARABONBA_PTR_SET_VALUE(fullPathName_, fullPathName) };


    // isDir Field Functions 
    bool hasIsDir() const { return this->isDir_ != nullptr;};
    void deleteIsDir() { this->isDir_ = nullptr;};
    inline bool isDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
    inline GetFileResponseBodyResult& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFileResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int64_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0L) };
    inline GetFileResponseBodyResult& setPartition(int64_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


  protected:
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
    // The data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // Extended information
    std::shared_ptr<map<string, vector<string>>> extend_ = nullptr;
    // The full path of the file.
    std::shared_ptr<string> fullPathName_ = nullptr;
    // Indicates whether the file is a directory.
    std::shared_ptr<bool> isDir_ = nullptr;
    // The file name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of shards.
    std::shared_ptr<int64_t> partition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
