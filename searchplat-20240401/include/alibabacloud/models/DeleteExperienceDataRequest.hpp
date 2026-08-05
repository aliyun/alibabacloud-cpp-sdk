// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXPERIENCEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXPERIENCEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class DeleteExperienceDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExperienceDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExperienceDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    DeleteExperienceDataRequest() = default ;
    DeleteExperienceDataRequest(const DeleteExperienceDataRequest &) = default ;
    DeleteExperienceDataRequest(DeleteExperienceDataRequest &&) = default ;
    DeleteExperienceDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExperienceDataRequest() = default ;
    DeleteExperienceDataRequest& operator=(const DeleteExperienceDataRequest &) = default ;
    DeleteExperienceDataRequest& operator=(DeleteExperienceDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteExperienceDataRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // Whether this is a dry run request
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
