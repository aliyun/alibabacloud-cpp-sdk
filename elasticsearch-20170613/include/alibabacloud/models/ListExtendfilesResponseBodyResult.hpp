// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTENDFILESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTENDFILESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListExtendfilesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExtendfilesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListExtendfilesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListExtendfilesResponseBodyResult() = default ;
    ListExtendfilesResponseBodyResult(const ListExtendfilesResponseBodyResult &) = default ;
    ListExtendfilesResponseBodyResult(ListExtendfilesResponseBodyResult &&) = default ;
    ListExtendfilesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExtendfilesResponseBodyResult() = default ;
    ListExtendfilesResponseBodyResult& operator=(const ListExtendfilesResponseBodyResult &) = default ;
    ListExtendfilesResponseBodyResult& operator=(ListExtendfilesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filePath_ != nullptr
        && this->fileSize_ != nullptr && this->name_ != nullptr && this->sourceType_ != nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListExtendfilesResponseBodyResult& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline ListExtendfilesResponseBodyResult& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExtendfilesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListExtendfilesResponseBodyResult& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The path of the driver file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The size of the driver file.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The name of the driver file.
    std::shared_ptr<string> name_ = nullptr;
    // The source type.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
