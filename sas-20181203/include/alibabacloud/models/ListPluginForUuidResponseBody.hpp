// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPluginForUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginForUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisUuidTargetPluginConfigList, aegisUuidTargetPluginConfigList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginForUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisUuidTargetPluginConfigList, aegisUuidTargetPluginConfigList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPluginForUuidResponseBody() = default ;
    ListPluginForUuidResponseBody(const ListPluginForUuidResponseBody &) = default ;
    ListPluginForUuidResponseBody(ListPluginForUuidResponseBody &&) = default ;
    ListPluginForUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginForUuidResponseBody() = default ;
    ListPluginForUuidResponseBody& operator=(const ListPluginForUuidResponseBody &) = default ;
    ListPluginForUuidResponseBody& operator=(ListPluginForUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aegisUuidTargetPluginConfigList_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // aegisUuidTargetPluginConfigList Field Functions 
    bool hasAegisUuidTargetPluginConfigList() const { return this->aegisUuidTargetPluginConfigList_ != nullptr;};
    void deleteAegisUuidTargetPluginConfigList() { this->aegisUuidTargetPluginConfigList_ = nullptr;};
    inline const vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList> & aegisUuidTargetPluginConfigList() const { DARABONBA_PTR_GET_CONST(aegisUuidTargetPluginConfigList_, vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList>) };
    inline vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList> aegisUuidTargetPluginConfigList() { DARABONBA_PTR_GET(aegisUuidTargetPluginConfigList_, vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList>) };
    inline ListPluginForUuidResponseBody& setAegisUuidTargetPluginConfigList(const vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList> & aegisUuidTargetPluginConfigList) { DARABONBA_PTR_SET_VALUE(aegisUuidTargetPluginConfigList_, aegisUuidTargetPluginConfigList) };
    inline ListPluginForUuidResponseBody& setAegisUuidTargetPluginConfigList(vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList> && aegisUuidTargetPluginConfigList) { DARABONBA_PTR_SET_RVALUE(aegisUuidTargetPluginConfigList_, aegisUuidTargetPluginConfigList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListPluginForUuidResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPluginForUuidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginForUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the plug-ins.
    std::shared_ptr<vector<ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList>> aegisUuidTargetPluginConfigList_ = nullptr;
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
