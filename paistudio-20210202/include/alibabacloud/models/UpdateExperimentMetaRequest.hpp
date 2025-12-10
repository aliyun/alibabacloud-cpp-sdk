// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXPERIMENTMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXPERIMENTMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class UpdateExperimentMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExperimentMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExperimentMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    UpdateExperimentMetaRequest() = default ;
    UpdateExperimentMetaRequest(const UpdateExperimentMetaRequest &) = default ;
    UpdateExperimentMetaRequest(UpdateExperimentMetaRequest &&) = default ;
    UpdateExperimentMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExperimentMetaRequest() = default ;
    UpdateExperimentMetaRequest& operator=(const UpdateExperimentMetaRequest &) = default ;
    UpdateExperimentMetaRequest& operator=(UpdateExperimentMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->description_ == nullptr && return this->folderId_ == nullptr && return this->name_ == nullptr && return this->options_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateExperimentMetaRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateExperimentMetaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline UpdateExperimentMetaRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateExperimentMetaRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateExperimentMetaRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
