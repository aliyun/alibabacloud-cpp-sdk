// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveVpcAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apis, apis_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apis, apis_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveVpcAccessResponseBody() = default ;
    RemoveVpcAccessResponseBody(const RemoveVpcAccessResponseBody &) = default ;
    RemoveVpcAccessResponseBody(RemoveVpcAccessResponseBody &&) = default ;
    RemoveVpcAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVpcAccessResponseBody() = default ;
    RemoveVpcAccessResponseBody& operator=(const RemoveVpcAccessResponseBody &) = default ;
    RemoveVpcAccessResponseBody& operator=(RemoveVpcAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Apis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apis& obj) { 
        DARABONBA_PTR_TO_JSON(Api, api_);
      };
      friend void from_json(const Darabonba::Json& j, Apis& obj) { 
        DARABONBA_PTR_FROM_JSON(Api, api_);
      };
      Apis() = default ;
      Apis(const Apis &) = default ;
      Apis(Apis &&) = default ;
      Apis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apis() = default ;
      Apis& operator=(const Apis &) = default ;
      Apis& operator=(Apis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Api : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Api& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
        };
        friend void from_json(const Darabonba::Json& j, Api& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
        };
        Api() = default ;
        Api(const Api &) = default ;
        Api(Api &&) = default ;
        Api(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Api() = default ;
        Api& operator=(const Api &) = default ;
        Api& operator=(Api &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->groupId_ == nullptr && this->stageId_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline Api& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Api& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline Api& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


      protected:
        // API Id
        shared_ptr<string> apiId_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The ID of the runtime environment.
        shared_ptr<string> stageId_ {};
      };

      virtual bool empty() const override { return this->api_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline const vector<Apis::Api> & getApi() const { DARABONBA_PTR_GET_CONST(api_, vector<Apis::Api>) };
      inline vector<Apis::Api> getApi() { DARABONBA_PTR_GET(api_, vector<Apis::Api>) };
      inline Apis& setApi(const vector<Apis::Api> & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
      inline Apis& setApi(vector<Apis::Api> && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    protected:
      shared_ptr<vector<Apis::Api>> api_ {};
    };

    virtual bool empty() const override { return this->apis_ == nullptr
        && this->requestId_ == nullptr; };
    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const RemoveVpcAccessResponseBody::Apis & getApis() const { DARABONBA_PTR_GET_CONST(apis_, RemoveVpcAccessResponseBody::Apis) };
    inline RemoveVpcAccessResponseBody::Apis getApis() { DARABONBA_PTR_GET(apis_, RemoveVpcAccessResponseBody::Apis) };
    inline RemoveVpcAccessResponseBody& setApis(const RemoveVpcAccessResponseBody::Apis & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline RemoveVpcAccessResponseBody& setApis(RemoveVpcAccessResponseBody::Apis && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveVpcAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // API operations
    shared_ptr<RemoveVpcAccessResponseBody::Apis> apis_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
