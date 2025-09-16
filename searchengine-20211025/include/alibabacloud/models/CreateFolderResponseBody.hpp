// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFolderResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateFolderResponseBody() = default ;
    CreateFolderResponseBody(const CreateFolderResponseBody &) = default ;
    CreateFolderResponseBody(CreateFolderResponseBody &&) = default ;
    CreateFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFolderResponseBody() = default ;
    CreateFolderResponseBody& operator=(const CreateFolderResponseBody &) = default ;
    CreateFolderResponseBody& operator=(CreateFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateFolderResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateFolderResponseBodyResult) };
    inline CreateFolderResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateFolderResponseBodyResult) };
    inline CreateFolderResponseBody& setResult(const CreateFolderResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateFolderResponseBody& setResult(CreateFolderResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // NodeVO
    std::shared_ptr<CreateFolderResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
