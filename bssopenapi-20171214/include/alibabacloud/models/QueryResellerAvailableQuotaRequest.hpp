// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESELLERAVAILABLEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESELLERAVAILABLEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResellerAvailableQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResellerAvailableQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ItemCodes, itemCodes_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResellerAvailableQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemCodes, itemCodes_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    QueryResellerAvailableQuotaRequest() = default ;
    QueryResellerAvailableQuotaRequest(const QueryResellerAvailableQuotaRequest &) = default ;
    QueryResellerAvailableQuotaRequest(QueryResellerAvailableQuotaRequest &&) = default ;
    QueryResellerAvailableQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResellerAvailableQuotaRequest() = default ;
    QueryResellerAvailableQuotaRequest& operator=(const QueryResellerAvailableQuotaRequest &) = default ;
    QueryResellerAvailableQuotaRequest& operator=(QueryResellerAvailableQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemCodes_ != nullptr
        && this->ownerId_ != nullptr; };
    // itemCodes Field Functions 
    bool hasItemCodes() const { return this->itemCodes_ != nullptr;};
    void deleteItemCodes() { this->itemCodes_ = nullptr;};
    inline string itemCodes() const { DARABONBA_PTR_GET_DEFAULT(itemCodes_, "") };
    inline QueryResellerAvailableQuotaRequest& setItemCodes(string itemCodes) { DARABONBA_PTR_SET_VALUE(itemCodes_, itemCodes) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryResellerAvailableQuotaRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<string> itemCodes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
