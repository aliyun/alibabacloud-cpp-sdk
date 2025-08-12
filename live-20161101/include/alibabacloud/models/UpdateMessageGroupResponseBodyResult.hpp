// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateMessageGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateMessageGroupResponseBodyResult() = default ;
    UpdateMessageGroupResponseBodyResult(const UpdateMessageGroupResponseBodyResult &) = default ;
    UpdateMessageGroupResponseBodyResult(UpdateMessageGroupResponseBodyResult &&) = default ;
    UpdateMessageGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageGroupResponseBodyResult() = default ;
    UpdateMessageGroupResponseBodyResult& operator=(const UpdateMessageGroupResponseBodyResult &) = default ;
    UpdateMessageGroupResponseBodyResult& operator=(UpdateMessageGroupResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateMessageGroupResponseBodyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the update was successful. Valid values:
    // 
    // *   true: The update was successful.
    // *   false: The update failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
