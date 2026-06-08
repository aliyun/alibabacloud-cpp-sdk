// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCRIPTFILENAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCRIPTFILENAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetScriptFileNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScriptFileNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetScriptFileNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetScriptFileNamesResponseBody() = default ;
    GetScriptFileNamesResponseBody(const GetScriptFileNamesResponseBody &) = default ;
    GetScriptFileNamesResponseBody(GetScriptFileNamesResponseBody &&) = default ;
    GetScriptFileNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScriptFileNamesResponseBody() = default ;
    GetScriptFileNamesResponseBody& operator=(const GetScriptFileNamesResponseBody &) = default ;
    GetScriptFileNamesResponseBody& operator=(GetScriptFileNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(pathName, pathName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(pathName, pathName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->fileName_ == nullptr && this->modifyTime_ == nullptr && this->pathName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Result& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Result& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // pathName Field Functions 
      bool hasPathName() const { return this->pathName_ != nullptr;};
      void deletePathName() { this->pathName_ = nullptr;};
      inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
      inline Result& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    protected:
      // The time when the script file was created.
      shared_ptr<string> createTime_ {};
      // The name of the script file.
      shared_ptr<string> fileName_ {};
      // The time when the script file was last modified.
      shared_ptr<string> modifyTime_ {};
      // The path name of the script file.
      shared_ptr<string> pathName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScriptFileNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetScriptFileNamesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetScriptFileNamesResponseBody::Result>) };
    inline vector<GetScriptFileNamesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetScriptFileNamesResponseBody::Result>) };
    inline GetScriptFileNamesResponseBody& setResult(const vector<GetScriptFileNamesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetScriptFileNamesResponseBody& setResult(vector<GetScriptFileNamesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The files of the script.
    shared_ptr<vector<GetScriptFileNamesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
