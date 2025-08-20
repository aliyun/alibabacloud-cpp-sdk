// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFOLDERTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFOLDERTREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFolderTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFolderTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFolderTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkTemplateFolderTreeResponseBody() = default ;
    GetSparkTemplateFolderTreeResponseBody(const GetSparkTemplateFolderTreeResponseBody &) = default ;
    GetSparkTemplateFolderTreeResponseBody(GetSparkTemplateFolderTreeResponseBody &&) = default ;
    GetSparkTemplateFolderTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFolderTreeResponseBody() = default ;
    GetSparkTemplateFolderTreeResponseBody& operator=(const GetSparkTemplateFolderTreeResponseBody &) = default ;
    GetSparkTemplateFolderTreeResponseBody& operator=(GetSparkTemplateFolderTreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetSparkTemplateFolderTreeResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkTemplateFolderTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The directory structure of Spark applications, which is in the tree format. Fields in the response parameter:
    // 
    // *   **Uid**: the UID of the Alibaba Cloud account.
    // 
    // *   **Type**: the application template type. Valid values: **FOLDER**
    // 
    // *   **Parent**: indicates whether a child directory exists. Valid values:
    // 
    //     *   **0**: no.
    //     *   **-1**: yes.
    // 
    // *   **Children**: the child directory.
    // 
    // *   **LastModified**: the time when applications in the directory are last modified. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // *   **Name**: the name of the directory.
    // 
    // *   **Id**: the directory ID.
    std::shared_ptr<string> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
