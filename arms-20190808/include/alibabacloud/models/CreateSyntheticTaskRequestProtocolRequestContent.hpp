// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTPROTOCOLREQUESTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTPROTOCOLREQUESTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestProtocolRequestContentBody.hpp>
#include <vector>
#include <alibabacloud/models/CreateSyntheticTaskRequestProtocolRequestContentHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestProtocolRequestContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestProtocolRequestContent& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Method, method_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestProtocolRequestContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
    };
    CreateSyntheticTaskRequestProtocolRequestContent() = default ;
    CreateSyntheticTaskRequestProtocolRequestContent(const CreateSyntheticTaskRequestProtocolRequestContent &) = default ;
    CreateSyntheticTaskRequestProtocolRequestContent(CreateSyntheticTaskRequestProtocolRequestContent &&) = default ;
    CreateSyntheticTaskRequestProtocolRequestContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestProtocolRequestContent() = default ;
    CreateSyntheticTaskRequestProtocolRequestContent& operator=(const CreateSyntheticTaskRequestProtocolRequestContent &) = default ;
    CreateSyntheticTaskRequestProtocolRequestContent& operator=(CreateSyntheticTaskRequestProtocolRequestContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->header_ != nullptr && this->method_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::CreateSyntheticTaskRequestProtocolRequestContentBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateSyntheticTaskRequestProtocolRequestContentBody) };
    inline Models::CreateSyntheticTaskRequestProtocolRequestContentBody body() { DARABONBA_PTR_GET(body_, Models::CreateSyntheticTaskRequestProtocolRequestContentBody) };
    inline CreateSyntheticTaskRequestProtocolRequestContent& setBody(const Models::CreateSyntheticTaskRequestProtocolRequestContentBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSyntheticTaskRequestProtocolRequestContent& setBody(Models::CreateSyntheticTaskRequestProtocolRequestContentBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader> & header() const { DARABONBA_PTR_GET_CONST(header_, vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader>) };
    inline vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader> header() { DARABONBA_PTR_GET(header_, vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader>) };
    inline CreateSyntheticTaskRequestProtocolRequestContent& setHeader(const vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline CreateSyntheticTaskRequestProtocolRequestContent& setHeader(vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateSyntheticTaskRequestProtocolRequestContent& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


  protected:
    // The custom body of a request to initiate an API performance synthetic monitoring task.
    std::shared_ptr<Models::CreateSyntheticTaskRequestProtocolRequestContentBody> body_ = nullptr;
    // The custom header of a request to initiate an API performance synthetic monitoring task.
    std::shared_ptr<vector<Models::CreateSyntheticTaskRequestProtocolRequestContentHeader>> header_ = nullptr;
    // The request method.
    // 
    // *   POST
    // *   GET
    std::shared_ptr<string> method_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
