// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELCACHEOPERATESYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELCACHEOPERATESYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class DelCacheOperateSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelCacheOperateSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, DelCacheOperateSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    DelCacheOperateSyncRequest() = default ;
    DelCacheOperateSyncRequest(const DelCacheOperateSyncRequest &) = default ;
    DelCacheOperateSyncRequest(DelCacheOperateSyncRequest &&) = default ;
    DelCacheOperateSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelCacheOperateSyncRequest() = default ;
    DelCacheOperateSyncRequest& operator=(const DelCacheOperateSyncRequest &) = default ;
    DelCacheOperateSyncRequest& operator=(DelCacheOperateSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DelCacheOperateSyncRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    shared_ptr<string> key_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
