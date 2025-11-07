// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPATCHESRESPONSEBODYPATCHES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPATCHESRESPONSEBODYPATCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePatchesResponseBodyPatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePatchesResponseBodyPatches& obj) { 
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(InstalledTime, installedTime_);
      DARABONBA_PTR_TO_JSON(KBId, KBId_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePatchesResponseBodyPatches& obj) { 
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(InstalledTime, installedTime_);
      DARABONBA_PTR_FROM_JSON(KBId, KBId_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListInstancePatchesResponseBodyPatches() = default ;
    ListInstancePatchesResponseBodyPatches(const ListInstancePatchesResponseBodyPatches &) = default ;
    ListInstancePatchesResponseBodyPatches(ListInstancePatchesResponseBodyPatches &&) = default ;
    ListInstancePatchesResponseBodyPatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePatchesResponseBodyPatches() = default ;
    ListInstancePatchesResponseBodyPatches& operator=(const ListInstancePatchesResponseBodyPatches &) = default ;
    ListInstancePatchesResponseBodyPatches& operator=(ListInstancePatchesResponseBodyPatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classification_ == nullptr
        && return this->installedTime_ == nullptr && return this->KBId_ == nullptr && return this->severity_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr; };
    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline ListInstancePatchesResponseBodyPatches& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // installedTime Field Functions 
    bool hasInstalledTime() const { return this->installedTime_ != nullptr;};
    void deleteInstalledTime() { this->installedTime_ = nullptr;};
    inline string installedTime() const { DARABONBA_PTR_GET_DEFAULT(installedTime_, "") };
    inline ListInstancePatchesResponseBodyPatches& setInstalledTime(string installedTime) { DARABONBA_PTR_SET_VALUE(installedTime_, installedTime) };


    // KBId Field Functions 
    bool hasKBId() const { return this->KBId_ != nullptr;};
    void deleteKBId() { this->KBId_ = nullptr;};
    inline string KBId() const { DARABONBA_PTR_GET_DEFAULT(KBId_, "") };
    inline ListInstancePatchesResponseBodyPatches& setKBId(string KBId) { DARABONBA_PTR_SET_VALUE(KBId_, KBId) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListInstancePatchesResponseBodyPatches& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancePatchesResponseBodyPatches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListInstancePatchesResponseBodyPatches& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The classification of the patch.
    std::shared_ptr<string> classification_ = nullptr;
    // The time when the patch was installed.
    std::shared_ptr<string> installedTime_ = nullptr;
    // The Id of KBId.
    std::shared_ptr<string> KBId_ = nullptr;
    // The level of the severity.
    std::shared_ptr<string> severity_ = nullptr;
    // The status of the installation.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the patch.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
