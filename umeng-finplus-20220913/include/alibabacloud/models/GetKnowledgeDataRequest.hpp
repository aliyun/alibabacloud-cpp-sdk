// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetKnowledgeDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetKnowledgeDataRequest() = default ;
    GetKnowledgeDataRequest(const GetKnowledgeDataRequest &) = default ;
    GetKnowledgeDataRequest(GetKnowledgeDataRequest &&) = default ;
    GetKnowledgeDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeDataRequest() = default ;
    GetKnowledgeDataRequest& operator=(const GetKnowledgeDataRequest &) = default ;
    GetKnowledgeDataRequest& operator=(GetKnowledgeDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(knowledgeIdList, knowledgeIdList_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(knowledgeIdList, knowledgeIdList_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->knowledgeIdList_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Body& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // knowledgeIdList Field Functions 
      bool hasKnowledgeIdList() const { return this->knowledgeIdList_ != nullptr;};
      void deleteKnowledgeIdList() { this->knowledgeIdList_ = nullptr;};
      inline const vector<string> & getKnowledgeIdList() const { DARABONBA_PTR_GET_CONST(knowledgeIdList_, vector<string>) };
      inline vector<string> getKnowledgeIdList() { DARABONBA_PTR_GET(knowledgeIdList_, vector<string>) };
      inline Body& setKnowledgeIdList(const vector<string> & knowledgeIdList) { DARABONBA_PTR_SET_VALUE(knowledgeIdList_, knowledgeIdList) };
      inline Body& setKnowledgeIdList(vector<string> && knowledgeIdList) { DARABONBA_PTR_SET_RVALUE(knowledgeIdList_, knowledgeIdList) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<vector<string>> knowledgeIdList_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetKnowledgeDataRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetKnowledgeDataRequest::Body) };
    inline GetKnowledgeDataRequest::Body getBody() { DARABONBA_PTR_GET(body_, GetKnowledgeDataRequest::Body) };
    inline GetKnowledgeDataRequest& setBody(const GetKnowledgeDataRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetKnowledgeDataRequest& setBody(GetKnowledgeDataRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<GetKnowledgeDataRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
