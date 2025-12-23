// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCRIPTFILENAMESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSCRIPTFILENAMESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetScriptFileNamesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScriptFileNamesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(pathName, pathName_);
    };
    friend void from_json(const Darabonba::Json& j, GetScriptFileNamesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(pathName, pathName_);
    };
    GetScriptFileNamesResponseBodyResult() = default ;
    GetScriptFileNamesResponseBodyResult(const GetScriptFileNamesResponseBodyResult &) = default ;
    GetScriptFileNamesResponseBodyResult(GetScriptFileNamesResponseBodyResult &&) = default ;
    GetScriptFileNamesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScriptFileNamesResponseBodyResult() = default ;
    GetScriptFileNamesResponseBodyResult& operator=(const GetScriptFileNamesResponseBodyResult &) = default ;
    GetScriptFileNamesResponseBodyResult& operator=(GetScriptFileNamesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->fileName_ == nullptr && return this->modifyTime_ == nullptr && return this->pathName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetScriptFileNamesResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetScriptFileNamesResponseBodyResult& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetScriptFileNamesResponseBodyResult& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline GetScriptFileNamesResponseBodyResult& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


  protected:
    // The time when the script file was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the script file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The time when the script file was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The path name of the script file.
    std::shared_ptr<string> pathName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
