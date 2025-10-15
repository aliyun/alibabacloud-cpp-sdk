// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSERESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPARSERESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetParseResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(providerType, providerType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(resultUrl, resultUrl_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(providerType, providerType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(resultUrl, resultUrl_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetParseResultResponseBodyData() = default ;
    GetParseResultResponseBodyData(const GetParseResultResponseBodyData &) = default ;
    GetParseResultResponseBodyData(GetParseResultResponseBodyData &&) = default ;
    GetParseResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseResultResponseBodyData() = default ;
    GetParseResultResponseBodyData& operator=(const GetParseResultResponseBodyData &) = default ;
    GetParseResultResponseBodyData& operator=(GetParseResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileType_ == nullptr
        && return this->providerType_ == nullptr && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->resultUrl_ == nullptr && return this->status_ == nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetParseResultResponseBodyData& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string providerType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline GetParseResultResponseBodyData& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParseResultResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & result() const { DARABONBA_GET(result_) };
    Darabonba::Json & result() { DARABONBA_GET(result_) };
    inline GetParseResultResponseBodyData& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline GetParseResultResponseBodyData& setResult(Darabonba::Json & result) { DARABONBA_SET_RVALUE(result_, result) };


    // resultUrl Field Functions 
    bool hasResultUrl() const { return this->resultUrl_ != nullptr;};
    void deleteResultUrl() { this->resultUrl_ = nullptr;};
    inline string resultUrl() const { DARABONBA_PTR_GET_DEFAULT(resultUrl_, "") };
    inline GetParseResultResponseBodyData& setResultUrl(string resultUrl) { DARABONBA_PTR_SET_VALUE(resultUrl_, resultUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetParseResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> providerType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    Darabonba::Json result_ = nullptr;
    std::shared_ptr<string> resultUrl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
