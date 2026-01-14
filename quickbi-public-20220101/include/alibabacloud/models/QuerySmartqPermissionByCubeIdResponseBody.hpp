// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTQPERMISSIONBYCUBEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTQPERMISSIONBYCUBEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QuerySmartqPermissionByCubeIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmartqPermissionByCubeIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmartqPermissionByCubeIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySmartqPermissionByCubeIdResponseBody() = default ;
    QuerySmartqPermissionByCubeIdResponseBody(const QuerySmartqPermissionByCubeIdResponseBody &) = default ;
    QuerySmartqPermissionByCubeIdResponseBody(QuerySmartqPermissionByCubeIdResponseBody &&) = default ;
    QuerySmartqPermissionByCubeIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmartqPermissionByCubeIdResponseBody() = default ;
    QuerySmartqPermissionByCubeIdResponseBody& operator=(const QuerySmartqPermissionByCubeIdResponseBody &) = default ;
    QuerySmartqPermissionByCubeIdResponseBody& operator=(QuerySmartqPermissionByCubeIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
        DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
        DARABONBA_PTR_TO_JSON(HasPerssion, hasPerssion_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
        DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
        DARABONBA_PTR_FROM_JSON(HasPerssion, hasPerssion_);
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
      virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->cubeName_ == nullptr && this->hasPerssion_ == nullptr; };
      // cubeId Field Functions 
      bool hasCubeId() const { return this->cubeId_ != nullptr;};
      void deleteCubeId() { this->cubeId_ = nullptr;};
      inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
      inline Result& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


      // cubeName Field Functions 
      bool hasCubeName() const { return this->cubeName_ != nullptr;};
      void deleteCubeName() { this->cubeName_ = nullptr;};
      inline string getCubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
      inline Result& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


      // hasPerssion Field Functions 
      bool hasHasPerssion() const { return this->hasPerssion_ != nullptr;};
      void deleteHasPerssion() { this->hasPerssion_ = nullptr;};
      inline bool getHasPerssion() const { DARABONBA_PTR_GET_DEFAULT(hasPerssion_, false) };
      inline Result& setHasPerssion(bool hasPerssion) { DARABONBA_PTR_SET_VALUE(hasPerssion_, hasPerssion) };


    protected:
      // Dataset ID.
      shared_ptr<string> cubeId_ {};
      // Dataset name.
      shared_ptr<string> cubeName_ {};
      // Whether the current user has permission for the smart question. Note: \\"HasPerssion\\" seems to be a typo, it should probably be \\"HasPermission\\".
      shared_ptr<bool> hasPerssion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmartqPermissionByCubeIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QuerySmartqPermissionByCubeIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QuerySmartqPermissionByCubeIdResponseBody::Result) };
    inline QuerySmartqPermissionByCubeIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QuerySmartqPermissionByCubeIdResponseBody::Result) };
    inline QuerySmartqPermissionByCubeIdResponseBody& setResult(const QuerySmartqPermissionByCubeIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QuerySmartqPermissionByCubeIdResponseBody& setResult(QuerySmartqPermissionByCubeIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySmartqPermissionByCubeIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Basic information of the dataset.
    shared_ptr<QuerySmartqPermissionByCubeIdResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
