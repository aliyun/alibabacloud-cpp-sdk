// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHROUTINECODEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHROUTINECODEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PublishRoutineCodeVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRoutineCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRoutineCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublishRoutineCodeVersionResponseBody() = default ;
    PublishRoutineCodeVersionResponseBody(const PublishRoutineCodeVersionResponseBody &) = default ;
    PublishRoutineCodeVersionResponseBody(PublishRoutineCodeVersionResponseBody &&) = default ;
    PublishRoutineCodeVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRoutineCodeVersionResponseBody() = default ;
    PublishRoutineCodeVersionResponseBody& operator=(const PublishRoutineCodeVersionResponseBody &) = default ;
    PublishRoutineCodeVersionResponseBody& operator=(PublishRoutineCodeVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersion_ != nullptr
        && this->requestId_ != nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline PublishRoutineCodeVersionResponseBody& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishRoutineCodeVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code version.
    std::shared_ptr<string> codeVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
