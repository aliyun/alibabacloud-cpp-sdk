// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEONCALLSCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_MERGEONCALLSCHEDULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MergeOncallSchedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeOncallSchedule& obj) { 
      DARABONBA_ANY_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, MergeOncallSchedule& obj) { 
      DARABONBA_ANY_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    MergeOncallSchedule() = default ;
    MergeOncallSchedule(const MergeOncallSchedule &) = default ;
    MergeOncallSchedule(MergeOncallSchedule &&) = default ;
    MergeOncallSchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeOncallSchedule() = default ;
    MergeOncallSchedule& operator=(const MergeOncallSchedule &) = default ;
    MergeOncallSchedule& operator=(MergeOncallSchedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->identifier_ == nullptr && this->name_ == nullptr && this->source_ == nullptr
        && this->workspace_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
    inline MergeOncallSchedule& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline MergeOncallSchedule& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MergeOncallSchedule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MergeOncallSchedule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeOncallSchedule& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeOncallSchedule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeOncallSchedule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline MergeOncallSchedule& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    Darabonba::Json detail_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> identifier_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
