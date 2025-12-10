// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXPERIMENTFOLDERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXPERIMENTFOLDERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteExperimentFolderResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class DeleteExperimentFolderResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExperimentFolderResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExperimentFolderResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteExperimentFolderResponse() = default ;
    DeleteExperimentFolderResponse(const DeleteExperimentFolderResponse &) = default ;
    DeleteExperimentFolderResponse(DeleteExperimentFolderResponse &&) = default ;
    DeleteExperimentFolderResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExperimentFolderResponse() = default ;
    DeleteExperimentFolderResponse& operator=(const DeleteExperimentFolderResponse &) = default ;
    DeleteExperimentFolderResponse& operator=(DeleteExperimentFolderResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DeleteExperimentFolderResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteExperimentFolderResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteExperimentFolderResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteExperimentFolderResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteExperimentFolderResponseBody) };
    inline DeleteExperimentFolderResponseBody body() { DARABONBA_PTR_GET(body_, DeleteExperimentFolderResponseBody) };
    inline DeleteExperimentFolderResponse& setBody(const DeleteExperimentFolderResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteExperimentFolderResponse& setBody(DeleteExperimentFolderResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteExperimentFolderResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
