// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetConfigResponseBody() = default ;
    GetConfigResponseBody(const GetConfigResponseBody &) = default ;
    GetConfigResponseBody(GetConfigResponseBody &&) = default ;
    GetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigResponseBody() = default ;
    GetConfigResponseBody& operator=(const GetConfigResponseBody &) = default ;
    GetConfigResponseBody& operator=(GetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_ANY_TO_JSON(configData, configData_);
        DARABONBA_PTR_TO_JSON(configType, configType_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_ANY_FROM_JSON(configData, configData_);
        DARABONBA_PTR_FROM_JSON(configType, configType_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->configData_ == nullptr
        && this->configType_ == nullptr && this->createdAt_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // configData Field Functions 
      bool hasConfigData() const { return this->configData_ != nullptr;};
      void deleteConfigData() { this->configData_ = nullptr;};
      inline       const Darabonba::Json & getConfigData() const { DARABONBA_GET(configData_) };
      Darabonba::Json & getConfigData() { DARABONBA_GET(configData_) };
      inline Result& setConfigData(const Darabonba::Json & configData) { DARABONBA_SET_VALUE(configData_, configData) };
      inline Result& setConfigData(Darabonba::Json && configData) { DARABONBA_SET_RVALUE(configData_, configData) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Result& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Result& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Result& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The configuration content.
      Darabonba::Json configData_ {};
      // The configuration type.
      // 
      // - prompt
      // 
      // - lark
      shared_ptr<string> configType_ {};
      // The time when the configuration was created.
      shared_ptr<int64_t> createdAt_ {};
      // The time when the configuration was last updated.
      shared_ptr<int64_t> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetConfigResponseBody::Result) };
    inline GetConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetConfigResponseBody::Result) };
    inline GetConfigResponseBody& setResult(const GetConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetConfigResponseBody& setResult(GetConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetConfigResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
