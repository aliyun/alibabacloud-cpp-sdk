// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetSummaryInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
    };
    GetSummaryInfoRequest() = default ;
    GetSummaryInfoRequest(const GetSummaryInfoRequest &) = default ;
    GetSummaryInfoRequest(GetSummaryInfoRequest &&) = default ;
    GetSummaryInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryInfoRequest() = default ;
    GetSummaryInfoRequest& operator=(const GetSummaryInfoRequest &) = default ;
    GetSummaryInfoRequest& operator=(GetSummaryInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdList_ == nullptr; };
    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & getInstanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> getInstanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline GetSummaryInfoRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline GetSummaryInfoRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


  protected:
    shared_ptr<vector<string>> instanceIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
