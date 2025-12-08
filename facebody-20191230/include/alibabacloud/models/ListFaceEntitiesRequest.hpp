// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ListFaceEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaceEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityIdPrefix, entityIdPrefix_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaceEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityIdPrefix, entityIdPrefix_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    ListFaceEntitiesRequest() = default ;
    ListFaceEntitiesRequest(const ListFaceEntitiesRequest &) = default ;
    ListFaceEntitiesRequest(ListFaceEntitiesRequest &&) = default ;
    ListFaceEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaceEntitiesRequest() = default ;
    ListFaceEntitiesRequest& operator=(const ListFaceEntitiesRequest &) = default ;
    ListFaceEntitiesRequest& operator=(ListFaceEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->entityIdPrefix_ == nullptr && return this->labels_ == nullptr && return this->limit_ == nullptr && return this->offset_ == nullptr && return this->order_ == nullptr
        && return this->token_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListFaceEntitiesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityIdPrefix Field Functions 
    bool hasEntityIdPrefix() const { return this->entityIdPrefix_ != nullptr;};
    void deleteEntityIdPrefix() { this->entityIdPrefix_ = nullptr;};
    inline string entityIdPrefix() const { DARABONBA_PTR_GET_DEFAULT(entityIdPrefix_, "") };
    inline ListFaceEntitiesRequest& setEntityIdPrefix(string entityIdPrefix) { DARABONBA_PTR_SET_VALUE(entityIdPrefix_, entityIdPrefix) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListFaceEntitiesRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListFaceEntitiesRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ListFaceEntitiesRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListFaceEntitiesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListFaceEntitiesRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> entityIdPrefix_ = nullptr;
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<int32_t> offset_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
