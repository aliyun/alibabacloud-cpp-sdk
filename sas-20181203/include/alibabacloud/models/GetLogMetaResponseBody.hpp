// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLogMetaResponseBodyLogMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLogMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogMeta, logMeta_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogMeta, logMeta_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLogMetaResponseBody() = default ;
    GetLogMetaResponseBody(const GetLogMetaResponseBody &) = default ;
    GetLogMetaResponseBody(GetLogMetaResponseBody &&) = default ;
    GetLogMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogMetaResponseBody() = default ;
    GetLogMetaResponseBody& operator=(const GetLogMetaResponseBody &) = default ;
    GetLogMetaResponseBody& operator=(GetLogMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logMeta_ != nullptr
        && this->requestId_ != nullptr; };
    // logMeta Field Functions 
    bool hasLogMeta() const { return this->logMeta_ != nullptr;};
    void deleteLogMeta() { this->logMeta_ = nullptr;};
    inline const GetLogMetaResponseBodyLogMeta & logMeta() const { DARABONBA_PTR_GET_CONST(logMeta_, GetLogMetaResponseBodyLogMeta) };
    inline GetLogMetaResponseBodyLogMeta logMeta() { DARABONBA_PTR_GET(logMeta_, GetLogMetaResponseBodyLogMeta) };
    inline GetLogMetaResponseBody& setLogMeta(const GetLogMetaResponseBodyLogMeta & logMeta) { DARABONBA_PTR_SET_VALUE(logMeta_, logMeta) };
    inline GetLogMetaResponseBody& setLogMeta(GetLogMetaResponseBodyLogMeta && logMeta) { DARABONBA_PTR_SET_RVALUE(logMeta_, logMeta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data of a data shipping task.
    std::shared_ptr<GetLogMetaResponseBodyLogMeta> logMeta_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
