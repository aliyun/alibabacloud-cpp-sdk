// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEMANTICQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEMANTICQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SemanticQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SemanticQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SemanticQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SemanticQueryResponseBody() = default ;
    SemanticQueryResponseBody(const SemanticQueryResponseBody &) = default ;
    SemanticQueryResponseBody(SemanticQueryResponseBody &&) = default ;
    SemanticQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SemanticQueryResponseBody() = default ;
    SemanticQueryResponseBody& operator=(const SemanticQueryResponseBody &) = default ;
    SemanticQueryResponseBody& operator=(SemanticQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->files_ != nullptr
        && this->requestId_ != nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<File> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<File>) };
    inline vector<File> files() { DARABONBA_PTR_GET(files_, vector<File>) };
    inline SemanticQueryResponseBody& setFiles(const vector<File> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SemanticQueryResponseBody& setFiles(vector<File> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SemanticQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The files.
    std::shared_ptr<vector<File>> files_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
