// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    CreateScanRequest() = default ;
    CreateScanRequest(const CreateScanRequest &) = default ;
    CreateScanRequest(CreateScanRequest &&) = default ;
    CreateScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScanRequest() = default ;
    CreateScanRequest& operator=(const CreateScanRequest &) = default ;
    CreateScanRequest& operator=(CreateScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeBundleId_ == nullptr
        && this->kind_ == nullptr && this->taskName_ == nullptr; };
    // codeBundleId Field Functions 
    bool hasCodeBundleId() const { return this->codeBundleId_ != nullptr;};
    void deleteCodeBundleId() { this->codeBundleId_ = nullptr;};
    inline int64_t getCodeBundleId() const { DARABONBA_PTR_GET_DEFAULT(codeBundleId_, 0L) };
    inline CreateScanRequest& setCodeBundleId(int64_t codeBundleId) { DARABONBA_PTR_SET_VALUE(codeBundleId_, codeBundleId) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline CreateScanRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateScanRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The code package ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> codeBundleId_ {};
    // The type. Valid values:
    // * full: full data
    // * incremental: incremental
    // 
    // This parameter is required.
    shared_ptr<string> kind_ {};
    // The task name.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
