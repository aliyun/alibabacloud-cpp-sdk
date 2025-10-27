// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
    };
    QueryTagsRequest() = default ;
    QueryTagsRequest(const QueryTagsRequest &) = default ;
    QueryTagsRequest(QueryTagsRequest &&) = default ;
    QueryTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagsRequest() = default ;
    QueryTagsRequest& operator=(const QueryTagsRequest &) = default ;
    QueryTagsRequest& operator=(QueryTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->clientKey_ == nullptr && return this->keyType_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline QueryTagsRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // clientKey Field Functions 
    bool hasClientKey() const { return this->clientKey_ != nullptr;};
    void deleteClientKey() { this->clientKey_ = nullptr;};
    inline string clientKey() const { DARABONBA_PTR_GET_DEFAULT(clientKey_, "") };
    inline QueryTagsRequest& setClientKey(string clientKey) { DARABONBA_PTR_SET_VALUE(clientKey_, clientKey) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline QueryTagsRequest& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
