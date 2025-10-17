// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject& obj) { 
      DARABONBA_PTR_TO_JSON(SynchronousObject, synchronousObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject& obj) { 
      DARABONBA_PTR_FROM_JSON(SynchronousObject, synchronousObject_);
    };
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject& operator=(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject& operator=(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->synchronousObject_ == nullptr; };
    // synchronousObject Field Functions 
    bool hasSynchronousObject() const { return this->synchronousObject_ != nullptr;};
    void deleteSynchronousObject() { this->synchronousObject_ = nullptr;};
    inline const vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject> & synchronousObject() const { DARABONBA_PTR_GET_CONST(synchronousObject_, vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject>) };
    inline vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject> synchronousObject() { DARABONBA_PTR_GET(synchronousObject_, vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject>) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject& setSynchronousObject(const vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject> & synchronousObject) { DARABONBA_PTR_SET_VALUE(synchronousObject_, synchronousObject) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject& setSynchronousObject(vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject> && synchronousObject) { DARABONBA_PTR_SET_RVALUE(synchronousObject_, synchronousObject) };


  protected:
    std::shared_ptr<vector<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject>> synchronousObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
