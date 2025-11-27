// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSTORYFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSTORYFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddStoryFilesResponseBodyFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddStoryFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddStoryFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddStoryFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddStoryFilesResponseBody() = default ;
    AddStoryFilesResponseBody(const AddStoryFilesResponseBody &) = default ;
    AddStoryFilesResponseBody(AddStoryFilesResponseBody &&) = default ;
    AddStoryFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddStoryFilesResponseBody() = default ;
    AddStoryFilesResponseBody& operator=(const AddStoryFilesResponseBody &) = default ;
    AddStoryFilesResponseBody& operator=(AddStoryFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->files_ == nullptr
        && return this->requestId_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<AddStoryFilesResponseBodyFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<AddStoryFilesResponseBodyFiles>) };
    inline vector<AddStoryFilesResponseBodyFiles> files() { DARABONBA_PTR_GET(files_, vector<AddStoryFilesResponseBodyFiles>) };
    inline AddStoryFilesResponseBody& setFiles(const vector<AddStoryFilesResponseBodyFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline AddStoryFilesResponseBody& setFiles(vector<AddStoryFilesResponseBodyFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddStoryFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that were added.
    std::shared_ptr<vector<AddStoryFilesResponseBodyFiles>> files_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
