// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTPROFILEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTPROFILEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountProfileInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountProfileInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountProfileInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
    };
    QueryAccountProfileInfoRequest() = default ;
    QueryAccountProfileInfoRequest(const QueryAccountProfileInfoRequest &) = default ;
    QueryAccountProfileInfoRequest(QueryAccountProfileInfoRequest &&) = default ;
    QueryAccountProfileInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountProfileInfoRequest() = default ;
    QueryAccountProfileInfoRequest& operator=(const QueryAccountProfileInfoRequest &) = default ;
    QueryAccountProfileInfoRequest& operator=(QueryAccountProfileInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->havanaId_ == nullptr
        && this->PK_ == nullptr; };
    // havanaId Field Functions 
    bool hasHavanaId() const { return this->havanaId_ != nullptr;};
    void deleteHavanaId() { this->havanaId_ = nullptr;};
    inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
    inline QueryAccountProfileInfoRequest& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline QueryAccountProfileInfoRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


  protected:
    shared_ptr<string> havanaId_ {};
    shared_ptr<string> PK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
