// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUESTRESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUESTRESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateWorkspaceRequestResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequestResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequestResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
    };
    CreateWorkspaceRequestResourceSpec() = default ;
    CreateWorkspaceRequestResourceSpec(const CreateWorkspaceRequestResourceSpec &) = default ;
    CreateWorkspaceRequestResourceSpec(CreateWorkspaceRequestResourceSpec &&) = default ;
    CreateWorkspaceRequestResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequestResourceSpec() = default ;
    CreateWorkspaceRequestResourceSpec& operator=(const CreateWorkspaceRequestResourceSpec &) = default ;
    CreateWorkspaceRequestResourceSpec& operator=(CreateWorkspaceRequestResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cu_ != nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline string cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
    inline CreateWorkspaceRequestResourceSpec& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


  protected:
    // The maximum resource quota for a workspace.
    std::shared_ptr<string> cu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
