// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITROUTINESTAGINGCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMMITROUTINESTAGINGCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CommitRoutineStagingCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitRoutineStagingCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CommitRoutineStagingCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CommitRoutineStagingCodeResponseBody() = default ;
    CommitRoutineStagingCodeResponseBody(const CommitRoutineStagingCodeResponseBody &) = default ;
    CommitRoutineStagingCodeResponseBody(CommitRoutineStagingCodeResponseBody &&) = default ;
    CommitRoutineStagingCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitRoutineStagingCodeResponseBody() = default ;
    CommitRoutineStagingCodeResponseBody& operator=(const CommitRoutineStagingCodeResponseBody &) = default ;
    CommitRoutineStagingCodeResponseBody& operator=(CommitRoutineStagingCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersion_ == nullptr
        && return this->requestId_ == nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline CommitRoutineStagingCodeResponseBody& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CommitRoutineStagingCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The version number of the newly generated code.
    std::shared_ptr<string> codeVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
