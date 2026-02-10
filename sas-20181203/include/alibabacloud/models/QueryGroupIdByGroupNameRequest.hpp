// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPIDBYGROUPNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPIDBYGROUPNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGroupIdByGroupNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupIdByGroupNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupIdByGroupNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    QueryGroupIdByGroupNameRequest() = default ;
    QueryGroupIdByGroupNameRequest(const QueryGroupIdByGroupNameRequest &) = default ;
    QueryGroupIdByGroupNameRequest(QueryGroupIdByGroupNameRequest &&) = default ;
    QueryGroupIdByGroupNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupIdByGroupNameRequest() = default ;
    QueryGroupIdByGroupNameRequest& operator=(const QueryGroupIdByGroupNameRequest &) = default ;
    QueryGroupIdByGroupNameRequest& operator=(QueryGroupIdByGroupNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->sourceIp_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline QueryGroupIdByGroupNameRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline QueryGroupIdByGroupNameRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The name of the asset group.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
