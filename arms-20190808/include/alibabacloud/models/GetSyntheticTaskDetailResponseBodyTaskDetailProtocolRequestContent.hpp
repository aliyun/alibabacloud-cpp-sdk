// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILPROTOCOLREQUESTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILPROTOCOLREQUESTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody.hpp>
#include <vector>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Method, method_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent(const GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent(GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->header_ != nullptr && this->method_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody body() { DARABONBA_PTR_GET(body_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& setBody(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& setBody(Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader> & header() const { DARABONBA_PTR_GET_CONST(header_, vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader>) };
    inline vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader> header() { DARABONBA_PTR_GET(header_, vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader>) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& setHeader(const vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& setHeader(vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContent& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


  protected:
    // The content of the request body.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody> body_ = nullptr;
    // The request header.
    std::shared_ptr<vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentHeader>> header_ = nullptr;
    // The request method. Valid values:
    // 
    // *   POST
    // *   GET
    std::shared_ptr<string> method_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
