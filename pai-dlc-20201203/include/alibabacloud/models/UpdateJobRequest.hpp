// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class UpdateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    UpdateJobRequest() = default ;
    UpdateJobRequest(const UpdateJobRequest &) = default ;
    UpdateJobRequest(UpdateJobRequest &&) = default ;
    UpdateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRequest() = default ;
    UpdateJobRequest& operator=(const UpdateJobRequest &) = default ;
    UpdateJobRequest& operator=(UpdateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->priority_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateJobRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // The job visibility. Valid values:
    // 
    // *   PUBLIC: The job is visible to all members in the workspace.
    // *   PRIVATE: The job is visible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The job priority. Valid values: 1 to 9.
    // 
    // *   1: the lowest priority.
    // *   9: the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
