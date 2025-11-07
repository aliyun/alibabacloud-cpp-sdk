// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKGITREPOFILEEXISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKGITREPOFILEEXISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CheckGitRepoFileExistsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckGitRepoFileExistsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileExists, fileExists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckGitRepoFileExistsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileExists, fileExists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckGitRepoFileExistsResponseBody() = default ;
    CheckGitRepoFileExistsResponseBody(const CheckGitRepoFileExistsResponseBody &) = default ;
    CheckGitRepoFileExistsResponseBody(CheckGitRepoFileExistsResponseBody &&) = default ;
    CheckGitRepoFileExistsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckGitRepoFileExistsResponseBody() = default ;
    CheckGitRepoFileExistsResponseBody& operator=(const CheckGitRepoFileExistsResponseBody &) = default ;
    CheckGitRepoFileExistsResponseBody& operator=(CheckGitRepoFileExistsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileExists_ == nullptr
        && return this->requestId_ == nullptr; };
    // fileExists Field Functions 
    bool hasFileExists() const { return this->fileExists_ != nullptr;};
    void deleteFileExists() { this->fileExists_ = nullptr;};
    inline bool fileExists() const { DARABONBA_PTR_GET_DEFAULT(fileExists_, false) };
    inline CheckGitRepoFileExistsResponseBody& setFileExists(bool fileExists) { DARABONBA_PTR_SET_VALUE(fileExists_, fileExists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckGitRepoFileExistsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> fileExists_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
