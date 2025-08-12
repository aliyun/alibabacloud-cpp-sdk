// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEALLGROUPUSERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MUTEALLGROUPUSERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MuteAllGroupUserResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteAllGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MuteAllGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MuteAllGroupUserResponseBodyResult() = default ;
    MuteAllGroupUserResponseBodyResult(const MuteAllGroupUserResponseBodyResult &) = default ;
    MuteAllGroupUserResponseBodyResult(MuteAllGroupUserResponseBodyResult &&) = default ;
    MuteAllGroupUserResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteAllGroupUserResponseBodyResult() = default ;
    MuteAllGroupUserResponseBodyResult& operator=(const MuteAllGroupUserResponseBodyResult &) = default ;
    MuteAllGroupUserResponseBodyResult& operator=(MuteAllGroupUserResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MuteAllGroupUserResponseBodyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the mute was successful. Valid values:
    // 
    // *   true: The mute was successful.
    // *   false: The mute failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
