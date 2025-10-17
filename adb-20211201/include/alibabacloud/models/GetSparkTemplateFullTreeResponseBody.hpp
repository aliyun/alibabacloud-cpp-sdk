// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFULLTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFULLTREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFullTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFullTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFullTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkTemplateFullTreeResponseBody() = default ;
    GetSparkTemplateFullTreeResponseBody(const GetSparkTemplateFullTreeResponseBody &) = default ;
    GetSparkTemplateFullTreeResponseBody(GetSparkTemplateFullTreeResponseBody &&) = default ;
    GetSparkTemplateFullTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFullTreeResponseBody() = default ;
    GetSparkTemplateFullTreeResponseBody& operator=(const GetSparkTemplateFullTreeResponseBody &) = default ;
    GetSparkTemplateFullTreeResponseBody& operator=(GetSparkTemplateFullTreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetSparkTemplateFullTreeResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkTemplateFullTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The directory structure of Spark applications. Fields in the response parameter:
    // 
    // *   **Uid**: the UID of the Alibaba Cloud account.
    // 
    // *   **Type**: the application template type. Valid values:
    // 
    //     *   **FOLDER**
    //     *   **FILE**
    // 
    // *   **Parent**: indicates whether a child directory exists. Valid values:
    // 
    //     *   **0**: no.
    //     *   **-1**: yes.
    // 
    // *   **Children**: the child directory.
    // 
    // *   **LastModified**: the time when applications are last modified. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // *   **AppType**: the application type. Valid values:
    // 
    //     *   **SQL**
    //     *   **STREAMING**
    //     *   **BATCH**
    // 
    // *   **Name**: the name of the directory or application.
    // 
    // *   **Id**: the directory ID or application ID.
    std::shared_ptr<string> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
