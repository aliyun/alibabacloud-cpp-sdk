// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateConfigResponseBody() = default ;
    UpdateConfigResponseBody(const UpdateConfigResponseBody &) = default ;
    UpdateConfigResponseBody(UpdateConfigResponseBody &&) = default ;
    UpdateConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigResponseBody() = default ;
    UpdateConfigResponseBody& operator=(const UpdateConfigResponseBody &) = default ;
    UpdateConfigResponseBody& operator=(UpdateConfigResponseBody &&) = default ;
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
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Result& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Result& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The configuration content.
      Darabonba::Json configData_ {};
      // The configuration category.
      shared_ptr<string> configType_ {};
      // The creation time.
      shared_ptr<string> createdAt_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateConfigResponseBody::Result) };
    inline UpdateConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateConfigResponseBody::Result) };
    inline UpdateConfigResponseBody& setResult(const UpdateConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateConfigResponseBody& setResult(UpdateConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result object.
    shared_ptr<UpdateConfigResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
