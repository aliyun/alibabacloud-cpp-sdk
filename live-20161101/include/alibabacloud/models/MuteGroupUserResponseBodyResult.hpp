// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEGROUPUSERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MUTEGROUPUSERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MuteGroupUserResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MuteGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MuteGroupUserResponseBodyResult() = default ;
    MuteGroupUserResponseBodyResult(const MuteGroupUserResponseBodyResult &) = default ;
    MuteGroupUserResponseBodyResult(MuteGroupUserResponseBodyResult &&) = default ;
    MuteGroupUserResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteGroupUserResponseBodyResult() = default ;
    MuteGroupUserResponseBodyResult& operator=(const MuteGroupUserResponseBodyResult &) = default ;
    MuteGroupUserResponseBodyResult& operator=(MuteGroupUserResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MuteGroupUserResponseBodyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the mute is successful. Valid values:
    // 
    // *   true: The mute is successful.
    // *   false: The mute failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
