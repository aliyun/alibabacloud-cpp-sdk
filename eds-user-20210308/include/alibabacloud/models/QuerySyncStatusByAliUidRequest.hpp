// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSYNCSTATUSBYALIUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSYNCSTATUSBYALIUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class QuerySyncStatusByAliUidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySyncStatusByAliUidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySyncStatusByAliUidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
    };
    QuerySyncStatusByAliUidRequest() = default ;
    QuerySyncStatusByAliUidRequest(const QuerySyncStatusByAliUidRequest &) = default ;
    QuerySyncStatusByAliUidRequest(QuerySyncStatusByAliUidRequest &&) = default ;
    QuerySyncStatusByAliUidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySyncStatusByAliUidRequest() = default ;
    QuerySyncStatusByAliUidRequest& operator=(const QuerySyncStatusByAliUidRequest &) = default ;
    QuerySyncStatusByAliUidRequest& operator=(QuerySyncStatusByAliUidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline QuerySyncStatusByAliUidRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


  protected:
    shared_ptr<string> businessChannel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
