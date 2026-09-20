// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHBASEHADBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHBASEHADBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class QueryHBaseHaDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHBaseHaDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BdsId, bdsId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHBaseHaDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BdsId, bdsId_);
    };
    QueryHBaseHaDBRequest() = default ;
    QueryHBaseHaDBRequest(const QueryHBaseHaDBRequest &) = default ;
    QueryHBaseHaDBRequest(QueryHBaseHaDBRequest &&) = default ;
    QueryHBaseHaDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHBaseHaDBRequest() = default ;
    QueryHBaseHaDBRequest& operator=(const QueryHBaseHaDBRequest &) = default ;
    QueryHBaseHaDBRequest& operator=(QueryHBaseHaDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bdsId_ == nullptr; };
    // bdsId Field Functions 
    bool hasBdsId() const { return this->bdsId_ != nullptr;};
    void deleteBdsId() { this->bdsId_ = nullptr;};
    inline string getBdsId() const { DARABONBA_PTR_GET_DEFAULT(bdsId_, "") };
    inline QueryHBaseHaDBRequest& setBdsId(string bdsId) { DARABONBA_PTR_SET_VALUE(bdsId_, bdsId) };


  protected:
    // The ID of the BDS cluster.
    // 
    // This parameter is required.
    shared_ptr<string> bdsId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
