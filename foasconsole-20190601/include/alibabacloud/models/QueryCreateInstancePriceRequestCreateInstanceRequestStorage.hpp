// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTCREATEINSTANCEREQUESTSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTCREATEINSTANCEREQUESTSTORAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryCreateInstancePriceRequestCreateInstanceRequestStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceRequestCreateInstanceRequestStorage& obj) { 
      DARABONBA_PTR_TO_JSON(Oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceRequestCreateInstanceRequestStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
    };
    QueryCreateInstancePriceRequestCreateInstanceRequestStorage() = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequestStorage(const QueryCreateInstancePriceRequestCreateInstanceRequestStorage &) = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequestStorage(QueryCreateInstancePriceRequestCreateInstanceRequestStorage &&) = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequestStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceRequestCreateInstanceRequestStorage() = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequestStorage& operator=(const QueryCreateInstancePriceRequestCreateInstanceRequestStorage &) = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequestStorage& operator=(QueryCreateInstancePriceRequestCreateInstanceRequestStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oss_ == nullptr; };
    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss) };
    inline Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss oss() { DARABONBA_PTR_GET(oss_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequestStorage& setOss(const Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequestStorage& setOss(Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


  protected:
    std::shared_ptr<Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorageOss> oss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
