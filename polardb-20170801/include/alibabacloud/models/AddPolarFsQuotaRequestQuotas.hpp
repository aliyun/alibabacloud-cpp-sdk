// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPOLARFSQUOTAREQUESTQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_ADDPOLARFSQUOTAREQUESTQUOTAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddPolarFsQuotaRequestQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPolarFsQuotaRequestQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTTL, accessTTL_);
      DARABONBA_PTR_TO_JSON(ChangeTTL, changeTTL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, AddPolarFsQuotaRequestQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTTL, accessTTL_);
      DARABONBA_PTR_FROM_JSON(ChangeTTL, changeTTL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
    };
    AddPolarFsQuotaRequestQuotas() = default ;
    AddPolarFsQuotaRequestQuotas(const AddPolarFsQuotaRequestQuotas &) = default ;
    AddPolarFsQuotaRequestQuotas(AddPolarFsQuotaRequestQuotas &&) = default ;
    AddPolarFsQuotaRequestQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPolarFsQuotaRequestQuotas() = default ;
    AddPolarFsQuotaRequestQuotas& operator=(const AddPolarFsQuotaRequestQuotas &) = default ;
    AddPolarFsQuotaRequestQuotas& operator=(AddPolarFsQuotaRequestQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTTL_ == nullptr
        && return this->changeTTL_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->exclude_ == nullptr && return this->fileCountLimit_ == nullptr
        && return this->include_ == nullptr && return this->name_ == nullptr && return this->priority_ == nullptr && return this->sizeLimit_ == nullptr; };
    // accessTTL Field Functions 
    bool hasAccessTTL() const { return this->accessTTL_ != nullptr;};
    void deleteAccessTTL() { this->accessTTL_ = nullptr;};
    inline int64_t accessTTL() const { DARABONBA_PTR_GET_DEFAULT(accessTTL_, 0L) };
    inline AddPolarFsQuotaRequestQuotas& setAccessTTL(int64_t accessTTL) { DARABONBA_PTR_SET_VALUE(accessTTL_, accessTTL) };


    // changeTTL Field Functions 
    bool hasChangeTTL() const { return this->changeTTL_ != nullptr;};
    void deleteChangeTTL() { this->changeTTL_ = nullptr;};
    inline int64_t changeTTL() const { DARABONBA_PTR_GET_DEFAULT(changeTTL_, 0L) };
    inline AddPolarFsQuotaRequestQuotas& setChangeTTL(int64_t changeTTL) { DARABONBA_PTR_SET_VALUE(changeTTL_, changeTTL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddPolarFsQuotaRequestQuotas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AddPolarFsQuotaRequestQuotas& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline AddPolarFsQuotaRequestQuotas& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // fileCountLimit Field Functions 
    bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
    void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
    inline int64_t fileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
    inline AddPolarFsQuotaRequestQuotas& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline AddPolarFsQuotaRequestQuotas& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddPolarFsQuotaRequestQuotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AddPolarFsQuotaRequestQuotas& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline int64_t sizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
    inline AddPolarFsQuotaRequestQuotas& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


  protected:
    std::shared_ptr<int64_t> accessTTL_ = nullptr;
    std::shared_ptr<int64_t> changeTTL_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> exclude_ = nullptr;
    std::shared_ptr<int64_t> fileCountLimit_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> include_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int64_t> sizeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
