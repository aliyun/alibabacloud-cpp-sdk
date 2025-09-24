// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECODESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECODESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateCodeSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCodeSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCodeSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateCodeSourceResponseBody() = default ;
    UpdateCodeSourceResponseBody(const UpdateCodeSourceResponseBody &) = default ;
    UpdateCodeSourceResponseBody(UpdateCodeSourceResponseBody &&) = default ;
    UpdateCodeSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCodeSourceResponseBody() = default ;
    UpdateCodeSourceResponseBody& operator=(const UpdateCodeSourceResponseBody &) = default ;
    UpdateCodeSourceResponseBody& operator=(UpdateCodeSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeSourceId_ != nullptr
        && this->requestId_ != nullptr; };
    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string codeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline UpdateCodeSourceResponseBody& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCodeSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the code build.
    std::shared_ptr<string> codeSourceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
