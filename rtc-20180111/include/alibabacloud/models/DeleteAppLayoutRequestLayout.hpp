// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLAYOUTREQUESTLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLAYOUTREQUESTLAYOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteAppLayoutRequestLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppLayoutRequestLayout& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppLayoutRequestLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
    };
    DeleteAppLayoutRequestLayout() = default ;
    DeleteAppLayoutRequestLayout(const DeleteAppLayoutRequestLayout &) = default ;
    DeleteAppLayoutRequestLayout(DeleteAppLayoutRequestLayout &&) = default ;
    DeleteAppLayoutRequestLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppLayoutRequestLayout() = default ;
    DeleteAppLayoutRequestLayout& operator=(const DeleteAppLayoutRequestLayout &) = default ;
    DeleteAppLayoutRequestLayout& operator=(DeleteAppLayoutRequestLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layoutId_ != nullptr; };
    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DeleteAppLayoutRequestLayout& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> layoutId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
