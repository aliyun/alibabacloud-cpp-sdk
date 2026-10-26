// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEINSPECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEINSPECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DeleteInstanceInspectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceInspectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ok, ok_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceInspectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ok, ok_);
    };
    DeleteInstanceInspectionResponseBody() = default ;
    DeleteInstanceInspectionResponseBody(const DeleteInstanceInspectionResponseBody &) = default ;
    DeleteInstanceInspectionResponseBody(DeleteInstanceInspectionResponseBody &&) = default ;
    DeleteInstanceInspectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceInspectionResponseBody() = default ;
    DeleteInstanceInspectionResponseBody& operator=(const DeleteInstanceInspectionResponseBody &) = default ;
    DeleteInstanceInspectionResponseBody& operator=(DeleteInstanceInspectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ok_ == nullptr; };
    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline DeleteInstanceInspectionResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


  protected:
    shared_ptr<bool> ok_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
