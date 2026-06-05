// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELHIVEEDGEWORKERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELHIVEEDGEWORKERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DelHiveEdgeWorkersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelHiveEdgeWorkersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DelHiveEdgeWorkersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    DelHiveEdgeWorkersRequest() = default ;
    DelHiveEdgeWorkersRequest(const DelHiveEdgeWorkersRequest &) = default ;
    DelHiveEdgeWorkersRequest(DelHiveEdgeWorkersRequest &&) = default ;
    DelHiveEdgeWorkersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelHiveEdgeWorkersRequest() = default ;
    DelHiveEdgeWorkersRequest& operator=(const DelHiveEdgeWorkersRequest &) = default ;
    DelHiveEdgeWorkersRequest& operator=(DelHiveEdgeWorkersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hiveId_ == nullptr
        && this->instanceIds_ == nullptr; };
    // hiveId Field Functions 
    bool hasHiveId() const { return this->hiveId_ != nullptr;};
    void deleteHiveId() { this->hiveId_ = nullptr;};
    inline string getHiveId() const { DARABONBA_PTR_GET_DEFAULT(hiveId_, "") };
    inline DelHiveEdgeWorkersRequest& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DelHiveEdgeWorkersRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DelHiveEdgeWorkersRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> hiveId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
