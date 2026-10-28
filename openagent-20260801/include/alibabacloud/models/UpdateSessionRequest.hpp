// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class UpdateSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pinned, pinned_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pinned, pinned_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    UpdateSessionRequest() = default ;
    UpdateSessionRequest(const UpdateSessionRequest &) = default ;
    UpdateSessionRequest(UpdateSessionRequest &&) = default ;
    UpdateSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSessionRequest() = default ;
    UpdateSessionRequest& operator=(const UpdateSessionRequest &) = default ;
    UpdateSessionRequest& operator=(UpdateSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pinned_ == nullptr
        && this->title_ == nullptr; };
    // pinned Field Functions 
    bool hasPinned() const { return this->pinned_ != nullptr;};
    void deletePinned() { this->pinned_ = nullptr;};
    inline bool getPinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, false) };
    inline UpdateSessionRequest& setPinned(bool pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateSessionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Specifies whether to pin the session. If you do not specify this parameter, the pinned status remains unchanged.
    shared_ptr<bool> pinned_ {};
    // The new title of the session. If you do not need to update the title, do not specify this parameter.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
