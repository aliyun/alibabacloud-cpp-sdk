// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESAIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTESAIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListESAIPInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListESAIPInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListESAIPInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListESAIPInfoResponseBody() = default ;
    ListESAIPInfoResponseBody(const ListESAIPInfoResponseBody &) = default ;
    ListESAIPInfoResponseBody(ListESAIPInfoResponseBody &&) = default ;
    ListESAIPInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListESAIPInfoResponseBody() = default ;
    ListESAIPInfoResponseBody& operator=(const ListESAIPInfoResponseBody &) = default ;
    ListESAIPInfoResponseBody& operator=(ListESAIPInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CdnIp, cdnIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CdnIp, cdnIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cdnIp_ == nullptr
        && this->ip_ == nullptr; };
      // cdnIp Field Functions 
      bool hasCdnIp() const { return this->cdnIp_ != nullptr;};
      void deleteCdnIp() { this->cdnIp_ = nullptr;};
      inline string getCdnIp() const { DARABONBA_PTR_GET_DEFAULT(cdnIp_, "") };
      inline Content& setCdnIp(string cdnIp) { DARABONBA_PTR_SET_VALUE(cdnIp_, cdnIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Content& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    protected:
      // Whether the IP address in the parameter belongs to ESA POPs.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> cdnIp_ {};
      // The IP addresses.
      shared_ptr<string> ip_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<ListESAIPInfoResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<ListESAIPInfoResponseBody::Content>) };
    inline vector<ListESAIPInfoResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<ListESAIPInfoResponseBody::Content>) };
    inline ListESAIPInfoResponseBody& setContent(const vector<ListESAIPInfoResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListESAIPInfoResponseBody& setContent(vector<ListESAIPInfoResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListESAIPInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that are returned.
    shared_ptr<vector<ListESAIPInfoResponseBody::Content>> content_ {};
    // The request ID.
    // 
    // Example D03F9502-6653-127C-8A5F-0647197\\*\\*\\*\\*\\*
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
