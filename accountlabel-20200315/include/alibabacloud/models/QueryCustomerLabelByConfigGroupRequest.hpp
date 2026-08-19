// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELBYCONFIGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELBYCONFIGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountLabel20200315
{
namespace Models
{
  class QueryCustomerLabelByConfigGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerLabelByConfigGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerLabelByConfigGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    QueryCustomerLabelByConfigGroupRequest() = default ;
    QueryCustomerLabelByConfigGroupRequest(const QueryCustomerLabelByConfigGroupRequest &) = default ;
    QueryCustomerLabelByConfigGroupRequest(QueryCustomerLabelByConfigGroupRequest &&) = default ;
    QueryCustomerLabelByConfigGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerLabelByConfigGroupRequest() = default ;
    QueryCustomerLabelByConfigGroupRequest& operator=(const QueryCustomerLabelByConfigGroupRequest &) = default ;
    QueryCustomerLabelByConfigGroupRequest& operator=(QueryCustomerLabelByConfigGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupType_ == nullptr
        && this->PK_ == nullptr && this->token_ == nullptr; };
    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline QueryCustomerLabelByConfigGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline int64_t getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, 0L) };
    inline QueryCustomerLabelByConfigGroupRequest& setPK(int64_t PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline QueryCustomerLabelByConfigGroupRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // This parameter is required.
    shared_ptr<int64_t> PK_ {};
    // This parameter is required.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountLabel20200315
#endif
