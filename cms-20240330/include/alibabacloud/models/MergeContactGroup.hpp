// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGECONTACTGROUP_HPP_
#define ALIBABACLOUD_MODELS_MERGECONTACTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MergeContactGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeContactGroup& obj) { 
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_ANY_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, MergeContactGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_ANY_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    MergeContactGroup() = default ;
    MergeContactGroup(const MergeContactGroup &) = default ;
    MergeContactGroup(MergeContactGroup &&) = default ;
    MergeContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeContactGroup() = default ;
    MergeContactGroup& operator=(const MergeContactGroup &) = default ;
    MergeContactGroup& operator=(MergeContactGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && return this->extend_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr && return this->name_ == nullptr
        && return this->source_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<string> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
    inline vector<string> contacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
    inline MergeContactGroup& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline MergeContactGroup& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & extend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & extend() { DARABONBA_GET(extend_) };
    inline MergeContactGroup& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline MergeContactGroup& setExtend(Darabonba::Json & extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MergeContactGroup& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MergeContactGroup& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeContactGroup& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeContactGroup& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<vector<string>> contacts_ = nullptr;
    Darabonba::Json extend_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
