// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETSWITCHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETSWITCHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetSwitchInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetSwitchInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetSwitchInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDatasetSwitchInfoResponseBody() = default ;
    QueryDatasetSwitchInfoResponseBody(const QueryDatasetSwitchInfoResponseBody &) = default ;
    QueryDatasetSwitchInfoResponseBody(QueryDatasetSwitchInfoResponseBody &&) = default ;
    QueryDatasetSwitchInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetSwitchInfoResponseBody() = default ;
    QueryDatasetSwitchInfoResponseBody& operator=(const QueryDatasetSwitchInfoResponseBody &) = default ;
    QueryDatasetSwitchInfoResponseBody& operator=(QueryDatasetSwitchInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
        DARABONBA_PTR_TO_JSON(IsOpenColumnLevelPermission, isOpenColumnLevelPermission_);
        DARABONBA_PTR_TO_JSON(IsOpenRowLevelPermission, isOpenRowLevelPermission_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
        DARABONBA_PTR_FROM_JSON(IsOpenColumnLevelPermission, isOpenColumnLevelPermission_);
        DARABONBA_PTR_FROM_JSON(IsOpenRowLevelPermission, isOpenRowLevelPermission_);
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
        && this->isOpenColumnLevelPermission_ == nullptr && this->isOpenRowLevelPermission_ == nullptr; };
      // cubeId Field Functions 
      bool hasCubeId() const { return this->cubeId_ != nullptr;};
      void deleteCubeId() { this->cubeId_ = nullptr;};
      inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
      inline Result& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


      // isOpenColumnLevelPermission Field Functions 
      bool hasIsOpenColumnLevelPermission() const { return this->isOpenColumnLevelPermission_ != nullptr;};
      void deleteIsOpenColumnLevelPermission() { this->isOpenColumnLevelPermission_ = nullptr;};
      inline int32_t getIsOpenColumnLevelPermission() const { DARABONBA_PTR_GET_DEFAULT(isOpenColumnLevelPermission_, 0) };
      inline Result& setIsOpenColumnLevelPermission(int32_t isOpenColumnLevelPermission) { DARABONBA_PTR_SET_VALUE(isOpenColumnLevelPermission_, isOpenColumnLevelPermission) };


      // isOpenRowLevelPermission Field Functions 
      bool hasIsOpenRowLevelPermission() const { return this->isOpenRowLevelPermission_ != nullptr;};
      void deleteIsOpenRowLevelPermission() { this->isOpenRowLevelPermission_ = nullptr;};
      inline int32_t getIsOpenRowLevelPermission() const { DARABONBA_PTR_GET_DEFAULT(isOpenRowLevelPermission_, 0) };
      inline Result& setIsOpenRowLevelPermission(int32_t isOpenRowLevelPermission) { DARABONBA_PTR_SET_VALUE(isOpenRowLevelPermission_, isOpenRowLevelPermission) };


    protected:
      // Dataset ID.
      shared_ptr<string> cubeId_ {};
      // Status of the column-level field permission switch. Possible values:
      // 
      // - 1: Enabled
      // - 0: Disabled
      shared_ptr<int32_t> isOpenColumnLevelPermission_ {};
      // Status of the row-level permission switch.
      // 
      // - 1: Enabled
      // - 0: Disabled
      shared_ptr<int32_t> isOpenRowLevelPermission_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDatasetSwitchInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDatasetSwitchInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryDatasetSwitchInfoResponseBody::Result) };
    inline QueryDatasetSwitchInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryDatasetSwitchInfoResponseBody::Result) };
    inline QueryDatasetSwitchInfoResponseBody& setResult(const QueryDatasetSwitchInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDatasetSwitchInfoResponseBody& setResult(QueryDatasetSwitchInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDatasetSwitchInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Details of the dataset\\"s row and column permission switches.
    shared_ptr<QueryDatasetSwitchInfoResponseBody::Result> result_ {};
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
