// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class TagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TagResourcesResponseBody() = default ;
    TagResourcesResponseBody(const TagResourcesResponseBody &) = default ;
    TagResourcesResponseBody(TagResourcesResponseBody &&) = default ;
    TagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesResponseBody() = default ;
    TagResourcesResponseBody& operator=(const TagResourcesResponseBody &) = default ;
    TagResourcesResponseBody& operator=(TagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedResources& obj) { 
        DARABONBA_PTR_TO_JSON(FailedResource, failedResource_);
      };
      friend void from_json(const Darabonba::Json& j, FailedResources& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedResource, failedResource_);
      };
      FailedResources() = default ;
      FailedResources(const FailedResources &) = default ;
      FailedResources(FailedResources &&) = default ;
      FailedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedResources() = default ;
      FailedResources& operator=(const FailedResources &) = default ;
      FailedResources& operator=(FailedResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailedResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedResource& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, FailedResource& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        FailedResource() = default ;
        FailedResource(const FailedResource &) = default ;
        FailedResource(FailedResource &&) = default ;
        FailedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedResource() = default ;
        FailedResource& operator=(const FailedResource &) = default ;
        FailedResource& operator=(FailedResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Message, message_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Result& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> message_ {};
        };

        virtual bool empty() const override { return this->resourceARN_ == nullptr
        && this->result_ == nullptr; };
        // resourceARN Field Functions 
        bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
        void deleteResourceARN() { this->resourceARN_ = nullptr;};
        inline string getResourceARN() const { DARABONBA_PTR_GET_DEFAULT(resourceARN_, "") };
        inline FailedResource& setResourceARN(string resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const FailedResource::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FailedResource::Result) };
        inline FailedResource::Result getResult() { DARABONBA_PTR_GET(result_, FailedResource::Result) };
        inline FailedResource& setResult(const FailedResource::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline FailedResource& setResult(FailedResource::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      protected:
        shared_ptr<string> resourceARN_ {};
        shared_ptr<FailedResource::Result> result_ {};
      };

      virtual bool empty() const override { return this->failedResource_ == nullptr; };
      // failedResource Field Functions 
      bool hasFailedResource() const { return this->failedResource_ != nullptr;};
      void deleteFailedResource() { this->failedResource_ = nullptr;};
      inline const vector<FailedResources::FailedResource> & getFailedResource() const { DARABONBA_PTR_GET_CONST(failedResource_, vector<FailedResources::FailedResource>) };
      inline vector<FailedResources::FailedResource> getFailedResource() { DARABONBA_PTR_GET(failedResource_, vector<FailedResources::FailedResource>) };
      inline FailedResources& setFailedResource(const vector<FailedResources::FailedResource> & failedResource) { DARABONBA_PTR_SET_VALUE(failedResource_, failedResource) };
      inline FailedResources& setFailedResource(vector<FailedResources::FailedResource> && failedResource) { DARABONBA_PTR_SET_RVALUE(failedResource_, failedResource) };


    protected:
      shared_ptr<vector<FailedResources::FailedResource>> failedResource_ {};
    };

    virtual bool empty() const override { return this->failedResources_ == nullptr
        && this->requestId_ == nullptr; };
    // failedResources Field Functions 
    bool hasFailedResources() const { return this->failedResources_ != nullptr;};
    void deleteFailedResources() { this->failedResources_ = nullptr;};
    inline const TagResourcesResponseBody::FailedResources & getFailedResources() const { DARABONBA_PTR_GET_CONST(failedResources_, TagResourcesResponseBody::FailedResources) };
    inline TagResourcesResponseBody::FailedResources getFailedResources() { DARABONBA_PTR_GET(failedResources_, TagResourcesResponseBody::FailedResources) };
    inline TagResourcesResponseBody& setFailedResources(const TagResourcesResponseBody::FailedResources & failedResources) { DARABONBA_PTR_SET_VALUE(failedResources_, failedResources) };
    inline TagResourcesResponseBody& setFailedResources(TagResourcesResponseBody::FailedResources && failedResources) { DARABONBA_PTR_SET_RVALUE(failedResources_, failedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<TagResourcesResponseBody::FailedResources> failedResources_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
