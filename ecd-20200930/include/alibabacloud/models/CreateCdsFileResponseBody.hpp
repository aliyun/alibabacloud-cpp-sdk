// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCdsFileResponseBodyFileModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCdsFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdsFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileModel, fileModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdsFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileModel, fileModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCdsFileResponseBody() = default ;
    CreateCdsFileResponseBody(const CreateCdsFileResponseBody &) = default ;
    CreateCdsFileResponseBody(CreateCdsFileResponseBody &&) = default ;
    CreateCdsFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdsFileResponseBody() = default ;
    CreateCdsFileResponseBody& operator=(const CreateCdsFileResponseBody &) = default ;
    CreateCdsFileResponseBody& operator=(CreateCdsFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileModel_ != nullptr
        && this->requestId_ != nullptr; };
    // fileModel Field Functions 
    bool hasFileModel() const { return this->fileModel_ != nullptr;};
    void deleteFileModel() { this->fileModel_ = nullptr;};
    inline const CreateCdsFileResponseBodyFileModel & fileModel() const { DARABONBA_PTR_GET_CONST(fileModel_, CreateCdsFileResponseBodyFileModel) };
    inline CreateCdsFileResponseBodyFileModel fileModel() { DARABONBA_PTR_GET(fileModel_, CreateCdsFileResponseBodyFileModel) };
    inline CreateCdsFileResponseBody& setFileModel(const CreateCdsFileResponseBodyFileModel & fileModel) { DARABONBA_PTR_SET_VALUE(fileModel_, fileModel) };
    inline CreateCdsFileResponseBody& setFileModel(CreateCdsFileResponseBodyFileModel && fileModel) { DARABONBA_PTR_SET_RVALUE(fileModel_, fileModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateCdsFileResponseBodyFileModel> fileModel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
