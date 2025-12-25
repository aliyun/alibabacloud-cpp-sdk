// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTSTORAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceRequestStorageOss.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryCreateInstancePriceRequestStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceRequestStorage& obj) { 
      DARABONBA_PTR_TO_JSON(Oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceRequestStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
    };
    QueryCreateInstancePriceRequestStorage() = default ;
    QueryCreateInstancePriceRequestStorage(const QueryCreateInstancePriceRequestStorage &) = default ;
    QueryCreateInstancePriceRequestStorage(QueryCreateInstancePriceRequestStorage &&) = default ;
    QueryCreateInstancePriceRequestStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceRequestStorage() = default ;
    QueryCreateInstancePriceRequestStorage& operator=(const QueryCreateInstancePriceRequestStorage &) = default ;
    QueryCreateInstancePriceRequestStorage& operator=(QueryCreateInstancePriceRequestStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oss_ == nullptr; };
    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::QueryCreateInstancePriceRequestStorageOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::QueryCreateInstancePriceRequestStorageOss) };
    inline Models::QueryCreateInstancePriceRequestStorageOss oss() { DARABONBA_PTR_GET(oss_, Models::QueryCreateInstancePriceRequestStorageOss) };
    inline QueryCreateInstancePriceRequestStorage& setOss(const Models::QueryCreateInstancePriceRequestStorageOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline QueryCreateInstancePriceRequestStorage& setOss(Models::QueryCreateInstancePriceRequestStorageOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


  protected:
    std::shared_ptr<Models::QueryCreateInstancePriceRequestStorageOss> oss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
