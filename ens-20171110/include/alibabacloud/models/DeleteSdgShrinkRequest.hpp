// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SDGId, SDGIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SDGId, SDGIdShrink_);
    };
    DeleteSDGShrinkRequest() = default ;
    DeleteSDGShrinkRequest(const DeleteSDGShrinkRequest &) = default ;
    DeleteSDGShrinkRequest(DeleteSDGShrinkRequest &&) = default ;
    DeleteSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSDGShrinkRequest() = default ;
    DeleteSDGShrinkRequest& operator=(const DeleteSDGShrinkRequest &) = default ;
    DeleteSDGShrinkRequest& operator=(DeleteSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SDGIdShrink_ == nullptr; };
    // SDGIdShrink Field Functions 
    bool hasSDGIdShrink() const { return this->SDGIdShrink_ != nullptr;};
    void deleteSDGIdShrink() { this->SDGIdShrink_ = nullptr;};
    inline string getSDGIdShrink() const { DARABONBA_PTR_GET_DEFAULT(SDGIdShrink_, "") };
    inline DeleteSDGShrinkRequest& setSDGIdShrink(string SDGIdShrink) { DARABONBA_PTR_SET_VALUE(SDGIdShrink_, SDGIdShrink) };


  protected:
    // The IDs of the SDGs that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> SDGIdShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
