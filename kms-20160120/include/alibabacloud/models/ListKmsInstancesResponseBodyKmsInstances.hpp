// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODYKMSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODYKMSINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKmsInstancesResponseBodyKmsInstancesKmsInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKmsInstancesResponseBodyKmsInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKmsInstancesResponseBodyKmsInstances& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ListKmsInstancesResponseBodyKmsInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
    };
    ListKmsInstancesResponseBodyKmsInstances() = default ;
    ListKmsInstancesResponseBodyKmsInstances(const ListKmsInstancesResponseBodyKmsInstances &) = default ;
    ListKmsInstancesResponseBodyKmsInstances(ListKmsInstancesResponseBodyKmsInstances &&) = default ;
    ListKmsInstancesResponseBodyKmsInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKmsInstancesResponseBodyKmsInstances() = default ;
    ListKmsInstancesResponseBodyKmsInstances& operator=(const ListKmsInstancesResponseBodyKmsInstances &) = default ;
    ListKmsInstancesResponseBodyKmsInstances& operator=(ListKmsInstancesResponseBodyKmsInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstance_ == nullptr; };
    // kmsInstance Field Functions 
    bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
    void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
    inline const vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance> & kmsInstance() const { DARABONBA_PTR_GET_CONST(kmsInstance_, vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance>) };
    inline vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance> kmsInstance() { DARABONBA_PTR_GET(kmsInstance_, vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance>) };
    inline ListKmsInstancesResponseBodyKmsInstances& setKmsInstance(const vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance> & kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };
    inline ListKmsInstancesResponseBodyKmsInstances& setKmsInstance(vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance> && kmsInstance) { DARABONBA_PTR_SET_RVALUE(kmsInstance_, kmsInstance) };


  protected:
    std::shared_ptr<vector<Models::ListKmsInstancesResponseBodyKmsInstancesKmsInstance>> kmsInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
