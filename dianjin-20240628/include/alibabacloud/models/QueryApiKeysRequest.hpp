// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPIKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class QueryApiKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApiKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(externalUserId, externalUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApiKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(externalUserId, externalUserId_);
    };
    QueryApiKeysRequest() = default ;
    QueryApiKeysRequest(const QueryApiKeysRequest &) = default ;
    QueryApiKeysRequest(QueryApiKeysRequest &&) = default ;
    QueryApiKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApiKeysRequest() = default ;
    QueryApiKeysRequest& operator=(const QueryApiKeysRequest &) = default ;
    QueryApiKeysRequest& operator=(QueryApiKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUserId_ == nullptr; };
    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline QueryApiKeysRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> externalUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
