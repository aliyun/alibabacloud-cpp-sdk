// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITWORKSPACEQUEUEREQUESTRESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_EDITWORKSPACEQUEUEREQUESTRESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class EditWorkspaceQueueRequestResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditWorkspaceQueueRequestResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
    };
    friend void from_json(const Darabonba::Json& j, EditWorkspaceQueueRequestResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
    };
    EditWorkspaceQueueRequestResourceSpec() = default ;
    EditWorkspaceQueueRequestResourceSpec(const EditWorkspaceQueueRequestResourceSpec &) = default ;
    EditWorkspaceQueueRequestResourceSpec(EditWorkspaceQueueRequestResourceSpec &&) = default ;
    EditWorkspaceQueueRequestResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditWorkspaceQueueRequestResourceSpec() = default ;
    EditWorkspaceQueueRequestResourceSpec& operator=(const EditWorkspaceQueueRequestResourceSpec &) = default ;
    EditWorkspaceQueueRequestResourceSpec& operator=(EditWorkspaceQueueRequestResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cu_ != nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int64_t cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0L) };
    inline EditWorkspaceQueueRequestResourceSpec& setCu(int64_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


  protected:
    std::shared_ptr<int64_t> cu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
