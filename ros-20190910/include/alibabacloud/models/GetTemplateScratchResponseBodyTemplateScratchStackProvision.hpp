// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSTACKPROVISION_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSTACKPROVISION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchResponseBodyTemplateScratchStackProvision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBodyTemplateScratchStackProvision& obj) { 
      DARABONBA_PTR_TO_JSON(Creatable, creatable_);
      DARABONBA_PTR_TO_JSON(Importable, importable_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBodyTemplateScratchStackProvision& obj) { 
      DARABONBA_PTR_FROM_JSON(Creatable, creatable_);
      DARABONBA_PTR_FROM_JSON(Importable, importable_);
    };
    GetTemplateScratchResponseBodyTemplateScratchStackProvision() = default ;
    GetTemplateScratchResponseBodyTemplateScratchStackProvision(const GetTemplateScratchResponseBodyTemplateScratchStackProvision &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchStackProvision(GetTemplateScratchResponseBodyTemplateScratchStackProvision &&) = default ;
    GetTemplateScratchResponseBodyTemplateScratchStackProvision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBodyTemplateScratchStackProvision() = default ;
    GetTemplateScratchResponseBodyTemplateScratchStackProvision& operator=(const GetTemplateScratchResponseBodyTemplateScratchStackProvision &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchStackProvision& operator=(GetTemplateScratchResponseBodyTemplateScratchStackProvision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creatable_ != nullptr
        && this->importable_ != nullptr; };
    // creatable Field Functions 
    bool hasCreatable() const { return this->creatable_ != nullptr;};
    void deleteCreatable() { this->creatable_ = nullptr;};
    inline bool creatable() const { DARABONBA_PTR_GET_DEFAULT(creatable_, false) };
    inline GetTemplateScratchResponseBodyTemplateScratchStackProvision& setCreatable(bool creatable) { DARABONBA_PTR_SET_VALUE(creatable_, creatable) };


    // importable Field Functions 
    bool hasImportable() const { return this->importable_ != nullptr;};
    void deleteImportable() { this->importable_ = nullptr;};
    inline bool importable() const { DARABONBA_PTR_GET_DEFAULT(importable_, false) };
    inline GetTemplateScratchResponseBodyTemplateScratchStackProvision& setImportable(bool importable) { DARABONBA_PTR_SET_VALUE(importable_, importable) };


  protected:
    // Indicates whether the resource is replicated by calling the [CreateStack](https://help.aliyun.com/document_detail/132086.html) operation. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> creatable_ = nullptr;
    // Indicates whether the resource is managed by calling the [CreateChangeSet](https://help.aliyun.com/document_detail/131051.html) operation. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> importable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
