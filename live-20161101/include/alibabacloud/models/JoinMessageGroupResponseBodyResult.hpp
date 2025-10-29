// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_JOINMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class JoinMessageGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, JoinMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    JoinMessageGroupResponseBodyResult() = default ;
    JoinMessageGroupResponseBodyResult(const JoinMessageGroupResponseBodyResult &) = default ;
    JoinMessageGroupResponseBodyResult(JoinMessageGroupResponseBodyResult &&) = default ;
    JoinMessageGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinMessageGroupResponseBodyResult() = default ;
    JoinMessageGroupResponseBodyResult& operator=(const JoinMessageGroupResponseBodyResult &) = default ;
    JoinMessageGroupResponseBodyResult& operator=(JoinMessageGroupResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline JoinMessageGroupResponseBodyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the users successfully joined the message group. Valid values:
    // 
    // *   true: The users successfully joined the message group.
    // *   false: The users failed to join the message group.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
