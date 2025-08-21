// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHARDRECOVERIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHARDRECOVERIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListShardRecoveriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShardRecoveriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(activeOnly, activeOnly_);
    };
    friend void from_json(const Darabonba::Json& j, ListShardRecoveriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(activeOnly, activeOnly_);
    };
    ListShardRecoveriesRequest() = default ;
    ListShardRecoveriesRequest(const ListShardRecoveriesRequest &) = default ;
    ListShardRecoveriesRequest(ListShardRecoveriesRequest &&) = default ;
    ListShardRecoveriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShardRecoveriesRequest() = default ;
    ListShardRecoveriesRequest& operator=(const ListShardRecoveriesRequest &) = default ;
    ListShardRecoveriesRequest& operator=(ListShardRecoveriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeOnly_ != nullptr; };
    // activeOnly Field Functions 
    bool hasActiveOnly() const { return this->activeOnly_ != nullptr;};
    void deleteActiveOnly() { this->activeOnly_ = nullptr;};
    inline bool activeOnly() const { DARABONBA_PTR_GET_DEFAULT(activeOnly_, false) };
    inline ListShardRecoveriesRequest& setActiveOnly(bool activeOnly) { DARABONBA_PTR_SET_VALUE(activeOnly_, activeOnly) };


  protected:
    // Specifies whether to return information about data restoration of shards. Valid values:
    // 
    // *   true: returns information about data restoration of shards that are being restored.
    // *   false: returns information about data restoration of all shards.
    std::shared_ptr<bool> activeOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
