// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEALLGROUPUSERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEALLGROUPUSERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CancelMuteAllGroupUserResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteAllGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteAllGroupUserResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CancelMuteAllGroupUserResponseBodyResult() = default ;
    CancelMuteAllGroupUserResponseBodyResult(const CancelMuteAllGroupUserResponseBodyResult &) = default ;
    CancelMuteAllGroupUserResponseBodyResult(CancelMuteAllGroupUserResponseBodyResult &&) = default ;
    CancelMuteAllGroupUserResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteAllGroupUserResponseBodyResult() = default ;
    CancelMuteAllGroupUserResponseBodyResult& operator=(const CancelMuteAllGroupUserResponseBodyResult &) = default ;
    CancelMuteAllGroupUserResponseBodyResult& operator=(CancelMuteAllGroupUserResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CancelMuteAllGroupUserResponseBodyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the cancellation was successful, with values:
    // - true: Success. 
    // - false: Not successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
