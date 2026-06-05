// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDHIVEEDGEWORKERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDHIVEEDGEWORKERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class AddHiveEdgeWorkersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddHiveEdgeWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddHiveEdgeWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    AddHiveEdgeWorkersShrinkRequest() = default ;
    AddHiveEdgeWorkersShrinkRequest(const AddHiveEdgeWorkersShrinkRequest &) = default ;
    AddHiveEdgeWorkersShrinkRequest(AddHiveEdgeWorkersShrinkRequest &&) = default ;
    AddHiveEdgeWorkersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddHiveEdgeWorkersShrinkRequest() = default ;
    AddHiveEdgeWorkersShrinkRequest& operator=(const AddHiveEdgeWorkersShrinkRequest &) = default ;
    AddHiveEdgeWorkersShrinkRequest& operator=(AddHiveEdgeWorkersShrinkRequest &&) = default ;
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
    inline AddHiveEdgeWorkersShrinkRequest& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline AddHiveEdgeWorkersShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


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
