// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAddonsResponseBody() = default ;
    ListAddonsResponseBody(const ListAddonsResponseBody &) = default ;
    ListAddonsResponseBody(ListAddonsResponseBody &&) = default ;
    ListAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBody() = default ;
    ListAddonsResponseBody& operator=(const ListAddonsResponseBody &) = default ;
    ListAddonsResponseBody& operator=(ListAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(AddonId, addonId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Addons() = default ;
      Addons(const Addons &) = default ;
      Addons(Addons &&) = default ;
      Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addons() = default ;
      Addons& operator=(const Addons &) = default ;
      Addons& operator=(Addons &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addonId_ == nullptr
        && this->description_ == nullptr && this->installTime_ == nullptr && this->label_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
      // addonId Field Functions 
      bool hasAddonId() const { return this->addonId_ != nullptr;};
      void deleteAddonId() { this->addonId_ = nullptr;};
      inline string getAddonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
      inline Addons& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Addons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // installTime Field Functions 
      bool hasInstallTime() const { return this->installTime_ != nullptr;};
      void deleteInstallTime() { this->installTime_ = nullptr;};
      inline string getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
      inline Addons& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Addons& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Addons& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The addon ID.
      // 
      // This parameter is required.
      shared_ptr<string> addonId_ {};
      // The addon description.
      shared_ptr<string> description_ {};
      // The time when the addon was installed.
      shared_ptr<string> installTime_ {};
      // The addon label.
      shared_ptr<string> label_ {};
      // The addon name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The addon state.
      shared_ptr<string> status_ {};
      // The addon version.
      // 
      // This parameter is required.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListAddonsResponseBody::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListAddonsResponseBody::Addons>) };
    inline vector<ListAddonsResponseBody::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<ListAddonsResponseBody::Addons>) };
    inline ListAddonsResponseBody& setAddons(const vector<ListAddonsResponseBody::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListAddonsResponseBody& setAddons(vector<ListAddonsResponseBody::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAddonsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAddonsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAddonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAddonsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the addons.
    shared_ptr<vector<ListAddonsResponseBody::Addons>> addons_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageNumber_ {};
    // The page number of the returned page. Default value: 1
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
