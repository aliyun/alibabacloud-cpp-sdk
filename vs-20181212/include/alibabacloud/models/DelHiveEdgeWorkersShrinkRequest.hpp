// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELHIVEEDGEWORKERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELHIVEEDGEWORKERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DelHiveEdgeWorkersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelHiveEdgeWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DelHiveEdgeWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    DelHiveEdgeWorkersShrinkRequest() = default ;
    DelHiveEdgeWorkersShrinkRequest(const DelHiveEdgeWorkersShrinkRequest &) = default ;
    DelHiveEdgeWorkersShrinkRequest(DelHiveEdgeWorkersShrinkRequest &&) = default ;
    DelHiveEdgeWorkersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelHiveEdgeWorkersShrinkRequest() = default ;
    DelHiveEdgeWorkersShrinkRequest& operator=(const DelHiveEdgeWorkersShrinkRequest &) = default ;
    DelHiveEdgeWorkersShrinkRequest& operator=(DelHiveEdgeWorkersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hiveId_ == nullptr
        && this->instanceIdsShrink_ == nullptr; };
    // hiveId Field Functions 
    bool hasHiveId() const { return this->hiveId_ != nullptr;};
    void deleteHiveId() { this->hiveId_ = nullptr;};
    inline string getHiveId() const { DARABONBA_PTR_GET_DEFAULT(hiveId_, "") };
    inline DelHiveEdgeWorkersShrinkRequest& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DelHiveEdgeWorkersShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hiveId_ {};
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
