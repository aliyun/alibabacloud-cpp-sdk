// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSADDONSRESOURCESSPEC_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSADDONSRESOURCESSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersAddonsResourcesSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersAddonsResourcesSpec& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EipInstanceId, eipInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersAddonsResourcesSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EipInstanceId, eipInstanceId_);
    };
    ListClustersResponseBodyClustersAddonsResourcesSpec() = default ;
    ListClustersResponseBodyClustersAddonsResourcesSpec(const ListClustersResponseBodyClustersAddonsResourcesSpec &) = default ;
    ListClustersResponseBodyClustersAddonsResourcesSpec(ListClustersResponseBodyClustersAddonsResourcesSpec &&) = default ;
    ListClustersResponseBodyClustersAddonsResourcesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersAddonsResourcesSpec() = default ;
    ListClustersResponseBodyClustersAddonsResourcesSpec& operator=(const ListClustersResponseBodyClustersAddonsResourcesSpec &) = default ;
    ListClustersResponseBodyClustersAddonsResourcesSpec& operator=(ListClustersResponseBodyClustersAddonsResourcesSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && return this->eipInstanceId_ == nullptr; };
    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ListClustersResponseBodyClustersAddonsResourcesSpec& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // eipInstanceId Field Functions 
    bool hasEipInstanceId() const { return this->eipInstanceId_ != nullptr;};
    void deleteEipInstanceId() { this->eipInstanceId_ = nullptr;};
    inline string eipInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eipInstanceId_, "") };
    inline ListClustersResponseBodyClustersAddonsResourcesSpec& setEipInstanceId(string eipInstanceId) { DARABONBA_PTR_SET_VALUE(eipInstanceId_, eipInstanceId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The Elastic IP Address (EIP) ID.
    std::shared_ptr<string> eipInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
