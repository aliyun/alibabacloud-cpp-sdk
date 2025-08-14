// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTWORDLIBRARIESRESPONSEBODYHOTWORDLIBRARYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTWORDLIBRARIESRESPONSEBODYHOTWORDLIBRARYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListHotwordLibrariesResponseBodyHotwordLibraryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotwordLibrariesResponseBodyHotwordLibraryList& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UsageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotwordLibrariesResponseBodyHotwordLibraryList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UsageScenario, usageScenario_);
    };
    ListHotwordLibrariesResponseBodyHotwordLibraryList() = default ;
    ListHotwordLibrariesResponseBodyHotwordLibraryList(const ListHotwordLibrariesResponseBodyHotwordLibraryList &) = default ;
    ListHotwordLibrariesResponseBodyHotwordLibraryList(ListHotwordLibrariesResponseBodyHotwordLibraryList &&) = default ;
    ListHotwordLibrariesResponseBodyHotwordLibraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotwordLibrariesResponseBodyHotwordLibraryList() = default ;
    ListHotwordLibrariesResponseBodyHotwordLibraryList& operator=(const ListHotwordLibrariesResponseBodyHotwordLibraryList &) = default ;
    ListHotwordLibrariesResponseBodyHotwordLibraryList& operator=(ListHotwordLibrariesResponseBodyHotwordLibraryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->hotwordLibraryId_ != nullptr && this->modifiedTime_ != nullptr && this->name_ != nullptr && this->usageScenario_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListHotwordLibrariesResponseBodyHotwordLibraryList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListHotwordLibrariesResponseBodyHotwordLibraryList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotwordLibraryId Field Functions 
    bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
    void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
    inline string hotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
    inline ListHotwordLibrariesResponseBodyHotwordLibraryList& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListHotwordLibrariesResponseBodyHotwordLibraryList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListHotwordLibrariesResponseBodyHotwordLibraryList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string usageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline ListHotwordLibrariesResponseBodyHotwordLibraryList& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> hotwordLibraryId_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> usageScenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
