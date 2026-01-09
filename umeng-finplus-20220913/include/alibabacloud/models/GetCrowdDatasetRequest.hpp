// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROWDDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCROWDDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetCrowdDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrowdDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrowdDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetCrowdDatasetRequest() = default ;
    GetCrowdDatasetRequest(const GetCrowdDatasetRequest &) = default ;
    GetCrowdDatasetRequest(GetCrowdDatasetRequest &&) = default ;
    GetCrowdDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrowdDatasetRequest() = default ;
    GetCrowdDatasetRequest& operator=(const GetCrowdDatasetRequest &) = default ;
    GetCrowdDatasetRequest& operator=(GetCrowdDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Body& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    protected:
      shared_ptr<string> appId_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetCrowdDatasetRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetCrowdDatasetRequest::Body) };
    inline GetCrowdDatasetRequest::Body getBody() { DARABONBA_PTR_GET(body_, GetCrowdDatasetRequest::Body) };
    inline GetCrowdDatasetRequest& setBody(const GetCrowdDatasetRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetCrowdDatasetRequest& setBody(GetCrowdDatasetRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<GetCrowdDatasetRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
