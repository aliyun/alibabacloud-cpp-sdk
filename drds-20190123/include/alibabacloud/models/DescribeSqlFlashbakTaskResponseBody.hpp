// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBAKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBAKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeSqlFlashbakTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbakTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SqlFlashbackTasks, sqlFlashbackTasks_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbakTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SqlFlashbackTasks, sqlFlashbackTasks_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlFlashbakTaskResponseBody() = default ;
    DescribeSqlFlashbakTaskResponseBody(const DescribeSqlFlashbakTaskResponseBody &) = default ;
    DescribeSqlFlashbakTaskResponseBody(DescribeSqlFlashbakTaskResponseBody &&) = default ;
    DescribeSqlFlashbakTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbakTaskResponseBody() = default ;
    DescribeSqlFlashbakTaskResponseBody& operator=(const DescribeSqlFlashbakTaskResponseBody &) = default ;
    DescribeSqlFlashbakTaskResponseBody& operator=(DescribeSqlFlashbakTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sqlFlashbackTasks_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlFlashbakTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sqlFlashbackTasks Field Functions 
    bool hasSqlFlashbackTasks() const { return this->sqlFlashbackTasks_ != nullptr;};
    void deleteSqlFlashbackTasks() { this->sqlFlashbackTasks_ = nullptr;};
    inline const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks & sqlFlashbackTasks() const { DARABONBA_PTR_GET_CONST(sqlFlashbackTasks_, DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks sqlFlashbackTasks() { DARABONBA_PTR_GET(sqlFlashbackTasks_, DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks) };
    inline DescribeSqlFlashbakTaskResponseBody& setSqlFlashbackTasks(const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks & sqlFlashbackTasks) { DARABONBA_PTR_SET_VALUE(sqlFlashbackTasks_, sqlFlashbackTasks) };
    inline DescribeSqlFlashbakTaskResponseBody& setSqlFlashbackTasks(DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks && sqlFlashbackTasks) { DARABONBA_PTR_SET_RVALUE(sqlFlashbackTasks_, sqlFlashbackTasks) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSqlFlashbakTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates the information about flashback tasks.
    std::shared_ptr<DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks> sqlFlashbackTasks_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
