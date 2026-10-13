// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPENETRATIONTESTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPENETRATIONTESTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryPenetrationTestDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPenetrationTestDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPenetrationTestDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    QueryPenetrationTestDetailRequest() = default ;
    QueryPenetrationTestDetailRequest(const QueryPenetrationTestDetailRequest &) = default ;
    QueryPenetrationTestDetailRequest(QueryPenetrationTestDetailRequest &&) = default ;
    QueryPenetrationTestDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPenetrationTestDetailRequest() = default ;
    QueryPenetrationTestDetailRequest& operator=(const QueryPenetrationTestDetailRequest &) = default ;
    QueryPenetrationTestDetailRequest& operator=(QueryPenetrationTestDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryPenetrationTestDetailRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The unique ID of the application record.
    // 
    // > This field is of the Long type. Precision loss may occur when you serialize or deserialize the value. Make sure that the value does not exceed 9007199254740991.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
