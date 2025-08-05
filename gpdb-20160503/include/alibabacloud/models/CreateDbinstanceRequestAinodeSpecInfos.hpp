// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUESTAINODESPECINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUESTAINODESPECINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDBInstanceRequestAINodeSpecInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceRequestAINodeSpecInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AINodeNum, AINodeNum_);
      DARABONBA_PTR_TO_JSON(AINodeSpec, AINodeSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceRequestAINodeSpecInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodeNum, AINodeNum_);
      DARABONBA_PTR_FROM_JSON(AINodeSpec, AINodeSpec_);
    };
    CreateDBInstanceRequestAINodeSpecInfos() = default ;
    CreateDBInstanceRequestAINodeSpecInfos(const CreateDBInstanceRequestAINodeSpecInfos &) = default ;
    CreateDBInstanceRequestAINodeSpecInfos(CreateDBInstanceRequestAINodeSpecInfos &&) = default ;
    CreateDBInstanceRequestAINodeSpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceRequestAINodeSpecInfos() = default ;
    CreateDBInstanceRequestAINodeSpecInfos& operator=(const CreateDBInstanceRequestAINodeSpecInfos &) = default ;
    CreateDBInstanceRequestAINodeSpecInfos& operator=(CreateDBInstanceRequestAINodeSpecInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AINodeNum_ != nullptr
        && this->AINodeSpec_ != nullptr; };
    // AINodeNum Field Functions 
    bool hasAINodeNum() const { return this->AINodeNum_ != nullptr;};
    void deleteAINodeNum() { this->AINodeNum_ = nullptr;};
    inline string AINodeNum() const { DARABONBA_PTR_GET_DEFAULT(AINodeNum_, "") };
    inline CreateDBInstanceRequestAINodeSpecInfos& setAINodeNum(string AINodeNum) { DARABONBA_PTR_SET_VALUE(AINodeNum_, AINodeNum) };


    // AINodeSpec Field Functions 
    bool hasAINodeSpec() const { return this->AINodeSpec_ != nullptr;};
    void deleteAINodeSpec() { this->AINodeSpec_ = nullptr;};
    inline string AINodeSpec() const { DARABONBA_PTR_GET_DEFAULT(AINodeSpec_, "") };
    inline CreateDBInstanceRequestAINodeSpecInfos& setAINodeSpec(string AINodeSpec) { DARABONBA_PTR_SET_VALUE(AINodeSpec_, AINodeSpec) };


  protected:
    std::shared_ptr<string> AINodeNum_ = nullptr;
    std::shared_ptr<string> AINodeSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
