// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUESTAGENTNODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUESTAGENTNODEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class CreateInstanceV1RequestAgentNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceV1RequestAgentNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceV1RequestAgentNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
    };
    CreateInstanceV1RequestAgentNodeGroup() = default ;
    CreateInstanceV1RequestAgentNodeGroup(const CreateInstanceV1RequestAgentNodeGroup &) = default ;
    CreateInstanceV1RequestAgentNodeGroup(CreateInstanceV1RequestAgentNodeGroup &&) = default ;
    CreateInstanceV1RequestAgentNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceV1RequestAgentNodeGroup() = default ;
    CreateInstanceV1RequestAgentNodeGroup& operator=(const CreateInstanceV1RequestAgentNodeGroup &) = default ;
    CreateInstanceV1RequestAgentNodeGroup& operator=(CreateInstanceV1RequestAgentNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline CreateInstanceV1RequestAgentNodeGroup& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


  protected:
    std::shared_ptr<int32_t> cu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
