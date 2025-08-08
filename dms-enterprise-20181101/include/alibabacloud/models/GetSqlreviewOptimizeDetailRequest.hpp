// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewOptimizeDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetSQLReviewOptimizeDetailRequest() = default ;
    GetSQLReviewOptimizeDetailRequest(const GetSQLReviewOptimizeDetailRequest &) = default ;
    GetSQLReviewOptimizeDetailRequest(GetSQLReviewOptimizeDetailRequest &&) = default ;
    GetSQLReviewOptimizeDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailRequest() = default ;
    GetSQLReviewOptimizeDetailRequest& operator=(const GetSQLReviewOptimizeDetailRequest &) = default ;
    GetSQLReviewOptimizeDetailRequest& operator=(GetSQLReviewOptimizeDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SQLReviewQueryKey_ != nullptr
        && this->tid_ != nullptr; };
    // SQLReviewQueryKey Field Functions 
    bool hasSQLReviewQueryKey() const { return this->SQLReviewQueryKey_ != nullptr;};
    void deleteSQLReviewQueryKey() { this->SQLReviewQueryKey_ = nullptr;};
    inline string SQLReviewQueryKey() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewQueryKey_, "") };
    inline GetSQLReviewOptimizeDetailRequest& setSQLReviewQueryKey(string SQLReviewQueryKey) { DARABONBA_PTR_SET_VALUE(SQLReviewQueryKey_, SQLReviewQueryKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetSQLReviewOptimizeDetailRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key that is used to query the details of optimization suggestions. You can call the [ListSQLReviewOriginSQL](https://help.aliyun.com/document_detail/257870.html) operation to query the key.
    // 
    // This parameter is required.
    std::shared_ptr<string> SQLReviewQueryKey_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
